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
    /*             //takes a letter and prints its ascii number, is it useful?????                           
   int main (){
    char c;             // has letters named c
    scanf("%c", &c);    // scans the c(character) and storres it at c
    printf("%d\n",c);   // %d takes the letter and prints its ascii number
  return 0;  */
}                                        
// will read an entire sentances until enter key is hit
 /* int main (){
    char str[1024];             // has letters named c
    scanf("%[^\n]s", str);    // scans the input text until enter is hit
    printf("%s",str);   // prints your whole sentance, white space included
  return 0;
  } */
 
 // this one prints the ascii characters of the numbers. (assessment run)
 /*int main (){
    int i;
    char str[1024];             // has letters named c
    scanf("%[^\n]s", str);    // scans the input text until enter is hit
    printf("%s\n",str);   // prints your whole sentance, white space included
    i = 0;
    while(str[i]!='\0'){            // prints the ascii numbers of the characters
        printf("%d ", str[i]);
        i++;
    } 
    // now need to take these numbers and make them between 65-90
    if (str[i]>=97 && str[i]<=122)
    { // takes all lower case letters and makes them upper case
        str[i]=str[i]-32;
        printf("\n%d", str[i]);  // check if it worked
        }
    // now need to make it between 65 and 90
    if (str[i]>=65 && str[i]<=90)
    { // takes all characters to 0-25
        str[i]=str[i]-65;
        printf("\n%d", str[i]);  // check if it worked
        }
        i++;
    }

        
  return 0;
  }*/
  int main (){
    int i;
    int k;
    char str[1024];             // has letters named c
    
    printf("enter the encryption key: ");  // enter the encryption key
    scanf("%d", &k);
    scanf("%[^\n]s", str);    // scans the input text until enter is hit
    printf("%s\n",str);   // prints your whole sentance, white space included
    i = 0;
    while(str[i]!='\0'){            // prints the ascii numbers of the characters
        printf("\n%d", str[i]);
        
     
    // now need to take these numbers and make them between 65-90
    if (str[i]>=97 && str[i]<=122)
    { // takes all lower case letters and makes them upper case
        str[i]=str[i]-32;
        printf("\n%d", str[i]);  // check if it worked
    }
    // now need to make it between 65 and 90
    if (str[i]>=65 && str[i]<=90)
    { // takes all characters to 0-25
        str[i]=str[i]-65;
        printf("\n%d", str[i]);  // check if it worked
        }
    // now take the 0-25 number and increment it by the key
    if (str[i]>=0 && str[i]<=25)
    { // takes all characters between 0-25 and increments the by the key
        str[i]=((str[i]+k)%26);
        printf("\n%d", str[i]);  // check if it worked
            
        }
        i++;  // gets next letter from string and puts it through the above
    }

  return 0;
  }

