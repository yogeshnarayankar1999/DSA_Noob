# Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
# Input format :
# Numeric string S (string, Eg. "1234")

# Output format :
# Corresponding integer N (int, Eg. 1234)

# Constraints :
# 0 <= |S| <= 9
# where |S| represents length of string S.


def convert_int(S):
    if len(S) == 0:
        return 0
    else:
        return convert_int(S[:-1]) * 10 + int(S[-1])  #recursive function
    

a=input("Enter the string: ")
print(convert_int(a))
