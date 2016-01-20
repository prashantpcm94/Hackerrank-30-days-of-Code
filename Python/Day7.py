#!/bin/python

import sys


n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))
arr=arr[::-1]
for x in arr:
    print x,
