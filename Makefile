CXX = g++
CFLAGS=-g -std=c++11 #pour pouvoir débugguer, ne pas modifier

all: exec
# indique quelle cible sera construite par un 'make' sans arguments. Ici, taper
# simplement 'make' construira le programme 'occurrences'.
# Quand vous passerez aux exercices suivants, vous changerez la cible
# pointée par 'all'.

exec: Cell.o Main.o
	@g++ $(CFLAGS) -Wall -o $@ $^

# lier l'exécutable 'occurrences' à partir des fichiers objet les .o et
# La variable "$@" correspond au nom de la cible (ici 'occurrences',
# et la variable '$^' reprend toutes les dépendances, ici Occurrences.o et
# OccurrencesMain.o

%.o: %.cpp %.hpp
	$(CXX) $(CFLAGS) -Wall -c $<
# Cette cible essaie de construire les fichiers objets (%.o) à partir
# d'un fichier .cpp et d'un fichier .hpp avec le même nom.  La
# variable '$<' correspond aux dépendances
# Grâce à cette cible, vous n'avez pas besoin d'écrire une cible pour
# chaque fichier que vous allez créer.

%.o: %.cpp
	$(CXX) $(CFLAGS) -Wall -c $<
# Cette cible est similaire à la précédente, mais pour les fichiers qui n'ont
# pas de .hpp associé.

clean:
	rm *~ *.o exec
# nettoyage par make clean
