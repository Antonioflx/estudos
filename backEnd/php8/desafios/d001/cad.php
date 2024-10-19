<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Desafio1 PHP</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <main>
        <h1>Resultado Final</h1>
        <p>
            <?php

                $numero = $_GET["numero"] ?? 0 ; // Se o número não vier o Padrão sera 0 - ??
                $antecessorNumero = $numero - 1;
                $sucessorNumero = $numero + 1;
                echo " O número escolhido foi <strong> $numero </strong> ";
                echo "<br> O seu antecessor é <strong> $antecessorNumero </strong> ";
            
                echo "<br> O seu sucessor é <strong> $sucessorNumero </strong> ";
            ?>
        </p>
           <button Onclick="javascript:window.location.href='index.html'"> &#x2B05; Voltar </button>

        
           
    </main>
    



   
    
    
</body>
</html>