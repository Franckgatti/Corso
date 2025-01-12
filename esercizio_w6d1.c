#include <stdio.h>
#include <ctype.h>

int main() {
    char scelta;
    do {
        printf("BENVENUTO AL GIOCO DELL' EREDITA'\nScegli:\n");
        printf("A) Iniziare una nuova partita\nB) Uscire dal gioco\n");
        scanf("%c",&scelta);
        if (toupper(scelta) == 'A'){
           printf("Inserisci il tuo nome: ");
           char nome[50];
           scanf("%s", &nome);
           printf("In quale anno per l'Italia ebbe inizio la Seconda Guerra Mondiale?\n");
           printf("A) 1939\nB) 1940\nC) 1941\n");
           char risposta;
           scanf(" %c", &risposta);
           int punteggio = 0;
           if (toupper(risposta) == 'B'){
               printf("Risposta corretta!\n");
               punteggio = punteggio+1;     //oppure punteggio++;
           }
           else {
               printf("Risposta errata!\n"); 
           }
           
           printf("Qual è il fiume più lungo del mondo?\n");
           printf("A) Po\nB) Rio delle Amazzoni\nC) Nilo\n");
           scanf(" %c", &risposta);
           if (toupper(risposta) == 'C') {
               printf("Risposta corretta!\n");
               punteggio = punteggio+1;     //oppure punteggio++;
           }
           else {
               printf("Risposta errata!\n"); 
           }
           
           printf("In quale stato degli USA si trova la città di Los Angeles?\n");
           printf("A) Colorado\nB) California\nC) Illinois\n");
           scanf(" %c", &risposta);
           if (toupper(risposta) == 'B') {
               printf("Risposta corretta!\n");
               punteggio = punteggio+1;     //oppure punteggio++;
           }
           else {
               printf("Risposta errata!\n"); 
           }
           
           printf("Punteggio finale: %d\n", punteggio);
           
        }
        else if (toupper(scelta) == 'B') {
            printf ("Alla prossima");
        }
        else {
            printf("Scelta non valida. Riprova");
        }
        
    } while (toupper(scelta) != 'B');
    
   return 0;
    
    
}
