// forwardRef -> permite que meu componente exponha um nó DOM ao componente pai com uma referência.

/*
    EX: 
    const MyInput = forwardRef(function MyInput(props, ref) {
        // ...
    });
        

*/

import { forwardRef, useRef } from "react";

export default function ShowRef3_2() {
	return <Form />;
}

const MyInput = forwardRef((props, ref) => {
	return <input {...props} ref={ref} />;
});

// Da para interagir através do ref.
function Form() {
	const inputRef = useRef(null);

	return (
		<div>
			<MyInput ref={inputRef} />
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
