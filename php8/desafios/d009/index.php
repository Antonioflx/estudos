<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Desafio PHP</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <?php 
        $valor1 = $_GET['v1'] ?? 0;
        $peso1 = $_GET['p1'] ?? 1;
        $valor2 = $_GET['v2'] ?? 0;
        $peso2 = $_GET['p2'] ?? 1;

        $mediaSimples = ($valor1 + $valor2) / 2;
        $mediaPonderada = ($valor1 * $peso1 + $valor2 * $peso2) / ($peso1 + $peso2);
    ?>



    <main>
        <h2>Médias Aritméticas</h2>
        <form action="<?= $_SERVER['PHP_SELF']?>" method="get">
            <label for="v1">1º Valor:</label>
            <input type="number" name="v1" id="v1" value="<?=$valor1?>">
            <label for="p1">1º Peso:</label>
            <input type="number" name="p1" id="p1" value="<?=$peso1?>">
            <label for="v2">2º Valor:</label>
            <input type="number" name="v2" id="v2" value="<?=$valor2?>">
            <label for="v2">2º Peso:</label>
            <input type="number" name="p2" id="p2" value="<?=$peso2?>">
            <input type="submit" value="Calcular Médias">
        </form>
    </main>

    <section>
        <h3>Cálculo das Médias</h3>
        <?php 
            echo "Analisando os valores $valor1 e $valor2:";
            echo "
                <ul> 
                    <li> A <strong> Média Aritmética Simples </strong> entre os valores é igual a " . number_format($mediaSimples, 2, "," , ".") . ". </li>
                    <li> A <strong> Média Aritmética Ponderada </strong> com pesos $peso1 e $peso2 é igual a " . number_format($mediaPonderada, 2, "," , ".") . ". </li> 
                </ul>
            "
            
        
        ?>
    </section>
    
</body>
</html>