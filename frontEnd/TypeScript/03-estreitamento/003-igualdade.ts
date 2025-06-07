// coisa básica

// so usar o === -> compara o valor e o tipo
// "10" === 10 // false // valores iguais, mas tipos diferentes // string and number
// "10" == 10 // true -> valores iguais

function printExample(first_str: string, second_str: string) {
	if (first_str === second_str) {
		// 1 case
		return console.log(
			first_str.toUpperCase(),
			second_str.toUpperCase()
		);
	}

	console.log(first_str, second_str); // 2 case
}

printExample("Antonio", "Antonio"); // 1 caso
printExample("Antonio", "antonio"); // 2 caso
