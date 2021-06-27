from collections import deque
n,m,k,x=map(int,input().split())
graph=[[] for _ in range(n+1)]
visited=[0 for _ in range(n+1)]

for i in range(m):
    a,b=map(int,input().split())
    graph[a].append(b)

dq=deque()
dq.append([x,0])
visited[x]=1
answer=[]
while dq:
    cur,depth=dq.popleft()

    if depth==k:
        answer.append(cur)

    for node in graph[cur]:
        if not visited[node]:
            visited[node]=1
            dq.append([node,depth+1])

if len(answer)==0:
    print(-1)
else:
    answer.sort()
    for ans in answer:
        print(ans)

