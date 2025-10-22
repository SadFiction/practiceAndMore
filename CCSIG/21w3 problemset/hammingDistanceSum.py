import operator

a : str = "001"
b : str = "1111111111111111"*200000

totalSum : int = 0


def hammingDistanceSum(a: str, b:str) -> int:
    a: list[int] = list(map(int, a))
    b: list[int] = list(map(int, b))


    sumOF:int = sum(map(operator.xor, a, b))

    return sumOF




for i in range(0, (len(b)//len(a))*len(a)):
    if i + len(a) > len(b):
        break
    totalSum += hammingDistanceSum(a, b[i:i+len(a)])

print(totalSum)