"""
Link:
    https://projecteuler.net/problem=5

Problem:
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
"""

if __name__ == "__main__":
    res = 0
    N = 1000000000
    v = (3, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19)
    step = 1040

    for n in range(0, N, step):
        if all(j == 0 for j in [n % i for i in v]) and n > 0:
            res = n
            break

    # result
    print(res)








