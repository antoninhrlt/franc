# Ce fichier fait partie de "franc"
# Sous la licence MIT
# Droits d'auteur (c) 2022 Antonin Hérault

_démarrage :
	mkdir -p essais/bin/

.PHONY : essais
essais: _démarrage
	$(MAKE) -C essais/

.PHONY : installe
installe :
	sudo mkdir -p /usr/include/franc
	sudo cp franc/* /usr/include/franc/
