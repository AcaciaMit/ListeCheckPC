typedef enum utilisateur
{
	OUI,NON,PERSO,ABS

}User;
typedef struct machine
{
	char nom[100];
	char prenom[100];
	int numero; 

}MachineEtudidant;


char* allocation();
int* allocationTab(int dernier_numero);
int studentCount(char* txt);
void toLower(char *str);
int search(char *fichier);
int saisiNum(int numMax);
void name_number(char *fichier);
void presence(char* fichier, char* txt, int numero);
int Avis(char *option);
void check(char* fichier, char* txt, int numero, char* option);

