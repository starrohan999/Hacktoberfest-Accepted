import sys
sys.setrecursionlimit(1000000000)


def generateParenthesis(n):
    R = []

    def parens(pre, n, o):
        # print(pre, n, o)
        # o   is  open parens
        # n   is total parens
        # pre is prefix
        if n == 0:
            global cnt,val
            if cnt<val:
                
                print(pre)
                R.append(pre)
                # print(cnt)
                cnt+=1
            # R.append(pre)

        if o + 1 <= n - 1:
            
            parens(pre + '(', n - 1, o + 1)

        if o > 0 and n > 0:
            parens(pre + ')', n - 1, o - 1)

    parens('', n * 2, 0)
    return R

for _ in range(int(input())):
    n = int(input())
    val=n
    cnt=0
    lst=generateParenthesis(n)
    print(len(lst))
        # print(lst[i])
    # for i in range(n):
