Dim codigo as integer
codigo = 4321

Dim resposta as integer

print "Digite o PIN de acesso"
input codigo

while codigo <> 4321
    print "PIN invalido. Tente novamente."
    input codigo
wend

print "Transacao autorizada!"
Sleep
