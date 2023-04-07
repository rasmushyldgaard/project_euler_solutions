"""
Link:
    https://projecteuler.net/problem=4

Problem:
    A palindromic number reads the same both ways. The largest palindrome made from the
    product of two 2-digit numbers is 9009 = 91 × 99.

    Find the largest palindrome made from the product of two 3-digit numbers.
"""

from math import log10

# function to reverse a number with math
def reverse_num(x):
    decs = [10**n for n in range(0, int(log10(x)+1))]
    nums = [m % 10 for m in [x // n for n in decs]]
    reversed_num = sum([n * m for n, m in zip(nums, decs[::-1])])
    return reversed_num

if __name__ == "__main__":
    res = 0

    for n in range(999, 100, -1):
        for m in range(999, 100, -1):
            z = n * m

            if res < z == reverse_num(z):
                res = z

    # result
    print(res)