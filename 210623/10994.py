n=int(input())
arr=[[' ']*(400) for _ in range(400)]

def draw(len,x,y):
    for i in range(len):
        if i==0 or i==len-1:
            for j in range(len):
                arr[x+i][y+j]='*'
        else:
            arr[x+i][y]='*'
            arr[x+i][y+len-1]='*'

def square(N,x,y):
    len=4*N-3
    draw(len,x,y)
    if N==1: return
    square(N-1,x+2,y+2)

square(n,0,0)

for i in range(4*n-3):
    for j in range(4*n-3):
        print(arr[i][j],end="")
    print()
