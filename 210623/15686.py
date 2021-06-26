import itertools
N,M=map(int, input().split())
arr=[list(map(int,input().split())) for _ in range(N)]

chicken=[]
home=[]

def getDist(x1,y1,x2,y2):
    return abs(x1-x2)+abs(y1-y2)

for i in range(N):
    for j in range(N):
        if arr[i][j]==2:
            chicken.append((i,j))
        elif arr[i][j]==1:
            home.append((i,j))

answer=987654321

for ch in itertools.combinations(chicken,M):
    Sum=0
    for h in home:
        temp=987654321
        for c in ch:
            temp=min(temp,getDist(h[0],h[1],c[0],c[1]))
        Sum+=temp
    answer=min(answer,Sum)

print(answer)
    

