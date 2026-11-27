rivais(A, B) :-
    mestre(M, A),
    mestre(M, B),
    A \= B,
    cla(A, C1),
    cla(B, C2),
    C1 \= C2.

    % Query: ?- rivais(naruto, B).
