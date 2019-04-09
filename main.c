#include <stdio.h>

int main()
{
    
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
                    printf("Please enter the first word to be encoded, in all upper case: "); 
                    //perhaps replace first with %d st/nd/rd/th
                    scanf("%c", &wordnumber);
                    //repeat above lines until message complete
                    //potentially input 0 to end input
                    //user prompt includes key?
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
                    printf("user prompt: ");
                    scanf("%c", &word);
                    //one word at a time?
                    //input data upper case
                    //user prompt includes key?
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
