# cook your dish here
test=int(input())
while(test>0):
    n=int(input())
    arr=list(map(int,input().split()))
    arr=set(arr)
    print(len(arr))
    test-=1