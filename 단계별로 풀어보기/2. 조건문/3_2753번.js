const year = require('fs').readFileSync('dev/stdin')

if(year % 4 == 0 && year % 100 != 0){
    console.log(1);
}else if(year % 4 == 0 && year % 400 == 0){
    console.log(1);
}else{
    console.log(0);
}