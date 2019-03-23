"""
Author: Michael Bottom
Date: 2/4/2019
"""

def checkGrades():
    """
    This function is the main function meant to be called by the user. It prints out a statement
    of the function's actions to the console and calls the function getChoice().
    """
    print("Loading menu and grades.............")
    getChoice()



def getChoice():
    """
    This function creates a menu for the user to choose actions to perform on the contents of a file,
    'exam_grades.csv'. Before that it calls the function getFileAsList() on the 'exam_grades.csv' file
    and stores the resulting list as gradesListed. The menu lets the user choose to find the lowest
    grade, find the highest grade, find the average grade, or search for a grade and receive the
    count of that grade in the list and file. The menu is implemented using if-elif-else statements.
    The average grade is rounded to one decimal place. If the user enters an unaccepted input, they 
    receive a message asking them to re-enter their choice. String formats are also used.
    """
    gradesListed = getFileAsList('exam_grades.csv')

    while True:
        print("\n\n\nWhat would you like to search for?")
        print("Press {} for the lowest grade.".format(1))
        print("Press {} for the highest grade.".format(2))
        print("Press {} for the average grade.".format(3))
        print("Press {} to search for a grade.".format(4))
        userSelection = input("Enter a choice: ")
        print("\n\n")
        if (userSelection == "1"):
            lowestGrade = (min(gradesListed))
            print("The lowest grade is {}.".format(lowestGrade))
        elif (userSelection == "2"):
            highestGrade = (max(gradesListed))
            print("The highest grade is {}.".format(highestGrade))
        elif (userSelection == "3"):
            averageGrade = ((sum(gradesListed))/(len(gradesListed)))
            print("The average grade is {}.".format(round(averageGrade, 1)))
        elif (userSelection == "4"):
            gradeQuery = input("Enter the grade to search for : ")
            counter = 0
            for grade in gradesListed:
                if (int(gradeQuery) == grade):
                    counter = counter + 1
            if (counter > 0):
                print("The grade {} was found {} times in the file.".format(gradeQuery, counter))
            else:
                print("The grade {} was not found in the file.".format(gradeQuery))
        else:
            print("Invalid selection. You entered '{}'. Please enter your choice again.".format(userSelection))

def getFileAsList(inputFile):
    """
    This accepts a parameter, expecting a readable file format. The file is opened, read into the
    myfile stream and assigned to listOfGrades as a string. listOfGrades split into a string list
    using the split function and reassigned to listOfGrades. listOfgrades is then converted to an int list
    using a for loop and reassigned to listOfGrades. The function returns listOfGrades.
    """
    with open(inputFile, 'r') as myfile:
        listOfGrades = myfile.read()
    listOfGrades = listOfGrades.split(',')
    listOfGrades = [int(i) for i in listOfGrades]
    return listOfGrades



checkGrades()