import math

number = int(input("Enter Natural Number --> "))

squreOfSum = math.pow((number*(number + 1)) // 2, 2)
sumOfSqure = (number*(number + 1)*(2*number + 1)) // 6

print("Difference of the sum squre is --> ", squreOfSum - sumOfSqure)
