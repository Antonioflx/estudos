
// pegar a div principal -> root
const mainContainer = document.querySelector('#root');
// objeto com o tipo.

// estilo para style dentro de reactElement:

/*
    Mesma coisa que.
    style: {
        color: 'green',
        display: 'block',
        textAlign: 'center',
        fontSize: '20px',
    }
*/
const reactStyle = {
    color: "green",
    display: 'flex',
    justifyContent: 'center',
    fontSize: '20px',
}

const reactElement = {
    type: 'a',
    props: {
        href: "https://www.instagram.com/antonioflxx/",
        target: '_blank',
        style: reactStyle,
    },
    children: 'Meu instagram',
};


function CustomRender(reactElement, container) {

    const {type, props, children} = reactElement;
    const domElement = document.createElement(type);
    domElement.innerHTML = children; 

    for (const prop in props) {
        // caso seja o filho continuar
        if (prop === 'children') continue;
        
        // se for style -> que é o objeto reactStyle

        if(prop === 'style') {
            // atribuir o valor da propriedade style -> que é props[prop] == style -> para a variavel style.
            const styleValue = props[prop]; // é um objeto que receber os valores da propriedade style.
            
            // fazer um loop para percorrer no objeto style.
            for (const styleProp in styleValue) {
                /* 
                domElemente.style[styleProp] 
                    => domElement.style === reactElement.style => ou seja, acessando a propriedade style dentro da variavel reactElement.
                    => domElement.style[styleProp] -> acessando as propriedades, através do index styleProp [0 => color], [1 => display],
                    ou seja, vai ser style na propriedade existente. href, etc.
                */

                // já style[styleProp] -> vai ser o valor dentro do objeto style. que foi atribuito para ele.
                // style[styleProp] => 'red'
                domElement.style[styleProp] = styleValue[styleProp];
            }
        } else {
            domElement.setAttribute(prop, props[prop]);
        }
    }
    container.appendChild(domElement)
}

// React -> nao aceita elementos como appendChild. Verificar como fazer
CustomRender(reactElement, mainContainer);

// export default CustomRender;