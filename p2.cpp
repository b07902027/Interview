#include <iostream>
int main(){
    int input = 15, count = 0;
    for (int i = 1; i <= input; i++){
        if ((!(i % 3) || !(i % 5)) && (i % 15)){
            continue;
        }
        count++;
    }
    printf("%d\n",count);
}
