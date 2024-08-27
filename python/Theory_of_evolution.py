import random

with open("experiment.txt","r+") as experiment:
    print(experiment.read())
    experiment.write("what")
experiment.close()



#random.randint(x,y) generates random values between x,y -- both inclusive!
print(random.randint(1,10))

#random.randrange(x,y) generates random values between x,y -- y not inclusive
print(random.randrange(1,10))

#random.random() generates random values betweeen 0 and 1 --- (Don't know about it's boundaries)
print(random.random())

#random.randrange(X,Y,2) generates EVEN or ODD Numbers in between depending on (X,Y) values
print(random.randrange(2,11,2))    #Generates Even Values!
print(random.randrange(1,10,2))    #Generates Odd values!