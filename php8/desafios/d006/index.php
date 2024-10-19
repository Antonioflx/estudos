<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Desafio PHP</title>
    <link rel="stylesheet" href="style.css">
   
    <style>
        h1{
            color: #372991;
        }
    </style>
</head>
<body>
    <main>

        <?php 
            $dividendo = $_GET['dividendo'] ?? 0;
            $divisor = $_GET['divisor'] ?? 1;
        ?>


        <h1>Anatomia de uma Divisão</h1>
        <form action="<?= $_SERVER["PHP_SELF"]?>" 
        method="get"> 
            <label for="v1">Dividendo:</label>
            <input type="number" name="dividendo" id="dividendo" min = "0" value="<?=$dividendo?>">
            <label for="v2">Divisor:</label>
            <input type="number" name="divisor" id="divisor" value="<?=$divisor?>" min ="1">
            <input type="submit" value="Analisar">
        </form>

    </main>

        <section id="resultado">
            <h2>Estrutura da Divisão</h2>

           
            <?php 
                $resto = $dividendo % $divisor ;
                $quociente = intdiv($dividendo, $divisor); 
            ?>

            <table class="divisao">
                <tr>
                    <td><?=$dividendo?></td>
                    <td><?=$divisor?></td>
                </tr>
                <tr>
                    <td><?=$resto?></td>
                    <td><?=$quociente?></td>
                 </tr>
            </table>    

        </section>

            <!--Não consegui ajeitar a estrutura. Usar o table-->
    
</body>
</html>