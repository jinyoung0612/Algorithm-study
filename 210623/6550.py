
while True:
    try:
        s,t=map(str,input().split())
        p1=0
        p2=0
        while p1<len(s) and p2<len(t):
            if s[p1]==t[p2]:
                p1+=1
                p2+=1
            else:
                p2+=1

        if p1==len(s):
            print("Yes")
        else:
            print("No")
            
    except EOFError:
        break