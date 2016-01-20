def find_gcd(x, y):
    while(y):
        x, y = y, x % y
    return x

a,b=map(int,raw_input().split())
gcd=find_gcd(a,b)
print gcd
