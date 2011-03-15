#include <libintl.h>
#include <stdio.h>

#define PACKAGE	    "like"
#define LOCALEDIR   "/home/night/Test_Utility"

void love();

char *getname()
{
    static char name[128];
    
    printf( gettext("Input name : "));
    scanf("%s", name);
    return name;
}

int main ()
{
    char *str;
    setlocale( LC_ALL, " ");
    bindtextdomain( PACKAGE, LOCALEDIR);
    textdomain( PACKAGE );
    str = getname();
    printf( gettext(" hello \n"));
    printf("%s\n",str);
    //love();
    return 0;
}
