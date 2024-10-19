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
        $numero = $_GET['num']?? 0; 
        $raizQuad =  $numero ** (1/2);
        $raizCub = $numero ** (1/3);
    ?>


    <main>
        <h1>Informe um número</h1>
        <form action="<?=$_SERVER['PHP_SELF']?>">
            <label for="numero">Número:</label>
            <input type="number" name="num" id="num" value="<?=$numero?>">
            <input type="submit" value="Calcular Raízes">
        </form>
    </main>

    <section>
        <h2>Resultado Final</h2>
        <?php 
            echo "Analisando o <strong> número $numero</strong>, temos:";
            echo "<br> 
            <ul> 
                <li> A sua raiz quadrada é <strong> " . number_format($raizQuad, 3, "," , ".") . " </strong> </li>
                <li> A sua raiz cúbica é <strong>" . number_format($raizCub, 3, "," , ".") . "</strong> </li> 
            </ul
                ";
        ?>



    </section>
    
</body>
</html>