def multiples_under_1000():
    x = []
    for i in range(1000):
        if i % 3 == 0 or i % 5 == 0:
            x.append(i)
    return sum(x)
