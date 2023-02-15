

Grammer = [["P","E"],["E","T","E'"],["E'","*","T","E'"],["E'","ɛ"],["T","F","T'"],["T'","*","F", "T'"],["T'","ɛ"],["F","(","E",")"],["F","int"]]
Table = [["P","int",1],["P","(",1],["E","int",2],["E","(",2],["E'","+",3],["E'",")",4],["E'","$",4],["T","int",5],["T","(",5],["T'","+",7],["T'","*",6],["T'",")",7],["T'","$",7],["F","int",9],["F","(",8]]

Stack = ["P", "$"]
Input = ["int", "*", "int", "$"]
rule=0

inputCount=0
c=Input[inputCount]
print(f"Input: {Input}")
print("Stack:")
print(Stack)

while(len(Stack)!=0):
    x=Stack[0]
    for w in Table:
        if (w[0]==x and w[1]==c):
            rule=w[2]
            break
    if (x==c):
        Stack.pop(0)
        if(c!="$"):
            inputCount=inputCount+1
            c=Input[inputCount]
        else:
            break
    elif(rule!=0):
        Stack.pop(0)
        if(c=="$"):
            print(Stack)
            continue
        for o in range(len(Grammer[rule-1]), 1, -1):
            Stack.insert(0, Grammer[rule-1][o-1])
    else:
        print("Error")
        break
    print(Stack)
    
    
    
    
    
    

