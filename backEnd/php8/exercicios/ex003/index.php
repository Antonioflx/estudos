<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Tipos primitivos PHP</title>
    <style>
        body{
            font: normal 20px arial, sans-serif;
        }
    
    </style>
</head>
<body>
    <h1>Teste de tipos primitivos</h1>
    <?php 
    //0x = hexadecimal 0b = binário 0 = octal
        // $num = 010;
        // echo "O valor da variável é $num";

        // $nome = "Antonio";

        // $numero = (int) 10.1; // coerção
        // var_dump($numero); //Mostrar o tipo prim e a variável
    
        // $vet = [6,3,2.0, true]; //array
        // var_dump($vet);

            class Pessoa {
                private string $nome;
            }
            
            $p = new Pessoa;
            var_dump($p); // objeto
    ?>
</body>
</html>