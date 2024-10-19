<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Desafio 3 PHP</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <main>
        <h1>Conversor de Moedas v1.0</h1>
        <p>
            <?php 
                $real = $_GET["real"];
                $dolar = $real / 5.48;
                $cotacao = 5.48;

                $padrao = numfmt_create("pt_BR", NumberFormatter::CURRENCY);

                echo "Seus " . numfmt_format_currency($padrao, $real, "BRL") . " equivalem a <strong>" . numfmt_format_currency($padrao, $dolar, "USD") . "</strong>";

                echo " <br> <br> <strong> Cotação Fixa de $cotacao </strong> informada diretamente no código."
                
                // Formatação de moedas básico. number_format 

                // echo " Seus R\$" . number_format($real, 2, "," , ".")  . " equivalem a US\$ " . number_format($dolar, 2, "," , ".");
                // echo "<br> <br><strong>*Cotação fixa de </strong> " . number_format($cotacao, 2, ",", "." ) . " informada diretamente no código "

                //Biblioteca intl (Internalization PHP)
                // Formatação de moedas avançado. 

                //  $padrao = numfmt_create("pt_BR", NumberFormatter::CURRENCY); -- Diz que o site é em português, internacionalizando o código. --> So funciona em Servidores mais avançados.

                // echo "Seus " . numfmt_format_currency($padrao, $real, "BRL") -- Na 3 parte, diz qual tipo de moeda é.

            ?>
        </p>
        
        <button Onclick="javascript:window.location.href='index.html'"> Voltar</button>
    </main>

</body>
</html>