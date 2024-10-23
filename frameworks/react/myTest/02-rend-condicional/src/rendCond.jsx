
// Armazenar o valor da funcao
let content;

// variavel da pessoa
const person =  {
    user: 'Antonio Felix',
    age: 21,
    isLoggedIn: false,    
}

const {user, age, isLoggedIn} = person;

// criar uma funcao para mostrar as coisas, caso o usuario esteja online
function AdminPanel () {
    return (
        <>
            <h1>Bem-Vindo ao meu aplicativo</h1>
                <p>
                    É um prazer te conhecer <strong>{user}</strong>
                </p>
        </>
    )
}

/* O que quero fazer. Quando o usuario enviar -> utilizar preventDefault() se conseguir e tornar o valor de isLoggedIn para true.*/

// tela de login para o usuario entrar.
function LoginForm() {
    return (
        <>
            <h1>Entre no nosso site &#xFE0F;</h1>
            <div id="container-login">
                <label htmlFor="text-user" className="label-login text-user" style={{paddingRight: '10px'}}>
                    Digite o seu login: 
                </label>
                <input 
                    type="text" 
                    name="user" 
                    id="input" 
                    className="box-text input"
                    placeholder="Username..."
                    style={{border: '1px solid lightslategray'}}
                />
                <br />
                <label htmlFor="" className="label-login text-key" style={{paddingRight: '10px'}}>Digite a senha:</label>
                <input 
                    type="password" 
                    name="key" 
                    id="input" 
                    className="box-password input"
                    placeholder="Passowrd..."
                    style={{width: '150px'}}
                />
                <br />
                <p style={{textAlign: 'center'}}>
                    <input type="submit" value="Entrar" />
                </p>
            </div>
        </>
    )

}

if(isLoggedIn) {
    content = <AdminPanel />
} else {
    content = <LoginForm />
}

export default content;
