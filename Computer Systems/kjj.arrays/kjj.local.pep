         BR      main        
num1:       .EQUATE 6           ;local variable #2d
num2:       .EQUATE 4           ;local variable #2d
num3:       .EQUATE 2           ;local variable #2d
num4:       .EQUATE 0           ;local variable #2d
;
main:    SUBSP   8,i         ;push #num1 #num2 #num3 #num4;
         DECI    num1,s      ;scanf(&num1, &num2, &num3, &num4)
         DECI    num2,s     
         DECI    num3,s
         DECI    num4,s 
         DECO    num4,s
         STRO    msg,d
         DECO    num3,s
         STRO    msg,d
         DECO    num2,s
         STRO    msg,d
         DECO    num1,s  
         ADDSP   8,i         ;pop #num1 #num2 #num3 #num4 ;
         STOP                
msg:     .ASCII  " "
         .END                  

           
