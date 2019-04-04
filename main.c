#include <stdio.h>
// the starting user interface, where you select what your going to do
 int main()
{
    int x;
    printf("For the encryption of a message with a rotation cipher given cipher text and rotation amount, enter 1\n");       //prints to secreen to prompt user to select an option
    printf("For decryption of a message encrypted with a rotation cipher given cipher text and rotation amount, enter 2\n"); //prints to secreen to prompt user to select an option
    printf("For encryption of a message with a substution cipher given message text and alphabet substution, enter 3\n");    //prints to secreen to prompt user to select an option
    printf("For decryption of a message encrypted with a substution cipher given cipher text and substutions, enter 4\n");   //prints to secreen to prompt user to select an option
    printf("For decryption of a message encrypted with a rotation cipher given cipher text only, enter 5\n");                //prints to secreen to prompt user to select an option
    printf("For decryption of a message encrypted with a substution cipher given cipher text only, enter 6\n");              //prints to secreen to prompt user to select an option
    scanf("%d", &x);   // sets value of x for the swich loop, allows program to select what it will be doing
    
    switch (x)          // chooses between the 6 options and proceeds with the selected option
    {
        case 1: printf("you have selected option 1");       
            break;
        case 2: printf("you have selected option 2");
            break;
        case 3: printf("you have selected option 3");
            break;
        case 4: printf("you have selected option 4");
            break;
        case 5: printf("you have selected option 5");
            break;
        case 6: printf("you have selected option 6");
            break;
        default: printf("please select a vaild option");  // return to selection screen ?????
            break;
    }
    return 0;
}  
                                            //number 1, the rotation cipher encryption
                 //takes a letter and prints its ascii number, is it useful?????                           
   /*int main (){
    char c;             // has letters named c
    scanf("%c", &c);    // scans the c(character) and storres it at c
    printf("%d\n",c);   // %d takes the letter and prints its ascii number
  return 0;  
}      */                                   
