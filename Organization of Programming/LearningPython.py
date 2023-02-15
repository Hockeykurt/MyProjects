
'''word = input ("PLEASE ENTER the word: ")
print(word)'''
n1 = int (input ("please enter the value for number 1: "))
n2 = float (input ("please enter the value for number 2: "))

sum_n1_n2 = n1 + n2
#print("the sum for ", n1, "+", n2, "=", sum_n1_n2)
print(f"the sum for  {n1} + {n2} = {sum_n1_n2}")

#if else statements
if n1>n2 : 
    print("n1")
elif n1==n2:
    print("n1=n2")
else:
    print("n2")


word = input ("PLEASE ENTER the word: ")
print(word+word)
print(word*3)
print("*"*10)

#for loops
for i in range(6):
    print(i)

for i in range(1,6, 2):
    print(i)

for i in range(10, 0, -1): #(start, end, count)
    print(i)

#while loop
flag =True
while flag: 
    x=int(input("input the number = "))
    if x<0:
        flag = False
        
    print(x)

#I dont remember
def fact(n):
    f=1
    for i in range(1,n+1):
        f=f*i
    return f
n=int (input("the value if n = "))
number , f = fact(n)
print("the factorial number for ", number, "is =", f)

#lists
list1 = ["Kurt", 33, 50.5, 100, [1,2,3]]

for i in range(len(list1)):
    print(list1[i])

for i in list1:
    print(list1[i])

print(list1)
print(list1[1][4])

print(list1[1:])
print(list1[:2])
print(list1[len(list1)::-1]) #[start:end:step]

#how to find a certain text within a lsit
filelist_["myfile.txt","myprogram.exe"]
for filename in filelist:
    if ".txt" in filename:
        print(filename)

#seperating text by text
sentence = input("enter a sentence: ")
listofwords=sentence.split()#leaving the () blanks default is space " ". do ('word')
print("there are", len(listofwords), "words.")
Sum = 0
for word in listofwords:
    Sum+=len(word)
print("the average word length is", Sum/len(listofwords))


filename.split('.')[-1] #splits only at the last '.'


#how to write in a file
stringout=input("input string =")
with open('accounts_ex_class.txt', mode='w') as accounts: #mode: w = write, r = read, a = append(writes at the end of the file), 
    accounts.write('100 jones 23.98\n')                     #    + = updating
    accounts.write('200 doe 345.67\n')
    accounts.write('300 white 0.00\n')
    accounts.write('400 stone -42.16\n')
    accounts.write('500 rich 224.62\n')
    accounts.write('600 kurt 1.11\n')
    print('600 jones 24.98', file=accounts)
    print('700 shadha 24', file=accounts)
    print(stringout,file=accounts)

#another way to open files
file=open("file.txt", "r")
file.close()

#make texts upper case and lower case
item.upper()
item.lower()


continue #returns back to the loop without executing the rest of the code within the loop
break #breaks out of the inner loop






































