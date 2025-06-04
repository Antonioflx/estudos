import { useState } from "react";

import "./App.css";

function App() {
	const [count, setCount] = useState(0);

	return (
		<div
			className="w-full h-screen flex flex-wrap justify-center items-center bg-cover bg-no-repeat"
			style={{
				backgroundImage: `url(https://images.pexels.com/photos/4497591/pexels-photo-4497591.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=2)`,
			}}
		>
			<h1 className="bg-red-200">Test for tailwind</h1>
		</div>
	);
}

export default App;
