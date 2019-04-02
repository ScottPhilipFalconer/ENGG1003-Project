#include <stdio.h>

int main()
{
    
    //each task as different function
    //may need to move code around, not final order
    //must initialise all variables etc first
    //use arrays
    //A is ASCII code 65, Z is ASCII code 90
    //a is ASCII code 97, z is ASCII code 122
    //potentially switch menu so can pick between decode, encode etc
    
    
    /*------------------------------pass mark------------------------------*/
    
    
        /*--------------rotation cypher--------------*/
        
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
                //run encoding key provided
                    //during loop?
                    //number of letters offset
                    //create algorithm using key
                    //insert scanned input into algorithm
                    //store result in ?
                //print encoded text to console
                    //printf function
                    //print original input alongside encoded input?
                    //print key?
                
            //decryption
                //scan encoded text
                    //scanf function
                    //user prompt
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
                    //printf function
                    //print original input alongside encoded input?
                    //print key?
                
        /*-------------------------------------------*/
        
        /*--------------substitution cypher--------------*/
        
            //encryption
                //scan text to encode
                //run encoding algorithm provided
                //print encoded text to console
                
            //decryption
                //scan text to decode
                //run decoding algorithm provided
                //print decoded text to console
                
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
                    //
                //need exit statement
                    //potentially related to spellchecker
            //print decoded text to console
            
        /*-----------------------------------------------*/
        
        
    /*--------------------------------------------------------------------*/
    
    
    return 0;
}
