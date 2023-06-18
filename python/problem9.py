# https://projecteuler.net/problem=9

if __name__ == "__main__":
    N = 1000
    K = 50
    res = 0

    for x in range(1, N):
        for y in range(1, N):

            for k in range(1, K):
                z = k*(x+y*1j)**2

                if z.real > 0 and z.imag > 0 and abs(z) > 0:
                    s = z.real + z.imag + abs(z)

                    if s == N:
                        res = z.real * z.imag * abs(z)
                        break
                    elif s > N:
                        break
                else:
                    break

    # result
    print(res)
