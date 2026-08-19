Dim peso as single
' Usei single para maior precisão, tanto na pesagem, quanto na recomendação'

Dim quantidade as integer 
Dim meta as single

input peso, quantidade 

meta = peso * 35

if meta <= quantidade then
    print "Meta atingida!"

else  
    print "Meta nao atingida"    

end if
Sleep    
