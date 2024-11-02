// useCallback é um React Hook que permite armazenar em cache uma definição de função entre novas renderizações.

// é utilizado para armazenar um chace em definição de função entre novas renderizaçÕes:

// Otimiza o desempenho de um componente, visto que ele só vai fazer essa renderização se a função callBack chamado

// useCallback(utiliza dois parametros:)

// useCallback(1) Uma função callback, 2) e uma array de depedências:)
/* 
Memoizada
Breve intro do memo -> memo permite que você pule a nova renderização de um componente quando seus props não forem alterados.

1) Parametro -> função callback
->  O seu retorno é uma versão memoizada da função callback do 1 parametro.
Ou seja, n retorna o resultada da função

A funcionalidade do callback, ela memoriza a função e evita que ela seja recriada a cada renderização do componente.

// A função so será chamada se chamar ela. Ex: MyFunction();


2) Parametro -> array de depedências:

Array de depedências - é uma forma de informa ao React quais valores 
influenciam a lógica de um hook. Controlar quando o efeito deve ser 
reexecutado, evitando loops infinitos e problema de desempenho

Além disso, controla quando a função callback será autalizada.
Ou seja o React, comparará o valor antigo com o valor novo. 

*/

// Ps: Como useCallback está relacionado a useMemo?
// Ver essa parte Quando ver o useMemo https://pt-br.react.dev/reference/react/useCallback

import { useCallback } from "react";
