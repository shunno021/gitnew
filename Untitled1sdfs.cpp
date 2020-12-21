#include<bits/stdc++.h>

using namespace std;

char * giveCopyOfArray(char array[], int size) {
                char copiedArray[size];

                for(int i=0;i<size; i++) {
                                copiedArray[i] = array[i];
                }

                return copiedArray;
}

 int main(void) {

                char ch[] = {'a', 'e', 'i', 'o', 'u'};

                char * copiedArray = giveCopyOfArray(ch, 5);

                for(int i=0;i<5; i++) {
                                printf("%c\n", copiedArray[i]);
                }

                return 0;
}
