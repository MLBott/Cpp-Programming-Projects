def flip_vertical_axis(matrix):
    c = len(matrix) - 1
    r = len(matrix) - 1
    temp = 0
    o = 0
    while o <= r:
        i = 0
        while i <= r / 2:
            temp = matrix[o][i]
            matrix[o][i] = matrix[o][c - i]
            matrix[o][c - i] = temp
            i = i + 1
        o = o + 1
    return matrix

my_matrix = [1,2,3],[4,5,6],[7,8,9]

print(flip_vertical_axis(my_matrix))

# def flip_vertical_axis(matrix):
#     for i in range(len(matrix)):
#         matrix[i] = matrix[i][::-1]



# my_matrix = [1,2,3],[4,5,6],[7,8,9]

flip_vertical_axis(my_matrix)



