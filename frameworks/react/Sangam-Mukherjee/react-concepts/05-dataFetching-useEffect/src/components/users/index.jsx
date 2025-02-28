import { useState, useEffect } from "react";

export default function Users() {
	const [userList, setUserList] = useState([]);

	// criar um state para carregamento, melhor interaçao com usu
	const [pending, setPending] = useState(true);

	async function fetchAllUsers() {
		try {
			setPending(true);
			const apiResponse = await fetch("https://dummyjson.com/users");
			const result = await apiResponse.json();

			// Para destruturar, eu teria que colocar result.users[0]
			// const { id, firstName, lastName, age } = result;

			// utiliza o ? para evitar erros -> visto que, caso nao tenha um usuario, retornaria null.
			// o ? -> coloca como undefined, evitando erro.
			// pode fazer assim ou
			// if (result?.users) {
			// 	setUserList(result?.users);
			// 	setPending(false);
			// } else {
			// 	setUserList([]);
			// 	setPending(false);
			// }
			console.log(result);
			setUserList(result?.users || []);
			// console.log(userList);  mostra os dados.
		} catch (error) {
			console.error(error);
		} finally {
			setPending(false);
		}
	}

	useEffect(() => {
		fetchAllUsers();
	}, []);

	if (pending) return <h1>Fetching users! Please, wait</h1>;

	return (
		<div>
			<h1>All Users List</h1>
			<ul>
				{/* acho que o melhor seria apenas userList (no teste) */}
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
