// podemos fornecer variaveis a  um tipo

type StringArray = Array<String>; // so de string
type NumberArray = Array<Number>; // so de numero
type ObjectWithNameArray = Array<{ name: string }>; // objecto que tenha um nome

interface Backpack<Type> {
	add: (obj: Type) => void;
	get: () => Type;
}

// declarar uma constat para receber o BackPack e a função. Parece funcionar como um construtor

const backpack: Backpack<string> = {
	add: (obj: string) => console.log("Item adiconado: ", obj),
	get: () => "Objeto da mochila",
};

// backpack.add("Antonio");
backpack.add("Antonio");
backpack.add("Antonio2");
const obj = backpack.get();

console.log(obj);
