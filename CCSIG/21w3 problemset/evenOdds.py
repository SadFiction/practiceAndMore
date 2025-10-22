progInput: list[int] = list(map(int, input().split()))

#Seperate Inputs
n:int = progInput[0]
k:int = progInput[1]

threshold: int = int(n/2)

#If n is odd, adjust threshold
if n %2 != 0:
    threshold = int((n+1)/2)

#get result depending on k's position
result: int = 1 + 2 * (k -1) if (k) <= threshold else 2 + 2*(k - (threshold) -1)

print(result)

