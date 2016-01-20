#!/bin/python

import sys

n = int(raw_input().strip())

for i in range(1,n+1):
    t=n-i
    while t:
        t-=1
        sys.stdout.write(" ")
    s=i
    while s:
        s-=1
        sys.stdout.write("#")
    print ""    
