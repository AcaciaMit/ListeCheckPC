#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"

int main()
{
	char nom[100];
	char fichier[50] = "./file.csv";
	char* txt = NULL;
	// char option[10];
	// int nb_eleve = 0,
	// 	numero = 0,
	// 	num = 0,
	// 	choix = 0;
	// txt = allocation();
	// nb_eleve = studentCount(txt);
	// num = search(fichier);	
	// numero = saisiNum(nb_eleve);
	// presence(fichier, txt, numero);
	// choix = Avis(option);
	// check(fichier, txt, option);

	name_number(fichier);

	//printf("%s\n", option);
	return (0);
}
