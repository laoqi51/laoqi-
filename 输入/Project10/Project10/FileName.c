#include <stdio.h>
#include <string.h>
#include<stdlib.h>

// ����ѧУ���༶�����ֶ�ȡ����
char school(void);
int clas(void);
char name(void);

char gako[20];
int kurasu;     
char namae[20];

int main() {
    char which[2] = {0};
    char which2[2] = {0};

    printf("�����������������༶��ѧУ\n��a��д����\n��b��д�༶\n��c��дѧУ\n");
    gets(which);
    // ����a ������bc
    if (which[0] == 'a') {
        name();
        printf("�������ĸ�������༶��b�� ѧУ��c��: ");
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
            printf("�����쳣�������´�");
            return 1;
        }
    }
    // ����b ������ac
    else if (which[0] == 'b') {
        clas();
        printf("�����������ĸ���������a�� ѧУ��c��: ");
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
            printf("��Ч���룬���������г���\n");
            return 1;
        }
    }
    // ����c ������ab
    else if (which[0] == 'c') {
        school();
        printf("�����������ĸ���������a�� �༶��b��: ");
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
            printf("��Ч���룬���������г���\n");
            return 1;
        }
    }
    else {
        printf("��Ч���룬���������г���\n");
        return 1; 
    }

    getchar();
    printf("���İ༶�ǣ�%d\n���������ǣ�%s\n����ѧУ�ǣ�%s\n", kurasu, namae, gako);
    getchar();
}

// ����ѧУ���������༶��ȡ����
char school(void) {
    printf("����������ѧУ��");
   scanf_s("%s",gako,20);
}

char name(void) {
    printf("����������������");
    scanf_s("%s", namae,20);
}

int clas(void) {
    printf("���������İ༶��");
    scanf_s("%d", &kurasu); 
}