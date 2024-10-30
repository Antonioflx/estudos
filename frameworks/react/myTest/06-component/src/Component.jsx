import { useState } from "react";


export default function Counter() {
    // criar var para nome
    const [name, setName] = useState('Antonio Felix');

    // criar var para idade
    const [age, setAge] = useState(42);

    // funcao para mudar o nome.
    const nameChange = evt => setName(evt.target.value);


    // funcao para adicionar idade.
    const ageChange = () => setAge(age + 1);

    // funcao para tirar a idade.
    const removeAge = () => setAge(age - 1);




    // Isso é simples, já tenho a noção disso, é mais questão de acostumar com a sintaxe, etc.
    return (
        <>
            <input 
                type="text" 
                value={name}
                onChange={nameChange}
            />
            <button onClick={ageChange} style={{marginLeft: '10px', marginRight: '10px'}}>
                {"    "}Increment Age
            </button>
            <button onClick={removeAge}>
                Decrement age
            </button>
            <p>
                Welcome {name}. You are {age} years old.
            </p>
        </>
    )

}