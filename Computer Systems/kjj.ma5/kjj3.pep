         BR      main
amt:    .BLOCK   2
num:    .BLOCK   2
sum:    .BLOCK   2
main:    LDWA    20000,i
         STWA    amt,d
         DECI    num,d 
         LDWA    num,d
         ADDA    amt,d
         STWA    sum,d
         DECO    sum,d
         STOP                       
         .END                  
