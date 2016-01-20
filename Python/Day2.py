M=input()
T=input()
X=input()
tip=(T*M)/100
tax=(X*M)/100
finalPrice=M+tax+tip
print "The final price of the meal is $%d." % round(finalPrice)
