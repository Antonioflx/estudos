


// tela de login para o usuario entrar.
function LoginForm({ setIsLoggedIn , setUserName, setAge}) {
    /* 
    Consegui submitar. -> Passei [setIsLoggedIn={setIsLoggedIn}] (no APP.jsx), veio até aqui como propriedade dentro do objeto prop, e alterou o falor para true quando eu submito.
    
    */
   const Submit = (evt) => {
       evt.preventDefault();
       setIsLoggedIn(true);
    }
    
    // Pegar o valor do nome do usuário.
    const HandleUserName = evt => setUserName(evt.target.value); 
    
    
    // Pegar o valor da idade do usuário
    const HandleAgeUser = evt => setAge(evt.target.value);


    return (
        <>
            <h1>Entre no nosso site &#xFE0F;</h1>
            <div id="container-login">
                <form action="post" onSubmit={Submit}>
                    <label htmlFor="user" className="label-login text-user" style={{paddingRight: '10px'}}>
                        Digite o seu Nome:
                    </label>
                    <input
                        onKeyUp={HandleUserName}
                        type="text"
                        name="user"
                        id="input-user"
                        className="box-text input"
                        placeholder="Name.."
                        style={{border: '1px solid lightslategray', textAlign: 'center', width: '150px'}}
                    />
                    <br />
                    <label htmlFor="age" className="label-login text-key" style={{paddingRight: '10px'}}>Digite a sua idade:</label>
                    <input
                        onKeyUp={HandleAgeUser}
                        type="number"
                        max={100}
                        min={0}
                        step={1}
                        name="age"
                        id="input-age"
                        className="box-age input"
                        placeholder="Age.."
                        style={{border: '1px solid lightslategray', width: '100px', textAlign: 'center'}}
                        
                    />
                    <br />
                    <p style={{textAlign: 'center'}}>
                        <input type="submit" value="Entrar" />
                    </p>
                </form>
            </div>
        </>
    )

}


export default LoginForm;
