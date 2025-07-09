// podemso escrever

function identity<Type>(arg: Type): Type {
	return arg;
}

let myIdentity: <Type>(arg: Type) => Type = identity;

function identity_ex2<Type>(arg: Type): Type {
	return arg;
}

// ou
let myIdentity_ex2: { <Type>(arg: Type): Type } = identity_ex2;

// ou interface genéria

interface GenericIdentifyFn {
	<Type>(arg: Type): Type;
}

function identity_ex3<Type>(arg: Type): Type {
	return arg;
}

let myIdentity_ex3: GenericIdentifyFn = identity_ex3;

// colocar como parametro na interface.
interface GenericIdentityFn<Type> {
	(arg: Type): Type;
}

let myIdentity_ex4: GenericIdentityFn<number> = identity_ex3;
