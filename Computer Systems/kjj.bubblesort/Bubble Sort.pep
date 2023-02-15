         BR      main        
a:       .BLOCK  2           ;global variable #2d
b:       .BLOCK  2           ;global variable #2d
c:       .BLOCK  2           ;global variable #2d
d:       .BLOCK  2           ;global variable #2d
j:       .EQUATE 0
k:       .EQUATE 4
;
;******* void swap(int *r, int *s)
r:       .EQUATE 6           ;formal parameter #2h
s:       .EQUATE 4           ;formal parameter #2h
temp:    .EQUATE 0           ;local variable #2d
swap:    SUBSP   2,i         ;push #temp
         LDWA    r,sf        ;temp = *r
         STWA    temp,s      
         LDWA    s,sf        ;*r = *s
         STWA    r,sf        
         LDWA    temp,s      ;*s = temp
         STWA    s,sf        
         ADDSP   2,i         ;pop #temp
         RET                 
;
;******* void order(int *x, int *y)
x:       .EQUATE 4           ;formal parameter #2h
y:       .EQUATE 2           ;formal parameter #2h
order:   LDWA    x,sf        ;if (*x > *y)
         CPWA    y,sf        
         BRLE    endIf       
         LDWA    x,s         ;move x
         STWA    -2,s        
         LDWA    y,s         ;move y
         STWA    -4,s        
         SUBSP   4,i         ;push #r #s
         CALL    swap        ;swap(x, y)
         ADDSP   4,i         ;pop #s #r
endIf:   RET                 
;
;******* main()
main:    DECI    a,d         ;scanf("%d", &a)
         DECI    b,d         ;scanf("%d", &b)
         DECI    c,d         ;scanf("%d", &c)
         DECI    d,d         ;scanf("%d", &d)
         
do:      LDWA    a,i         ;move &a
         STWA    -2,s        
         LDWA    b,i         ;move &b
         STWA    -4,s        
         SUBSP   4,i         ;push #x #y
         CALL    order       ;order(&a, &b)
         ADDSP   4,i         ;pop #y #x
         LDWA    b,i         ;move &b
         STWA    -2,s        
         LDWA    c,i         ;move &c
         STWA    -4,s        
         SUBSP   4,i         ;push #x #y
         CALL    order       ;order(&b, &c)
         ADDSP   4,i         ;pop #y #x
         LDWA    c,i         ;move &c
         STWA    -2,s        
         LDWA    d,i         ;move &d
         STWA    -4,s        
         SUBSP   4,i         ;push #x #y
         CALL    order       ;order(&c, &d)
         ADDSP   4,i         ;pop #y #x         

         LDWA    j,d         ;j++)
         ADDA    1,d         
         STWA    j,d  
while:   LDWA    k,d         ;while(k < j)
         CPWA    j,d
         BRLT    do

ra1:     ADDSP   4,i         ;pop #y #x
         ADDSP   4,i         ;pop #y #x
         ADDSP   4,i         ;pop #y #x
         DECO    a,d         ;, a
         STRO    msg3,d      
         DECO    b,d         ;, b)
         STRO    msg3,d
         DECO    c,d         ;, c
         STRO    msg3,d      
         DECO    d,d         ;, d)
         LDBA    '\n',i      
         STBA    charOut,d   
         STOP                
msg3:    .ASCII  ", \x00"    
         .END                  
