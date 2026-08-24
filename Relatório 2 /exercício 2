function contarOcorrencias(tabela, alvo)
    
    local contador = 0
    
    for i = 1, #tabela do 
        if tabela[i] == alvo then
            contador = contador + 1 
        end
    end

    return contador

end

print("Quantos elementos voce gostaria de adicionar na sua tabela?")
local N = tonumber(io.read())

local tabelinha = {}

for i = 1, N do
    
    print("Qual numero gostaria de inserir?")
    local numero = tonumber(io.read())

    table.insert(tabelinha, numero)
end

print("Digite o numero que voce gostaria de achar")
local achado = tonumber(io.read())

local quantidade = contarOcorrencias(tabelinha, achado)

print("O numero " .. achado .. " aparece " .. quantidade .. " vez(es) na tabela")

