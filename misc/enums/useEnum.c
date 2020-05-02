#include <stdio.h>

enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

enum company  google = GOOGLE;
enum company xerox = XEROX;
enum company ebay = EBAY;


int main()
{
    printf("%d\n%d\n%d\n", xerox,google,ebay);
    return 0;
}
