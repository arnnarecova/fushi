//
//  main.cpp
//  binary_tree
//
//  Created by 刘文栖 on 2018/3/4.
//  Copyright © 2018年 刘文栖. All rights reserved.
//

//二叉树遍历
//#include <stdio.h>
//#include <string.h>
//struct Node {
//    Node *lchild;
//    Node *rchild;
//    char c;
//}Tree[500];
//int loc;
//Node *create() {
//    Tree[loc].lchild = Tree[loc].rchild = NULL;
//    return &Tree[loc++];
//}
//char str1[30], str2[30];
//void postOrder(Node *T) {
//    if (T->lchild != NULL) {
//        postOrder(T->lchild);
//    }
//    if (T->rchild != NULL) {
//        postOrder(T->rchild);
//    }
//    printf("%c", T->c);
//}
//Node *build(int s1, int e1, int s2, int e2) {
//    Node *ret = create();
//    ret->c = str1[s1];
//    int rootIdx;
//    for (int i = s2; i <= e2; i++) {
//        if (str2[i] == str1[s1]) {
//            rootIdx = i;
//            break;
//        }
//    }
//    if (rootIdx != s2) {
//        ret -> lchild = build(s1 + 1, s1 + (rootIdx - s2), s2, rootIdx - 1);
//    }
//    if (rootIdx != e2) {
//        ret -> rchild = build(s1 + (rootIdx - s2) + 1, e1, rootIdx + 1, e2);
//    }
//    return ret;
//}
//int main(){
//    while (scanf("%s", str1) != EOF) {
//        scanf("%s", str2);
//        loc = 0;
//        int L1 = strlen(str1);
//        int L2 = strlen(str2);
//        Node *T = build(0, L1-1, 0, L2-1);
//        postOrder(T);
//        printf("\n");
//    }
//}

//二叉排序树
//#include <stdio.h>
//#include <string.h>
//struct Node {
//    Node *lchild;
//    Node *rchild;
//    int c;
//}Tree[110];
//int loc;
//Node *creat(){
//    Tree[loc].lchild = Tree[loc].rchild = NULL;
//    return &Tree[loc++];
//}
////后序遍历
//void postOrder(Node *T){
//    if (T->lchild != NULL) {
//        postOrder(T->lchild);
//    }
//    if (T->rchild != NULL) {
//        postOrder(T->rchild);
//    }
//    printf("%d ", T->c);
//}
////中序遍历
//void inOrder(Node *T){
//    if (T->lchild != NULL) {
//        inOrder(T->lchild);
//    }
//    printf("%d ", T->c);
//    if (T->rchild != NULL) {
//        inOrder(T->rchild);
//    }
//}
////前序遍历
//void preOrder(Node *T){
//    printf("%d ", T->c);
//    if (T->lchild != NULL) {
//        preOrder(T->lchild);
//    }
//    if (T->rchild != NULL) {
//        preOrder(T->rchild);
//    }
//}
//Node *Insert(Node *T, int x){
//    if (T == NULL) {
//        T = creat();
//        T->c = x;
//        return T;
//    } else if (x < T->c) {
//        T->lchild = Insert(T->lchild, x);
//    } else if (x > T->c) {
//        T->rchild = Insert(T->rchild, x);
//    }
//    return T;
//}
//int main(){
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        loc = 0;
//        Node *T = NULL;
//        for (int i = 0; i < n; i++) {
//            int x;
//            scanf("%d", &x);
//            T = Insert(T, x);
//        }
//        preOrder(T);
//        printf("\n");
//        inOrder(T);
//        printf("\n");
//        postOrder(T);
//        printf("\n");
//    }
//    return 0;
//}















































