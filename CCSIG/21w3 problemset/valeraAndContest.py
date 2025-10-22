progInput: list[int] = list(map(int, input().split()))

#Seperating Inputs
n : int = progInput[0]
k : int = progInput[1]
l: int = progInput[2]
r: int = progInput[3]
sAll: int = progInput[4]
sK: int = progInput[5] 

sR: int = sAll - sK

targetSK: int = max(l, sK // k) if k != 0 else 0
targetSR: int = max(l, sR // (n - k)) if n - k != 0 else 0

listSK: list[int] = [targetSK]*k if targetSK * k <= sK else []
listSR: list[int] =[targetSR]*(n - k) if targetSR * (n - k) <= sR else []

sK -= targetSK * k if targetSK * k <= sK else 0
sR -= targetSR * (n - k) if targetSR * (n - k) <= sR else 0

tempLenSK: int = len(listSK)
tempLenSR: int = len(listSR)

while len(listSK) < k - tempLenSK:
    if sK >= 0:
    
        listSK.extend([r]*(sK//r)) 
        sK -= r*(sK//r)

        if sK == 0:
            break

    if r > l:
        r -= 1

while len(listSR) < (n - k) - tempLenSR:

    if sR >= 0:
        listSR.extend([r]*(sR//r))
        sR -= r*(sR//r)

        if sR == 0:
            break

    if r > l:
        r -= 1



print (*(listSK + listSR))