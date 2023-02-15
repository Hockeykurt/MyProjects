         BR      main        
limit:   .EQUATE 4
number:  .EQUATE 0           
;
main:    DECI    number,d        
while:   LDWA    number,d    
         CPWA    limit,i 
         BRGT    endWh
         LDWA    number,d
         ADDA    1,i  
         STWA    number,d           
         DECO    number,d
         BR      while
endWh:   STOP                
         .END                  
