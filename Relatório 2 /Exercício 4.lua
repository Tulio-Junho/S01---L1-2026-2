function calcularMedia(a, b)
    
    local media = (a + b)/2.0
    return media
end

function encontrarMaior(a, b)

    if a > b then
        return a 

    else
        return b

    end

end

function calcularDiferencaAbsoluta(a, b)

    if a > b then
        return a - b

    else
        return b - a

    end
end

function analisarNumeros(n1, n2, operacao)

    if operacao == "media" then
        return calcularMedia(n1, n2)
    
    elseif operacao == "maior" then
        return encontrarMaior(n1, n2)

    elseif operacao == "diferenca" then
        return calcularDiferencaAbsoluta(n1, n2)
        
    else
        return "Operacao invalida!"

    end
end

print("Digite o primeiro numero: ")
local primeiro = tonumber(io.read())

print("Digite o segundo numero: ")
local segundo = tonumber(io.read())

print("Digite a operacao: ")
local op = tostring(io.read())

print (analisarNumeros(primeiro, segundo, op))
