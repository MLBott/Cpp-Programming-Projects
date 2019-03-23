"""
Author: Michael Bottom
Date: 1/21/2019
Course: Depaul University, Winter 2019, CSC 243, Professor Mendelsohn
"""

def nameSearch(userName, letterCount):
    """
    This function accepts two arguments: The user's name and a letter. It then returns
    the number of times that the letter is present in their name, non-case senstive.
    """
    counter = 0
    for letter in userName.lower():
        if letter == letterCount.lower():
            counter += 1
    return counter

def fileStringSearch(userFile, stringTarget):
    """
    This function accepts a user file and a string as arguments, and then checks the file
    to see if the string is within, non-case sensitive. If so, it returns True. If not, it
    returns False.
    """
    if len(stringTarget) < 3:
        return -1
    
    lineCheck = 0
    queryFile = open(userFile, "r")
    for line in queryFile:
        if stringTarget.lower() in line.lower():
            lineCheck += 1
    queryFile.close()
    if lineCheck > 0:
        return True

    else:
        return False

def problem3(year, month, day, country = 'A'):
    """
    This function accepts the year, month, day, and optionally the country (which defaults to
    America), 'A' for America, 'N' for other than America. It then returns a formatted string 
    with month and day arranged by the countries accepted format.
    """
    if country == 'A':
        return "The year is: {0}. The day is: {1}/{2}.".format(year, month, day)
    else:
        return "The year is: {0}. The day is: {2}/{1}.".format(year, month, day)

def fileGradesAverage(userFile):
    """
    This function reads in a CSV file to a string, replaces the commas with spaces, splits
    the string into a list, sums the list values as integers, and returns the calculated 
    average from the sum and length of items in the list giving the average. For exam_grades.csv 
    a total grade average is returned.
    """
    queryCSV = open(userFile, 'r').read()
    queryCSV = queryCSV.replace(',', ' ')
    queryCSV = queryCSV.split()
    gradeListSum = 0
    for grade in queryCSV:
        gradeListSum += int(grade)
    gradesAverageNumber = gradeListSum / len(queryCSV)
    return gradesAverageNumber


    

        