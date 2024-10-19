<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=], initial-scale=1.0">
    <title>PHP</title>
</head>
<body>
    <h1>Exemplo de PHP</h1>
    <?php 
        date_default_timezone_set("America/Sao_Paulo"); // Timezone - GMT -3
        echo "Hoje é dia " . date("d/M/Y ");
        echo " Já a hora é " . date("G:i:s T");
    
    ?>
</body>
</html>