# -*- coding: utf-8 -*-

import sys
from fractions import Fraction

'''

'''

def prime_list(n):
    l = range(2,n+1)
    i = 2
    while i * i <= n: 
        l = filter(lambda x: x == i or x % i != 0, l)
        i = i + 1
    return l

def divisor_list(n):
    l = [1]
    for i in range(n):
        if n % (i+2) == 0:
            l.append(i+2)

    return l

def dfs(p, q, a, n):
    
    return

def func():
    '''

    '''

    while True:
        p, q, a, n = map(int, raw_input().split())

        if p == 0 and q == 0 and a == 0 and n == 0:
            break

        return divisor_list
        
        
    return None

if __name__ == '__main__':
    func()
    
