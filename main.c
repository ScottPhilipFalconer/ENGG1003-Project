#include <stdio.h>

int main()
{
    int option, key; //this line initialises 2 int variables.
    char word;
    
    /*----------------------------------------*/
    
    //the following block of code gives the user a choice of four options.
    //The user enters the desired options number.
    printf("Please choose an option:\n");
    printf("1. Rotation cypher encryption.\n2. Rotation cypher decryption.\n");
    printf("3. Substitution cypher encryption.\n4. Substitution cypher decryption.\n");
    scanf("%d", &option);
    //The program assigns the entered number to the integer variable option.
    //This allows the use of a switch case function.  
    
    /*----------------------------------------*/
    
    switch(option)
    {
        case 1:
            printf("\nYou have selected rotation cypher encryption.\n");
            printf("Please enter the rotation cypher key: \n");
            scanf("%d", &key);
            printf("Enter a word to be encrypted, in all capital letters: \n");
            scanf("%c", &word);
        
        case 2:
            printf("\nYou have selected rotation cypher decryption.\n");
            printf("Please enter the rotation cypher key: \n");
            scanf("%d", &key);
        
        case 3:
            printf("\nYou have selected substitution cypher encryption.\n");
        
        case 4:
            printf("\nYou have selected substitution cypher decryption.\n");
        
        default:
            printf("\nPlease select a valid option.");
    }
    
    //each task as different function
    //may need to move code around, not final order
    //must initialise all variables etc first
    //use arrays
    //A is ASCII code 65, Z is ASCII code 90
    //a is ASCII code 97, z is ASCII code 122
        //can subtract 32 from lower case to turn into upper case
        //a - 32 = A
    //potentially use switch function so can pick between decode, encode etc
    //comment student who previously failed ENGG1003 can understand
        //most lines need comment
        //large comment at top to explain what program does at high level
        //block comment above every function for explanation
        //describe program flow control
    //consistent indentation style
    
    
    /*------------------------------pass mark------------------------------*/
    
    
        /*--------------rotation cypher--------------*/
        
            //encryption
                //scan text to encode
                  /*  printf("Please enter a word to be encoded, in all upper case: \n"); //this line will print the enclosed text to the console with a space at the end
                    scanf("%c", &wordnumber); //this line will scan a word entered by the user, and store it as a character in the variable wordnumber
                    //repeat above lines until message complete
                    //potentially input 0 to end input
                    printf("Please enter the encryption key: \n"); //may lead with key, so only input once
                    scanf("%d", &enrotkey); //this line will scan a number entered by the user, and store in the integer enrotkey (encryption rotation key)
                    //read as string/char
                    //string will only be read until whitespace
                    //assign to variable/string/char
                //run encoding key provided
                    //during loop?
                    //number of letters offset
                    //create algorithm using key
                    //insert scanned input into algorithm
                    //store result in ?
                //print encoded text to console
                    printf("encoded text\noriginal input?\nkey?");

                
            //decryption
                //scan encoded text
                    printf("Please enter a word to be decoded, in all upper case: ");
                    //perhaps replace first with %d st/nd/rd/th
                    scanf("%c", &wordnumber);
                    //repeat above lines until message complete
                    //potentially input 0 to end input
                    printf("Please enter the decryption key: ");
                    scanf("%d", &derotkey);
                    //read as string/char
                    //string will only be read until whitespace
                    //assign to variable/string/char
                //run decoding key provided
                    //during loop?
                    //number of letters offset
                    //create algorithm using key
                    //insert scanned input into algorithm
                    //store result in ?
                //print decoded text to console
                    printf("decoded text\noriginal input?\nkey?");

                
        /*-------------------------------------------*/
        
        /*--------------substitution cypher--------------*/
        
            //encryption
                //scan text to encode
                    //scanf function
                    //user prompt
                    //one word at a time?
                    //input data upper case
                    //user prompt includes key?
                    //read as string/char
                    //string will only be read until whitespace
                    //assign to variable/string/char
                //run encoding using key provided
                    //during loop?
                    //create algorithm using key
                        //may be unwieldy
                        //each letter has its own substitution rule
                    //insert scanned input into algorithm
                    //store result in ?
                //print encoded text to console
                    //printf function
                    //print original input alongside encoded input?
                    //print key?
                
            //decryption
                //scan text to decode
                    //scanf function
                    //user prompt
                    //one word at a time?
                    //input data upper case
                    //user prompt includes key?
                    //read as string/char
                    //string will only be read until whitespace
                    //assign to variable/string/char
                //run decoding using key provided
                    //during loop?
                    //create algorithm using key
                        //may be unwieldy
                        //each letter has own substitution rule
                    //insert scanned input into algorithm
                    //store result in ?
                //print decoded text to console
                    //printf function
                    //print original input alongside encoded input?
                    //print key?
                
        /*-----------------------------------------------*/
        
        
    /*---------------------------------------------------------------------*/
    
    
    /*------------------------------advanced------------------------------*/
    
        /*--------------rotation cypher--------------*/
        
            //scan text to decode
                //whitespace issue if stored as string
                //one word at a time?
            //run decoding algorithm
                //can use spell checker algorithm
                //assumptions about common words/letters
                    //a, I, the etc
                //unknown key
                    //can potentially brute force the whole thing
                //letters will be offset by a constant number
                //need exit statement
                    //potentially related to spellchecker
            //print decoded text to console
            
        /*-------------------------------------------*/
        
        /*--------------substitution cypher--------------*/
        
            //scan text to decode
                //whitespace issue if stored as string
                //one word at a time?
            //run decoding algorithm
                //can use spellchecker algorithm
                //assumption about common words/letters
                    //a, I, the etc
                //unknown key
                //much more difficult than rotation cypher
                    //brute force common words and assume?
                    //assume e most common letter?
                    //look for known/assumed text eg weather reports in enigma?
                //need exit statement
                    //potentially related to spellchecker
            //print decoded text to console
            
        /*-----------------------------------------------*/
        
        
    /*--------------------------------------------------------------------*/
    
    
    return 0;
}
