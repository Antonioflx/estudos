import { z } from "zod";

/*
  schema(string objeto) === qualquer tipo de dado.

  z -> é um objeto
  string() -> é um metodo que está dentro de string.

  const mySchema = z.string();   -> mySchema recebe o objeto z ()

  // Funções do string
    mySchema.parse(value) -> Validar o valor (dar error se for inválido) 

    mySchema.safeParse(value) -> Valida o valor e retorna um objeto {
        sucess: boolean, data | error } sem lançar erro
    }

    mySchema.min(n) -> comprimento minimo para uma string
    mySchema.min(3) -> no minímo 3 caracteres 

    mySchema.max(n) -> comprimento maximo para uma string
    mySchema.max(8) -> no maximo 8 caracteres 

    mySchema.length(n) -> tem que ter n caracteres.

    mySchema.email() -> valida se é um email
    mySchema.url() -> valida se é uma url

    mySchema.date() -> valida se é uma data YYYY-MM-DD

    mySchema.ip() -> valida se é um IP

    // transforma

    mySchema().trim() -> whitespace
    mySchema().toLowerCase()  
    mySchema().toUpperCase()

  crinando um objeto
  const mySchema = z.object({
    username: z.string(),
  })

  // coerçao

  const schema = z.coerce.string()

  schema.parse(12) -> "12"
*/

export default function LearningZod() {
	// const mySchema = z.string();

	// const txt = "jose";
	// console.log(mySchema.parse("Antonio")); // output antonio
	// console.log(mySchema(12)); // output ERROR

	// console.log(mySchema.safeParse("tuna")); // {sucess: true, data: 'tuna'}
	// console.log(mySchema.safeParse(12)); // {sucess: false, error: o tipo de error}

	// criando um objeto

	const mySchema2 = z.object({
		username: z.string(),
	});

	console.log(mySchema2.parse({ username: "teste " }));

	console.log(mySchema2.parse({ username: "jose" }));
}
