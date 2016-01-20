t=input()
phoneBook={}
while t:
    t-=1
    name=raw_input()
    number=raw_input()
    phoneBook[name]=number

n=raw_input()
while n:
    no=phoneBook.get(n,None)
    if no:
        print "%s=%s"%(n,no)
    else:
        print "Not found"
    n=raw_input()     
