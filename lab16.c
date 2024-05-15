#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

typedef struct node node_t;
struct node {
    int val;
    node_t *next;
    node_t *prev;
};
typedef struct linker linker_t;
struct linker {
    node_t *list1;
    node_t *list2;
};
node_t *new_node(int val) { //создает новый узел с заданным значением.
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->val = val;
    new_node->next = NIL;
    new_node->prev = NIL;
    return new_node; //Новый узел возвращается из функции как результат.
}
void free_list(node_t *node) { //рекурсивно освобождает память, начиная с переданного узла.
    if (node) {
        free_list(node->next);
        free(node);
    }
}
void print_list(node_t *node) { // выводит значения всех узлов списка, начиная с переданного узла.
    while (node) {
        printf("%d <-> ", node->val);
        node = node->next;
    }
    printf("NULL\n");
}
int main() {
    node_t *list1 = NIL; //создаются два пустых списка list1 и list2.
    node_t *list2 = NIL;

    int val, N = 0;
    printf("Enter a sequence of integers (0 to end): ");
    while (1) {   //бесконечный цикл
        scanf("%d", &val);   // ввести числа для 1ого списка и 2ого, разделенные нулем. Каждое введенное число добавляется в конец списка.
        if (val == 0) {
            break;
        }
        N++;
        if (N % 2 == 0) {     //Если четным, то введенное число добавляется в list1, в противном случае в list2.
            if (list1 == NIL) {
                list1 = new_node(val);
            } else {
                node_t *current = list1;
                while (current->next != NIL) {
                    current = current->next;
                }
                current->next = new_node(val);
                current->next->prev = current; // Устанавливаем указатель prev на предыдущий узел
            }
        } else {
            if (list2 == NIL) {
                list2 = new_node(val);
            } else {
                node_t *current = list2;
                while (current->next != NIL) {
                    current = current->next;
                }
                current->next = new_node(val);
                current->next->prev = current; // Устанавливаем указатель prev на предыдущий узел
            }
        }
    }
    linker_t S;
    S.list1 = list1;
    S.list2 = list2;
    printf("List 1: ");
    print_list(S.list1);
    printf("List 2: ");
    print_list(S.list2);
    printf("N: %d\n", N);

     node_t *head = NULL;
    node_t *tail = NULL;

    

  for (int val = 1; val < 7; val++) {
        
        node_t *newNode = new_node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    node_t *current = head;
    printf("Custom List: ");
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");

    node_t *list_ptr = list1; // Указатель на начало 1ого списка
    node_t *list_ptr2 = list2; // Указатель на начало 2ого списка
    char key;
    while (1) {
        printf("Value list1: %d;  value list2: %d;  Addr prev: %p cur: %p next list1: %p ;next list2: %p \n", list_ptr->val, list_ptr2->val, list_ptr->prev, list_ptr, list_ptr->next, list_ptr2->next);
        scanf(" %c%*c", &key);

        if (key == 'a') {
            if (list_ptr->next)
                list_ptr = list_ptr->next;
            else
                printf("Can't go here: next is NULL\n");
        }else {
            printf("Exiting..\n");
            break;
        }if (key == 'a') {
            if (list_ptr2->next)
                list_ptr2 = list_ptr2->next;
            else
                printf("Can't go here: next is NULL\n");
        }else {
            printf("Exiting..\n");
            break;
        }
    }
    // Освобождение памяти
    free_list(S.list1);
    free_list(S.list2);
    return 0;
}



