var rl=require('readline').createInterface({input:process.stdin});
var T,fib=(a, b, m)=>b<m?(b%2?0:b)+fib(b,a+b,m):0;
rl.on('line',l=>!T?T=+l:console.log(fib(1,2,+l)));
