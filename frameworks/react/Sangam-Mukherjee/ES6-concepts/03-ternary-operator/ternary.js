// Ternary operator

// condição ? true : false

function checkStudent(isStudent, name) {
	isStudent
		? console.log(`Bem-vindo ${name}`)
		: console.log(`${name}, por favor faça o seu cadastro`);
}

checkStudent(true, "Antonio");

const showRecipeOne = false;

function getRecipeOneName(recipeName) {
	return recipeName;
}

function getRecipeTwoName(recipeName) {
	return recipeName;
}

/*
    if(showRecipeOne) {
        console.log(getRecipeOneName('Pizza'));
    } else {
         console.log(getRecipeTwoName('Hot Dog'));
    }
*/

showRecipeOne
	? console.log(getRecipeOneName("Pizza"))
	: console.log(getRecipeTwoName("Hot Dog"));
