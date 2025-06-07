// quando atribuimos qualquer váriavel

// o ts analisa o lado direito da atribuição e restringe o lado esquerdo adequadamente

let x = Math.random() < 0.5 ? 10 : "good bye"; // string | number

x = 1;

console.log(x);

x = "oi";

console.log(x);

// x = true // erro

// em funcao

type Bird = { fly: () => void };
type Fish = { swim: () => void };

function isFish(pet: Fish | Bird): pet is Fish {
	return (pet as Fish).swim !== undefined;
	// esse as seria tipo in

	// "swim" in pet;
}

const pet: Fish = { swim: () => console.log("Nadando") };

console.log(isFish(pet));
export {};
