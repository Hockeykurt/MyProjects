#Part 1
NFA = [[0,'a',1],[1,'e',2],[2,'e',3],[2,'e',13],[3,'e',4],[3,'e',8],[4,'c',5],[5,'o',6],[6,'w',7],[7,'e',12],[8,'c',9],[9,'a',10],[10,'t',11],[11,'e',12],[12,'e',13],[13,'e',2]]

#Save list to file
file=open('NFA.txt', mode='a')
for i in range(len(NFA)):
    for j in range(len(NFA[i])):
        stringList = str(NFA[i][j])
        file.write(stringList)
        if(j!=len(NFA[i])-1):
            file.write(',')
    file.write('\n')
file.close()

#Read file to list
file2=open('NFA.txt')
string=file2.read()
dataStructure=string.split()
file2.close()

#Convert list to list of a list
def extractDigits(dataStructure):
    res = []
    for el in dataStructure:
        sub = el.split(',')
        res.append(sub)
    return(res)
NewNFA = extractDigits(dataStructure)

#print
for q in range(len(NewNFA)):
    print(NewNFA[q])
print()


#Part 2
Eclosure = []
temp = []
difference=0
loop=False

for o in range(len(NewNFA)):
    p=0
    if NewNFA[o][0]==NewNFA[o-1][0]:
        continue
    while p<len(NewNFA):
        if NewNFA[o][2]==NewNFA[p][0] and NewNFA[o][1]=='e':
            temp.append(int(NewNFA[o][2]))
            if NewNFA[p][1]=='e':
                o=o+(p-o)
                temp.append(int(NewNFA[p][2]))
                if o>=15 and p>=15:
                    p=-1
            temp=list(set(temp))
            temp.sort()
            o=o+difference
            difference=0
            p+=1
        elif NewNFA[o][0]==NewNFA[p][0] and NewNFA[o][2]!=NewNFA[p][2]:
            temp.append(int(NewNFA[o][2]))
            temp.append(int(NewNFA[p][2]))
            temp=list(set(temp))
            temp.sort()
            difference+=1
            p+=1
        else:
            temp.append(int(NewNFA[o][0]))
            temp=list(set(temp))
            temp.sort()
            p+=1
    Eclosure.append(temp.copy())
    temp.clear()

#print
for w in range(len(Eclosure)):
    print(f"e-closure({w}): {Eclosure[w]}")
print()

#Part 3
DFA=[]
DFA.append(Eclosure[0].copy())

for p in range(1, len(Eclosure), 1):
    if not any(all(item in sublist for item in Eclosure[p]) for sublist in DFA): 
        if(Eclosure[p][0]==5):
            D2=[5,9]
            DFA.append(D2)
        else:
            DFA.append(Eclosure[p].copy())

#print
for t in range(len(DFA)):
    print(f"D{t}: {DFA[t]}")
print()


