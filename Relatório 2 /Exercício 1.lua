function gerarTabelaPotencial(expI, expF, base)
    for i = expI, expF do
        print(base .. " ^ " .. i .. "=" .. base ^ i)
    end
end

print("Qual numero voce quer que seja a base?")

local base = tonumber(io.read())

print("Qual sera o expoente inicial?")

local expI = tonumber(io.read())

print("Qual sera o expoente final?")

local expF = tonumber(io.read())

gerarTabelaPotencial(expI, expF, base)
