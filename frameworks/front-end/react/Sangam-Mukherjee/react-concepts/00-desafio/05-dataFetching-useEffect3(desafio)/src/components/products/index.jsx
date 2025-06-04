import { useEffect, useState } from "react";
import "./style.css"; /// criar css simples.

// Por que não devemos utilizar indice no key.
/*
	Acho que é pq o id (geralmente utilizado) -> é algo fixo, caso você não mude,
	mas o indice pode ser mudado
*/

function ProductList({ name }) {
	const [flag, setFlag] = useState(true);
	const [count, setCount] = useState(0);
	const [changeStyle, setChangeStyle] = useState(false);
	// function renderTextBlock(getFlag) {
	// 	return getFlag ? `Welcome ${name}` : "Hello World";
	// }

	/*
		useEffect(callback () => {}, [Matriz de dependência])
		
		Matriz de dependência estiver presente, o useEffect só sera ativado
		quando houver uma mudança no valor da matriz de dependência

		Se a matriz de dependência estiver vazia, o useEffect só rodará quando a pagina carregar (uma vez).
	*/
	// useEffect(() => setFlag(!flag), []);

	useEffect(() => {
		count % 10 == 0 ? setChangeStyle(true) : setChangeStyle(false);

		// quando ocorre a mudança, mostra.
		// return () => {
		// 	console.log("Alterou o resultado");
		// };
	}, [count]);

	const handleIncreaseCount = () => {
		setCount(count + 1);
	};
	const renderTextBlock = flag ? `Welcome ${name}` : "Hello World";
	return (
		<div>
			{" "}
			<h1 className="title"> ECommerce Project </h1>
			<h2>{renderTextBlock}</h2>
			<div>
				<button
					style={{
						backgroundColor: changeStyle
							? "lightcyan"
							: "lightsalmon",
					}}
					onClick={handleIncreaseCount}
				>
					Increase Count
				</button>
				<p style={{ fontSize: "30px" }}>Count is {count}</p>
			</div>
		</div>
	);
}

export default ProductList;
