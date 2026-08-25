function filtrarMaiores(tabel, nu)

    for i = 1, #tabel do
        if nu < tabel[i] then
            print(tabel[i])
        end
    end
end

print("Quantos elementos voce gostaria de adicionar na sua tabela?")

local N = tonumber(io.read())

local tabela = {}

for i = 1, N do 
    print("Digite o elemento:")
    local n = tonumber(io.read())

    table.insert(tabela, n)
end

print("Digite o numero que voce gostaria de usar como parametro:")
local parametro = tonumber(io.read())

print("Os elementos maiores que " .. parametro .. " sao: ")
filtrarMaiores(tabela, parametro)
