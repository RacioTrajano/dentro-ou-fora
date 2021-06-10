#include <stdio.h>
// apareceu este comentário ?
// sim apareceu
// vamos ver se agora vai ?
// acho que deu certo ...
int main () {
int XE, YE, XD, YD;
int XP, YP;

scanf ("%d %d %d %d",&XE, &YE, &XD, &YD);
scanf ("%d %d", &XP, &YP);

if (XE < XD || YE > YD) { 
  if (XP >= XE || XP <= XD || YP >= YD || YP <= YE) {
      printf ("Dentro!");
    }
    else { printf ("Fora!");}
}
else if (XE < XD || YE < YD) {
    if (XP >= XE || XP <= XD || YP <= YD || YP >= YE) {
      printf ("Dentro!");
    }
    else {printf ("Fora!");}
}
else if (XE > XD || YE > YD) {
    if (XP <= XE || XP >= XD || YP >= YD || YP <= YE) {printf ("Dentro!");
    }
    else {printf ("Fora!");}
}
else if (XE > XD || YE < YD) {
    if (XP <= XE || XP >= XD || YP <= YD || YP >= YE) { printf ("Dentro!");
    }
    else {printf ("Fora!");}
}
else {printf (" error");}  



return 0;
}
