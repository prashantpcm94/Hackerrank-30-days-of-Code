t=input()
while t:
    t-=1
    a,b,N=map(int,raw_input().split())

    ans=a
    for x in range(N):
        z=ans+(2**x)*b
        print z,
        ans=z
    print ""    
    
