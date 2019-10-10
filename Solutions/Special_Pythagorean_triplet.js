const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
});

let T;

rl.on('line', line => {
    if (!T) {
        T = parseInt(line);
        return;
    }
    const N = parseInt(line);
    const splitter = splitNumber(N);
    let split;
    do{
        split = splitter.next();
        if(split.value !== undefined && split.value.a**2 + split.value.b**2 == split.value.c**2){
            console.log(split.value.a * split.value.b * split.value.c);
            return;
        }
    } while(!split.done);
    console.log(-1);
});


function* splitNumber(N) {
    let resp={};
    for(let a = 1; a < N/3; a++){
        resp.a=a;
        for(let b = a+1; b < (N-a)/2; b++){
            resp.b=b;
            resp.c=N-a-b;
            yield resp;
        }
    }
  }
