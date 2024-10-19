
// Calculator Challenge

// criar uma funcao calculator(num1, num2, operator.) que tenha 3 parametros

// Operator -> +, -, *, /.

// criando a funcao


function calculator(num1, num2, operator) {
    let res;
    switch (operator) {
    
        case '+':
            res = num1 + num2;
        break;

        case '-':
            res = num1 - num2;
        break;

        case '*':
            res = num1 * num2;
        break;

        case '/':
            res = num1 / num2;
        break;

        default:
            res = 'Operador Invalido';
        break;
    }

    console.log(res);
    return res
}

// chamando a funcao
calculator(5, 2, '+');
calculator(5, 2, '-');
calculator(5, 2, '*');
calculator(5, 2, '/');
calculator(5, 2, '&');