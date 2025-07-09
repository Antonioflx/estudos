/* 
    Ao declarar um padrão para um parâmetro de tipo genérico, você torna opcional a especificação do argumento de tipo correspondente.
     Por exemplo, uma função que cria um novo HTMLElement. Chamar a função sem argumentos gera um HTMLDivElement; chamar a função com um elemento como primeiro argumento gera um elemento do tipo do argumento. Opcionalmente, você também pode passar uma lista de filhos. Anteriormente, você teria que definir a função como:
*/

type Container<T, U> = {
	element: T;
	children: U;
};

declare function create(): Container<
	HTMLDivElement,
	HTMLDivElement[]
>;
declare function create<T extends HTMLElement>(
	element: T
): Container<T, T[]>;
declare function create<T extends HTMLElement, U extends HTMLElement>(
	element: T,
	children: U[]
): Container<T, U[]>;

// pode ser reduzida pra

declare function create<
	T extends HTMLElement = HTMLDivElement,
	U extends HTMLElement[] = T[]
>(element?: T, children?: U): Container<T, U>;

const div = create();

const p = create(new HTMLParagraphElement());

// regras

/*

    1. Um parâmetro de tipo é considerado opcional se tiver um padrão.

    2. Parâmetros de tipo obrigatórios não devem seguir parâmetros de tipo opcionais.

    3. Os tipos padrão para um parâmetro de tipo devem satisfazer a restrição do parâmetro de tipo, se ela existir.

    4. Ao especificar argumentos de tipo, você só precisa especificar argumentos de tipo para os parâmetros de tipo necessários. Parâmetros de tipo não especificados serão resolvidos para seus tipos padrão.

    5. Se um tipo padrão for especificado e a inferência não puder escolher um candidato, o tipo padrão será inferido.

    6.

    7.

*/
