def sortedSquares(A):
    B = list(map(lambda x: x*x, A))
    B.sort()
    return B
