const readline = require('readline');

const EvenFibonacciNumbers = {

    /**
     * Calculates the fibonacci sequence, including only terms less than the
     * given value.
     *
     * @param {Number} n Value which all terms should be less than.
     */
    fibonacci(n) {
        const data = {
            temp1: 1,
            temp2: 2,
        };

        const numbers = [1, 2];

        while(data.temp2 < n) {
            const next = data.temp1 + data.temp2;

            if (next < n) numbers.push(next);

            data.temp1 = data.temp2;
            data.temp2 = next;
        }

        return numbers;
    },

    /**
     * Filters the given fibonacci sequence to only include even terms.
     *
     * @param {Number} n Value which all terms should be less than.
     */
    evenFibonacci(n) {
        return this.fibonacci(n).filter(i => i % 2 === 0);
    },

    /**
     * Sums the terms of the given fibonacci sequence.
     *
     * @param {Number} n Value which all terms should be less than.
     */
    sumEvenFibonacci(n) {
        return this.evenFibonacci(n).reduce((total, next) => total + next);
    },
};

const App = {

    readline: readline.createInterface({
        input: process.stdin,
        output: process.stdout
    }),

    async start() {
        const T = Number(await this.input(''));

        const Ns = [];

        for (let i = 0; i < T; ++i) {
            const N = Number(await this.input(''));

            Ns.push(N);
        }

        const sumEvenFibonaccis =
                Ns.map(n => EvenFibonacciNumbers.sumEvenFibonacci(n));

        sumEvenFibonaccis.forEach(n => console.log(n));

        this.readline.close();
    },

    async input(message) {
        return await new Promise((resolve, reject) => {
            this.readline.question(message, input => {
                resolve(input);
            });
        });
    },
};

App.start();
