nrLoops: int = int(input())

for i in range(0, nrLoops):
    tempIn: str = str(input())
    lenTemp:int = len(tempIn)
    if lenTemp > 10:
        print(tempIn[0]+str(lenTemp-2)+tempIn[-1])
    else:
        print(tempIn)


