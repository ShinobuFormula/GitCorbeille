#include <stdio.h>
#include <stdlib.h>

#define ExempleMsg() printf("Coucou \n"); // Macro sans param�tre//

#define ExempleAge(age) if (age >= 18) \
                                            printf("Vous etes majeur \n");  //Macro avec param�tres//


int main()
{

ExempleMsg()           //Appelle a macro sans param�tre//


ExempleAge(18)          //Apelle a macro avec param�tre//


return 0;
}
