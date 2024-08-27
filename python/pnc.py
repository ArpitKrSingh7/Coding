import random 

def choose():
    words = ['apple','banana','cherry','dragonfruit','elephant','flamingo','grape','honeydew','iguana','jellyfish','kite','lemon','mango','notebook','orange','parrot','quilt','rabbit','strawberry','tulip']    
    pick = random.choice(words)
    return pick

def jumble(word):
    y = "".join(random.sample(word,len(word)))
    return y
    

def display(pp1 , pp2):
    print("PLayer 1 point : " ,pp1,"Player 2 point :",pp2)
    
    if(pp1 > pp2):
        print("player 1 won !!!")
    else:
        if(pp2>pp1):
            print("Player 2 won !!! ")
        else:
            print("It's a draw !!")

def play():
    player1 = input("Enter the player 1 name : ")
    player2 = input("Enter the player 2 name : ")
    
    pp1 = 0
    pp2 = 0
    turn = 0
    while(1):
        
        #Computer's Work
        pick_word = choose()
        jumbled_word = jumble (pick_word)
        
        if(turn % 2 == 0):
            print("Player 1 Turn !! Word : -",jumbled_word)
            answer = input("Enter the word : ")
            
            if(answer == pick_word):
                pp1 = pp1 + 1
            else:
                print("Wrong Answer! Fuck off !! " + "I thought",pick_word)
                flag = input ("Do you want to continue?? y/n : ")
                if(flag == 'n'):
                    display(pp1 , pp2)
                    break
                    
                
                
        else:
            print("Player 2 Turn !! Word : -" ,jumbled_word)
            answer = input("Enter the word : ")
            
            if(answer == pick_word):
                pp2 = pp2 + 1
            else:
                print("Wrong Answer! Fuck off !! ")
                flag = input ("Do you want to continue?? y/n : ")
                if(flag == 'n'):
                    display(pp1 , pp2)
                    break
            
        turn = turn + 1
            
play()
