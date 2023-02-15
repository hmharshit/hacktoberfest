def largest_prime_factor(num):
    factor = 2
    while factor * factor <= num:
        while num % factor == 0:
            num /= factor
        factor += 1
    if (num > 1):
        return num
    return factor

if __name__ == '__main__':
    t = int(input())
    for i in range(0, t):
        n = int(input())
        print(int(largest_prime_factor(n)))
        