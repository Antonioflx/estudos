const greet = (person: string, date: Date) =>
	console.log(`Hello ${person}, today is ${date.toDateString()}!`);

greet("Antonio", new Date());
