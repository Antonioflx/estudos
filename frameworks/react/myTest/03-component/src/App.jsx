import { useState } from 'react'
import { Component } from 'react'
import './App.css'
import Counter from './Component'

// Da para modificar a variavel dentro da funcao.
// function Greeting({ name }){
//   return <h1>Hello, {name}!</h1>
// }




function App() {
 
  return (
    <>
        {/* <Greeting name="Antonio Junior" />
        <Greeting name="Julia" />
        <Greeting name="Antonio" /> */}
        <Counter />
    </>
  )
}

export default App
