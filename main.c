/*
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
}   */
                                            //number 1, the rotation cipher encryption
    /*             //takes a letter and prints its ascii number, is it useful?????                           
   int main (){
    char c;             // has letters named c
    scanf("%c", &c);    // scans the c(character) and storres it at c
    printf("%d\n",c);   // %d takes the letter and prints its ascii number
  return 0;  */
                                       
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
 /* int main (){
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
  }*/
 /*
 this the the answer to the first question and it fucking works!!!!!!!!
   int main (){
    int i; 
    int k;
    char str[1024];             // has letters named c
    
    printf("enter the encryption key: ");  // enter the encryption key
    scanf("%d", &k);
    printf("enter message: "); // enter the message that will be incrypted
    scanf(" %[^\n]s", str);    // scans the input text until enter is hit
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
        // takes the encrypted number and adds 65 to make it the corresponding ascii character
        str[i]=str[i]+65;
        
        }
        i++;  // gets next letter from string and puts it through the above
    }
    
    printf("\n%s", str); // prints encrypted text to the screen

  return 0;
  } */
  // could mute the unnecessary prints in the final bit
  // decryption of the code with given key
 /*
 actual thing that fucking works!!!! Q2 answer
    int main (){
    int i;
    int k;
    char str[1024];             // has letters named c
    
    printf("enter the de-cryption key: ");  // enter the de-cryption key
    scanf("%d", &k);
    printf("enter message: "); // enter the message that will be de-crypted
    scanf(" %[^\n]s", str);    // scans the input text until enter is hit
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
        
            // now take the 0-25 number and increment it by the key (de-crypts it)
    if (str[i]>=0 && str[i]<=25)
    { // takes all characters between 0-25 and increments the by the key (de-crypts it)
        str[i]=((str[i]-k)%26); // de-crypts
        printf("\n%d", str[i]);  // check if it worked
        // takes the de-crypted number and adds 65 to make it the corresponding ascii character
        str[i]=str[i]+65;
        
        }
        i++;  // gets next letter from string and puts it through the above
    }
            printf("\n%s", str); // prints de-crypted text to the screen

  return 0;
  } */
 // question 3, 
 //works for all letters, must now solve the white space issue
 /*
 #include <stdio.h>
#include <string.h>

   int main (){
    int i; 
    int k;
    char str[1024];         // has letters named c
    
    
    printf("enter the encryption key: ");  // enter the encryption key
    scanf("%d", &k); 
    printf("enter message: "); // enter the message that will be incrypted
    scanf(" %[^\n]s", str);     // scans the input text until enter is hit
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
        
        // compares strings and does substution
        // intitalise string
         int ref[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}; //reference array used later to complete the substution
         int sub[26]={5,20,16,23,1,10,9,18,25,12,3,14,17,6,21,8,2,7,11,15,24,13,4,0,19,22}; //substution set used to encrypt the entered text
        
        // find number in reference string and record how far along it is, then go to the substution
        // string and go the same distance along it, then replace the first value with the substution value
       
        if(str[i]==ref[i]){  // compares the character to the reference string to find its location in the string
            str[i]=sub[i];   // uses the location to allocate the correct substution
        } else if(str[i]!=ref[i]){ 
       
       //takes the number and substutes it into the substution array
        if(i<26){  
           k=str[i];  // takes the number from str and turns it to an integer
           str[i]=sub[k]; //uses the integer to locate the correct position in sub[] and substutes the number accordingly
        
     
            
        
        
        printf("\n%d", str[i]);  // check if it worked
        // takes the encrypted number and adds 65 to make it the corresponding ascii character
        str[i]=str[i]+65;
        
        }
        i++;  // gets next letter from string and puts it through the above
    }
    
    printf("\n%s", str); // prints encrypted text to the screen

  return 0;
  } 
  */
  //Q3 solved with NO WHITE SPACE ISSUE !!!!!!
 /*  #include <stdio.h>
#include <string.h>

   int main (){
    int i; 
    int k;
    char str[1024];         // has letters named c
    
    

    printf("enter message: "); // enter the message that will be incrypted
    scanf(" %[^\n]s", str);     // scans the input text until enter is hit
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
        
        

        
        
        // intitalise string
         int ref[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}; //reference array used later to complete the substution
         int sub[26]={5,20,16,23,1,10,9,18,25,12,3,14,17,6,21,8,2,7,11,15,24,13,4,0,19,22}; //substution set used to encrypt the entered text
        

        
                // use a switch case to manually substute each number
        
        switch (str[i])
        {
            case 0: str[i]=5;
                printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                str[i]=str[i]+65;
                break;
            case 1: str[i]=20;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 2: str[i]=16;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;                        
                break;
            case 3: str[i]=23;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 4: str[i]=1;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 5: str[i]=10;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 6: str[i]=9;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 7: str[i]=18;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 8: str[i]=25;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 9: str[i]=12;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 10: str[i]=3;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 11: str[i]=14;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 12: str[i]=17;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 13: str[i]=6;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 14: str[i]=21;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 15: str[i]=8;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 16: str[i]=2;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 17: str[i]=7;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 18: str[i]=11;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 19: str[i]=15;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 20: str[i]=24;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 21: str[i]=13;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 22: str[i]=4;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 23: str[i]=0;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 24: str[i]=19;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 25: str[i]=22;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
                
            default: str[i]=str[i];   // this send all white space through without getting 'encrypted'
                break;

        
        }
        i++;  // gets next letter from string and puts it through the above
    }
    
    printf("\n%s", str); // prints encrypted text to the screen

  return 0;
  } */
  
 
 
 // Q4 SOLVED WITH NO WHITE SPACE ISSUE!!!!
 /*  #include <stdio.h>
#include <string.h>

   int main (){
    int i; 
    int k;
    char str[1024];         // has letters named c
    
    

    printf("enter message: "); // enter the message that will be de-crypted
    scanf(" %[^\n]s", str);     // scans the input text until enter is hit
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
        
    
        // intitalise string
         int ref[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}; //reference array used later to complete the substution
         int sub[26]={5,20,16,23,1,10,9,18,25,12,3,14,17,6,21,8,2,7,11,15,24,13,4,0,19,22}; //substution set used to de-crypte the entered text
        

           
        // use a switch case to manually substute each number
        
        switch (str[i])
        {
            case 0: str[i]=23;
                printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                str[i]=str[i]+65;
                break;
            case 1: str[i]=4;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 2: str[i]=16;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;                        
                break;
            case 3: str[i]=10;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 4: str[i]=22;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 5: str[i]=0;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 6: str[i]=13;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 7: str[i]=17;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 8: str[i]=15;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 9: str[i]=6;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 10: str[i]=5;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 11: str[i]=18;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 12: str[i]=9;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 13: str[i]=21;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 14: str[i]=11;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 15: str[i]=19;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 16: str[i]=2;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 17: str[i]=12;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 18: str[i]=7;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 19: str[i]=24;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 20: str[i]=1;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 21: str[i]=14;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 22: str[i]=25;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 23: str[i]=3;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 24: str[i]=20;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
            case 25: str[i]=8;
                    printf("\n%d", str[i]);  // check if it worked
                                            // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
                break;
                
            default: str[i]=str[i];   // this send all white space through without getting 'de-crypted'
                break;

        }
        i++;  // gets next letter from string and puts it through the above
    }
    
    printf("\n%s", str); // prints de-crypted text to the screen

  return 0;
  } */
  
  //questions 1-4 with the user interface, ready for che test
#include <stdio.h>
#include <string.h>
// the starting user interface, where you select what your going to do
 int main()
{
    int i; 
    int k;
    char str[1024];             // has letters named c
    
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
        case 1: printf("you have selected option 1\n"); //this case runs the rotation cipher encryption 
        
                printf("enter the encryption key: ");  // enter the encryption key into the computer
                scanf("%d", &k);            // this scans the input text and stores it in location k
                printf("enter message: "); // enter the message that will be incrypted
                scanf(" %[^\n]s", str);    // scans the input text until enter is hit
                printf("%s\n",str);   // prints your whole sentance, white space included
                i = 0;
                while(str[i]!='\0'){            
                    printf("\n%d", str[i]);     // prints the ascii numbers of the characters
     
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
        // takes the encrypted number and adds 65 to make it the corresponding ascii character
                    str[i]=str[i]+65;
        
        }
        i++;  // gets next letter from string and puts it through the above


    
    printf("\n%s", str); // prints encrypted text to the screen
                }
 
            break;
            
        case 2: printf("you have selected option 2\n");  // this case runs the rotation cipher de-cryption
        
                printf("enter the de-cryption key: ");  // enter the de-cryption key
                scanf("%d", &k);
                printf("enter message: "); // enter the message that will be de-crypted
                scanf(" %[^\n]s", str);    // scans the input text until enter is hit
                printf("%s\n",str);   // prints your whole sentance, white space included
                i = 0;
                while(str[i]!='\0'){            
                    printf("\n%d", str[i]);     // prints the ascii numbers of the characters
        
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
                // now take the 0-25 number and increment it by the key (de-crypts it)
                        if (str[i]>=0 && str[i]<=25)
                            { // takes all characters between 0-25 and increments the by the key (de-crypts it)
                            str[i]=((str[i]-k)%26); // de-crypts
                            printf("\n%d", str[i]);  // check if it worked
                // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                            }
                     i++;    // gets next letter from string and puts it through the above
    }
                printf("\n%s", str); // prints de-crypted text to the screen
            
            break;
            
        case 3: printf("you have selected option 3\n");  //this runs the substution cipher encryption
        
                printf("enter message: "); // enter the message that will be incrypted
                scanf(" %[^\n]s", str);     // scans the input text until enter is hit
                printf("%s\n",str);   // prints your whole sentance, white space included
                i = 0;
                while(str[i]!='\0'){            
                    printf("\n%d", str[i]);     // prints the ascii numbers of the characters
        
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
        
                // intitalise strings, good reference (this is the substution that the program will use)
            // ref[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}; //reference array used later to complete the substution
            //int sub[26]={5,20,16,23,1,10,9,18,25,12,3,14,17,6,21,8,2,7,11,15,24,13,4,0,19,22}; //substution set used to encrypt the entered text
        
                // use a switch case to manually substute each number
    
                switch (str[i])
                {
                    case 0: str[i]=5;
                        printf("\n%d", str[i]);  // check if it worked
                                                // takes the encrypted number and adds 65 to make it the corresponding ascii character
                        str[i]=str[i]+65;
                        break;
                    case 1: str[i]=20;
                            printf("\n%d", str[i]);  // check if it worked
                                                // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 2: str[i]=16;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;                        
                        break;
                    case 3: str[i]=23;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 4: str[i]=1;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 5: str[i]=10;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 6: str[i]=9;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 7: str[i]=18;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 8: str[i]=25;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 9: str[i]=12;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 10: str[i]=3;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 11: str[i]=14;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 12: str[i]=17;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 13: str[i]=6;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 14: str[i]=21;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 15: str[i]=8;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 16: str[i]=2;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 17: str[i]=7;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 18: str[i]=11;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 19: str[i]=15;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 20: str[i]=24;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 21: str[i]=13;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 22: str[i]=4;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 23: str[i]=0;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 24: str[i]=19;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 25: str[i]=22;
                        printf("\n%d", str[i]);  // check if it worked
                                                // takes the encrypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                
                    default: str[i]=str[i];   // this send all white space through without getting 'encrypted'
                        break;
                }
            i++;  // gets next letter from string and puts it through the above
        }
        printf("\n%s", str); // prints encrypted text to the screen
        
            break;
            
        case 4: printf("you have selected option 4\n");  //this runs the substution cipher decryption (same key as above)
                
                printf("enter message: "); // enter the message that will be de-crypted
                scanf(" %[^\n]s", str);     // scans the input text until enter is hit
                printf("%s\n",str);   // prints your whole sentance, white space included
                i = 0;
                while(str[i]!='\0'){            
                    printf("\n%d", str[i]);     // prints the ascii numbers of the characters
        
     
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

                // intitalise string, (this is the substution that the program will use)
                //int ref[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25}; //reference array used later to complete the substution
                //int sub[26]={5,20,16,23,1,10,9,18,25,12,3,14,17,6,21,8,2,7,11,15,24,13,4,0,19,22}; //substution set used to de-crypte the entered text
         
                // use a switch case to manually substute each number
        
                switch (str[i])
                {
                    case 0: str[i]=23;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 1: str[i]=4;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 2: str[i]=16;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;                        
                        break;
                    case 3: str[i]=10;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 4: str[i]=22;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 5: str[i]=0;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 6: str[i]=13;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 7: str[i]=17;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 8: str[i]=15;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 9: str[i]=6;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 10: str[i]=5;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 11: str[i]=18;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 12: str[i]=9;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 13: str[i]=21;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 14: str[i]=11;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 15: str[i]=19;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 16: str[i]=2;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 17: str[i]=12;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 18: str[i]=7;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 19: str[i]=24;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 20: str[i]=1;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 21: str[i]=14;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 22: str[i]=25;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 23: str[i]=3;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 24: str[i]=20;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                    case 25: str[i]=8;
                            printf("\n%d", str[i]);  // check if it worked
                                                    // takes the de-crypted number and adds 65 to make it the corresponding ascii character
                            str[i]=str[i]+65;
                        break;
                
                    default: str[i]=str[i];   // this send all white space through without getting 'de-crypted'
                        break;

                }
            i++;  // gets next letter from string and puts it through the above
        }
    
        printf("\n%s", str); // prints de-crypted text to the screen
        
            break;
            
        case 5: printf("you have selected option 5\n");
            break;
        case 6: printf("you have selected option 6\n");
            break;
        default: printf("please select a vaild option");  // return to selection screen ?????
            break;
    }
    return 0;
} 
 

