#include <stdio.h>
#include <stdlib.h>

#define ExempleMsg() printf("Coucou \n"); // Macro sans paramètre//

#define ExempleAge(age) if (age >= 18) \
                                            printf("Vous etes majeur \n");  //Macro avec paramètres//


int main()
{

ExempleMsg()           //Appelle a macro sans paramètre//


ExempleAge(18)          //Apelle a macro avec paramètre//


return 0;
}
