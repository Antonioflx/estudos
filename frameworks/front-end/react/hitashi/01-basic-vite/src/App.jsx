
// import Hello from "./Hello" -> Caso queria acessar o script Hello.

function App() {
  /*
    Formas de renderizar.
    1){}
        Ex: {2 + 2};
    2) Criar uma var
        Ex: const name = "Antonio"
  */
  const name = "Antonio";
  
  return (
    <>
      {/* <Hello /> */}
      <h1>Hello {name}</h1>
      

    </>
  )
}

export default App