#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#pragma comment(lib,"winmm.lib")
#define I 20
#define R 340
char password[9];
//��Ʒ�ṹ�� 
struct node{	
	int num;
	char name[20];
	char auther[20];
	char type[20];
	char where[30]; 
	char date[20];
	char Tedian[30]; 
	struct node  *next;
};
//�û��ṹ�� 
struct User
{
	char Xingming[20];
	char card[20];
	char pass[20];
	struct User *next;
}; 
void menu();//������
void save(struct node *head);//�ļ�¼�뺯�� 
struct node * read(struct node *pl);//�ļ�����������
void input();//¼����Ϣ����
void insert(struct node *head);//������Ϣ����
void modify(struct node *head);//�޸���Ϣ����
void search(struct node *head );//��ѯ��Ϣ����
void rankbynum( struct node *head);//������
void swap(struct node *p1,struct node *p2);//����������������������
void showall(struct node *pl);//�������������������Ϣ
int deletething(struct node *head);//ɾ����Ϣ����
int  ad();//�򿪽��� 
void checkfirst();//�����ʼ�� 
void login();//��½ 
void update();//�޸����� 
void dongtai();
int bc();//����Աѡ����� 
void jiemian();//�����û����� 
void inputU();//�û�¼�� 
void second();//�û����� 
void Yonghu(struct User *head);//�û�¼���ļ����� 
struct User * readU(struct User *pl );//�û��ļ���ȡ���� 
void insertY(struct User *head);//����û� 
int  deleteUser(struct User *head); //ɾ���û� 
void showallUser(struct User *p1);//����û� 
void modifyUser(struct User *head);//�޸��û���Ϣ 
void searchU(struct User *head);// ��ѯ�û���Ϣ 
void AD();//����Ʒ��Ϣ�Ĺ��� 
void BC();//���û���Ϣ�Ĺ���
void EF();//�û��Ĺ���ʵ�� 
void loginU(struct User *head);//�û���¼
void Usearch(struct node *head);//�û���ѯ
void Ushowall(struct node *pl);//�û���� (���ڰ�ʱ���Ⱥ��˳�� 
void Partshowall(struct node *pl);//���ֱ��� 
void Tongji(struct node *pl);
void Tongji(struct node *pl)
{
	int a=0,b=0,c=0,d=0,e=0,f=0;
	struct node *p;
	p=pl;
	int max;
		while(p!=NULL){	
			if(strstr(p->type,"��")>0) 
			a++;
		    if(strstr(p->type,"��")>0) 
		    b++;
			if(strstr(p->type,"�ֽ�")>0)  
			c++;
			if(strstr(p->type,"�����豸")>0)  
			d++;
			if(strstr(p->type,"Կ��")>0) 
			e++; 
			if(strstr(p->type,"��ͨ����")>0)  
			f++; 
			p=p->next;
		}
		max=a;
		if(b>max)		
		max=b;	
		if(c>max)
		max=c;
		if(d>max)
		max=d;
		if(e>max)
		max=e;
		if(f>max)
		max=f;
		printf("\n"); 
		if(a==max)
		printf("*��ͬѧע��Կ��ı��棬�����ʧ�������������*\n");
		if(b==max)
		printf("*��ͬѧע�����ı��棬�����ʧ������������*\n");
		if(c==max)
		printf("*��ͬѧע����ֽ�ı��棬�����ʧ�ֽ�����������*\n");
		if(d==max)
		printf("*��ͬѧע��Ե����豸�ı��棬�����ʧ�����豸�����������*\n");
		if(e==max)
		printf("*��ͬѧע���Կ�׵ı��棬�����ʧԿ�׵����������*\n");
		if(f==max)
		printf("*��ͬѧע��Խ�ͨ���ߵı��棬�����ʧ��ͨ���ߵ����������*\n"); 		
}
int main(void)
{
//	PlaySound ("1.wav",NULL,SND_LOOP | SND_ASYNC);
	int choice,x,y;
    struct node *head;
    struct User *headU;
	head=NULL;
	headU=NULL;
	dongtai();
	system("color 3");
	  x=ad();
	switch(x){ 
		case 1:
			system("cls");
			checkfirst();
			login();//��½ 
            system("cls"); 
            y=bc();
            
    switch(y){
     	    case 1:
             BC();
 	     	case 2:
 	     	AD();
 	     	case 3:
			update();
			exit(0);
	        }
     	case 2:
	        EF();   
        case 3:
        	
            system("cls");
            printf("\n\n\n\n\t\t\t\tллʹ�ã�\n\t\t\t");
	        return 0;		 
}}
//�û��Ĺ��� 
void EF()
{ 
	int choice;
    struct node *head;
    struct User *headU;
	head=NULL;
	headU=NULL;
        system("cls");
		headU=readU(headU);
		if(headU==NULL)
		printf("����¼�룡����\n");	
		else 
		loginU(headU);
	 while(1)
		{   
		    second();
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
		 system("cls");
		head=read(head);
		if(head==NULL)
		printf("����¼�룡����\n");	
		else 
		 Usearch(head);
				 break;
				 
				 case 2:
				 	system("cls");
				 	head=read(head);
		            if(head==NULL)
		            printf("����¼�룡����\n");
		            else
			        Ushowall(head);
				 	break; 
					  	   
		        	case 0:
				 	system("cls");
					printf("\n\n\n\n\t\t\t\tллʹ�ã�\n\t\t\t");
					exit(0);	
				    default :
					printf("�����������������\n");
					break;
			}
		 } 

 }
// ���û���Ϣ�Ĺ���
void BC()
{
	struct User *headU;
	headU=NULL;
		int choice;
	    while(1)
		{	
           jiemian();			
     		scanf("%d",&choice);
     		switch(choice)
			{
     			case 1:
     			inputU();
     			break; 
     			case 2:
				headU=readU(headU);
			    if(headU==NULL)
				printf("����¼�룡����\n");					
			    else 
				insertY(headU);
				break;
			    case 3:	
				headU=readU(headU);
			    if(headU==NULL)
				printf("����¼�룡����\n");					
			    else 
				deleteUser(headU);
				break;	
				case 4:
				headU=readU(headU);
			    if(headU==NULL)
				printf("����¼�룡����\n");					
			    else 
			    modifyUser(headU);
			    break;
				case 5:
				headU=readU(headU);
			    if(headU==NULL)
				printf("����¼�룡����\n");					
			    else 
				searchU(headU);
				break;
				case 6:
				headU=readU(headU);
			    if(headU==NULL)
				printf("����¼�룡����\n");					
			    else 
				showallUser(headU);	
				break; 
			    case 0:
			system("cls");
			printf("                   ллʹ�ã�\n"); 
			exit(0);//�˳�ϵͳ
			    default:
			    	system("cls");
				printf("������������������\n") ; 
			
			}
		
 	    }
 }
 //����Ʒ��Ϣ�Ĺ��� 
void AD()
{
	struct node *head;
	head=NULL;
	int choice;
	while (1){ 
		menu();
		scanf("%d",&choice);
		switch(choice){	
		case 1:
			system("cls");
			input();
			break;		
		case 2:
			system("cls");
			head=read(head);
			if(head==NULL)
				printf("����¼�룡����\n");	
			else
			     				
				 insert(head);
			break;		
		case 3:
			head=read(head);
			if(head==NULL)
				printf("����¼�룡����\n");					
			else
			    
				deletething(head);
                  
			break;											
		case 4:
	        head=read(head);
			if(head==NULL)
				printf("����¼�룡����\n");					
			else 
			   
				modify(head);
			break;			
		case 5:
			system("cls");
			  head=read(head);
			if(head==NULL)
				printf("����¼�룡����\n");					
			else 
			  
				search(head);
				 
			break;											
		case 6:
			system("cls");
			head=read(head);
			if(head==NULL)
				printf("����¼�룡����\n");					
			else  
			   
				rankbynum(head);//����
				 
			break;												
		case 7:
			system("cls");
			 head=read(head);
			if(head==NULL)
				printf("����¼�룡����\n");					
			else 
			   	
				showall(head);//����
				
			break;						
		case 0:
			system("cls");
			printf("                   ллʹ�ã�\n"); 
			exit(0);//�˳�ϵͳ
		default:
			system("cls");
			printf("��������");
		}	
	}

} 
void loginU(struct User *head)//�û���¼
{
int i,n=3;
char a[20];
char b[20];
int flag=0;
struct User *p;
p=head;
printf("���ȵ�½\n"); 
printf("������ѧ�ţ�");
		scanf("%s",a);
		while(p!=NULL){	
			if(strcmp(p->card,a)==0&&n>0){
					flag=1;
			printf("����������(����������������µ�½)\n");
			for(i=0;i<8&&((b[i]=getch())!=13);i++)
			    putch('*');
		     	b[i]='\0';
			    if(strcmp(p->pass,b)==0)
				 {
				system("cls"); 
				 printf("��½�ɹ�\n");
				 break; 
				 } 
			    else
			    printf("�������\n");
			    n--; 
			}	
			else
			p=p->next;
		}
		if(flag==0) {
		printf("�Բ����Ҳ�����Ҫ��ѯ���û�����˶���Ϣ�����²�ѯ��\n");
		exit(1);
		}
		if(!n)
	{
		printf("���˳�����������������\n");
		getch();
		exit(1);
	}			
}

//����Ա��½���� 
void login()
{
	int i,n=3;
	char a[9];
	do{
		printf("����������");
		for(i=0;i<8&&((a[i]=getch())!=13);i++)
		putch('*');
		a[i]='\0';
		if(strcmp(a,password))
		{
			printf("\n�������!\n"); 
			n--;
		 } 
		 else
		
		 break;
		 
	}while(n>0);
	if(!n)
	{
		printf("���˳�����������������\n");
		getch();
		exit(1);
	}
}
//�򿪽��� 
int  ad()
{	
    int x;
    printf(" _____________________________ \n");
	printf("|��ӭʹ��У԰ʧ���������ϵͳ |\n");
	printf("|_____________________________|\n");
	printf("  |     1.����Աģʽ        |\n");
	printf("  |_________________________|\n");
	printf("  |     2.�û�ģʽ          |\n");
	printf("  |_________________________|\n");
	printf("  |     3.�˳�ϵͳ          |\n"); 
	printf("  |_________________________|\n");
	scanf("%d",&x);
	return x;
 }  
int bc()//����Ա����ģ��ѡ����� 
{
	int y;
	printf("____________________\n");
	printf("|1.���û��Ĺ���     |\n");
	printf("|___________________|\n");
	printf("|2.����Ʒ��Ϣ�Ĺ��� |\n"); 
	printf("|___________________|\n");
	printf("|3.�޸�����         |\n");
	printf("|___________________|\n");
	scanf("%d",&y);
	return y;
}
//�û���ѯ���� 
void second() 
{
	    struct node *head;
	    head=NULL;
		head=read(head);
		if(head==NULL)
		printf("����¼�룡����\n");	
		else
		Tongji(head);
	printf(" _______________________________________________________\n");
	printf(" |                     *�û���ѯ����*                  |\n"); 
	printf(" |_____________________________________________________|\n"); 
	printf(" |     1:��ѯ��Ʒ��Ϣ      |      2:���������Ʒ����Ϣ |\n");
	printf(" |_________________________|___________________________|\n"); 
	printf(" |     0:�˳�ϵͳ          |                           |\n");
	printf(" |_________________________|___________________________|\n"); 
	printf(" | С��ʿ�������1-1000����Ʒ��ȥ5101���ң��������5102|  \n");
    printf(" |_____________________________________________________|\n");
}
//���û��Ĺ������ 
void jiemian()
{
	printf("_____________________________________\n");
	printf("|1:¼���û���Ϣ   |   2:�����û���Ϣ|\n");
	printf("|_________________|_________________|\n");
	printf("|3:ɾ���û���Ϣ   |   4:�޸��û���Ϣ|\n");
	printf("|_________________|_________________|\n");
	printf("|5:��ѯ�û���Ϣ   |   6:����û���Ϣ|\n");
	printf("|_________________|_________________|\n");
	printf("|0:�˳�ϵͳ       |                 |\n");
	printf("|_________________|_________________|\n");
 } 
//����Ʒ����Ϣ�Ĺ������ 
void  menu()
{
	printf("_____________________________________\n");
	printf("|1:¼����Ʒ��Ϣ   |   2:������Ʒ��Ϣ|\n");
	printf("|_________________|_________________|\n");
	printf("|3:ɾ����Ʒ��Ϣ   |   4:�޸���Ʒ��Ϣ|\n");
	printf("|_________________|_________________|\n");
	printf("|5:��ѯ��Ʒ��Ϣ   |   6:����Ʒ����  |\n");
	printf("|_________________|_________________|\n");
	printf("|7:�����Ʒ��Ϣ   |   0:�˳�ϵͳ    |\n");
	printf("|_________________|_________________|\n");
	printf("        ����������ѡ��");
}
//���û��Ĳ�ѯ����(���а�ѧ�ſɽ���ģ����ѯ���Ա��ڲ�ѯһ���༶��ѧ���û���Ϣ�� 
void searchU(struct User *head)
{
	struct User *p;
	int n;
	char Xingming[20];
	char card[20];
	char pass[20]; 
	int flag=0;
	p=head;
	printf("__________________________________\n");
	printf("|1:��������ѯ    |   2:��ѧ�Ų�ѯ|\n");
	printf("|________________|_______________|\n");
	printf("|3:�������ѯ    |   0:ȡ��      |\n"); 
	printf("|________________|_______________|\n");
    printf("����������ѡ��\n");
	scanf("%d",&n);
	switch(n){
	case 1:
		printf("������������");
		scanf("%s",Xingming);
		while(p!=NULL){	
			if(strcmp(p->Xingming,Xingming)==0){
				printf(" _____________________________________\n");
				printf("|����     |     ѧ��      |     ����  |\n");
				printf("|_________|_______________|___________|\n");
				printf("|%5s   | %8s  |%8s   |\n",p->Xingming,p->card,p->pass);
				printf("|_________|_______________|___________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ���û�����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 2:
		printf("������ѧ�ţ�");
		scanf("%s",card);
		while(p!=NULL){	
			if(strstr(p->card,card)>0){
				printf(" _____________________________________\n");
				printf("|����     |     ѧ��      |     ����  |\n");
				printf("|_________|_______________|___________|\n");
				printf("|%5s   | %8s  |%8s   |\n",p->Xingming,p->card,p->pass);
				printf("|_________|_______________|___________|\n");
			flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ���û�����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 3:
		printf("����������");
		scanf("%s",pass);
		while(p!=NULL){	
			if(strcmp(p->pass,pass)==0){
				printf(" _____________________________________\n");
				printf("|����     |     ѧ��      |     ����  |\n");
				printf("|_________|_______________|___________|\n");
				printf("|%5s   | %8s  |%8s   |\n",p->Xingming,p->card,p->pass);
				printf("|_________|_______________|___________|\n");
			flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ���û�����˶���Ϣ�����²�ѯ��\n");
		}
		break;	
	
}}
//�û���ѯ���������з�Ϊ�����ѯ�������ѯ�������͡���ȷ��ѯ����ʱ��  ģ����ѯ�������ƣ��ص㣬���ͣ�ʱ��� ��
//��ѯ�����ǲ�����Ϣ 
void Usearch(struct node *head)
	{   
	struct node *p;
	int n;
	char name[20]; 
	char type[20];
	char where[20];
	char date[20]; 
	char date1[20];
	char date2[20]; 
	int flag=0;
	p=head;
	
	printf("________________________________________\n");
	printf("|1:�����Ʋ�ѯ      |     2:�����Ͳ�ѯ  |\n");
	printf("|__________________|___________________|\n");
	printf("|3:���ص��ѯ      |     4:��ʱ��β�ѯ|\n");
	printf("|__________________|___________________|\n");
	printf("|5:��ʱ���ѯ      |     0:ȡ��        |\n");       
	printf("|__________________|___________________|\n");
	printf("����������ѡ��:\n");
	scanf("%d",&n);
	switch(n){
	
	case 1:
		system("cls");
		printf("���������ƣ�");
		scanf("%s",name);
		while(p!=NULL){	
			if(strstr(p->name,name)>0){	 	
		printf("________________________________________________________________\n");
		printf("|���    |    ����   |   ���     |   �ص�         |    ʱ��    |\n");
		printf("|________|___________|____________|________________|____________|\n");
		printf("|%-4d    | %-8s  |%-10s  |%-16s|%-10s  |\n",p->num,p->name,p->type,p->where,p->date);
	    printf("|________|___________|____________|________________|____________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}
		break; 
	
	case 2:
		system("cls");
		printf("���������ͣ�");
		scanf("%s",type);
		while(p!=NULL){	
			if(strstr(p->type,type)>0){
			
			printf("________________________________________________________________\n");
		printf("|���    |    ����   |   ���     |   �ص�         |    ʱ��    |\n");
		printf("|________|___________|____________|________________|____________|\n");
		printf("|%-4d    | %-8s  |%-10s  |%-16s|%-10s  |\n",p->num,p->name,p->type,p->where,p->date);
	    printf("|________|___________|____________|________________|____________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}		
		break;
	case 3:
		system("cls");
		printf("������ص㣺");
		scanf("%s",where);
		while(p!=NULL){	
			if(strstr(p->where,where)>0){
		printf("________________________________________________________________\n");
		printf("|���    |    ����   |   ���     |   �ص�         |    ʱ��    |\n");
		printf("|________|___________|____________|________________|____________|\n");
		printf("|%-4d    | %-8s  |%-10s  |%-16s|%-10s  |\n",p->num,p->name,p->type,p->where,p->date);
	    printf("|________|___________|____________|________________|____________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 4:
			system("cls");
		printf("������ʱ����ʼʱ��(2016.01.01)��\n");
		scanf("%s",date1);
		printf("���������ʱ�䣺\n");
		scanf("%s",date2);
		while(p!=NULL){	
			if(strcmp(p->date,date1)>=0&&strcmp(p->date,date2)<=0){
		printf("________________________________________________________________\n");
		printf("|���    |    ����   |   ���     |   �ص�         |    ʱ��    |\n");
		printf("|________|___________|____________|________________|____________|\n");
		printf("|%-4d    | %-8s  |%-10s  |%-16s|%-10s  |\n",p->num,p->name,p->type,p->where,p->date);
	    printf("|________|___________|____________|________________|____________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}	
		break;
		case 5:	
		system("cls");
		 printf("������ʱ��(����2016.01.01)��");
		scanf("%s",date);
		while(p!=NULL){	
			if(strcmp(p->date,date)==0){
		printf("________________________________________________________________\n");
		printf("|���    |    ����   |   ���     |   �ص�         |    ʱ��    |\n");
		printf("|________|___________|____________|________________|____________|\n");
		printf("|%-4d    | %-8s  |%-10s  |%-16s|%-10s  |\n",p->num,p->name,p->type,p->where,p->date);
	    printf("|________|___________|____________|________________|____________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 0:
		break;
	default:
		printf("��������\n");
		break;
	}
}
//����Ա��ѯ�������ɲ�ѯ����Ʒ��ȫ����Ϣ �� 
void search(struct node *head )
{   
	struct node *p;
	int num,n;
	char name[20]; 
	char auther[20];
	char type[20];
	char where[20];
	char date[20];
	char date1[20];
	char date2[20];
	int flag=0;
	p=head;
	printf("______________________________________\n");
	printf("|1:����Ų�ѯ    |    2:�����Ʋ�ѯ   |\n");
	printf("|________________|___________________|\n"); 
	printf("|3:��������ѯ    |    4:�����Ͳ�ѯ   |\n");
	printf("|________________|___________________|\n"); 
	printf("|5:���ص��ѯ    |    6:��ʱ���ѯ   |\n");
	printf("|________________|___________________|\n"); 
	printf("|7:��ʱ��β�ѯ  |    0:ȡ��         |\n");
	printf("|________________|___________________|\n");
	printf("����������ѡ��\n");
	scanf("%d",&n);
	switch(n){
	case 1:
		printf("��������ţ�");
		scanf("%d",&num);
		while(p!=NULL){	
			if(p->num==num){ 
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 2:
		printf("���������ƣ�");
		scanf("%s",name);
		while(p!=NULL){	
			if(strstr(p->name,name)>0){
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 3:
		printf("����������");
		scanf("%s",auther);
		while(p!=NULL){	
			if(strcmp(p->auther,auther)==0){
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 4:
		printf("���������ͣ�");
		scanf("%s",type);
		while(p!=NULL){	
			if(strstr(p->type,type)>0){
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}		
		break;
	case 5:
		printf("������ص㣺");
		scanf("%s",where);
		while(p!=NULL){	
			if(strstr(p->where,where)>0){
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}
		break;
	case 6:
		printf("������ʱ��(����:2016.01.01)��");
		scanf("%s",date);
		while(p!=NULL){	
			if(strcmp(p->date,date)==0){
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}	
		break;
		case 7:
			printf("������ʱ����ʼʱ��(����:2016.01.01)��\n");
		scanf("%s",date1);
		printf("���������ʱ�䣺\n");
		scanf("%s",date2);
		while(p!=NULL){	
			if(strcmp(p->date,date1)>=0&&strcmp(p->date,date2)<=0){
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				flag=1;
			}
			p=p->next;
		}
		if(flag==0) {
			printf("�Բ����Ҳ�����Ҫ��ѯ����Ʒ����˶���Ϣ�����²�ѯ��\n");
		}	
		break;
	case 0:
		break;
	default:
		printf("��������\n");
		break;
	}
}
//������������ð�ݲ�ѯ�� 
void rankbynum( struct node *head)
{
	struct node *p,*p1,*p2;
	int i,j,choice;
	int n=0;
	p=head;
	
	while(p->next!=NULL){ 
		n++;
		p=p->next;
	}			// ͳ��������Ԫ�ظ���
	printf("_____________________________________\n");
	printf("|1:���������   |   2:��ʱ������    |\n");
	printf("|_______________|___________________|\n");
	printf("|0:ȡ��         |                   |\n");
	printf("|_______________|___________________|\n");
	printf("����������ѡ��:\n");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		for(i=1;i<n;i++){
		  p1=head;		
			for(j=0;j<n-i;j++){
				p2=p1->next;
				if((p1->num)>(p2->num)){		//���ձ��������
					swap(p1,p2);
				}
			p1=p1->next; //����ð������������
			}
		}	
		showall(head);
		break;
	case 2:
		 for(i=1;i<n;i++){
		  p1=head;		
			for(j=0;j<n-i;j++){
				p2=p1->next;
				if(strcmp(p1->date,p2->date)<0){		//���ձ��������
					swap(p1,p2);
				}
			p1=p1->next; //����ð������������
			}
		}	
		showall(head);
		break; 
	case 0:
		break;
	default:
		printf("��������\n");
	}
}
//������������������ 
void swap(struct node *p1,struct node *p2)
{
	int k;
	
	char a[20];
	
	k=p1->num;
	p1->num=p2->num;
	p2->num=k;
    strcpy(a,p1->name);
    strcpy(p1->name,p2->name);
	strcpy(p2->name,a);
	strcpy(a,p1->where);
	strcpy(p1->where,p2->where);
	strcpy(p2->where,a);
	strcpy(a,p1->auther);
	strcpy(p1->auther,p2->auther);
	strcpy(p2->auther,a);
	strcpy(a,p1->type);
	strcpy(p1->type,p2->type);
	strcpy(p2->type,a);
	strcpy(a,p1->date);
	strcpy(p1->date,p2->date);
	strcpy(p2->date,a);
	strcpy(a,p1->Tedian);
	strcpy(p1->Tedian,p2->Tedian);
	strcpy(p2->Tedian,a);
}
//�޸��û���Ϣ����ѡ�����޸ģ� 
void modifyUser(struct User *head)
{
	int n;
	char card[20];
	struct User *p;
	int flag=0;
	printf("��������Ҫ�޸ĵ�ѧ��:");
	scanf("%s",card);
	p=head;
		while(p!=NULL){
		if(strcmp(p->card,card)==0){
			do{
				printf("_____________________________\n");
				printf("|1:�޸�����   |   2:�޸�ѧ��|\n");
				printf("|_____________|_____________|\n");
				printf("|3:�޸�����   |   0:ȡ��    |\n");
				printf("|_____________|_____________|\n");
				printf("����������ѡ��\n");
		        flag=1;
				scanf("%d",&n);
				switch(n){
				case 1:
					printf("����������������");
					scanf("%s",p->Xingming);
					getchar();	
					break;
				case 2:
					printf("����������ѧ�ţ�");
					scanf("%s",p->card);  
					break;
				case 3:
					printf("�������������룺");
					scanf("%s",p->pass); 
					break;
				case 0:
					break;
				default:
				printf("�������\n");
				}
			}while(n!=0);
		}
		p=p->next;
	}
    if(flag==0)
	printf("δ�ҵ�������\n");
    Yonghu(head); 
}
//�޸���Ʒ����Ϣ����ѡ�����޸ģ� 
void modify(struct node *head)
{	
	int number,n;
	struct node *p;
	int flag=0;

	printf("��������Ҫ�޸ĵ���ţ�");
	scanf("%d",&number);
	p=head;
	while(p!=NULL){
		if(p->num==number){
			do{
			    
				printf("_______________________________\n");
				printf("|1:�޸�����    |    2:�޸�����|\n");
				printf("|______________|______________|\n");
				printf("|3:�޸�����    |    4:�޸ĵص�|\n");
				printf("|______________|______________|\n");
				printf("|5:�޸�ʱ��    |    6:�޸ı��|\n");
				printf("|______________|______________|\n");
				printf("|7:�޸��ص�    |    0:ȡ��    |\n");
				printf("|______________|______________|\n");
				printf("        ����������ѡ��");
		        flag=1;
				scanf("%d",&n);
				switch(n){
				case 1:
					printf("�������������ƣ�");
					scanf("%s",p->name);
					getchar();	
					break;
				case 2:
					printf("����������������");
					scanf("%s",p->auther);  
					break;
				case 3:
					printf("�������������ͣ�");
					scanf("%s",p->type); 
					break;
				case 4:	
					printf("����������ص㣺");
					scanf("%s",p->where);	
					break;
				case 5:
					printf("����������ʱ�䣺");
					scanf("%s",p->date);
					break;
				case 6: 
				    printf("������������  ");
					scanf("%d",&p->num) ;
					break;
				case 7:
					printf("�����������ص�");
					scanf("%s",p->Tedian);
					break;
				case 0:
					break;
				default:
				printf("�������\n");
				}
			}while(n!=0);
		}
		p=p->next;
	}
    if(flag==0)
	printf("δ�ҵ�������\n");
	save(head);
}

//ɾ���û���Ϣ 
int  deleteUser(struct User *head)
{
	int x=0;
	struct User *p,*q;                
	char pass[20];           
	char card[20];           
	int n,count=0;
	int flag=0;
	p=head;
	q=p;
	printf("_________________________________\n");
	printf("|1:������ɾ��    |  2:��ѧ��ɾ��|\n");
	printf("|________________|______________|\n");
	printf("|0:ȡ��          |              |\n");
	printf("|________________|______________|\n");
	printf("����������ѡ��\n");
	scanf("%d",&n);
	switch(n){	
	case 1: 
		printf("������Ҫɾ�������룺");
		scanf("%s",pass);
	while(p){
		if(strcmp(p->pass,pass)==0)
		{
			flag=1;
			system("cls");
	printf("%s����Ϣ����\n",pass);
	printf(" _____________________________________\n");
	printf("|����     |     ѧ��      |     ����  |\n");
	printf("|_________|_______________|___________|\n");
	printf("|%-8s |%-12s   |%-6s     |\n",p->Xingming,p->card,p->pass);
    printf("|_________|_______________|___________|\n");
				fflush(stdin);
				printf("�����������");
			getchar();
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			Yonghu(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		else
		{
		q=p;
		p=p->next;}}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();}
		break;
	case 2:
	printf("������Ҫɾ����ѧ�ţ�");
		scanf("%s",card);
	while(p){
		if(strcmp(p->card,card)==0)
		{
			flag=1;
			system("cls");
			printf("%s����Ϣ���£�\n",p->Xingming);
	printf(" _____________________________________\n");
	printf("|����     |     ѧ��      |     ����  |\n");
	printf("|_________|_______________|___________|\n");
	printf("|%-8s |%-12s   |%-6s     |\n",p->Xingming,p->card,p->pass);
    printf("|_________|_______________|___________|\n");
			fflush(stdin);
			printf("�����������");
			getchar();
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			Yonghu(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		else
		{
		q=p;
		p=p->next;}}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();
		}
     break;}

} 
//ɾ����Ʒ��Ϣ 
int  deletething(struct node *head)
{
	int x=0;
	struct node *p,*q;
	int num;                 
	char name[20];           
	char auther[20];         
	char type[20]; 
	char where[20];                   
	char press[20];          
	char date[20]; 
	char date1[20];
	char date2[20];   
	int n,count=0;
	int flag=0;	
	
	p=head;
	q=p;
	printf("____________________________________\n");
	printf("|1:�����ɾ��    |    2:������ɾ�� |\n");
	printf("|________________|_________________|\n");
	printf("|3:������ɾ��    |    4:������ɾ�� |\n");
	printf("|________________|_________________|\n");
	printf("|5:���ص�ɾ��    |    6:��ʱ��ɾ�� |\n");
	printf("|________________|_________________|\n");
	printf("|0:ȡ��          |                 |\n");
	printf("|________________|_________________|\n");
	printf("����������ѡ��\n");
	scanf("%d",&n);
	switch(n){
		
	case 1:
		printf("������Ҫɾ����ţ�\n");
		scanf("%d",&num);
	while(p!=NULL){
		if(p->num==num)
		{
			flag=1;
			system("cls");
			printf("��%d����Ϣ���£�\n",p->num);
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				getchar();
				printf("�����������");
			getchar();
			
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			save(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		
		else{
		
		q=p;
		p=p->next;}
		}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();
		} 
	     break;
	case 2:
		printf("������Ҫɾ�������ƣ�");
		scanf("%s",name);
	while(p){
		if(strcmp(p->name,name)==0)
		{
			flag=1;
			system("cls");
			printf("%s����Ϣ���£�",p->name);
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				fflush(stdin);
				printf("�����������");
			getchar();
			
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			save(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		else
		{
		q=p;
		p=p->next;}}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();}
		break;
	case 3:
	printf("������Ҫɾ����������");
		scanf("%s",auther);
	while(p){
		if(strcmp(p->auther,auther)==0)
		{
			flag=1;
			system("cls");
			printf("%s����Ϣ���£�",p->auther);
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
			fflush(stdin);
			printf("�����������");
			getchar();
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			save(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		
		else
		{
		q=p;
		p=p->next;}}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();
		}
     break;
	case 4:
	printf("������Ҫɾ�������");
		scanf("%s",type);
	while(p){
		if(strcmp(p->type,type)==0)
		{
			flag=1;
			system("cls");
			printf("��%s����Ϣ���£�",p->type);
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
			fflush(stdin);
			printf("�����������");
			getchar();
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			save(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		else
		{
		q=p;
		p=p->next;}}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();
		}
	break;	
	case 5:
			printf("������Ҫɾ���ص㣺\n");
		scanf("%s",where);
	while(p!=NULL){
		if(strcmp(p->where,where))
		{
			flag=1;
			system("cls");
			printf("��%s����Ϣ���£�\n",p->where);
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
				getchar();
				printf("�����������");
			getchar();
			
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			save(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		
		else{
		
		q=p;
		p=p->next;}
		}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();
		} 
	     break;
	case 6:
	printf("������Ҫɾ��ʱ�䣺");
		scanf("%s",date);
	while(p){
		if(strcmp(p->date,date)==0)
		{
			flag=1;
			system("cls");
			printf("%s����Ϣ���£�",p->date);
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");
			fflush(stdin);
			printf("�����������");
			getchar();
			if(p==head)
			head=p->next;
			else
			q->next=p->next;
			free(p);
			save(head);
			printf("ɾ���ɹ�\n"); 
		return 0;
		}
		
		else
		{
		q=p;
		p=p->next;}
		}
		if(!flag)
	{
			printf("δ�ҵ�\n");
		getchar();
		}
		break; 	
	case 0:
		break;
	default:
		printf("��������");
		break;
	return 0;}}
//�����û���Ϣ 
void showallUser(struct User *pl)
{
	struct User *p;
	printf(" _____________________________________\n");
	printf("|����     |     ѧ��      |     ����  |\n");
	printf("|_________|_______________|___________|\n");
	for(p=pl;p->next!=NULL;p=p->next)
    {
	printf("|%-8s |%-12s   |%-6s     |\n",p->Xingming,p->card,p->pass);
    printf("|_________|_______________|___________|\n");}
}

//�û�������Ʒ��Ϣ 
void Ushowall(struct node *head)
{
	struct node *p,*p1,*p2;
	int i,j,choice;
	int n=0;
	p=head;
	
	while(p->next!=NULL){ 
		n++;
		p=p->next;
	}			// ͳ��������Ԫ�ظ���
	
	for(i=1;i<n;i++){
		  p1=head;		
			for(j=0;j<n-i;j++){
				p2=p1->next;
				if(strcmp(p1->date,p2->date)<0){		//���ձ��������
					swap(p1,p2);
				}
			p1=p1->next; //����ð������������
			}
		}	
	Partshowall(head);
}
//������Ϣ�ı��� 
void Partshowall(struct node *pl)
{
	struct node *p;
	printf("________________________________________________________________\n");
	printf("|���    |    ����   |   ���     |   �ص�         |    ʱ��    |\n");
	printf("|________|___________|____________|________________|____________|\n");
	for(p=pl;p->next!=NULL;p=p->next)
	{
	printf("|%-4d    | %-8s  |%-10s  |%-16s|%-10s  |\n",p->num,p->name,p->type,p->where,p->date);
	printf("|________|___________|____________|________________|____________|\n");
	}
}
//����Ա����Ϣ�ı�����ȫ����Ϣ�� 
void showall(struct node *pl)
{
	struct node *p;
printf("______________________________________________________________________________________________\n");
printf("|���    |   ����   |   ����   |   ���    |    �ص�        |     ʱ��       |       �ص�     |\n");
printf("|________|__________|__________|___________|________________|________________|________________|\n");
	for(p=pl;p->next!=NULL;p=p->next)
{
printf("|%-4d    |%-8s  |%-8s  | %-10s|%-16s|%-10s      |%-16s|\n",p->num,p->name,p->auther,p->type,p->where,p->date,p->Tedian);
printf("|________|__________|__________|___________|________________|________________|________________|\n");}
}
//�û�¼�� 
void inputU()
{
	struct User *p1,*head;
	head=NULL;
	printf("ע�⣺������Ϊ0ʱ�������\n\n");
	p1=(struct User *)malloc(sizeof(struct User));   //Ϊ����Ľڵ������ڴ�ռ�
	head=p1;
	while(strcmp(p1->Xingming,"0")!=0){
		printf("������������");	
		scanf("%s",p1->Xingming);
		if(strcmp(p1->Xingming,"0")==0)
			break;
		printf("������ѧ�ţ�");
		scanf("%s",p1->card);
		printf("���������룺");
		scanf("%s",p1->pass);
		printf("����Ϣ�Ѿ�¼����ϣ���¼����һ�û���Ϣ\n");
		p1->next=(struct User *)malloc(sizeof(struct User));
		p1=p1->next;		
	}
	p1->next=NULL;
	printf("�û���Ϣ¼�����������\n");	
	Yonghu(head);
}
//��Ʒ¼�� 
void input()
{
	struct node *p1,*head;
	head=NULL;
	
	printf("ע�⣺�����Ϊ����ʱ�������\n\n");
	p1=(struct node *)malloc(sizeof(struct node));   //Ϊ����Ľڵ������ڴ�ռ�
	head=p1;
	while(p1->num!=0){
		printf("��������ţ�");	
		scanf("%d",&p1->num);
		if(p1->num<0)
			break;
		printf("���������ƣ�");
		scanf("%s",p1->name);
		printf("������������");
		scanf("%s",p1->auther);
		printf("���������ͣ�");
		scanf("%s",p1->type);
		printf("������ص㣺");
		scanf("%s",p1->where);
		printf("������ʱ�䣺");
		scanf("%s",&p1->date);
		printf("�������ص㣺");
		scanf("%s",p1->Tedian); 
		printf("����Ϣ�Ѿ�¼����ϣ���¼����һ��Ʒ�������Ϊ����ʱ������\n");
		p1->next=(struct node *)malloc(sizeof(struct node));
		p1=p1->next;		
	}
	p1->next=NULL;
	printf("��Ʒ¼�����������\n");	
	save(head);
}

//���û�д���ļ� 
void Yonghu(struct User *head)
{
	FILE *fp;
	struct User *pl;

	if((fp=fopen("c.txt","w"))==NULL){
		 printf("can not open file");
		 exit(0);
	}
	pl=head;
	while(pl->next!=NULL){
		fprintf(fp,"%s  %s  %s\n",pl->Xingming,pl->card,pl->pass);
	    pl=pl->next;
	}
	fclose(fp);	
} 
//д���ļ�����
void save(struct node *head)          
{
	FILE *fp;
	struct node *pl;

	if((fp=fopen("a.txt","w"))==NULL){
		 printf("can not open file");
		 exit(0);
	}
	pl=head;
	while(pl->next!=NULL){
		fprintf(fp,"%d  %s  %s  %s  %s  %s  %s\n",pl->num,pl->name,pl->auther,pl->type,pl->where,pl->date,pl->Tedian);
	    pl=pl->next;
	}
	fclose(fp);
}
//�û���ȡ�ļ� 
struct User * readU(struct User *pl )
{
	FILE *fp;
	struct User *head,*tail=NULL;
	head=NULL;

	if((fp=fopen("c.txt","r"))==NULL){
		printf("Can not open file");
		exit(0);
	}
	while(!feof(fp))
	{
		pl=(struct User * )malloc(sizeof(struct User));
		fscanf(fp,"%s%s%s",pl->Xingming,pl->card,pl->pass);
		if(head==NULL)
			head=pl;
		else
			tail->next=pl;
		tail=pl;
	}
	tail->next=NULL;
	if(fclose(fp)){
		printf("can not close the file\n");
		exit(0);
	}

	return head;
}
//�ļ���ȡ����
struct node * read(struct node *pl)
{
	FILE *fp;
	struct node *head,*tail=NULL;
	head=NULL;

	if((fp=fopen("a.txt","r"))==NULL){
		printf("Can not open file");
		exit(0);
	}
	while(!feof(fp))
	{
		pl=(struct node * )malloc(sizeof(struct node));
		fscanf(fp,"%d%s%s%s%s%s%s",&pl->num,pl->name,pl->auther,pl->type,pl->where,pl->date,pl->Tedian);
		if(head==NULL)
			head=pl;
		else
			tail->next=pl;
		tail=pl;
	}
	tail->next=NULL;
	if(fclose(fp)){
		printf("can not close the file\n");
		exit(0);
	}

	return head;
}
//�����û� 
void insertY(struct User *head)
{
	struct User *p,*p1;
	int n=0;
	p=head;
	while(p->next!=NULL) p=p->next;		//�ҵ������βָ��
	printf("ע�⣺������Ϊ0ʱ�������\n\n");
	p1=(struct User *)malloc(sizeof(struct User));   
	p1=p;
	do{
		printf("������������");	
		scanf("%s",p1->Xingming);
		if(strcmp(p1->Xingming,"0")==0)
			break;
		printf("������ѧ�ţ�");
		scanf("%s",p1->card);
		printf("���������룺");
		scanf("%s",p1->pass);
		printf("����Ϣ�Ѿ�¼����ϣ���¼����һ�û���\n");
		p1->next=(struct User *)malloc(sizeof(struct User));
		p1=p1->next;
	}while(1);	
	p1->next=NULL;
	printf("¼�����������\n");	
    Yonghu(head);
}
//������Ʒ 
void insert(struct node *head)
{
	struct node *p,*p1;
	int n=0;
	p=head;
	while(p->next!=NULL) p=p->next;		//�ҵ������βָ��
	printf("ע�⣺�����Ϊ����ʱ�������\n\n");
	p1=(struct node *)malloc(sizeof(struct node));   
	p1=p;
	do{
		printf("��������ţ�");	
		scanf("%d",&p1->num);
		if(p1->num<0)
			break;
		printf("���������ƣ�");
		scanf("%s",p1->name);
		printf("������������");
		scanf("%s",p1->auther);
		printf("���������ͣ�");
		scanf("%s",p1->type);
		printf("������ص㣺");
		scanf("%s",p1->where);
		printf("������ʱ�䣺");
		scanf("%s",p1->date);
		printf("�������ص㣺");
		scanf("%s",p1->Tedian);
		printf("����Ϣ�Ѿ�¼����ϣ���¼����һ��Ʒ��\n");
		p1->next=(struct node *)malloc(sizeof(struct node));
		p1=p1->next;
	}while(1);	
	p1->next=NULL;
	printf("¼�����������\n");	
	save(head);
}

	void dongtai()	
{
int i,j,e;
int a;
long time;
system("title ����ϵͳ");
for(i=1,a=I;i<I/2;i++,a--)
{
for(j=(int) ( I-sqrt(I*I-(a-i)*(a-i)) );j>0;j--)
printf(" ");
for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)
printf("*");
for(j=(int)
( 2*( I-sqrt(I*I-(a-i)*(a-i)) ) );
j>0;j--)
printf(" ");
for(e=1;e<=2*sqrt(I*I-(a-i)*(a-i));e++)
printf("*");
printf("\n"); }
for(i=1;i<80;i++)
{
if(i==25)
{
printf("    ����Ϊ�ң���Ϊ����!!   ");
i+=28;
}
printf("*");
}
printf("\n");
for(i=1;i<=R/2;i++)
{
if(i%2||i%3)
continue;
for(j=(int) 
( R-sqrt(R*R-i*i) );j>0;j--)
printf(" ");
for(e=1;e<=2*( sqrt(R*R-i*i) - (R-2*I) );e++)
printf("*");
printf("\n");
}
for(; ; )
{
system("color a");
for(time=0;time<89999999;time++);
 system("color b");
for(time=0;time<89999999;time++); system("color c");
 for(time=0;time<89999999;time++); system("color d");
 for(time=0;time<89999999;time++); system("color e");
 for(time=0;time<89999999;time++); system("color f");
for(time=0;time<89999999;time++);
 system("color 0");
  for(time=0;time<89999999;time++);
  system("color 1");
   for(time=0;time<89999999;time++);
  system("color 2"); 
   for(time=0;time<89999999;time++);
   system("color 3"); 
   for(time=0;time<89999999;time++);
  system("color 4");
  for(time=0;time<89999999;time++); 
   system("color 5");
  for(time=0;time<89999999;time++); 
 system("color 6");
   for(time=0;time<89999999;time++);
   system("color 7");
	for(time=0;
	time<89999999;time++);
	 system("color 8");
	 for(time=0;time<89999999;time++); 
	 system("color 9");
	 for(time=0;time<8999999;time++); 
	 system("color db");
   for(time=0;time<8999999;time++);
	  system("color ac");
	  for(time=0;time<89999999;time++); system("color 8d");
	  for(time=0;time<89999999;time++); system("color be");
	 
	  system("cls");
	   break;}}
	   
//��ʼ������ 
void checkfirst()
{
	FILE *fp2,*fp1;
	char a[9];
	int i;
	if((fp2=fopen("d.txt","r"))==NULL)
		{
		  strcpy(a,"12345678");
		 i=0;
		 while(a[i])
		 {
		 	fputc(a[i],fp1);
		 	i++;
		 }
		 	fclose(fp1);
		  } 
		  else
		  {
		  	i=0;
		  	while(!feof(fp2)&&i<8)
		  	a[i++]=fgetc(fp2);
		  	a[i]='\0';
          if(i>=8)
		  	i--;
		  	while(a[i]!=-1&&i>=0)
		  	i--;
		  	a[i]='\0'; 
		  	strcpy(password,a);
		  }

}
 
//�޸����뺯�� 
void update()
{
	char a[9],a1[9],ch;
	int i;
	FILE *fp1;
	system("cls");
	printf("\n����������룺\n");
	for(i=0;i<8&&((a[i]=getch())!=13);i++)
    putch('*');
    a[i]='\0';
    if(strcmp(password,a)!=0)
    {
    	printf("\n��������밴������˳���\n");
    	getch();
    	return ;
	}
	do{
		printf("\n���������룬�벻Ҫ����8λ��\n"); 
		for(i=0;i<8&&((a[i]=getch())!=13);i++)
		putch('*');
		a[i]='\0'; 
		printf("\n");
		printf("����ȷ�����룺\n");
	    for(i=0;i<8&&((a1[i]=getch())!=13);i++)
	    putch('*');
		a1[i]='\0';
		if(strcmp(a,a1)!=0)
		printf("\n�����������벻һ�£����������룡\n\n");
		else
		break;
	}while(1);
	if((fp1=fopen("d.txt","w"))==NULL)
	{
		printf("\nϵͳ����ʧ�ܣ���������˳���");
		getch();
		exit(1); 
	}
	i=0;
	while(a[i])
	{
		fputc(a[i],fp1);
		i++; 
	}
	fclose(fp1);
	printf("\n�����޸ĳɹ�����������˳�!\n");
	getch();
	return ; 
}
