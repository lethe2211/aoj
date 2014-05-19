# -*- coding: utf-8 -*-

while True:
    n = int(raw_input())

    if n == 0:
        break

    columns = []
    for i in range(n):
        columns.append([])

    maxrows = []
    for i in range(n):
        row = map(int, raw_input().split())
        maxrows.append(min(row))
        for j in range(n):
            columns[j].append(row[j])

    maxcolumns = map(max, columns)

    result = 0
    for c in columns:
        if max(c) in maxrows:
            result = max(c)
            
    print result
    
