the_input = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']

def sample_swe_AZ_permutation(the_input):
    target_letter = 'PP'
    for item in the_input:
        print(the_input.index(item))
    if target_letter not in the_input:
        print('Oh Well...')
    return the_input.index(item)

print(sample_swe_AZ_permutation(the_input) + 1)














