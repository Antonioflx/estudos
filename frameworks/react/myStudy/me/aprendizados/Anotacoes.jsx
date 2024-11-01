/*
        Passos Importantes:

    1) Identificar o componente que renderiza algo com base no estado
    2) Encontrar o pai comum mais próximo
    3) Decidir onde o estado vai viver
        3.1) Pai comum
        3.2) Acima do Pai
        3.3) Criar um componenten para manter o estado
*/

/*
        Diferenças:
    
    1) Props 
        -> São argumentos que passamos para as funções, fazer a conectividade entre pai e filho (podendo personalizar sua aparência)

    2) State 
        -> Funciona como uma memória, o componente mantém o controle de algumas informações e as altera em respostas as interações
        Ou seja, houve uma interação, o state agiu.
*/

/*

        Fluxo de renderização:

    O React renderiza para baixo.
    Mas, as vezes precisaremos inverter esse fluxo.
*/
