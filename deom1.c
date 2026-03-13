#include <stdio.h>

//定义结构体
struct  student
{
    //数据域
    int age;
    char name[20];
    
    //指针域
    struct student *next; 
};

void demo1() {
    //定义节点
    struct student ndoe = {100, "xiaoli", NULL};
    struct student ndoe1 = {90, "xiaolii", NULL};
    struct student ndoe2 = {80, "xiaosan", NULL};
    struct student ndoe3 = {70, "xiaosi", NULL};
    struct student ndoe4 = {140, "xiaowu", NULL};
    struct student ndoe5 = {103, "xiaoliu", NULL};
    
    //定义链表头
    struct student *head = &ndoe;
    ndoe.next = &ndoe1;
    ndoe1.next = &ndoe2;
    ndoe2.next = &ndoe3;
    ndoe3.next = &ndoe4;
    ndoe4.next = &ndoe5;
    ndoe5.next = NULL;

    //遍历链表
    struct student *pb = head;
    while (pb != NULL) {
        //访问数据域   
        printf("age = %d, name = %s\n", pb->age, pb->name);
        //移动指针 访问下一个节点 
        pb = pb->next;
    }
}

int main() {
    demo1();
    return 0;
};
