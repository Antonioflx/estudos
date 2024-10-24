import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Card from './components/Card'

function App() {
  const [count, setCount] = useState(0)

  // Formas de atribuir valores para as variaveis:
  /* 
    Para passar arrays -> myArr = [1, 2, 3] -> dará erro
    Forma correta      -> myArr = {[1, 2, 3]};
  */ 
  
  const person = {
    name: 'Antonio Felix',
    age: '21',
    adress: {
      city: 'Xique-Xique',
      state: 'Bahia',
      country: 'Brazil',
    },
  };

  const newArr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];


  return (
    <>
      <h1 className='text-3xl bg-green-500 p-3 rounded-md'>Vite whit Tailwind</h1>
      <Card username = "Antonio Felix" />
      <Card username = "Sad" post =" Tentando ser uma pessoa melhor " myArr = {newArr} />
      <Card />
    </>
  )
}

export default App
