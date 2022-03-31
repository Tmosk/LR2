#include <stdio.h>
#include <time.h>
#include "Func.h"
int main() {
    setbuf(stdout, 0);
    srand(time(NULL));
    struct series *sList=NULL;
    int kol_vo=0;
    do {
        printf("Enter series number:\n");
        scanf_s("%d",&kol_vo);
    } while (kol_vo<=0);
    sList=generate(sList,kol_vo);
    print_list(sList,kol_vo);
    printf("\n/////////////////////////////\n\n");
    print_str(find_min(sList,kol_vo));
    printf("\n/////////////////////////////\n\n");
    delete_element(sList,&kol_vo,find_by_data_data(sList,kol_vo,"qwe\n"));
    print_list(sList,kol_vo);
    return 0;
}
