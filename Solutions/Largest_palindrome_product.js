const readline = require('readline')

const rl = readline.createInterface({
  input: process.stdin,
})

let T;
const cases = [];
rl.on('line', line => {
  if (!T) {
    T = parseInt(line)
    return
  } else {
    cases.push(parseInt(line));
    if(cases.length === T) {
      runCases(cases);
      process.exit(1)
    }
  }
  
})

const runCases = cases => cases.forEach(max => {
  console.log(largestPalindrome(max))
});

const checkPalindrome = string => string.split('').reverse().join('') === string;

const largestPalindrome = max => {
  const arr = [];
  for (let i = 999; i > 100; i--) {
    for (let j = 999; j > 100; j--) {
      let product = j * i;
      if (product <= max && checkPalindrome(product.toString())) {
        arr.push(product);
      }
    }
  }
  return Math.max(...arr);
}
