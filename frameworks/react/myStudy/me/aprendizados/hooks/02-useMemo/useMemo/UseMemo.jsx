// useMemo para armazenar em cache um cálculo entre novas renderizações:

/*
        Parametros

    1) Função: A função que calcula o valor que você deseja armazenar em cache. Deve ser puro, não deve receber argumentos e deve retornar um valor de qualquer tipo. 
        
        PS: No processo inicial, o React chamará a função, mas nas próximas vezes
            Se as depedências não forem modificadas, não será chamada a função.

        Array de depedências - é uma forma de informa ao React quais valores 
        influenciam a lógica de um hook. Controlar quando o efeito deve ser 
        reexecutado, evitando loops infinitos e problema de desempenho

        Além disso, controla quando a função callback será autalizada.
        Ou seja o React, comparará o valor antigo com o valor novo. 

    2)  Depedencias: A lista de todos os valores reativos referenciados dentro da função. Os valores reativos incluem props, state e todas as variáveis ​​e funções declaradas diretamente dentro do corpo do seu componente.

    Ex:

    function TodoList({todos, tab, theme}) {
        const visibleTodos = useMemo(() => filterTodos(todos, tab), [todos, tab]);
    }
*/

import { useMemo } from "react";

// voltar aqui dps
