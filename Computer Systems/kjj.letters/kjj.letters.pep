            BR      main
letter: .BLOCK   1           ;global variable #1c        
upper:  .BLOCK   2           ;global variable #2d        
;
bigLettr:LDBA    charIn,d
         STBA    letter,d
         LDBA    letter,d    
         SUBA    32,i
         STBA    upper,d
         STBA    charOut,d
         STRO    space,d
         RET
space:   .ASCII  " \x00"
;
main:    CALL    bigLettr
         CALL    bigLettr
         CALL    bigLettr    
         STOP
         .END    
