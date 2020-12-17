def productSum(array, multiplier=1):
    sum = 0
    for element in array:
        if type(element) is list:
            sum += productSum(element, multiplier+1)
        else:
            sum += element
    return sum * multiplier


numbersList = [1, 4]

listOfNumbers1 = [3, 4, 5]

listOfNumbers2 = [5, 7, 2]

numbersList.append(listOfNumbers1)
numbersList.append(listOfNumbers2)

print(productSum(numbersList))
