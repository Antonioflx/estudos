import React from 'react'

// nessa situação, estamos destruturando, para facilitar;
function Card({username = " AF ", post = "Not assigned yet"}) {
  // console.log(props); -> é um objeto
  return (
    <>
      <figure className="md:flex bg-slate-100 rounded-xl p-8 md:p-0 dark:bg-slate-800">
        <img 
        className="w-24 h-24 rounded-full mx-auto" src="https://avatars.githubusercontent.com/u/178316235?v=4" alt="" width="384" height="512" 
        />
        <div className="pt-6 md:p-8 text-center space-y-4">
          <blockquote>
            <p className="text-lg font-medium" >
              Learning React 
            </p>
          </blockquote>
          <figcaption className="font-medium">
            <div className="text-sky-500 dark:text-sky-400">
              {username}
            </div>
            <div className="text-slate-700 dark:text-slate-500">
              {post}
            </div>
          </figcaption>
        </div>
      </figure>
    </>
  )
}

export default Card