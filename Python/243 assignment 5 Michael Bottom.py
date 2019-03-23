"""
Author: Michael Bottom
Date: 2/25/2019
Course: Depaul University, Winter 2019, CSC 243, Professor Mendelsohn
"""

def createStudentDictionary():
    """
    This function opens a file named 'class_roster.txt', reads into a stream, and assings the stream contents to a
    list, line by line. It then uses a loop to remove the punctuation. It then uses another loop to create a
    dictionary with string keys matched to tuple values and returns the dictionary.
    """
    listOfRoster = []
    with open('class_roster.txt', 'r') as myfile:
        listOfRoster = myfile.readlines()

    listOfRosterDepunc = []
    for line in listOfRoster:
        line = line.replace('\n','')
        listOfRosterDepunc.append(line)

    rosterDictionary = {}
    for line in listOfRosterDepunc:
        studentInfoListed = line.split(',')
        rosterDictionary[studentInfoListed[2]] = (studentInfoListed[0],studentInfoListed[1],studentInfoListed[3])
    
    return rosterDictionary




def studentSearch(userDictionary, userID):
    """
    This function is the main function. It accepts two paramenters, a dictionary and a dictionary key. It uses 
    try and except clauses to search the dictionary for the key and return the values using a formatted string.
    If the key can't be found then the except clause returns a statement to notify the user.
    """
    try:
        userInfo = userDictionary[userID]
        return "First Name: {} \nLast Name: {} \nYear: {}".format(userInfo[0], userInfo[1], userInfo[2]) + "\n"
    except Exception:
        return "No student found with ID {}.".format(userID) + "\n"


