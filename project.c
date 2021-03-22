#include<stdio.h>
int main()
{
    int num;
    printf("\nWelcome! Here you can get the information about all the elements of the PERIODIC TABLE.\n");
    printf("\nJust enter the atomic number of the element you want to get information about: ");
    scanf("%d" , &num);
    switch(num){
        case 1:printf("Name of element-  Hydrogen\nAtomic Mass- 1.008\nBlock- S\nPeriod- 1\n");
        printf("Group- 1\nSymbol- 'H'");
        break;
        case 2:printf("Name of element-  Helium\nAtomic mass- 4.003\nBlock- P\nPeriod- 1\n");
        printf("Group- 18\nSymbol- 'He'");
        break;
        case 3:printf("Name of element-  Lithium\nAtomic Mass- 6.941\nBlock- S\nPeriod- 2\n");
        printf("Group- 1\nSymbol- 'Li'");
        break;
        case 4:printf("Name of element-  Beryllium\nAtomic Mass- 9.012\nBlock- S\nPeriod- 2\n");
        printf("Group- 2\nSymbol- Be");
        break;
        case 5:printf("Name of element-  Boron\nAtomic Mass- 10.81\nBlock- P\nPeriod- 2\n");
        printf("Group- 13\nSymbol- 'B'");
        break;
        case 6:printf("Name of element-  Carbon\nAtomic Mass- 12.011\nBlock- P\nPeriod- 2\n");
        printf("Group-14\nSymbol- 'C'");
        break;
        case 7:printf("Name of element-  Nitrogen\nAtomic Mass- 14.007\nBlock- P\nPeriod- 2\n");
        printf("Group- 15\nSymbol- 'N'");
        break;
        case 8:printf("Name of element-  Oxygen\nAtomic Mass- 15.999\nBlock- P\nPeriod- 2\n");
        printf("Group- 16\nSymbol- 'O'");
        break;
        case 9:printf("Name of element-  Fluorine\nAtomic Mass- 18.998\nBlock- P\nPeriod- 2\n");
        printf("Group- 17\nSymbol- 'F'");
        break;
        case 10:printf("Name of element-  Neon\nAtomic Mass- 20.179\nBlock- P\nPeriod- 2\n");
        printf("Group- 18\nSymbol- 'Ne'");
        break;
        case 11:printf("Name of element-  Sodium\nAtomic Mass- 22.989\nBlock- S\nPeriod- 3\n");
        printf("Group- 1\nSymbol- 'Na'");
        break;
        case 12:printf("Name of element-  Magnesium\nAtomic Mass- 24.305\nBlock- S\nPeriod- 3\n");
        printf("Group- 2\nSymbol- 'Mg'");
        break;
        case 13:printf("Name of element-  Aluminium\nAtomic Mass- 26.981\nBlock- P\nPeriod- 3\n");
        printf("Group- 13\nSymbol- 'Al'");
        break;
        case 14:printf("Name of element-  Silicon\nAtomic Mass- 28.085\nBlock- P\nPeriod- 3\n");
        printf("Group- 14\nSymbol- 'Si'");
        break;
        case 15:printf("Name of element-  Phosphorus\nAtomic Mass- 30.973\nBlock- P\nPeriod- 3\n");
        printf("Group- 15\nSymbol- 'P'");
        break;
        case 16:printf("Name of element-  Sulphur\nAtomic Mass- 32.060\nBlock- P\nPeriod- 3\n");
        printf("Group- 16\nSymbol- 'S'");
        break;
        case 17:printf("Name of element-  Chlorine\nAtomic Mass- 35.453\nBlock- P\nPeriod- 3\n");
        printf("Group- 17\nSymbol- 'Cl'");
        break;
        case 18:printf("Name of element-  Argon\nAtomic Mass- 39.948\nBlock- P\nPeriod- 3\n");
        printf("Group- 18\nSymbol- 'Ar'");
        break;
        case 19:printf("Name of element-  Potassium\nAtomic Mass- 39.098\nBlock- S\nPeriod- 4\n");
        printf("Group- 1\nSymbol- 'K'");
        break;
        case 20:printf("Name of element-  Calcium\nAtomic Mass- 40.080\nBlock- S\nPeriod- 4\n");
        printf("Group- 2\nSymbol- 'Ca'");
        break;
        //continue from here.
        default:printf("Sorry, wrong input.");
    }
    printf("\n\nThank you!");
    
    return 0; 
}
