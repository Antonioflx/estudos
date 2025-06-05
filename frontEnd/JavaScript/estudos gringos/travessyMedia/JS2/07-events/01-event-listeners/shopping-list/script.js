
// Primeira forma -> colocando dentra da tag do HTML la.

// Segunda forma de fazer -> JavaScript Event Listener

// clearBtn.onclick = function() {
    //     alert('Clear Items');
    // }
    
    /*  Como eu fiz.
    
    function removeAllItems() {
        const list = document.querySelectorAll('li');
        list.forEach(item => item.remove());
        
        }
        
        document.querySelector('#clear').onclick = removeAllItems;
        
        
        */
       
       // Terceira forma -> recomendada.
       // pode fazer quantos eventos quiser.
       // addEventListener(); -> Moderno e mais usado.
       
       // addEventListener(tipo de evento, e uma callback function)
       
       // Ex: addEventListener('click', function () { bloco });
       
       // clearBtn.addEventListener('click', function () {
        //     const list = document.querySelectorAll('li');
        //     list.forEach(item => item.remove());
        // })
        
        // arrow function.
        // clearBtn.addEventListener
        //     ('click', () => document.querySelectorAll('li')
        //     .forEach(item => item.remove()));
        
        // Varios eventos
        
        // clearBtn.addEventListener
        //     ('click', () => alert('Clear Items'));
        
        
        // setTimeout(var.removeEventListener(o evento, e a referencia que quer remover.), tempo em ms); funcao que retorna um numero em milisegundos.
        
        // setTimeout(() => clearBtn.removeEventListener('click', onClear), 5000);
        
        // Limpando a lista
        
        const clearBtn = document.querySelector('#clear');
        
        // criando uma funcao para chamar no addEventListener.
        

        // 1) Forma 
        const onClear1 = () => {
            const itemList = document.querySelector('ul');
            const items = itemList.querySelectorAll('li');

            items.innerHTML = '';
        }

        // 2) Forma -> Melhor para interação, mas menos eficiente se só quer remover.
        const onClear = () => 
            document.querySelectorAll('li')
            .forEach(item => item.remove());
        
        clearBtn.addEventListener
        ('click', onClear);
        

        // 3) Forma -> Mais eficiente caso eu queira apenas remover.

        const onClear3 = () => {
            const itemList = document.querySelector('ul');
            
            // checa se tem o primeiro filho, se tiver, tem lista.
            while(itemList.firstChild) {
                itemList.removeChild(itemList.firstChild)
            }
        }
        // chamar o evento sozinho
        // setTimeout(() => clearBtn.click(), 5000);
