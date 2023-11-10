#!/usr/bin/python3

def is_palindrome(num):
    return str(num) == str(num)[::-1]

max_p = 0
factors = (0, 0)

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if is_palindrome(product) and product > max_p:
            max_p = product
with open("102-result", "w") as file:
    file.write(str(max_p))
