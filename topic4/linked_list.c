#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct list {
    char name[10]; // data field
    int no; // data field
    struct list *link; // link field
};

int main() {
    struct list *lst, *prev, *head;
    
    struct list *lst_address[3];
    
    prev = NULL;
    
    for (int i = 0; i < 3; i++) {
        lst = (struct list *) malloc (sizeof(struct list));
        lst_address[i] = lst;
        
        printf ("%d번째 node를 입력 : ", i+1);
        scanf ("%s %d", lst->name, &(lst->no));
        // printf ("%s %d\n", lst->name, lst->no);
    
        if (prev == NULL) {
            prev = lst;
            head = lst;
        }
        
        else {
            prev->link = lst; 
            prev = lst;
            
            if (i == 2) {
                lst->link = NULL;
            }
        }
    }
    
    // for (int i = 0; i < 3; i++) {
    //     printf ("%s %d %p\n", lst_address[i]->name, lst_address[i]->no, lst_address[i]->link);
    // }
    
    // for (int i = 0; i < 3; i++) {
    //     printf ("%s %d %p deleted!\n", lst_address[i]->name, lst_address[i]->no, lst_address[i]->link);
    //     free(lst_address[i]);
    // }
    
    while (true) {
        struct list *p;
        
        if (head == NULL) {
            break;
        }
        
        // printf ("%s %d %p\n", head->name, head->no, head->link);
        p = head;
        head = head->link;
        
        printf ("%s %d %p deleted!\n", p->name, p->no, p->link);
        free(p);
    }
    
    return 0;
}