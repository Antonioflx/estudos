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
            $anoNasc = $_GET['nasc'] ?? 2000;
            $anoEscr = $_GET['atual'] ?? date("Y");
            $idade = $anoEscr - $anoNasc;
        ?>


    <main>
        <h2>Calculando a sua idade</h2>
        <form action="<?=$_SERVER['PHP_SELF']?>" method="get">
            <label for="nasc">Em que ano você nasceu?</label>
            <input type="number" name="nasc" id="nasc" value="<?=$anoNasc?>" min="1924" max="<?=$anoEscr?>">
            <label for="atual">Quer saber sua idade em que ano? (atualmente estamos em 
                <strong> <?=$anoEscr?>) </strong></label>
            <input type="number" name="atual" id="atual" value="<?=$anoEscr?>" max="2070">
            <input type="submit" value="Qual será minha idade?">
        </form>
    </main>

    <section>
        <h3>Resultado</h3>

        <?php 
            echo "Quem nasceu em $anoNasc vai ter <strong> $idade anos </strong> em $anoEscr"
        ?>
    </section>
            <!--Quero colocar em meses/dias tbm.-->
    
</body>
</html>