#!/bin/python

import sys

def extraLongFactorials(n):
    ans = 1
    i = 2
    for i in range (i, n + 1):
        ans = ans * i
    print ans

if __name__ == "__main__":
    n = int(raw_input().strip())
    extraLongFactorials(n)
