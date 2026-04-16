using UnityEngine;

public class neymar : MonoBehaviour {

	string tagObj;

	bool apertouPulo;
	float forcaPulo;
	Collider2D colisor;
	bool tocandoChao;

	float velX;
	float velY;

	float velMaxX;
	float dirX;

	float velMaxY;
	float dirY;

    int bolaquant = 0;
    int ouroquant = 0;
    int championsquant = 0;

	Vector2 vel;
	Rigidbody2D rb;

	void Start () {

		tagObj = "";

		apertouPulo = false;
		tocandoChao = false;

		forcaPulo = 15.0f;

		rb = GetComponent<Rigidbody2D>();
		colisor = GetComponent<Collider2D>();

		rb.gravityScale = 3.0f;
		rb.freezeRotation = true;

		velX = 0f;
		velY = 0f;
		velMaxX = 6.0f;
		dirX = 0f;

		velMaxY = 6.0f;
		dirY = 0f;

		vel = new Vector2(velX, velY);
		rb.velocity = vel;
	}

	void Update () {
		MovHorizontal();
		PuloUnico();

		if (bolaquant == 50) {
            rb.gravityScale = -3.0f;
			velMaxX = 0.0f;
			velMaxY = 0.0f;
		}
		if (championsquant == 3) {
            rb.gravityScale = -3.0f;
					velMaxX = 0.0f;
			velMaxY = 0.0f;
		}
		if (ouroquant == 2) {
            rb.gravityScale = -3.0f;
					velMaxX = 0.0f;
			velMaxY = 0.0f;
		}
	}

	void PuloUnico(){

		apertouPulo = Input.GetButtonDown("Jump");
		tocandoChao = colisor.IsTouchingLayers();

		if (apertouPulo && tocandoChao) {

			velX = rb.velocity.x;
			velY = forcaPulo;

			vel = new Vector2(velX, velY);
			rb.velocity = vel;
		}
	}

	void PuloSimples(){

		apertouPulo = Input.GetButtonDown("Jump");

		if (apertouPulo) {

			velX = rb.velocity.x;
			velY = forcaPulo;

			vel = new Vector2(velX, velY);
			rb.velocity = vel;
		}
	}

	void MovVertical(){

		dirY = Input.GetAxis("Vertical");

		velX = rb.velocity.x;
		velY = dirY * velMaxY;

		vel = new Vector2(velX, velY);
		rb.velocity = vel;
	}

	void MovHorizontal(){

		dirX = Input.GetAxis("Horizontal");

		velX = velMaxX * dirX;
		velY = rb.velocity.y;

		vel = new Vector2(velX, velY);
		rb.velocity = vel;
	}

		void OnCollisionEnter2D(Collision2D obj){

		tagObj = obj.gameObject.tag;

		if (tagObj == "champions") {
			print(tagObj);
			championsquant += 1;
			print("Champions pegadas:  " + championsquant);
			Destroy(obj.gameObject);
		}

		if (tagObj == "ouro") {
			print(tagObj);
			ouroquant += 1;
			print("Bolas de ouro pegadas:  " + ouroquant);
			Destroy(obj.gameObject);
		}

		if (tagObj == "bola") {
			print(tagObj);
			bolaquant += 1;
			print("Bolas pegadas:  " + bolaquant);
			Destroy(obj.gameObject);
		}

		if (tagObj == "espinho") {
			Destroy (gameObject);
			print("Morreu!!");
		}

		if (tagObj == "gatorade") {
			if (velMaxX < 10) {
				velMaxX += 1f;
				forcaPulo += 1f;
				print("Mais velocidade!!!");
				Destroy(obj.gameObject);
			}
		}

		if (tagObj == "luva") {
			if (velMaxX >= 2) {
				velMaxX -= 1f;
				forcaPulo -= 1f;
				print("Evite as luvas!! Elas diminuem sua velocidade!!!");
				Destroy(obj.gameObject);
			}
		}
	}
}