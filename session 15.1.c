#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "leduc123@@duong";
    int countchartext = 0;   
    int countcharnumber = 0;  
    int countchark = 0;       
    int size = strlen(text);

    for (int i = 0; i < size; i++) {
        if (isalpha(text[i])) { 
            countchartext++;
        } else if (isdigit(text[i])) {  
            countcharnumber++;
        } else {  
            countchark++;
        }
    }

    printf("so ky tu la chu cai: %d\n", countchartext);
    printf("so ky tu la chu so: %d\n", countcharnumber);
    printf("So ky tu dac biet: %d\n", countchark);

    return 0;
}

