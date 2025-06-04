// useRef é comum utilizado para manipular o DOM

/* Ex 1
    function MyComponent() {
        const inputRef = useRef(null);

        return <input ref={inputRef} />;
    }
*/
import { useRef } from "react";

export default function ShowRef3() {
	return <Form />;
}

// Da para interagir através do ref.
function Form() {
	const inputRef = useRef(null);

	return (
		<div>
			<input type="text" ref={inputRef} />
			{"   "}
			<button
				style={{ backgroundColor: "gray" }}
				// onClick={() => (inputRef.current.style.color = "red")} -> Mudando a cor.
				onClick={() => inputRef.current.focus()}
			>
				Focus the input
			</button>
		</div>
	);
}
