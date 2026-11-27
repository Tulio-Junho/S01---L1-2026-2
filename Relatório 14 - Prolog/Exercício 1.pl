mestre(sasuke, boruto).
mestre(naruto, boruto).

aprendiz_de_elite(Ninja) :-
    (mestre(kakashi, Ninja); mestre(sasuke, Ninja)),
    (natureza(Ninja, raio); natureza(Ninja, fogo)).

    % Query: ?- aprendiz_de_elite(Ninja).
