<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Exercício PHP</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <main>
        <pre>
            <?php 
                setcookie("dia-da-semana", "SABADO", time() + 3600); //Criar um novo cookie.

                session_start();
                $_SESSION["teste"] = "FUNCIONOU!"; //criar uma variável para SESSION

                echo "<h1>Superglobal GET </h1>";
                var_dump($_GET);

                echo "<h1>Superglobal POST </h1>";
                var_dump($_POST);

                echo "<h1>Superglobal REQUEST </h1>";
                var_dump($_REQUEST);

                echo "<h1>Superglobal COOKIE </h1>";
                var_dump($_COOKIE);
            
                echo "<h1>Superglobal SESSION</h1>";
                var_dump($_SESSION);

                echo "<h1>Superglobal ENV</h1>"; // Nesse servidor não aparecerá.

                // foreach (getenv() as $c => $v){
                //     echo "<br> $c -> $v";
                // } Mostrar os dados da Superglobal ENV

                echo "<h1>Superglobal SERVER</h1>";
                var_dump($_SERVER);

                echo "<h1>Superglobal GLOBALS</h1>";
                var_dump($GLOBALS);
            ?>


        </pre> <!--Organizar as informações das SuperGlobais.-->


    </main>
    
</body>
</html>