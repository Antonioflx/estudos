import { useState } from "react";

const person = {
	user: "Antonio Felix",
	age: 21,
	insta: "https://www.instagram.com/antonioflxx/",
};

export default function MyButton() {
	// Criação de um botão
	return (
		<>
			<button className="btnTeste">Eu sou um botão</button>
			<br /> <br />
			<button className="btnTeste">Eu sou outro botão</button>
			<p>
				<a href={person.insta} target="_blank">
					Instagram
				</a>
			</p>
		</>
	);
}
