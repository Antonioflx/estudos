<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Desafio PHP</title>
    <link rel="stylesheet" href="style.css">
    <style>
        


    </style>
</head>
<body>
    <main>
        <?php 
            $padrao = numfmt_create("pt_BR", NumberFormatter::CURRENCY);
            $salarioMinimo = 1412;
            $salario = $_GET['salario'] ?? $salarioMinimo;
            $nSalarioMinimo = intdiv($salario , $salarioMinimo) ?? $salarioMinimo;
            $bonus = $salario % $salarioMinimo;
            // ou $bonus = $salario - $salarioMinimo * $nSalarioMinimo;
        ?>




        <h1>Informe seu salário</h1>
            <form action="<?=$_SERVER["PHP_SELF"]?>"
            method="get">  
                <label for="sal">Salário (R$):</label>
                <input type="number" name="salario" id="salario" step="0.01" min="0" value="<?=$salario?>">
                <p>Considerando o salário mínimo de <strong> <?= numfmt_format_currency($padrao, $salarioMinimo, "BRL") ?></strong></p>
                <input type="submit" value="Calcular">
            </form>

    </main>

        <section>
            <h2>Resultado Final</h2>
            <?php 
                echo "<p> Quem recebe um salário de " . numfmt_format_currency($padrao, $salario, "BRL")  . " ganha <strong>" . $nSalarioMinimo . " salários mínimos </strong> + <br> "  . numfmt_format_currency($padrao, $bonus, "BRL") . ".</p>"
            
            ?>
            <!-- Nao sei oq fazer na variavel Naosei. Consegui usando intdiv e %. -->
        </section>
</body>
</html>