import numpy as np
mat1i,mat1j=map(int,input().split())
mat1=np.array([int(i) for i in input().split()])
mat1=mat1.reshape(mat1i,mat1j)
print(mat1)
mat2i,mat2j=map(int,input().split())
mat2=np.array([int(i) for i in input().split()])
mat2=mat2.reshape(mat2i,mat2j)
print(mat2)
temp=[]
tempmat=mat2.transpose()
print(tempmat)
l=[]
for i in range(mat1i) :
    for j in range(mat2j) :
        sum=0
        for k in range(mat2i) :
            sum=sum+mat1[i][k]*tempmat[j][k]
        l.append(sum)
print(l)
mat3=np.array(l)
mat3=mat3.reshape(mat1i,mat2j)
print(mat3)
