import random

def evolve(x):
    p = random.randrange(0,len(x))
    q = random.randint(1,100)
    
    if(q == 1):
        if(x[p] == 0):
            x[p] = 1
        else:
            x[p] = 0
        


with open("dna.txt","r+") as experiment:
    x = experiment.read()
    x = list(x)
experiment.close()



print(len(x))

for i in range(0,len(x)):
    evolve(x)

# print(x)
