



// criar uma funcao para mostrar as coisas, caso o usuario esteja online
function AdminPanel ({username, age}) {
    return (
        <>
            <h1>Bem-Vindo ao meu aplicativo</h1>
            <p>
                É um prazer te conhecer <strong>{username}</strong>. Voce tem <strong>{age}</strong> anos
            </p>
        </>
    )
}

export default AdminPanel;