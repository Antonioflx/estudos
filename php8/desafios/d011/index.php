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
        $padrao = numfmt_create("pt-BR", NumberFormatter::CURRENCY);
        $preco = $_GET['preco'] ?? 0;
        $reajuste = $_GET['reajuste'] ?? 0;
        $precoFinal = ($preco * $reajuste)/100 + $preco;
    ?>

    <main>
        <h2>Reajustador de Preços</h2>
            <form action="<?=$_SERVER['PHP_SELF']?>" method="get">
                <label for="preco">Preço do Produto(R$)</label>
                <input type="number" name="preco" id="preco" step = "0.01" value="<?=$preco?>">
                <label for="reajuste" value = "<?=$reajuste?> ">Qual será o percentual de reajuste? (<strong><span id="p"><?=$reajuste?></span>%</strong>) </label>
                <input type="range" name="reajuste" id="reajuste" min="0" max="100" step="1" value="<?=$reajuste?>" oninput="mudaValor()">
                <input type="submit" value="Reajustar">
            </form>
    </main>

    <section>
        <h3>Resultado do reajuste</h3>
            <?php 
                echo " <p> O produto que custava " . numfmt_format_currency($padrao, $preco, "BRL") . " com <strong>" . $reajuste  . "% de aumento </strong> vai passar a <br> custar <strong>" . numfmt_format_currency($padrao, $precoFinal, "BRL") . " </strong> a partir de agora. </p>"
            ?>

    </section>
            <!--Mover a barra e modificar o valor da porcentagem. Criar uma função em JS-->

    <script>
        function mudaValor() {
            p.innerText = reajuste.value
        }
    </script>
</body>
</html>