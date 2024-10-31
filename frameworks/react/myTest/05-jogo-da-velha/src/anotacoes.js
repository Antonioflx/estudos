// Anotações sobre o React

// Toda função que utiliza Use é chamada de hooks.

// Estudar https://pt-br.react.dev/reference/react

// Componente

//  Um componente React é uma função JavaScript que você pode usar em combinação com tags.

// No React, um componente é uma peça de código reutilizável a qual representa uma parte de sua interface de usuário. Componentes são usados para renderizar, administrar, e atualizar os elementos de UI na sua aplicação.

/*
    EX 1:
        function Component() { return <div> <p>Isso é um Componente </p> </div>}

    export default function ShowTheComponent() {
    return (
        <>
            <Component /> // Componente
            <Component />
        </>
    )}
*/

/*
    EX 2:
        function Component( { text }) { 
        
        return (
                <div> 
                    <p> { text }</p> 
                </div>
        )
    }

    // Declarando os valores das variaveis.
    export default function ShowTheComponent() {
    return (
        <Component text={"Valor da variavel"}/> // Atribuindo valores.
        <Component text={"Declarando de novo"}/> // Novamente.
    )}
*/

/*
    EX 3:
        function Component( { text }) { 
        
        return (
                <div> 
                    <p> { text }</p> 
                </div>
        )
    }

    // Declarando os valores das variaveis.
    export default function ShowTheComponent() {
    return (
        <Component text={"Valor da variavel"}/> // Atribuindo valores.
        <Component text={"Declarando de novo"}/> // Novamente.
    )}
*/

// imutabilidade

// Evitar a mutação direta de dados permite que você mantenha versões prévias dos dados intactas e as reutilize mais tarde.

// Imutabilidade torna muito barato para os componentes compararem se seus dados foram alterados ou não.
