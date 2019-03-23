"""
Author: Michael Bottom
Date: 3/6/2019
Course: Depaul University, Winter 2019, CSC 243, Professor Mendelsohn
"""

class Student(object):
    """
    This class has variables for name, percent grade, and letter grade. It has setters to set those values,
    and getters to retrieve those values. There are also two functions to calculate the letter grade from
    the percent grade and to calculate a new percent grade after adding a bonus. There is a final method to
    display the student info variable values to the screen.
    """

    name = str()
    percentGrade = int()
    letterGrade = str()

    def setName(self, value):
        'Sets the student name value'
        self.name = value
    def getName(self):
        'Prints the value student name'
        return self.name
    def setPercentGrade(self, value):
        'Sets the grade percentage value'
        self.percentGrade = value
    def getPercentGrade(self):
        'Prints the value of the grade percentage'
        return self.percentGrade
    def setLetterGrade(self, value):
        'Sets the letter grade value'
        self.letterGrade = value
    def calcLetterGrade(self):
        'Categorizes the percentGrade value into a letter grade and assigns this category value to letterGrade'
        if (self.percentGrade >= 90):
            self.letterGrade = 'A'
        elif ((self.percentGrade < 90) and (self.percentGrade >= 80)):
            self.letterGrade = 'B'
        elif ((self.percentGrade < 80) and (self.percentGrade >= 70)):
            self.letterGrade = 'C' 
        elif ((self.percentGrade < 70) and (self.percentGrade >= 60)):
            self.letterGrade = 'D'
        else:
            self.letterGrade = 'F' 

    def getLetterGrade(self):
        'Returns the value of the letter grade'
        return self.letterGrade
    
    def addBonus(self, valuePercent):
        'Calculates the new percentGrade when a bonus, valuePercent, is added'
        self.percentGrade = self.percentGrade + ((valuePercent * .01)* self.percentGrade)

    def printStudentInfo(self):
        'Returns the student info values for name, percentGrade, and letterGrade'
        return "Name: {} \nPercent Grade: {} \nLetter Grade: {}".format(self.getName(), self.getPercentGrade(), self.getLetterGrade()) + "\n"


s1 = Student()
s1.setName('Neil Tyson')
s1.setPercentGrade(92)
s1.calcLetterGrade()
print(s1.getLetterGrade())

s1.addBonus(-2)
s1.calcLetterGrade()
print(s1.getLetterGrade())

print(s1.printStudentInfo())
