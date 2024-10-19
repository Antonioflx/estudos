<pre>
    <?php 

        $url = 'https://olinda.bcb.gov.br/olinda/servico/PTAX/versao/v1/odata/CotacaoDolarPeriodo(dataInicial=@dataInicial,dataFinalCotacao=@dataFinalCotacao)?@dataInicial=%2708-09-2024%27&@dataFinalCotacao=%2708-16-2024%27&$top=1&$orderby=dataHoraCotacao%20desc&$format=json&$select=cotacaoCompra,dataHoraCotacao';

        $dados = json_decode(file_get_contents($url), true);

        // var_dump($dados);

        $cotacao = $dados["value"][0]["cotacaoCompra"];

        echo "A cotação foi $cotacao ";



   
    ?>
</pre>