 GNU nano 8.4                                                                                                       try.c                                                                                                                 
#include <stdio.h>
#include <stdlib.h>

// Declare gets to avoid implicit function error
char *gets(char *);

// Force layout to prevent compiler reordering
struct Data {
    char buffer[20];
    int secret;
};

void get_flag() {
    printf("🎉 Flag: YOU_FOUND_THE_FLAG 🎉\n");
}

void check_input() {
    struct Data data;
    data.secret = 0;

    printf("Enter your input: ");
    gets(data.buffer);  // Deliberately unsafe

    if (data.secret == 0x1337) {
        get_flag();
    } else {
        printf("Sorry, try again later!!!!!\n");
    }
}

int main() {
    check_input();
    return 0;
}






