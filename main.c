/*This program attempts to both encrypt and decrypt cyphers depending on the user's choice.
The user has two options to choose from initially, the rotation cypher or the substitution cypher.
The user must input a key for the rotation cypher, and a substitute alphabet for the substitution cypher.
Following this the user will input their message to be encrytped or decrypted.
The user then chooses whether to encrypt or decrypt the message, which is then printed to the console.*/






#include <stdio.h>

int main()
{
    /*----------------------------------------*/
    
    //The following two lines are the setup code.
    //These lines initialise the variables to be used in the program.
    int option, key, letter; //this line initialises 3 integer variables called "option", "key", and "letter", these will be used to store simple data.
    char text[100], substitute[26]; //this line initialises a character array called "text", and a similar but smaller array called "substitute", these will be used to store more complex or longer data.
    char alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //This line initialises a baseline alphabet for use with the substitution cypher.
    
    /*----------------------------------------*/
    
    //the following block of code gives the user a choice of four options.
    //The user enters the number corresponding to their desired option.
    printf("Please choose an option:\n");
    printf("1. Rotation cypher\n2. Substitution cypher\n");
    scanf("%d", &option);
    //The program assigns the entered number to the integer variable "option".
    //This allows the use of a switch case function.  
    
    /*----------------------------------------*/
    
    //The switch function allows for a basic menu system.
    //This lets the user choose the appropriate action.
    switch(option) //This line states that the switch function is dependant on the value for "option".
    {
        //Cases are determined by the number entered in the previous section, now stored in "option".
        case 1:
            //Case 1 is for a rotation cypher.
            //It prompts the user to enter data that will be used later.
            
            printf("You have selected rotation cypher.\n");
            printf("Please enter the rotation cypher key: \n");
            scanf("%d", &key); //This line scans the data entered and allaocates it to the int variable "key".
            printf("Please enter the message, in all capital letters and with no spaces: \n");
            scanf("%s", &text); //This line scans and allocates the data entered into the character array "text".
            printf("Select an option:\n");
            printf("1. Encrypt\n2. Decrypt\n");
            scanf("%d", &option); //This line leads to another switch function within case 1.
            
            switch(option) //The variable "option" has been overwritten for this new switch function.
            {
                //This switch function is purely output.
                //Depending on the previous input from the user it encrypts or decrypts.
                case 1:
                    //Case 1 here is for encryption of data.
                    //The initial setup "for" line defines the parameters of the integer "letter".
                    for(letter = 0; ((letter < 100) && (text[letter] != "\0")); letter++)
                        //As C begins counting from 0, the value of "letter" starts at 0.
                        //The variable is then defined to be within the parameters of the array size.
                        //Using the Boolean symbol for "and" the variable is defined to not be "\0" as well.
                        //Finally the variable "letter" is advanced in value by 1, assigning it to the next letter in the array.
                        if((text[letter] >= 65) && (text[letter] <= 90))
                        //65 and 90 are the ASCII values for A and Z respectively.
                        //The if statement here sets the bounds for the data to be any letter between A and Z.
                        {
                            text[letter] = text[letter] + key; //This formula uses the previously input "key" to calculate the value of each letter.
                            if(text[letter] > 90) //This is an internal if statement for if the value from the previous formula is greater than Z.
                            {
                                text[letter] = text[letter] - 90 + 65 - 1; //This allows the text to "wrap around" the end of the alphabet.
                            }
                        }
                        printf("Key: %d\n", key); //This line prints the key entered by the user previously, allowing to check it if the output is wrong.
                        printf("Encrypted text: %s\n", text); //This line prints the newly encrypted text as one continuous word.
                        return 0; //return 0 terminates the program.
                case 2:
                    //Case 2 is for decryption of data.
                    //The initial setup line is the same as in case 1.
                    for(letter = 0; ((letter < 100) && (text[letter] != "\0")); letter++)
                        if((text[letter] >= 65) && (text[letter] <= 90))
                        //This if statement is the same as in case 1.
                        {
                            text[letter] = text[letter] - key; //This formula is the reverse of case 1, allowing for decryption.
                            if(text[letter] < 65) //There is a possibility the value of a letter may be less than A, this if statement allows for that.
                            {
                                text[letter] = text[letter] + 90 - 65 + 1; //This line allows values less than A to "wrap around" the alphabet back to Z.
                            }
                        }
                        printf("Key: %d\n", key); //This line prints the key entered by the user.
                        printf("Decrypted text: %s\n", text); //This line prints the decrypted text.
                        return 0;
                default:
                    printf("Invalid option.\n"); //This line is printed if a number not presented as an option is entered, the program will end.
                    return 0;
            }
        //The following case 2 is for the intial switch function.    
        case 2:
            //Case 2 is for a substitution cypher.
            printf("You have selected substitution cypher.\n");
            printf("Please enter the substitute alphabet: \n");
            scanf("%s", &substitute); //This line scans and stores the data entered into the array "substitute".
            printf("Please enter the message, in all capital letters and with no spaces: \n");
            scanf("%s", &text); //This line scans and stores the data into the array "text".
            printf("Select an option:\n");
            printf("1. Encrypt\n2. Decrypt\n");
            scanf("%d", &option); //This line allows the user to input their preferred option.
            
            switch(option)
            {
                case 1: //This case was meant to encrypt the message given by the user.
                    for(letter = 0; ((letter < 100) && (text[letter] != "\0")); letter++)
                    //the initial for loop was meant to give the conditions for which the letters would be replaced.
                    //the for loop is incorrect, leading to incorrect encryptions.
                        alphabet[letter] = substitute[letter];//This line assigns the substitute alphabet letter by letter to the initialised standard alphabet.
                        text[letter] = alphabet[letter];//this line, when combined with the for loop, was meant to convert each letter in the text succesively to the new alphabet.
                    //through different combinations of command I realised my intial assumption of how the above loop would work was incorrect.
                    //It either prints the standard message, the substitute alphabet in order, or a combination of the two.
                    printf("%s", text);
                    return 0;
            }

        default:
            printf("Invalid option.\n");
    }

//The following is my inital pseudocode for the parts of this assessment I failed to complete.

    /*------------------------------pass mark------------------------------*/

        
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
