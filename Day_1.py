lst=[5.35,'a',False,100,"I am a code monkey",True,17.3,'c',"derp"]
primitive = (int, bool,float)
hk={float:"double",str:"String",int:"int",bool:"boolean"}
for x in lst:
    if type(x) == str :
        if len(x)==1:
            print "Primitive : char"
        else:
            print "Referenced : String"
    else:
         print "Primitive :",hk[type(x)]
