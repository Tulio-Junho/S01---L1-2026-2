# Esse foi legal, apenas obs para o corretor -> Judy > qualquer um

from abc import ABC, abstractmethod


class IUnidadeDeRede(ABC):

    @abstractmethod
    def executar_invasao(self):
        pass


class Cyberdeck:

    def __init__(self, modelo: str):
        self.modelo = modelo


class OperadorNetrunner(IUnidadeDeRede):

    def __init__(self, nome: str, modelo: str):
        self.nome = nome
        self.cyberdeck = Cyberdeck(modelo)

    def executar_invasao(self):
        print(f"{self.nome} usa o cyberdeck {self.cyberdeck.modelo} para quebrar o gelo (ICE) de um servidor.")


class DroneDeVigilancia(IUnidadeDeRede):

    def __init__(self, codigo: str):
        self.codigo = codigo

    def executar_invasao(self):
        print(f"Drone {self.codigo} está interceptando o sinal da rede.")


class CelulaHacker:

    def __init__(self, nome: str, membros: list[IUnidadeDeRede]):
        self.nome = nome
        self.membros = membros

    def iniciar_ataque(self):
        print(f"--- Célula Hacker: {self.nome} ---")

        for membro in self.membros:
            membro.executar_invasao()


if __name__ == "__main__":

    netrunner = OperadorNetrunner("V", "Arasaka Mk.5")
    drone = DroneDeVigilancia("D-07")

    celula = CelulaHacker("Fantasma", [netrunner, drone])

    celula.iniciar_ataque()
