const input = require('fs').readFileSync('/dev/stdin').toString().split(' ');
// const input = require('fs').readFileSync(0, 'utf8').toString().split(' ');

console.log(parseInt(input[0]) + parseInt(input[1]));

/*
const fs = require('fs');
const inputData = fs.readFileSync('/dev/stdin').toString().split(' ').map(value=>+value);
const [a,b] = inputData;
console.log(a+b);
*/