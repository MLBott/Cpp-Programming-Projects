def find_missing_number(list_numbers):
    counter = 1
    for i in list_numbers:
        if i == counter:
            counter += 1
        else:
            return (i - 1)

the_list = [1, 2, 3, 4, 5, 7, 8, 9, 10]

print(find_missing_number(the_list))





