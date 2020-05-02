#include <stdio.h>

int main(){
    //ints can also store hex
    int size = 3;
    
    //short int
    short int small = 1;
    long int big = 2000000000;
    long int reallyBig = 20000000L;
    //signed int can be negative or positive
    signed int notZero = 2;

    int rgb = 0xffef0d;
    
    //float is a decimal value. Specify f to make float as it'll be double as default
    float height = 4.5f;
    float exponential = 1.2e2f;
    
    //double is a large float
    double depth = 7.7;
    _Bool exists = 0;

    //single character instide single quotes. Double quotes is a string
    char name = 'a';

    //ascii value mapped to 65, in this case; 'A'
    char grade = 65;

    //user defined type, green is defined by 6
    enum RGBColours {red,green=6,blue};

    //my colour is red! Represented as the number 0 (first in the list)
    enum RGBColours myColour = red;
    
    //escape chars
    char a = '\a'; // alert
    char b = '\b'; // backspace
    char f = '\f'; // form feed
    char n = '\n'; // newline
    char r = '\r'; // carriage return
    char t = '\t'; // horizontal tab
    char v = '\v'; // verticle tab
    char backslash = '\\'; // backslash
    char quote = '\''; // single quote
    char doubleQuote = '\"'; // double quote
    char questionMark = '\?'; // question mark
    // oct = '\0oo'; 
     // hex = '\xhh'
    

    return 0;
}