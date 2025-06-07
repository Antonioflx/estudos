// operador in -> verifica se o objeto possui uma propridade ou valor

type Bird = { fly: () => void };
type Fish = { swim: () => void };

function move(animal: Bird | Fish) {
	if ("swim" in animal) return animal.swim(); // "swim" -> existe em animal? ( que pode ser BIRD OU FISH)

	return animal.fly();
}

const passaro: Bird = {
	fly: () => "VRUMM",
};

const tubarao: Fish = {
	swim: () => "CRUA",
};

console.log(move(tubarao)); // CRUA
console.log(move(passaro)); // VRUMM
