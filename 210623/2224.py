n=int(input())
graph=[[0 for _ in range(123)] for _ in range(123)]

for i in range(n):
    cmd=input()
    temp=cmd.split(" ")
    graph[ord(temp[0])][ord(temp[2])]=1

for k in range(123):
    for i in range(123):
        for j in range(123):
            if graph[i][k] and graph[k][j]:
                graph[i][j]=1
answer=[]
for i in range(123):
    for j in range(123):
        if graph[i][j] and i!=j:
            answer.append(chr(i)+" => "+chr(j))

print(len(answer))
for ans in answer:
    print(ans)
