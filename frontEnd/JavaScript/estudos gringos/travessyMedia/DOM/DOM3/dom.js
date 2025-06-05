const btnClick = document.querySelector("#button");
const itemInput = document.querySelector('input[type="text"]');
const form = document.querySelector("form");
const output = document.querySelector("#output");
const select = document.querySelector("select");
// evt -> evento

// PS: tem Exemplos no curso gringo de JS2 -> 07-events/02-mouse-events/shopping-list/script
const clickButton = (evt) => {
	// console.log(evt.target);
	// console.log(evt.target.id); // id
	// console.log(evt.target.className); // class
	// console.log(evt.target.classList); // todas as classes.

	let output = evy.type;
	console.log(output);
};

/*
        Mouse events
    1) click -> quando clica (entra e sai ao mesmo tempo)
    2) dblclick -> dois clicks
    3) mousedown -> quando pressiona o mouse para baixo
    4) mouseup -> quando pressiona o mouse para cima.
    4) mouseenter -> quando o mouse entra -> nao pega todos os elementos
    5) mouseleave -> quando o mouse sai.
    6) mouseover -> quando o mouse entra -> mas pega todos os elementos
    7) mouseout -> quando o mouse sai -> pega todos os elementos.
    8) mousemove -> quando o mouse move.

*/

// PS: tem Exemplos no curso gringo de JS2 -> 07-events/04-keyboard-events/shopping-list/script

/* 
        Keybord events
    1) keydown -> quando digito algo.
    2) keyup -> quando digito e sai
    3) keypress -> quando digito.
    4) focus -> quando clico (foco em algo)
    5) blur -> quando clico para sair (nao fico com foco.)
    6) cut -> cortar um texto
    7) paste -> colar um texto
    8) input -> coloca todos os eventos.
*/

/*
        Outros eventos
    8) change -> quando troca no select>options
    9) submite -> quando envia.
*/

// itemInput.addEventListener("focus", runEvent);
// itemInput.addEventListener('blur', runEvent);

// itemInput.addEventListener('cut', runEvent);
// itemInput.addEventListener('paste', runEvent);

// itemInput.addEventListener('input', runEvent);
// select.addEventListener('change', runEvent);
form.addEventListener("submit", runEvent);

function runEvent(evt) {
	evt.preventDefault();
	console.log(`EVENT TYPE: ${evt.type}`);

	document.getElementById(
		"output"
	).innerHTML = `<h3> ${evt.target.value} </h3>`;

	// ul.insertAdjacentElement('afterend', element);
}
