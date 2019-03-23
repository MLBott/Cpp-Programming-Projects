def flip_horizontal_axis(matrix):
    r = len(matrix) - 1
    c = len(matrix[0]) - 1
    temp = 0
    i = 0
    while i <= r / 2:
        j = 0
        while j <= c:
            temp = matrix[i][j]
            matrix[i][j] = matrix[r - i][j]
            matrix[r - i][j] = temp
            j = j + 1
        i = i + 1


myMatrix = [4, 5, 6],[1, 2, 3],[5, 5, 5],[8, 8, 8]

flip_horizontal_axis(myMatrix)

print(myMatrix)
print(len(myMatrix))

