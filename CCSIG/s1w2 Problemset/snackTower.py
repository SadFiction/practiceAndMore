import math
n:int = int(input())
maxNumber: int = n

nL: list[int] = list(map(int, input().split()))


rNL: list[int] = []
sNL: list[int] = []


for i in range(0, n):

    if nL[i] == maxNumber :
        sNL.append(nL[i])
        sNL.sort(reverse=True)

        minList = list(range(min(sNL), max(sNL)+1)) if len(sNL) > 1 else sNL
       
        if len(sNL) != len(minList):
            maxNumber = min(set(minList)- set(sNL))
            continue

        
        rNL.extend(sNL)
        print(" ".join(map(str, sNL)))

        remaining = list(set(nL) - set(rNL)) if len(set(nL) - set(rNL)) != 0 else [0]
        maxNumber =  max(remaining)

        
        
        sNL = []
    else:
        print(" ")
        sNL.append(nL[i])
        


