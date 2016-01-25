import sys
sc="![,?.\_'@+] "
ans=raw_input()
i=0
lans=[]
while i < len(ans):
    s=""
    while i < len(ans) and not ans[i] in sc:
        s+=ans[i]
        i+=1
    while i < len(ans) and ans[i] in sc:
        i+=1
    if s:    
        lans.append(s)
        
print len(lans)
for x in lans:
    print x
