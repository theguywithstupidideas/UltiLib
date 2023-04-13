#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int med(int a, int b, int c){
    return((a + b + c) / 3);
}

int medf(float a, float b, float c){
    return((a + b + c) / 3);
}

char* op(int a, int b){
    int ar[4];
    ar[0] = a + b;
    ar[1] = a - b;
    ar[2] = a * b;
    ar[3] = b != 0 ? a / b : 0;

    const int bufferSize = 4 * 12 + 1;
    char* buffer = (char*) malloc(bufferSize);
    if(buffer == NULL){
        return NULL;
    }

    buffer[0] = '\0';
    for(int i = 0; i < 4; i++){
        char numStr[12];
        sprintf(numStr, "%d", ar[i]);
        strcat(buffer, numStr);
        if(i != 4 - 1){
            strcat(buffer, " ");
        }
    }

    return buffer;
}

int arr(int a){
    int b;
    int pi = 3.15;
    b = pow(a, 2);
    return(b * pi);
}

char* __stdcall sw(int a, int b) {
    int c = a;
    a = b;
    b = c;
    char* result = malloc(12);
    if (result == NULL) {
        return NULL;
    }
    sprintf(result, "%d %d", a, b);
    return result;
}

char* ps(int a){
    int e[2];
    e[0] = a - 1;
    e[1] = a + 1;
    char* result = malloc(12);
    if (result == NULL) {
        return NULL;
    }
    sprintf(result, "%d %d", e[0], e[1]);
    return result;
}

int quad(int a){
    int b = pow((a/4), 2);
    return b;
}

int minn(int a, int b, bool c){
    switch(c){
        case true:
            if(a > b){
                return a;
            }

            else{
                return b;
            }
            break;

        case false:
            if(a > b){
                return b;
            }

            else{
                return a;
            }
            break;
    }
}

int com(int a){
    if(a >= 5 && a <= 30){
        return true;
    }
    else{
        return false;
    }
}

int tem(int a){
    if(a >= 0){
        return false;
    }
    else{
        return true;
    }
}

int ret(int a[2], int b[2]){
    int c[3], d[3];
    c[0] = a[0] * a[1];
    c[1] = (a[0] + a[1]) * 2;
    c[2] = c[0] + c[1];
    d[0] = b[0] * b[1];
    d[1] = (b[0] + b[1]) * 2;
    d[2] = d[0] + d[1];
    if(d[0] > c[0]){
        return true;
    }
    else{
        return false;
    }
}

int tri(int a, int b, int c){
    if(a == b && b == c){
        return 1;
    }
    if(a == b && a != c){
        return 2;
    }
    else{
        return 3;
    }
}

int pod(int a){
    if(a % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int* pod2(int a[4]){
    static int b[4];
    int c = 0;
    for(int i = 0; i < 4; i++){
        if(a[i] % 2 == 0){
            b[c] = a[i];
            c++;
        }
    }
    return b;
}

int* mom(int a[3]){
    static int b[3];
    int c = 0;
    for(int i = 0; i < 3; i++){
        if(a[c] > a[i]){
            a[i] = b[c];
            c++;
        }
    }
}

int inter(int a, int b, int c){
    if(c >= a && c <= b){
        return 0;
    }
    if(c > b){
        return 1;
    }
    else{
        return -1;
    }
}