const input = require('fs').readFileSync('dev/stdin').toString().trim().split(' ');

const [hour, minute] = Number(input);

minute -= 45;

if(minute < 0){
    minute += 60;
    hour--;

    if(hour === -1){
        hour = 23;
    }
}

console.log(hour + ' ' + minute);