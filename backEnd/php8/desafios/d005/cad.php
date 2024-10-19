<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Desafio 5 PHP</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <main>
        <h1>Analisador de Número Real </h1>
        <?php 
            $numeroReal = $_GET["numero"] ?? 0;
            $inteiro = (int) $numeroReal;
            $frac = $numeroReal - $inteiro;

            echo "<p> Analisando o número <strong> ". number_format($numeroReal, 3, "," , ".") . " </strong> informado pelo usuário: </p>";
    
            echo "<ul> <li>A parte inteira do número é <strong> " . number_format($inteiro, 0, ",", ".") . " </strong> </li>";
            echo "<li>A parte fracionária do número é <strong> " . number_format($frac, 3, "," , ".") . " </strong></li></ul>";
            
        ?>
        <button onclick="javascript:history.go(-1)">Voltar</button>

    </main>
    
</body>
</html>