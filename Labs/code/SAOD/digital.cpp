// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct tle {
//     tle *Next;
//     union {
//         Node data;
//         byte digit[sizeof(Node)];
//     }
// };

// Node *DigitalSort(Node *S, int L){
//  int j,i;
//  int d;
//  Node *p,*t;
//  tle Q[256];
//  bool b;
//  for (j=L-1;j>=0;j--) {
//      for (i=0;i<256;i++) Q[i].b=false;
//      p=S;         
//      while (p!=NULL) {
//            d=int(p->key[j])+128;         
//            if (!Q[d].b) {
//               Q[d].head=Q[d].tail=p;
//               Q[d].b=true;
//            } else {
//              Q[d].tail->next=p;
//              Q[d].tail=p;
//            }
//            p=p->next; 
//      }
//      b=false;
//      for (i=0;i<256;i++) {
//          if (Q[i].b) {
//             if (!b) {
//                t=Q[i].head;
//                b=true;
//             } else p->next=Q[i].head;
//             p=Q[i].tail;            
//          }
//      }
//      p->next=NULL;
//      S=t;
//  }
//  return S;
// }

// void push(struct Node** headRef, int newData) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = newData;
//     newNode->next = *headRef;
//     *headRef = newNode;
// }

// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
// }



// int main() {
//     struct Node* increasing = NULL;
//     struct Node* decreasing = NULL;
//     struct Node* random = NULL;

//     int i;
//     for (i = 1; i <= 10; i++) {
//         push(&increasing, i);
//     }

//     for (i = 10; i >= 1; i--) {
//         push(&decreasing, i);
//     }

//     for (i = 0; i < 10; i++) {
//         push(&random, rand() % 100);
//     }

//     printf("Before sorting:\n");
//     printf("Increasing list: ");
//     printList(increasing);

//     printf("\nDecreasing list: ");
//     printList(decreasing);

//     printf("\nRandom list: ");
//     printList(random);

    

//     printf("\n\nAfter sorting:\n");
//     printf("Increasing list: ");
//     printList(increasing);

//     printf("\nDecreasing list: ");
//     printList(decreasing);

//     printf("\nRandom list: ");
//     printList(random);

//     return 0;
// }

// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// struct Node {
//     int data;
//     struct Node* next;
// };

// Node *DigitalSort(Node *S, int L){
//     int j,i;
//     int d;
//     Node *p,*t;
//     tle Q[256];
//     bool b;
//     for (j=L-1;j>=0;j--) {
//         for (i=0;i<256;i++)
//             Q[i].b=false;
//         p=S;         
//         while (p!=NULL) {
//             d=int(p->key[j])+128;         
//             if (!Q[d].b) {
//                 Q[d].head=Q[d].tail=p;
//                 Q[d].b=true;
//             } 
//             else {
//                 Q[d].tail->next=p;
//                 Q[d].tail=p;
//             }
//             p=p->next; 
//         }
//         b=false;
//         for (i=0;i<256;i++) {
//             if (Q[i].b) {
//                 if (!b) {
//                     t=Q[i].head;
//                     b=true;
//                 } 
//                 else 
//                     p->next=Q[i].head;
//                 p=Q[i].tail;            
//             }
//         }
//         p->next=NULL;
//         S=t;
//     }
//     return S;
// }

// void push(struct Node** headRef, int newData) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = newData;
//     newNode->next = *headRef;
//     *headRef = newNode;
// }

// void printList(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* increasing = NULL;
//     struct Node* decreasing = NULL;
//     struct Node* random = NULL;
//     int i;
//     for (i = 1; i <= 10; i++) {
//         push(&increasing, i);
//     }
//     for (i = 10; i >= 1; i--) {
//         push(&decreasing, i);
//     }
//     for (i = 0; i < 10; i++) {
//         push(&random, rand() % 100);
//     }
//     printList(increasing);
//     printList(decreasing);
//     printList(random);

//     return 0;
// }

// struct Node {
//     int data;
//     struct Node next;
// };
// struct tle {
//     bool b;
//     Node head;
//     Node tail;
// };
// Node *DigitalSort(Node *S, int L){
//  int j,i;
//  int d;
//  Node *p,*t;
//  tle Q[256];
//  bool b;
//  for (j=L-1;j>=0;j--) {
//      for (i=0;i<256;i++) Q[i].b=false;
//      p=S;         
//      while (p!=NULL) {
//            d=int(p->key[j])+128;         
//            if (!Q[d].b) {
//               Q[d].head=Q[d].tail=p;
//               Q[d].b=true;
//            } else {
//              Q[d].tail->next=p;
//              Q[d].tail=p;
//            }
//            p=p->next; 
//      }
//      b=false;
//      for (i=0;i<256;i++) {
//          if (Q[i].b) {
//             if (!b) {
//                t=Q[i].head;
//                b=true;
//             } else p->next=Q[i].head;
//             p=Q[i].tail;            
//          }
//      }
//      p->next=NULL;
//      S=t;
//  }
//  return S;
// }
// void push(struct Node headRef, int newData) {
//     struct Node newNode = (struct Node)malloc(sizeof(struct Node));
//     newNode->data = newData;
//     newNode->next = headRef;
//     headRef = newNode;
// }
// void printList(struct Node node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
// }
// int main() {
//     srand(time(NULL));
//     struct Node increasing = NULL;
//     struct Node decreasing = NULL;
//     struct Node random = NULL;
//     int i;
//     for (i = 1; i <= 10; i++) {
//         push(&increasing, i);
//     }
//     for (i = 10; i >= 1; i--) {
//         push(&decreasing, i);
//     }
//     for (i = 0; i < 10; i++) {
//         push(&random, rand() % 100);
//     }
//     increasing = DigitalSort(increasing, sizeof(int));
//     decreasing = DigitalSort(decreasing, sizeof(int));
//     random = DigitalSort(random, sizeof(int));
//     printList(increasing);
//     printf("\n");
//     printList(decreasing);
//     printf("\n");
//     printList(random);

//     return 0;
// }
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

struct Node {
    int data;
    struct Node* next;
};

struct tle {
    bool b;
    struct Node* head;
    struct Node* tail;
};

Node *DigitalSort(Node *S, int L){
 int j,i;
 int d;
 Node *p,*t;
 tle Q[256];
 bool b;
 for (j=L-1;j>=0;j--) {
     for (i=0;i<256;i++) Q[i].b=false;
     p=S;         
     while (p!=NULL) {
           d = int(p->data) + 128;         
           if (!Q[d].b) {
              Q[d].head=Q[d].tail=p;
              Q[d].b=true;
           } else {
             Q[d].tail->next=p;
             Q[d].tail=p;
           }
           p=p->next; 
     }
     b=false;
     for (i=0;i<256;i++) {
         if (Q[i].b) {
            if (!b) {
               t=Q[i].head;
               b=true;
            } else p->next=Q[i].head;
            p=Q[i].tail;            
         }
     }
     p->next=NULL;
     S=t;
 }
 return S;
}

void push(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* increasing = NULL;
    struct Node* decreasing = NULL;
    struct Node* random = NULL;

    int i;
    for (i = 1; i <= 10; i++) {
        push(&increasing, i);
    }

    for (i = 10; i >= 1; i--) {
        push(&decreasing, i);
    }

    for (i = 0; i < 10; i++) {
        push(&random, rand() % 100);
    }

    printf("Before sorting:\n");
    printf("Increasing list: ");
    printList(increasing);

    printf("\nDecreasing list: ");
    printList(decreasing);

    printf("\nRandom list: ");
    printList(random);

    increasing = DigitalSort(increasing, 2);
    decreasing = DigitalSort(decreasing, 2);
    random = DigitalSort(random, 2);

    printf("\n\nAfter sorting:\n");
    printf("Increasing list: ");
    printList(increasing);

    printf("\nDecreasing list: ");
    printList(decreasing);

    printf("\nRandom list: ");
    printList(random);
getch();
    return 0;
}
