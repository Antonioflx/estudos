// API -> Pesquisar mais

/*
	Pesquisar:

	1) async,
	2) await,
	3) try,
	4) catch,
	5) fetch,
	6) Por que usar interrogação *?*
	7) join -> acrescentar eu acho.
*/

let getList = document.querySelector(".list-of-products");

function renderProducts(getProducts) {
	getList.innerHTML = getProducts
		.map((elements) => `<p>${elements.title} </p>`)
		.join("");
}

async function fetcListOfProducts() {
	try {
		const apiResponse = await fetch(
			"https://dummyjson.com/products",
			{
				method: "GET", // methodo de PHP -> GET
			}
		);

		const result = await apiResponse.json(); // transforma em json

		console.log(result);

		if (result?.products?.length > 0)
			renderProducts(result?.products);
	} catch (e) {
		console.log(e);
	}
}

fetcListOfProducts();
