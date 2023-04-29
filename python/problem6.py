# https://projecteuler.net/problem=6


if __name__ == "__main__":
    N = 100
    sum_of_squares = sum([n**2 for n in range(1, N+1)])
    square_of_sum = sum([n for n in range(1, N+1)])**2
    res = square_of_sum - sum_of_squares

    # result
    print(res)