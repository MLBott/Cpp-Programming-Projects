"""
Author: Michael Bottom
Date: 1/28/2019n
"""

def listOfWordsInFile(fileName, letterTarget):
    """
    This function accepts two parameters, file name and a letter. It reads the file contents
    into a string, replaces periods with spaces, removes the newline characters, and then 
    splits the string into a list. This new list is iterated through a for loop to append 
    the lowercase letters to a new list, which is then returned by the function.
    """
    with open(fileName, 'r') as myfile:
        data = myfile.read().replace('.', ' ')

    data = data.replace('\n','')
    data = data.split(' ')

    containedWords = []
    for datum in data:
        if letterTarget.lower() in datum.lower():
            containedWords.append(datum)
            print(datum)
    return containedWords

    """
    Pseudocode for problem #1:
    1: Open the file for reading, read into a single string.
    2: Replace periods with spaces.
    3: Replace newline characters with spaces.
    4: Create a new list called cointanedWords
    5: Iterate through original list to find lowercase letters
    6: Append the found lowercase letters to the list cointainedWords
    7: Have the funtion return the list cointainedWords 
    """


def convertCase(inputFile, outputFile):
    """
    This function opens the "example.txt", reads the contents to a string, uses a 
    for loop to reverse the cases of the letters, and adds them to a new list. It then
    converts the list to a string and writes the string to a new file called "example2.txt".
    """
    with open(inputFile, 'r') as myfile:
        data = myfile.read()
    newData = []
    for item in data:
        if item.islower():
            
            newData.append(item.upper())
        else:
            newData.append(item.lower())
    newData = ''.join(newData)

    writeFile = open(outputFile, "w")
    writeFile.write(newData)
    writeFile.close()
    """
    Pseudocode for problem #2:
    1: Open the file for reading, read into a single string.
    2: Createa  new list called newData
    3: Iterate through a for loop to check if a letter is lowercase or uppercase.
    4. Reverse the cases and append to the new list called newData.
    5. Convert the list newData into a string.
    6. Write the string newData to a new output file
    """


def highestLowestGrades():
    """
    This function opens the file exam_grades.csv, reads the contents into a string,
    converts the string into a list, converts the list into a list of integers, and searches
    for the maximum and minimum grades. It then prints out these results.
    """
    with open('exam_grades.csv', 'r') as myfile:
        gradesList = myfile.read()
    gradesList = gradesList.split(',')
    gradesList = [int(i) for i in gradesList]
    minGrade = (min(gradesList))
    maxGrade = (max(gradesList))
    print("The maximum grade is {}, and the minimum grade is {}.".format(maxGrade, minGrade))

    """
    Pseudocode for problem #3:
    1: Open the file for reading, read into a single string.
    2: Convert the string a list, with commas as the delimeter.
    3: Convert elements of the list to integers, making an integer list.
    4: Find the minimum grade in the list and assign it to a variable.
    5: Find the maximum grade in the list and assing it to a variable.
    6: Print out a message to the console stating what the minimum and maximum grades were,
    using the format string function.
    """