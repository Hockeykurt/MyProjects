         BR      main        
limit:   .EQUATE 0         
num:     .EQUATE 0           
;
main:    SUBSP   2,i         
         DECI    num,s      
if:      LDWA    num,s       
         ANDA    limit,i     
         BREQ    else        
         STRO    msg1,d      
         BR      endIf       
else:    STRO    msg2,d      
endIf:   ADDSP   2,i        
         STOP                
msg1:    .ASCII  "Even\n\x00"
msg2:    .ASCII  "Odd\n\x00" 
         .END                  
