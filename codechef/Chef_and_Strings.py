test=int(input())
while test>0:
    n=int(input())
    sum=0
    a=[map(int,input().split())]
    f=a[0]
    for i in a[1:]:
        sum+=abs(f-i)-1
        f=i
    print(f)
    test-=1