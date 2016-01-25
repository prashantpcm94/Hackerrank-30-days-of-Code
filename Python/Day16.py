n=input()
a=map(int,raw_input().split())
a.sort()
minimum=a[n-1]
ans={}
for i in range(n-1):
            j=i+1
            k=abs(a[i]-a[j])
            if ans.get(str(k),None):
                    ans[str(k)].append((a[i],a[j]))
            else:
                ans[str(k)]=[(a[i],a[j])]
            minimum=min(k,minimum)
 
for (a,b) in ans[str(minimum)]:
    print a,b,
