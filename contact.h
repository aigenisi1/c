#define NAME_MAX 20
#define GENDER_MAX 10
#define TEL_MAX 20
#define ADDR_MAX 100
typedef struct personInfo {
	char name[NAME_MAX];
	char gender[GENDER_MAX];
	int age;
	char tel[TEL_MAX]:
	char addr[ADDR_MAX];
}peoinfo;

typedef SL contact;

struct SeqList;
typedef struct SeqList contact;
//通讯录的初始化
void contactinit(contact* con);
//销毁
void contactdestroy(contact* con);
void contactadd(contact* con);
void contactdel(contact* con);
void contactmodify(contact* con);
void contactfind(contact* con);
void contactshow(contact* con);
