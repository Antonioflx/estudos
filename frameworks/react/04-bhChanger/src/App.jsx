import { useState } from 'react'

import './App.css'

function App() {
  const [color, setColor] = useState('olive');

  /* 
    Forma 1 de fazer 

    Criar uma função e fazer trocar -> coloca o nome dentro do onClick
    onClick={setColorRed}

    const setColorRed = () => setColor('cor');

    Forma 2 de fazer
    
    Caso só tenha 1 parametro
    Colocar dentro do onClick={() => setColor('cor')}
  */

  // 3 forma de fazer.

  return (
   <div className='w-full h-screen duration-200' style={{backgroundColor: color}}>
      <div className='fixed flex flex-wrap justify-center bottom-12 inset-x-0 px-2'>
          <div className='flex flex-wreap justify-center gap-3 shadow-lg bg-white px-3 py-2 rounded-3xl'> 
              <button
              className='outline-none px-4 py-1 rounded-full text-black shadow-lg bg-red-500' onClick={() => setColor('#EF4444')}

              >Red</button>
              <button
              className='outline-none px-4 py-1 rounded-full text-black shadow-lg bg-green-500' onClick={() => setColor('#22C543')}

              >Green</button>
              <button
              className='outline-none px-4 py-1 rounded-full text-black shadow-lg bg-blue-500' onClick={() => setColor('#3B82F6')}
              >Blue</button>

              <button
              className='outline-none px-4 py-1 rounded-full text-black shadow-lg  ' style={{backgroundColor: 'olive'}} onClick={() => setColor('olive')}
              >Retornar</button>
          </div>
      </div>
   </div>
  )
}

export default App
