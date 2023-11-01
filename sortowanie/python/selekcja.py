import random
n = []

def losuj():
    for _ in range (10):
        x = random.randint(0, 99)
        n.append(x)
    print(n)

def sortuj():
    for i in range (10):
        nm=i
        for j in range (i,10):
            if n[j]<n[nm]:
                nm=j
        m=n[i]
        n[i]=n[nm]   
        n[nm]=m
                
                
                
losuj()            
sortuj()
print(n)
