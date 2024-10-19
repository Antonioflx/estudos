<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Desafio 4 PHP</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <main>
        <h1>Conversor de Moedas</h1>
        
        <p>
            <?php
                $inicio = date("m-d-Y", strtotime("-7 days"));
                $fim = date("m-d-Y");

                $url ='https://olinda.bcb.gov.br/olinda/servico/PTAX/versao/v1/odata/CotacaoDolarPeriodo(dataInicial=@dataInicial,dataFinalCotacao=@dataFinalCotacao)?@dataInicial=%27'. $inicio .'%27&@dataFinalCotacao=%27'. $fim .'%27&$top=1&$orderby=dataHoraCotacao%20desc&$format=json&$select=cotacaoCompra,dataHoraCotacao';
            
                $dados = json_decode(file_get_contents($url), true);
            
                $cotacao = $dados["value"][0]["cotacaoCompra"];
                $real = $_GET["real"];

                $dolar = $real / $cotacao;

                $padrao = numfmt_create("pt_BR", NumberFormatter::CURRENCY);
            
                echo "Seus " . numfmt_format_currency($padrao, $real, "BRL") . " equivalem a <strong>" . numfmt_format_currency($padrao, $dolar, "USD") . "</strong>";

                echo " <br> <br> <strong> Cotação Fixa de " . number_format($cotacao, 2) . " </strong>" . " <a href='https://www.bcb.gov.br/' target = '_blank' rel = 'external' > Informado pelo Banco Central do Brasil</a>";
                
            ?>
        </p>


        <button Onclick="javascript:window.location.href='index.html'"> Voltar</button>
    </main>
    
</body>
</html>