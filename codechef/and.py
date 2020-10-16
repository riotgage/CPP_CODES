x=11
y=23
for i in range(0,51):
    print(i, end="\t")
    print((x&i)*(y&i))