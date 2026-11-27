ninja_versatil(Ninja) :-
    natureza(Ninja, X),
    natureza(Ninja, Y),
    X \= Y,
    vila(Ninja, konoha).

% Query: ?- ninja_versatil(Ninja).
