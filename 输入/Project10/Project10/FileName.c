#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// 定义学校、班级、名字读取函数
char school(void);
int clas(void);
char name(void);

char gako[20];
int kurasu;     
char namae[20];

int main() {
    char which[2] = {0};
    char which2[2] = {0};

    printf("请输入您的姓名，班级，学校\n按a填写姓名\n按b填写班级\n按c填写学校\n");
    gets(which);
    // 输入a 后输入bc
    if (which[0] == 'a') {
        name();
        printf("请继续字母获得输入班级（b） 学校（c）: ");
        scanf_s("%s", which2, 20);
        if (which2[0] == 'b') {
            clas();
            school();
        }
        else if(which2[0]=='c') {
            school();
            clas();
        }
        else {
            printf("程序异常，请重新打开");
            return 1;
        }
    }
    // 输入b 后输入ac
    else if (which[0] == 'b') {
        clas();
        printf("请继续输入字母获得姓名（a） 学校（c）: ");
        scanf_s("%s", which2, 20);
        if (which2[0] == 'a') {
            name();
            
            school();
        }
        else if(which2[0] == 'c') {
            school();
            
            name();
        }

        else {
            printf("无效输入，请重新运行程序。\n");
            return 1;
        }
    }
    // 输入c 后输入ab
    else if (which[0] == 'c') {
        school();
        printf("请继续输入字母获得姓名（a） 班级（b）: ");
        scanf_s("%s", which2, 20);
        if (which2[0] == 'a') {
            name();
            
            clas();
        }
        else if(which2[0] == 'b') {
            clas();
            
            name();
        }
        else {
            printf("无效输入，请重新运行程序。\n");
            return 1;
        }
    }
    else {
        printf("无效输入，请重新运行程序。\n");
        return 1; 
    }

    getchar();
    printf("您的班级是：%d\n您的姓名是：%s\n您的学校是：%s\n", kurasu, namae, gako);
    getchar();
}

// 定义学校、姓名、班级获取函数
char school(void) {
    printf("请输入您的学校：");
   scanf_s("%s",gako,20);
}

char name(void) {
    printf("请输入您的姓名：");
    scanf_s("%s", namae,20);
}

int clas(void) {
    printf("请输入您的班级：");
    scanf_s("%d", &kurasu); 
}