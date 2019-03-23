"""
Author: Michael Bottom
Date: 1/14/2019
"""

import math

def lowestNumListSum(firstList, secondList):
    """
    This function accepts two lists of numbers and returns the sum of the lowest
    numbers from each list. 
    """
    firstList.sort()
    secondList.sort()

    sumTwoLowest = firstList[0] + secondList[0]
    return sumTwoLowest

def lastNumListAvg(primaryList, secondaryList):
    """
    This function accepts two lists of numbers and returns the average of the last
    number in each list.
    """
    primaryList.sort()
    secondaryList.sort()

    avgTwoLowest = (primaryList[-1] + secondaryList[-1]) / 2
    return avgTwoLowest

def pythagoreanResult(sideOne, sideTwo):
    """
    This function accepts two non-hypotenuse side length values of a triangle and returns
    the length value of the hypotenuse
    """
    sideThree = math.sqrt(sideOne**2 + sideTwo**2)
    return sideThree

def lowMidAvg():
    """
    This function asks the user to enter three integers, creates a list out of them, and
    returns a message for the hightest, lowest, and average numbers of the list.
    """
    myList = []
  
    myList.append(int(input("Enter the 1st number: ")))
    myList.append(int(input("Enter the 2nd number: ")))
    myList.append(int(input("Enter the 3rd number: ")))
    myList.sort()
    sumList = sum(myList)
    avgList = sumList/len(myList)
    highestNmbr = "The highest number is: " + str(max(myList)) + "\n"
    lowestNmbr = "The lowest number is: " + str(min(myList)) + "\n"
    avgNmbr = "The average is: " + str(avgList)
    return print(highestNmbr + lowestNmbr + avgNmbr)

def stringConcat(theStringList):
    """
    This function accepts a list of strings and returns a single string that is a string
    concatenation of the entire list.
    """
    swapString = ""
    for item in theStringList:
        swapString += item
    return swapString



help(str.split)