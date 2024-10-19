const colorObj = {
    color1: 'blue',
    color2: 'red',
    color3: 'yellow',
    color4: 'orange',
};

// for in object

for (const key in colorObj) {
    console.log(`${key} = ${colorObj[key]}`);
};

// for in array

const colorArr = ['Blue', 'Red', 'Yellow', 'Orange'];

for (const color in colorArr) {
    console.log(`Cor ${color} = ${colorArr[color]}`);
};
