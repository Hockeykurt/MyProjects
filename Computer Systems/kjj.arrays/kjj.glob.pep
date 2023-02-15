         BR      main        
num1:       .BLOCK 2           ;global variable #2d
num2:       .BLOCK 2           ;global variable #2d
num3:       .BLOCK 2           ;global variable #2d
num4:       .BLOCK 2           ;global variable #2d
;
main:    DECI    num1,d      ;scanf(&num1, &num2, &num3, &num4)
         DECI    num2,d     
         DECI    num3,d
         DECI    num4,d 
         DECO    num4,d
         STRO    msg,d
         LDWA    num3,d
         DECO    num3,d
         STRO    msg,d
         LDWA    num2,d
         DECO    num2,d
         STRO    msg,d
         LDWA    num1,d
         DECO    num1,d  
         STOP                
msg:     .ASCII  " "
         .END                  

           
