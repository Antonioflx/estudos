import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './App.jsx'
import React from 'react'


function MyApp() {
  return (
    <div>
      <h1>Custom React My App</h1>
    </div>
  )
}

// const AnotherElement = ( -> Essa forma é literalmentE HTML
  //   <a 
  //   href= "https://www.instagram.com/antonioflxx/" 
  //   target='_blank'>
  //     My Instagram
  //   </a>
  // )


  /* Nao funciona desse jeito.
  
    const reactStyle = {
      color: "green",
      display: 'flex',
      justifyContent: 'center',
      fontSize: '20px',
    }
    const reactElement = {
      type: 'a',
      props: {
          href: "https://www.instagram.com/antonioflxx/",
          target: '_blank',
          style: reactStyle,
      },
      children: 'Meu instagram',
    };
  */
  
  // Precisa criar utilizando React.
  // Isso aqui é o q React espera durante a renderização
  // versao objeto dele.
  const AnotherElement = React.createElement(
    // transforma em um objeto. -> A ordem importa.
    // 1 coisa o type.
    // 2 coisa o atributo

    'a',
    {
      href: "https://www.instagram.com/antonioflxx/", 
      target: "_blank",
      style: {
        color: 'green', 
        display: 'flex', 
        justifyContent: 'center',
        backgroundColor: 'lightgray',
        
      },
      children: 'Meu Instagram'
    }

    
  )

/* 
  React não entende o que colocamos nas propriedades, 
  então não tem como criar um objeto e fazer ela returna um elemento

  Utilizar a linguagem React

  Funcao -> <Nome /> 
  Elemento -> Nome
*/
createRoot(document.getElementById('root')).render(
  
  <App />
  // MyApp() -> Forma errada de chamar, melhor chamar como um componente <MyApp />
  // AnotherElement 
  
)
