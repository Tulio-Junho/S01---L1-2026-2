data Esboco = Esboco
  { titulo :: String
  , tecnica :: String
  , horas :: Int
  }

esbocoMaisRecente :: [Esboco] -> String
esbocoMaisRecente [] = "Caderno vazio"
esbocoMaisRecente (e:_) =
  titulo e ++ " - " ++ tecnica e

contarEsbocos :: [Esboco] -> Int
contarEsbocos [] = 0
contarEsbocos (_:xs) = 1 + contarEsbocos xs

horasDesenhando :: [Esboco] -> Int
horasDesenhando [] = 0
horasDesenhando (e:xs) =
  horas e + horasDesenhando xs

main :: IO ()
main = do
  let caderno =
        [ Esboco "Dragao" "Grafite" 3
        , Esboco "Castelo" "Nanquim" 5
        , Esboco "Floresta" "Carvao" 2
        ]

  putStrLn "Caderno original:"
  putStrLn (esbocoMaisRecente caderno)
  print (contarEsbocos caderno)
  print (horasDesenhando caderno)

  putStrLn "Caderno vazio:"
  putStrLn (esbocoMaisRecente [])

  let novoCaderno =
        Esboco "Cavaleiro" "Grafite" 4 : caderno

  putStrLn "Caderno novo:"
  putStrLn (esbocoMaisRecente novoCaderno)
  print (contarEsbocos novoCaderno)

  putStrLn "Caderno original novamente:"
  putStrLn (esbocoMaisRecente caderno)
  print (contarEsbocos caderno)

  -- print (titulo (head ([] :: [Esboco])))
