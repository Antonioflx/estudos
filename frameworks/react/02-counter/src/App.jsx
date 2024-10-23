import { useState } from 'react'

import './App.css'

function App() {
  
  // useState() -> conhecido como hook -> Ele retorna algo parecido como uma array.
  // const [primeiro(a variavel), segundo(function)]

  // podemos utilizar const, porque cada vez que autaliza, um novo estado é dado para nós.
  const [counter, setCounter] = useState(0) // -> useState(Inicio do valor);

  // criar uma var
  // let counter = 1;

  // Nao conseguimos autalizar a variavel assim, visto que o react controla o mecanismo de autalização do site.
  // const addValue = () => counter = counter + 1;
 
  const addValue = () => {
    // setCounter está linkado com a variavel counter

    // Isso funciona como um lote.
    // setCounter(counter + 1); 
    // setCounter(counter + 1); 
    // setCounter(counter + 1); 
    // setCounter(counter + 1); 

    // Para evitar o uso do lote, podemos fazer um callback (para acessar o valor antigo)
    // Ao fazer isso, eles não podem ser agrupados, pois dependem do valor anterior.
    setCounter(prevCounter => prevCounter + 1); 
    setCounter(prevCounter => prevCounter + 1); 
    setCounter(prevCounter => prevCounter + 1); 
    setCounter(prevCounter => prevCounter + 1); 
  }

  const removeValue = () => {
    setCounter(prevCounter => prevCounter - 1);
    setCounter(prevCounter => prevCounter - 1);
    setCounter(prevCounter => prevCounter - 1);
    setCounter(prevCounter => prevCounter - 1);
    setCounter(prevCounter => prevCounter - 1);
  }
  // precisamos utilizar state (mecanismo) -> E, qualquer alteração no state, ele renderiza novamente a interface de visualização da web


  return (
    <>
      <h1>React course with hitesh</h1>
      <h2>Counter value : {counter} </h2>
      <button
        onClick={addValue}
        >Add value
      </button> {" "}
      <button
        onClick={removeValue}>
        Remove value
        </button>
      <h3>footer: {counter}</h3>
    </>
  )
}

export default App
