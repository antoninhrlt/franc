# Ce fichier fait partie de "franc"
# Sous la licence MIT
# Droits d'auteur (c) 2022 Antonin Hérault

ESSAIS = $(wildcard *.c)
ESSAIS_BIN = $(patsubst %.c, bin/%.essai, $(ESSAIS))

essais : $(ESSAIS_BIN)

bin/%.essai : %.c
	$(CC) -o $@ -I ../ $< 
	@ echo "--- Lance l'essai $@"
	- ./$@
	@ echo "--- Fin de l'essai $@"
