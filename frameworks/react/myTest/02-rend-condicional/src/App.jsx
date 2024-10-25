import { useState } from 'react'

import './App.css'


import AdminPanel from './AdminPainel'
import LoginForm from './LoginForm'

function App() {

  // Criando varaiveis, 1 parametro. E 2 parametro funcoes para passar no props das outras páginas. 
  // Além disso, utilizando useState() para deixar um valor atribuido.
  const [isLoggedIn, setIsLoggedIn] = useState(false)
  const [userName, setUserName] = useState('Antonio Felix');
  const [userAge, setAge] = useState(21);
 
  return (
    <>
      {isLoggedIn ? (
          <AdminPanel username = {userName} age = {userAge} />
        ) :
          <LoginForm  setIsLoggedIn={setIsLoggedIn} setUserName = {setUserName} setAge = {setAge} />
      }
    </>
  )
}

export default App

