# Encodes the letters of a spreadsheet into integers
def spreadsheetColumnEncode(letters):
    num = 0
    count = len(letters) - 1
    for s in letters:
        num += 26**count * (ord(s) - ord('A') + 1)    
        count -= 1
    return num

print(spreadsheetColumnEncode("A"))
print(spreadsheetColumnEncode("AB"))
print(spreadsheetColumnEncode("AA"))
print(spreadsheetColumnEncode("ZZ"))


