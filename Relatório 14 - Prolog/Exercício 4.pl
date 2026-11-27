linhagem(M, D) :-
    mestre(M, D).

linhagem(M, D) :-
    mestre(M, Z),
    linhagem(Z, D).

    % Query: ?- linhagem(jiraiya, D).
