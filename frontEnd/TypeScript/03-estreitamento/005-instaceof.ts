// instaceof -> verifica se é um valor ou não de uma instancia de outro valor
// tipo se o valor possui Foo.prototype -> que seria cadeia de métodos.

function logValue(value: Date | string) {
	if (value instanceof Date) return console.log(value.toDateString());

	return console.log(value.toUpperCase());
}

logValue(new Date()); // a data
logValue("Antonio"); // string
