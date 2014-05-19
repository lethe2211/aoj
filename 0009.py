# -*- coding: utf-8 -*-
import sys

def prime_list(n):
    l = range(2,n+1)
    i = 2
    while i * i <= n: 
        l = filter(lambda x: x == i or x % i != 0, l)
        i = i + 1
    return l

if __name__ == '__main__':
    l = prime_list(999999)
    for line in sys.stdin:
        n = int(line)
        print len([x for x in l if x <= n])

