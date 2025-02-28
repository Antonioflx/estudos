"use client";

import { useForm } from "react-hook-form";
import { zodResolver } from "@hookform/resolvers/zod";
import { z } from "zod";

/*
    useForm

    validação

    onSubmit
    onBlur
    onChange
    onTouched
    all

    temos como trocar o nome do required.

    <input
		type="text"
		name="name"
		id="name"
		className="border-2 border-solid rounded-lg"
		{...register("name", {
			required: "Please enter your name.",
		})}
	/>
*/

export default function Form() {
	/*
         const { register, handleSubmit } = useForm({
		shouldUseNativeValidation: true,
	});
        Desativa o formulário inteiro e todas as entradas
        associadas quando definido como true.

        const {
		register,
		handleSubmit,
		formState: { errors },
	} = useForm({
		resolver: zodResolver(schema),
	});

    formState: {erros}

    formState -> contém informações do formulário -> mostrará o erro.
    isDirty
    isValid
    erros 

    resolver: zodResolver(schema)

    resolver -> conecta o React Hook Form com bibliotecas de validação como o zod
    
    zodResolver -> biblioteca de validação
    zodResolver(schema) -> tem como parametro os nosso dados.
    */
	const schema = z.object({
		name: z.string().min(3, {
			message: "Nome inválido!",
		}),
		key: z.string().min(3, { message: "Senha inválida!" }).max(8, {
			message: "O máximo de caracteres para a senha é 8!",
		}),
	});

	const {
		register,
		handleSubmit,
		formState: { errors },
	} = useForm({
		resolver: zodResolver(schema),
	});

	const onSubmit = async (data) => console.log(data);
	return (
		<div className="flex items-center justify-center h-screen w-screen">
			<form
				className="border-2 border-solid rounded-lg flex flex-col justify-center items-center w-[500px] h-[400px] bg-slate-100"
				onSubmit={handleSubmit(onSubmit)}
			>
				<div className="flex flex-col py-3">
					<label htmlFor="name">Nome</label>
					{/* <input
						type="text"
						name="name"
						id="name"
						className="border-2 border-solid rounded-lg"
						{...register("name", {
							required: "Please enter your name.",
						})} /> -> Trocando pelo required*/}
					<input
						type="text"
						name="name"
						id="name"
						className="px-2 border-2 border-solid rounded-lg"
						placeholder="Digite o nome"
						{...register("name")}
					/>
					{/* utilizando zodResolver */}
					{errors.name?.message && (
						<span className="text-red-600">
							{errors.name?.message}
						</span>
					)}
				</div>
				<div className="flex flex-col py-3">
					<label htmlFor="key">Senha</label>
					<input
						type="password"
						name="key"
						id="key"
						className="px-2 border-2 border-solid 
                        rounded-lg"
						placeholder="Digite a senha"
						{...register("key")}
					/>
					{errors.key?.message && (
						<span className="text-red-600">
							{errors.key?.message}
						</span>
					)}
				</div>
				<div>
					<button
						type="submit"
						className="w-[200px] bg-blue-400 rounded-lg text-white"
					>
						Enviar
					</button>
				</div>
			</form>
		</div>
	);
}
