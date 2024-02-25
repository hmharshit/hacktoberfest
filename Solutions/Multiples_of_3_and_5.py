#!/usr/bin/env python

def multiples3or5(max):

    sum = 0
    for number in range(int(max)):
        if (number % 3 == 0) or (number % 5 == 0):
            sum = sum + number

    return sum

def main():

    results = []
    f = open("input.txt","r")
    if f.mode == 'r':
        fl = f.readlines()
        fl.pop(0)
        for max in fl:
            results.append( multiples3or5(max) )

    for i in results:
        print(i)


if __name__== "__main__":
  main()