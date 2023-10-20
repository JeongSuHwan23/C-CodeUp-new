//이진탐색
#include <stdio.h>

int list[] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
int count;

int binary_search(int low, int high, int key){
    int middle;
    if(low<=high){
        middle = (low+high)/2;
        count++;
        if(key==list[middle]) return count;
        else if(key>list[middle]) return binary_search(middle+1, high, key);
        else if(key<list[middle]) return binary_search(low, middle-1, key);
    }
    return -1;
}

int main(){
    int result, key, n;
    scanf("%d", &key);
    n=sizeof(list)/sizeof(int);
    result = binary_search(0, n-1, key);
    if(result==-1) printf("Search Err");
    else printf("Search completed\nSearch count : %d", result);
    return 0;
}