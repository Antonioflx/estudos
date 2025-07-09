// keyof recebe um tipo de objeto e produz uma união de string ou number

type Point = { x: number; y: number };

type P = keyof Point; // mesmo que "x" | "y"

type Arrayish = { [n: number]: unknown };

type A = keyof Arrayish;

type Mapish = { [k: string]: boolean };
type M = keyof Mapish; // string ou number

// isso ocorre porque as chaves de objeto JavaScript são sempre convertidas em uma string, então obj[0]is é sempre o mesmo que obj["0"].
