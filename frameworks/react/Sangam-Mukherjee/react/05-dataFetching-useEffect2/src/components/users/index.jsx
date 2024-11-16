import { useState, useEffect } from "react";

export default function Users() {
	const [userList, setUserList] = useState([]);

	// criar um state para carregamento, melhor interaçao com usu
	const [pending, setPending] = useState(false);

	async function fetchAllUsers() {
		try {
			setPending(true);
			const apiResponse = await fetch("https://dummyjson.com/users");
			const result = await apiResponse.json();
			// utiliza o ? para evitar erros -> visto que, caso nao tenha um usuario, retornaria null.
			// o ? -> coloca como undefined, evitando erro.
			setUserList(result?.users || []);
			// console.log(userList);  mostra os dados.
		} catch (error) {
			console.error(error);
		} finally {
			// independente do try ou catch, o finally será executado. Bom para limpar variaveis e outras situações.
			setPending(false);
		}
	}

	// function handleFetchListOfUsers() {
	// 	fetchAllUsers();
	// }

	// useEffect(() => {
	// 	fetchAllUsers();
	// }, []);

	{
		/*{handleFetchListOfUsers} */
	}

	if (pending) return <h1>Fetching users! Please, wait</h1>;

	return (
		<div>
			<h1>All Users List</h1>
			<button
				onClick={fetchAllUsers}
				style={{
					backgroundColor: "lightcoral",
					marginBottom: "10px",
				}}
			>
				Fetch Users List
			</button>
			<ul>
				{userList && userList.length > 0 ? (
					userList.map((userItem) => (
						<li key={userItem?.id} style={{ textAlign: "left" }}>
							<p>
								{userItem?.firstName} {userItem?.lastName} age is{" "}
								<strong> {userItem?.age}</strong>
							</p>
						</li>
					))
				) : (
					<h2> No Users Found!</h2>
				)}
			</ul>
		</div>
	);
}
