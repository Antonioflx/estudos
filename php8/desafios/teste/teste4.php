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

        ul > li{
            padding-top: 20px;
        }

    
    </style>
    
</head>
<body>
        <?php 
            $padrao = numfmt_create("pt-BR", NumberFormatter::CURRENCY);
            $valor = $_GET['valor'] ?? 0 ;
    
        ?>

    <main>
        <h1>Caixa Eletrônico</h1>
        <form action="<?=$_SERVER['PHP_SELF']?>" method="get">
            <label for="valor">Qual valor você deseja sacar (R$)<sup>* </sup></label>
            <input type="number" name="valor" id="valor" step="5" required value="<?=$valor?> ">
            <p style="font-size: 0.7em"><sup>* </sup>Notas disponíveis, R$100, R$50, R$10 e R$5</p>
            <input type="submit" value="Sacar">
        </form>
    </main>
    <?php 
        $resto = $valor;
        
        // Saque de R$100
        $tot100 = intdiv($resto, 100);
        $resto %= 100;

        // Saque de R$50
        $tot50 = intdiv($resto, 50);
        $resto %= 50;

        // Saque de R$10
        $tot10 = intdiv($resto, 10);
        $resto %= 10;

        // Saque de R$5
        $tot5 = intdiv($resto, 5);
        $resto %= 5;

    ?>

    <section>
        <h2>Saque de <?=numfmt_format_currency($padrao, $valor, "BRL")?> realizado</h2>
            <p>O caixa eletrônico vai te entregar as seguintes notas:</p>
            <ul>
                <li><img src="imagem/100-reais.jpg" alt="Nota de 100 reais" class="nota"> x<?=$tot100?></li>
                <li><img src="imagem/50-reais.jpg" alt="Nota de 50 reais" class="nota"> x<?=$tot50?></li>
                <li><img src="imagem/10-reais.jpg" alt="Nota de 10 reais" class="nota"> x<?=$tot10?></li>
                <li><img src="imagem/5-reais.jpg" alt="Nota de 5 reais" class="nota"> x<?=$tot5?></li>
            </ul>
    </section>
    
</body>
</html>