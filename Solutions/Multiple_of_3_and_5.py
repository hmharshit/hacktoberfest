def sumOfMultiple():

    multiplyList = [];
    for i in range(1000):
        if i%3 == 0 or i%5 == 0:
            multiplyList.append(i)

    return sum(multiplyList)

print(sumOfMultiple())
