# -*- coding: utf-8 -*-

import sys

'''

'''


def func():
    '''

    '''

    def dfs(result, current, visited, t, road, end):
        print result, current, visited, t

        if current == end:
            print visited
            if len(t) < len(visited) - 1:
                return 10000
                
            dist = []
            
            for i in range(len(visited) - 1):
                dist.append(road[visited[i]][visited[i+1]])
            dist.sort()
            dist.reverse()
                
            print dist
            for i in range(len(dist)):
                dist[i] = float(dist[i]) / t[i]
            print dist

            if sum(dist) < result:
                result = sum(dist)
                
            return result


        for j in range(m):
            if road[current][j] < 10000 and (not j in visited):
                res = dfs(result, j, visited + [j], t, road, end)
                if res == 10000:
                    continue
                else:
                    return res
        else:
            return 10000

    while True:
        n, m, p, a, b = map(int, raw_input().split())
        if n == 0 and m == 0 and p == 0 and a == 0 and b == 0:
            break

        t = map(int, raw_input().split())
        t.sort()
        t.reverse()

        road = [[10000 for j in range(m)] for i in range(m)]
        for i in range(p):
            x, y, z = map(int, raw_input().split())

            road[x-1][y-1] = z

            road[y-1][x-1] = z

        res = dfs(10000, a-1, [a-1], t, road, b-1)
        
        if res == 10000:
            print 'Impossible'
        else:
            print res
        print

if __name__ == '__main__':
    func()
    
