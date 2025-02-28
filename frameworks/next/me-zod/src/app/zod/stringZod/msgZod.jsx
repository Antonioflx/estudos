/*
    Criando mensagens de erro

*/

import { z } from "zod";

export default function MsgZod() {
	const error = z.string({
		required_error: "Name is required",
		invalid_type_error: "Name must be a string",
	});

	/*
         exemplos -> z.metodo().metodo({message: "a frase"})
    */
	z.string().min(5, { message: "Mínimo 5 letras" });

	z.string().max(8, { message: "Máximo 8 letras" });

	z.string().email({ message: "E-mail inválido" });
	// etc.
}
