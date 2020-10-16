for _ in range(int(input())):
    x, y = map(int, input().split())
    a, b = map(int, input().split())
    b = min(b, a + a)
    if x < y:
        x, y= y, x
    print(y * b + (x - y) * a)