         BR      main
num1:    .BLOCK  2
num2:    .BLOCK  2
main:    DECI    num1,d
         DECI    num2,d
         DECO    num2,d
         STRO    msg,d 
         DECO    num1,d 
         STOP  
msg:     .ASCII  " \x00"                     
         .END                  
