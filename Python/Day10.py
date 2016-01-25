def binary(n):
    if n==0 or n==1:
        return str(n)
    
    if n%2==0:
        return binary(n/2)+"0"
    else:
        return binary(n/2)+"1"
     
        
t=input()
while t:
    t-=1
    n=input()
    print binary(n)
