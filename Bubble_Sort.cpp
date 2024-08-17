//Bubble Sort


#include <iostream>
int main() {
    int temp;
    int num[]={8,9,4,3,2,1,5,6,7,0};
    int size=sizeof(num)/sizeof(num[0]);
    for (int i=0;i<size;i++) {
        for (int j=0;j<size-i-1;j++) {
            if (num[j]>num[j+1]) {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for (int numbers:num) {
        std::cout<<numbers<<" ";
    }
    return 0;
}