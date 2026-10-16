class Persona:

    def __init__(self, nome: str, arcano: str):
        self.nome = nome
        self.arcano = arcano

    def invocar(self):
        print(f"Persona: {self.nome} | Arcano: {self.arcano}")


class Aliado:

    def __init__(self, nome: str, codinome: str):
        self.nome = nome
        self.codinome = codinome


class Lider:

    def __init__(self, codinome: str):
        self.codinome = codinome
        self.persona = Persona("Arsene", "Louco")
        self.lista_equipe = []

    def recrutar(self, aliado: Aliado):
        self.lista_equipe.append(aliado)

    def infiltrar(self, palacio):
        print(f"Palácio de {palacio} invadido!")
        self.persona.invocar()

        print("Equipe:")
        for aliado in self.lista_equipe:
            print(f"{aliado.codinome} ({aliado.nome})")


if __name__ == "__main__":

    ryuji = Aliado("Ryuji Sakamoto", "Skull")
    ann = Aliado("Ann Takamaki", "Panther")

    joker = Lider("Joker")

    joker.recrutar(ryuji)
    joker.recrutar(ann)

    joker.infiltrar("Kamoshida")

