const formAdress = document.querySelector("#form-adress");

const onSubmit = (evt) => {
	evt.preventDefault();
	const CEP = document.querySelector("#id-text-CEP").value;
	console.log(CEP);

	const testeAPI = takeAdress(CEP);
};

// URL: viacep.com.br/ws/01001000/json/
async function takeAdress(CEP) {
	try {
		const response = await fetch(
			`https://viacep.com.br/ws/${CEP}/json/`
		);
		console.log(response);

		// transformar em json
		const data = await response.json();
		putAdressInInput(data);

		if (!response.ok)
			throw new Error("Não foi possível achar o endereço!");
	} catch (error) {
		console.log(error);
	}
}

const putAdressInInput = (data) => {
	const { estado, localidade, logradouro, bairro } = data;

	var adress = {
		inpEstado: document.querySelector("#id-txt-estado"),
		inpCity: document.querySelector("#id-txt-city"),
		inpRua: document.querySelector("#id-txt-rua"),
		inpBairro: document.querySelector("#id-txt-bairro"),
	};

	const { inpEstado, inpCity, inpRua, inpBairro } = adress;

	inpEstado.value = estado;
	inpCity.value = localidade;
	inpRua.value = logradouro;
	inpBairro.value = bairro;
};

formAdress.addEventListener("submit", onSubmit);
