count=0
def can_extend(perm):
    i=len(perm)-1
    for j in range(i):
        if i-j==abs(perm[i]-perm[j]):
            return False
    return True
def generate_permutaiton(perm,n):
    if(len(perm)==n):
        print(perm)
        global count
        count+=1
        return
    for k in range(1,n+1):
        if k not in perm:
            perm.append(k)
            if(can_extend(perm)):
                generate_permutaiton(perm,n)
            perm.pop()
generate_permutaiton(perm=[],n=8)
print("Total Solutiosn: ",count)