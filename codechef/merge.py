def merge(a,b):
    a_len=len(a)
    b_len=len(b)
    array=[]
    i=0
    j=0
    while(i<a_len and j<b_len):
        if(a[i]>b[j]):
            array.append(b[j])
            j+=1
        else:
            array.append(a[i])
            i+=1
    while i<a_len:
        array.append(a[i])
        i+=1
    while j<b_len:
        array.append(b[j])
        j+=1
    return array
def merge_sort(arr):

    arr_len=len(arr)
    if(arr_len==1):return arr
    median=arr_len//2
    left_arr=merge_sort(arr[:median])
    right_arr=merge_sort(arr[median:])
    return merge(left_arr,right_arr)
    
a=[4,56,12,6,23,7,8]
array=merge_sort(a)
for i in array:
    print(i, end=' ')