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
        $tempo = $_GET['tempo'] ?? 0;
        $semana = intdiv($tempo , 604800);
        $restoSemana = $tempo % 604800;
        $dias = intdiv($restoSemana, 86400);
        $restoDias = $restoSemana % 86400;
        $hora = intdiv($restoDias , 3600);
        $restoHora = $restoDias % 3600; 
        $minuto = intdiv($restoHora, 60);
        $restoMinuto = $restoHora % 60;
        $segundo = $restoMinuto;
    ?>


    <main>
        <h2>Calculadora de Tempo</h2>
            <form action="<?=$_SERVER['PHP_SELF']?>" method="get">
                <label for="tempo">Qual é o total de segundos?</label>
                <input type="number" name="tempo" id="tempo" value="<?=$tempo?>">
                <input type="submit" value="Calcular">
            </form>
    </main>

    <section>
        <h3>Totalizando tudo</h3>
            <?php 
                echo "<p> Analisando o valor que você digitou, <strong> " . number_format($tempo, 0 , "." , ".") . " segundos</strong> equivalem a um total <br> de:";
                echo "
                    <ul>
                        <li> " . number_format($semana, 0, "" , "") . " semanas </li>
                        <li> " . number_format($dias, 0, "" , "") . " dias </li>
                        <li> " . number_format($hora, 0, "" , "") . " horas </li>
                        <li> " . number_format($minuto, 0, "", "") . " minutos </li>
                        <li> $segundo segundos </li> 
                    </ul>";
            ?>
    </section>
                        <!--Tem que ajustar algumas coisas. Seria usar o intdiv e number_format usando "VAZIO", "VAZIO".-->
                        <!--Entrentanto, n fiz somando os números.-->
</body>
</html>