#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<string.h>
#include<graphics.h>
#include<stdlib.h>
#include<conio.h>

int map[11][13][13] =
{
	{0,0,0,0,0,0,0,0,0,0,0,0,0,
	 0,1 ,1 ,1 ,1 ,1 ,20,1 ,0 ,1 ,15,1 ,0,
	 0,1 ,0 ,0 ,0 ,1 ,1 ,1 ,0 ,22,1,23,0,
	 0,1 ,16,1 ,0 ,1 ,1 ,1 ,0 ,13,1 ,13,0,
	 0,26,0 ,1 ,0 ,3 ,6 ,3 ,0 ,27,9 ,27,0,
	 0,3 ,0 ,23,0 ,0 ,26,0 ,0 ,0 ,17,0 ,0,
	 0,4 ,0 ,22,0 ,22,14,23,0 ,1 ,8 ,1 ,0,
	 0,3 ,0 ,1 ,0 ,0 ,6 ,0 ,0 ,26,1 ,26,0,
	 0,16,0 ,17,0 ,13,1 ,13,0 ,22,8 ,23,0,
	 0,1 ,1 ,1 ,0 ,1 ,1 ,1 ,0 ,0 ,16,0 ,0,
	 0,1 ,0 ,0 ,0 ,1 ,1 ,1 ,0 ,1 ,8 ,1 ,0,
	 0,13,14,1 ,16,1 ,2 ,1 ,16,1 ,1 ,13,0,
	 0,0,0,0,0,0,0,0,0,0,0,0,0},

    {
    0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,1 ,1 ,1 ,1 ,2 ,19,1 ,1 ,1 ,1 ,29,0,
	0,1 ,0 ,0 ,0 ,1 ,1 ,1 ,0 ,0 ,0 ,18,0,
	0,1 ,0 ,22,0 ,0 ,0 ,0 ,0 ,1 ,1 ,1 ,0,
	0,1 ,0 ,27,23,23,0 ,1 ,1 ,1 ,1 ,1 ,0,
	0,1 ,0 ,27,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0,
	0,1 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,0 ,0,
	0,1 ,0 ,1 ,1 ,1 ,1 ,1 ,0 ,1 ,37,1 ,0,
	0,1 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,1 ,1 ,0,
	0,1 ,0 ,1 ,1 ,1 ,1 ,1 ,0 ,1 ,1 ,1 ,0,
	0,1 ,0 ,14,14,1 ,0 ,1 ,0 ,1 ,1 ,1 ,0,
	0,20,0 ,13,13,13,0 ,1, 18,1 ,1 ,1 ,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0
    },

   {
	   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	   0 ,26,1 ,1 ,1 ,1 ,1 ,0 ,3 ,1 ,1 ,1 ,0 ,
	   0 ,26,13,1 ,0 ,1 ,6 ,16,1 ,1 ,0 ,1 ,0 ,
	   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,4 ,1 ,0 ,1 ,0 ,
	   0 ,22,1 ,1 ,1 ,1 ,11,16,1 ,1 ,0 ,1 ,0 ,
	   0 ,23,14,1 ,0 ,1 ,1 ,0 ,13,1 ,0 ,1 ,0 ,
	   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,1 ,0 ,
	   0 ,20,1 ,3 ,6 ,3 ,1 ,1 ,1 ,1 ,0 ,1 ,0 ,
	   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,
	   0 ,1 ,1 ,13,0 ,1 ,16,1 ,4 ,3 ,4 ,1 ,0 ,
	   0 ,2 ,1 ,1 ,16,1 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,
	   0 ,19,1 ,1 ,0 ,1 ,1 ,1 ,6 ,6 ,6 ,1 ,0 ,
	   0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
    },
    {
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,33,1 ,1 ,0 ,22,6 ,1 ,0 ,3 ,3 ,26 ,0 ,
	0 ,1 ,1 ,1 ,0 ,6 ,6 ,1 ,0 ,3 ,1 ,26,0 ,
	0 ,1 ,1 ,5 ,0 ,0 ,0 ,1 ,0 ,0 ,0 ,1 ,0 ,
	0 ,0 ,0 ,16,0 ,1 ,16,8 ,4 ,3 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,8 ,1 ,0 ,
	0 ,19,2 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,0 ,
	0 ,0 ,0 ,16,0 ,0 ,0 ,16,0 ,0 ,1 ,0 ,0 ,
	0 ,1 ,1 ,11,0 ,1 ,4 ,6 ,1 ,0 ,1 ,22,0 ,
	0 ,13,1 ,1 ,0 ,1 ,1 ,4 ,1 ,0 ,1 ,23,0 ,
	0 ,13,13,1 ,0 ,27,1 ,1 ,1 ,0 ,1 ,20,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
    },
    {
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,1 ,1 ,1 ,1 ,0 ,23,1 ,1 ,1 ,1 ,20,0 ,
	0 ,1 ,1 ,1 ,1 ,0 ,22,0 ,0 ,0 ,0 ,4,0 ,
	0 ,1 ,1 ,1 ,1 ,0 ,16,0 ,13,13,0 ,3 ,0 ,
	0 ,0 ,0 ,0 ,1 ,0 ,16,0 ,1 ,1 ,0 ,4 ,0 ,
	0 ,1 ,4 ,5 ,26,4 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,0 ,0 ,0 ,0 ,17,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,0 ,0 ,0 ,0 ,16,0 ,16,0 ,16,0 ,1 ,0 ,
	0 ,1 ,1 ,0 ,6 ,6 ,0 ,11,0 ,8 ,0 ,1 ,0 ,
	0 ,1 ,1 ,16,1 ,6 ,0 ,26,0 ,26,0 ,2 ,0 ,
	0 ,24,1 ,0 ,1 ,1 ,0 ,23,0 ,22,0 ,19,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
     },
	{
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,34,1 ,1 ,1 ,0 ,1 ,1 ,1 ,1 ,2 ,19,0 ,
	0 ,1 ,1 ,1 ,1 ,0 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,28,0 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,0 ,0 ,0 ,16,0 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	 },
	{
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	 },
	{
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	},
	{
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	}, {
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	},
	{
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	0 ,2 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,0 ,
	0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,
	0 ,1 ,1 ,27,27,26,0 ,13,14,15,1 ,1 ,0 ,
	0 ,1 ,1 ,27,27,26,0 ,13,13,14,1 ,1 ,0 ,
	0 ,1 ,1 ,26,26,26,0 ,13,13,13,1 ,1 ,0 ,
	0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,
	0 ,1 ,1 ,22,22,22,0 ,23,23,23,1 ,1 ,0 ,
	0 ,1 ,1 ,3 ,3 ,22,0 ,23,4 ,4 ,1 ,1 ,0 ,
	0 ,1 ,1 ,3 ,3 ,22,0 ,23,4 ,4 ,1 ,1 ,0 ,
	0 ,1 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,1 ,0 ,
	0 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,1 ,41,1 ,0 ,
	0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,
	}
};


/** 角色信息  */
struct gameRole {
	char rolename[20];
	int life;       //生命值
	int level;      //等级
	int blue;       //蓝量
	int defence;    //防御
	int attack;     //攻击
	int yellow_key; //黄钥匙
	int blue_key;   //蓝钥匙
	int red_key;    //红钥匙
	int exp;        //经验
}role;

/** 怪物信息*/
struct monster {
	int life;
	int blue;
	int defence;
	int attack;
	int exp;
};

int K = 20;
int EXP = 200;
struct monster xiaobianfu{30,0,0,55,100};
struct monster wushi{60,10,15,40,200};
struct monster xiaoshilaimu{25,0,1,21,40};
struct monster zhongshilanmu{35,0,2,25,50};
struct monster dashilaimu{};
struct monster dabianfu{};
struct monster kuloushibing{80,0,13,35,250};
struct monster kulouduizhang{};
struct monster hongkulou{};
struct monster dafashi{};
struct monster zhangjiaxin{};
struct monster fanzheqian{1000,500,500,500,5000};
struct monster niuwa{};
struct monster zengyihang{};
struct monster caodingying{};
struct monster guanliang{1000,0,150,150,5000};

IMAGE img[42];

void putrole()
{
	//role.rolename = 'x';
	role.level = 0;
	role.life = 10000;
	role.blue = 200;
	role.attack = 1000;
	role.defence = 1000;
	role.yellow_key = 100;
	role.blue_key = 100;
	role.red_key = 100;
	role.exp = 0;
}
/* 资源加载*/
void loadresource() 
{
	for (int i = 0; i < 42; i++)
	{
		char filename[20] = "";
		sprintf(filename, "%d.jpg", i);
		loadimage(img + i, filename, 60, 60);
	}

}

/*与怪物战斗判定函数*/
bool pk(struct monster monsterx)
{
	if (role.attack <= monsterx.defence)
	{
		return false;
	}
	
	int round; //互相攻击轮数,设置玩家首先攻击
	round = monsterx.life / (role.attack-monsterx.defence);
	int ys = monsterx.life % role.attack;
		if (ys > 0)
		{
			round++;
		}
		else
			ys++;//no sence here!
	if (role.life < ((round - 1) * monsterx.attack))
	{
		return false;
	}
	else
	{
		role.life = role.life - ((round - 1) * monsterx.attack);
		role.exp = role.exp + monsterx.exp;
		return true;
	}
}
/*计算损失血量函数*/
int pkreturn(struct monster monsters)
{
	if (role.attack <= monsters.defence)
	{
		return 9999;
	}
	int round;
	round = monsters.life /  (role.attack-monsters.defence);
	int ys = monsters.life % role.attack;
	if (ys > 0)
	{
		round++;
	}
	int y = (round - 1) * monsters.attack;
	if (y > role.life)
	{
		return 9999;
	}
	else
	return y;
}

struct map {
	int map[10];
};

char str[20] = "";
char* intToWcahr(int xNum)
{
	sprintf(str, "%d", xNum);
	return str;
}

int N = 0;
/**  地图绘制*/
void drawmap(int n)
{
	int x, y;
	char st[20] = "";
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			x = 60 * j;
			y = 60 * i;
			putimage(x, y, &img[map[N][i][j]]);
		}
		for (int j = 13; j < 15; j++)
		{
			x = 60 * j;
			y = 60 * i;
			putimage(x, y, &img[map[0][1][11]]);
		}
	}
	outtextxy(780, 40, "角色等级:");
	outtextxy(780, 80, intToWcahr(role.level));
	outtextxy(780, 120, "生命值:");
	outtextxy(780, 160, intToWcahr(role.life));
	outtextxy(780, 200, "蓝量:");
	outtextxy(780, 240, intToWcahr(role.blue));
	outtextxy(780, 280, "攻击力:");
	outtextxy(780, 320, intToWcahr(role.attack));
	outtextxy(780, 360, "防御力:");
	outtextxy(780, 400, intToWcahr(role.defence));
	outtextxy(780, 440, "经验值:");
	outtextxy(780, 480, intToWcahr(role.exp));
	outtextxy(780, 520, "黄钥匙:");
	outtextxy(780, 560, intToWcahr(role.yellow_key));
	outtextxy(780, 600, "蓝钥匙:");
	outtextxy(780, 640, intToWcahr(role.blue_key));
	outtextxy(780, 680, "红钥匙:");
	outtextxy(780, 720, intToWcahr(role.red_key));
}

void monsterlist(){
	int x, y;
	int i, j;
	int k=0,l=0;
	int flag1=0, flag2=0, flag3=0, flag4=0, flag5=0, flag6=0, flag7=0, flag8=0, flag9=0, flag10=0, flag11=0, flag12=0, flag13=0,flag14=0,flag15=0;
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 15; j++)
		{
			x = 60 * j;
			y = 60 * i;
			putimage(x, y, &img[map[0][1][11]]);
		}
	}
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (map[N][i][j] == 3)
			{
				if (flag1 == 0)
				{
					putimage(k, l+20, &img[map[N][i][j]]);
					outtextxy(k, l, "小史莱姆:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
					outtextxy(k+180, l + 40, intToWcahr(xiaoshilaimu.life));
					outtextxy(k + 320, l + 40, intToWcahr(xiaoshilaimu.attack));
					outtextxy(k + 460, l + 40, intToWcahr(xiaoshilaimu.defence));
					outtextxy(k + 600, l + 40, intToWcahr(xiaoshilaimu.exp));
					outtextxy(k + 740, l + 40, intToWcahr(pkreturn(xiaoshilaimu)));
					if (pkreturn(xiaoshilaimu) == 9999)
					{
						outtextxy(k + 775, l + 40, "(你打不过，捞逼)");
					}
					l = l + 70;
					flag1++;
				}
			}

			else if (map[N][i][j] == 4)
			{
				if (flag2 == 0)
				{
					outtextxy(k, l, "红史莱姆:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
					putimage(k, l + 20, &img[map[N][i][j]]);
					outtextxy(k + 180, l + 40, intToWcahr(zhongshilanmu.life));
					outtextxy(k + 320, l + 40, intToWcahr(zhongshilanmu.attack));
					outtextxy(k + 460, l + 40, intToWcahr(zhongshilanmu.defence));
					outtextxy(k + 600, l + 40, intToWcahr(zhongshilanmu.exp));
					outtextxy(k + 740, l + 40, intToWcahr(pkreturn(zhongshilanmu)));
					if (pkreturn(zhongshilanmu) == 9999)
					{
						outtextxy(k + 775, l + 40, "你打不过，捞逼");
					}
					l = l + 70;
					flag2++;
				}
			}

			else if (map[N][i][j] == 5)
			{
				if (flag3 == 0)
				{
					outtextxy(k, l, "黑史莱姆:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
					putimage(k, l + 20, &img[map[N][i][j]]);
					outtextxy(k + 180, l + 40, intToWcahr(dashilaimu.life));
					outtextxy(k + 320, l + 40, intToWcahr(dashilaimu.attack));
					outtextxy(k + 460, l + 40, intToWcahr(dashilaimu.defence));
					outtextxy(k + 600, l + 40, intToWcahr(dashilaimu.exp));
					outtextxy(k + 740, l + 40, intToWcahr(pkreturn(dashilaimu)));
					if (pkreturn(dashilaimu) == 9999)
					{
						outtextxy(k + 775, l + 40, "你打不过，捞逼");
					}
					l = l + 70;
					flag3++;
				}
			}

			else if (map[N][i][j] == 6)
			{
				if (flag4 == 0)
				{
					outtextxy(k, l, "小蝙蝠:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
					putimage(k, l + 20, &img[map[N][i][j]]);
					outtextxy(k + 180, l + 40, intToWcahr(xiaobianfu.life));
					outtextxy(k + 320, l + 40, intToWcahr(xiaobianfu.attack));
					outtextxy(k + 460, l + 40, intToWcahr(xiaobianfu.defence));
					outtextxy(k + 600, l + 40, intToWcahr(xiaobianfu.exp));
					outtextxy(k + 740, l + 40, intToWcahr(pkreturn(xiaobianfu)));
					if (pkreturn(xiaoshilaimu) == 9999)
					{
						outtextxy(k + 775, l + 40, "你打不过，捞逼");
					}
					l = l + 70;
					flag4++;
				}
			}

			else if (map[N][i][j] == 7)
			{
				if (flag5 == 0)
				{
					outtextxy(k, l, "大蝙蝠:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
					putimage(k, l + 20, &img[map[N][i][j]]);
					outtextxy(k + 180, l + 40, intToWcahr(dabianfu.life));
					outtextxy(k + 320, l + 40, intToWcahr(dabianfu.attack));
					outtextxy(k + 460, l + 40, intToWcahr(dabianfu.defence));
					outtextxy(k + 600, l + 40, intToWcahr(dabianfu.exp));
					outtextxy(k + 740, l + 40, intToWcahr(pkreturn(dabianfu)));
					if (pkreturn(dabianfu) == 9999)
					{
						outtextxy(k + 775, l + 40, "你打不过，捞逼");
					}
					l = l + 70;
					flag5++;
				}
			}

			else if (map[N][i][j] == 8)
			{
				if (flag6 == 0)
				{
					outtextxy(k, l, "骷髅怪:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
					putimage(k, l + 20, &img[map[N][i][j]]);
					outtextxy(k + 180, l + 40, intToWcahr(kuloushibing.life));
					outtextxy(k + 320, l + 40, intToWcahr(kuloushibing.attack));
					outtextxy(k + 460, l + 40, intToWcahr(kuloushibing.defence));
					outtextxy(k + 600, l + 40, intToWcahr(kuloushibing.exp));
					outtextxy(k + 740, l + 40, intToWcahr(pkreturn(kuloushibing)));
					if (pkreturn(kuloushibing) == 9999)
					{
						outtextxy(k + 775, l + 40, "你打不过，捞逼");
					}
					l = l + 70;
					flag6++;
				}
			}

			else if (map[N][i][j] == 9)
			{
				if (flag7 == 0)
				{
					outtextxy(k, l, "骷髅队长:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
					putimage(k, l + 20, &img[map[N][i][j]]);
					outtextxy(k + 180, l + 40, intToWcahr(kulouduizhang.life));
					outtextxy(k + 320, l + 40, intToWcahr(kulouduizhang.attack));
					outtextxy(k + 460, l + 40, intToWcahr(kulouduizhang.defence));
					outtextxy(k + 600, l + 40, intToWcahr(kulouduizhang.exp));
					outtextxy(k + 740, l + 40, intToWcahr(pkreturn(kulouduizhang)));
					if (pkreturn(kulouduizhang) == 9999)
					{
						outtextxy(k + 775, l + 40, "你打不过，捞逼");
					}
					l = l + 70;
					flag7++;
				}
			}

			else if (map[N][i][j] == 10)
			{
			if (flag8 == 0)
			{
				outtextxy(k, l, "红骷髅:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(hongkulou.life));	
				outtextxy(k + 320, l + 40, intToWcahr(hongkulou.attack));
				outtextxy(k + 460, l + 40, intToWcahr(hongkulou.defence));
				outtextxy(k + 600, l + 40, intToWcahr(hongkulou.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(hongkulou)));
				if (pkreturn(hongkulou) == 9999)
				{
					outtextxy(k + 775, l + 40, "你打不过，捞逼");
				}
				l = l + 70;
				flag8++;
			}
			}

			else if (map[N][i][j] == 11)
			{
			if (flag9 == 0)
			{
				outtextxy(k, l, "巫师:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(wushi.life));
				outtextxy(k + 320, l + 40, intToWcahr(wushi.attack));
				outtextxy(k + 460, l + 40, intToWcahr(wushi.defence));
				outtextxy(k + 600, l + 40, intToWcahr(wushi.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(wushi)));
				if (pkreturn(wushi) == 9999)
				{
					outtextxy(k + 775, l + 40, "(你打不过，捞逼)");
				}
				l = l + 70;
				flag9++;
			}
			}

			else if (map[N][i][j] == 12)
			{
			if (flag10 == 0)
			{
				outtextxy(k, l, "红巫师:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(dafashi.life));
				outtextxy(k + 320, l + 40, intToWcahr(dafashi.attack));
				outtextxy(k + 460, l + 40, intToWcahr(dafashi.defence));
				outtextxy(k + 600, l + 40, intToWcahr(dafashi.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(dafashi)));
				if (pkreturn(dafashi) == 9999)
				{
					outtextxy(k + 775, l + 40, "你打不过，捞逼");
				}
				l = l + 70;
				flag10++;
			}
			}

			else if (map[N][i][j] == 28)
			{
			if (flag11 == 0)
			{
				outtextxy(k, l, "张佳欣:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(zhangjiaxin.life));
				outtextxy(k + 320, l + 40, intToWcahr(zhangjiaxin.attack));
				outtextxy(k + 460, l + 40, intToWcahr(zhangjiaxin.defence));
				outtextxy(k + 600, l + 40, intToWcahr(zhangjiaxin.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(zhangjiaxin)));
				if (pkreturn(zhangjiaxin) == 9999)
				{
					outtextxy(k + 775, l + 40, "你打不过这个恶人");
				}
				l = l + 70;
				flag5++;
			}
			}

			else if (map[N][i][j] == 29)
			{
			if (flag12 == 0)
			{
				outtextxy(k, l, "官亮:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(guanliang.life));
				outtextxy(k + 320, l + 40, intToWcahr(guanliang.attack));
				outtextxy(k + 460, l + 40, intToWcahr(guanliang.defence));
				outtextxy(k + 600, l + 40, intToWcahr(guanliang.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(guanliang)));
				if (pkreturn(guanliang) == 9999)
				{
					outtextxy(k + 775, l + 40, "原来是亮仔");
				}
				l = l + 70;
				flag12++;
			}
			}

			else if (map[N][i][j] == 30)
			{
			if (flag13 == 0)
			{
				outtextxy(k, l, "曹丁尹:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(caodingying.life));
				outtextxy(k + 320, l + 40, intToWcahr(caodingying.attack));
				outtextxy(k + 460, l + 40, intToWcahr(caodingying.defence));
				outtextxy(k + 600, l + 40, intToWcahr(caodingying.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(caodingying)));
				if (pkreturn(caodingying) == 9999)
				{
					outtextxy(k + 775, l + 40, "目前打不过小曹");
				}
				l = l + 70;
				flag13++;
			}
			}

			else if (map[N][i][j] == 31)
			{
			if (flag14 == 0)
			{
				outtextxy(k, l, "曾一航:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(zengyihang.life));
				outtextxy(k + 320, l + 40, intToWcahr(zengyihang.attack));
				outtextxy(k + 460, l + 40, intToWcahr(zengyihang.defence));
				outtextxy(k + 600, l + 40, intToWcahr(zengyihang.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(zengyihang)));
				if (pkreturn(zengyihang) == 9999)
				{
					outtextxy(k + 775, l + 40, "目前打不过建航");
				}
				l = l + 70;
				flag14++;
			}
			}

			else if (map[N][i][j] == 32)
			{
			if (flag15 == 0)
			{
				outtextxy(k, l, "范哲千:                        生命值                        攻击力                        防御值                        经验值                        击杀要损失的血量");
				putimage(k, l + 20, &img[map[N][i][j]]);
				outtextxy(k + 180, l + 40, intToWcahr(fanzheqian.life));
				outtextxy(k + 320, l + 40, intToWcahr(fanzheqian.attack));
				outtextxy(k + 460, l + 40, intToWcahr(fanzheqian.defence));
				outtextxy(k + 600, l + 40, intToWcahr(fanzheqian.exp));
				outtextxy(k + 740, l + 40, intToWcahr(pkreturn(fanzheqian)));
				if (pkreturn(fanzheqian) == 9999)
				{
					outtextxy(k + 775, l + 40, "小范仔!");
				}
				l = l + 70;
				flag15++;
			}
			}

		}
	}
	system("pause");
}


void shop()
{
	int x, y, i, j;
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 15; j++)
		{
			x = 60 * j;
			y = 60 * i;
			putimage(x, y, &img[map[0][1][11]]);
		}
	}

	outtextxy(200, 200, "A、消耗exp提升8点攻击力(        按j      )");
	outtextxy(200, 400, "B、消耗exp提升8点防御力(        按k      )");
	outtextxy(200, 600, "C、消耗exp提升800点生命值(      按l      )");
	outtextxy(200, 750, "消耗EXP：");
	outtextxy(400, 750, intToWcahr(EXP));
	char userkey;
	userkey = _getch();
	switch (userkey)
	{
	case'j':
		if (role.exp >= EXP)
		{
			role.attack = role.attack + 8;
			role.exp = role.exp - EXP;
			EXP = EXP * 2;
		}
		break;

	case'k':
		if (role.exp >= 200)
		{
			role.defence = role.defence + 8;
			role.exp = role.exp - EXP;
			EXP = EXP * 2;
		}
		break;

	case'l':
		if (role.exp >= 200)
		{
			role.life = role.life + 800;
			role.exp = role.exp - EXP;
			EXP = EXP * 2;
		}
		break;
	}
}

void getkey()
{
	char userkey;
	int i, j;
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (map[N][i][j] == 2)
				break;
		}
		if (map[N][i][j] == 2)
			break;
	}
	userkey = _getch();
	switch (userkey)
	{
		                                                                                        //往左走
	case 'A':
	case 'a':
	case 75:
		if (map[N][i][j - 1] == 1)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}

		else if (map[N][i][j - 1] == 3)//pk 小史莱姆
		{
			if (pk(xiaoshilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j - 1] == 4)//pk 中史莱姆
		{
			if (pk(zhongshilanmu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j - 1] == 5)//pk 大史莱姆
		{
			if (pk(dashilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j - 1] == 6)//pk 小蝙蝠
		{
			if (pk(xiaobianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}
			
		}

		else if (map[N][i][j - 1] == 7)//pk 大蝙蝠
		{
			if (pk(dabianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j - 1] == 8)//pk 骷髅士兵
		{
			if (pk(kuloushibing) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j - 1] == 9)//pk 骷髅队长
		{
			if (pk(kulouduizhang) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j - 1] == 10)//pk 红骷髅
		{
		if (pk(hongkulou) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 11)//pk 巫师
		{
		if (pk(wushi) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 12)//pk 大法师
		{
		if (pk(dafashi) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 13)//捡起黄钥匙
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
			role.yellow_key++;
		}

		else if (map[N][i][j - 1] == 14)//捡起蓝钥匙
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
			role.blue_key++;
		}

		else if (map[N][i][j - 1] == 15)//捡起红钥匙
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
			role.red_key++;
		}

		else if (map[N][i][j - 1] == 16)//使用黄钥匙
		{
			if (role.yellow_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
				role.yellow_key--;
			}
		}

		else if (map[N][i][j - 1] == 17)//使用蓝钥匙
		{
			if (role.blue_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
				role.blue_key--;
			}
		}

		else if (map[N][i][j - 1] == 18)//使用红钥匙
		{
			if (role.red_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i][j - 1] = 2;
				role.red_key--;
			}
		}

		else if (map[N][i][j - 1] == 19)//进入下一层
		{
			N--;
		}

		else if (map[N][i][j - 1] == 20)//进入上一层
		{
			N++;
		}

		else if (map[N][i][j - 1] == 22) //捡起红宝石
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
			role.attack = role.attack + 3;
		}

		else if (map[N][i][j - 1] == 23) //捡起蓝宝石
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
			role.defence = role.defence + 3;
		}

		else if (map[N][i][j - 1] == 24) //捡起暴风小剑
		{
		map[N][i][j] = 1;
		map[N][i][j - 1] = 2;
		role.attack = role.attack + 20;
		}

		else if (map[N][i][j - 1] == 25) //捡起圣物之盾
		{
		map[N][i][j] = 1;
		map[N][i][j - 1] = 2;
		role.defence = role.defence + 20;
		}

		else if (map[N][i][j - 1] == 26)//捡起红药水
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
			role.life = role.life + 300;
		}

		else if (map[N][i][j - 1] == 27) //捡起蓝药水
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
			role.life = role.life + 800;
		}

		else if (map[N][i][j - 1] == 28)//pk 张佳欣
		{
		if (pk(zhangjiaxin) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 29)//pk 官亮
		{
		if (pk(guanliang) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 30)//pk 曹丁尹
		{
		if (pk(caodingying) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 31)//pk 曾一航
		{
		if (pk(zengyihang) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 32)//pk 小范
		{
		if (pk(fanzheqian) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j - 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j - 1] == 33)
		{
		map[N][i][j - 1] = 14;
        }

		else if (map[N][i][j - 1] == 34)
		{
		map[N][i][j - 1] = 15;
		}

		else if (map[N][i][j - 1] == 37)
		{
		N = 10;
        }

		else if (map[N][i][j - 1] == 41)
		{
		N = 1;
        }



		break;










		                                                                                               //往右走
	case 'D':
	case 'd':
	case 77:
		
		if (map[N][i][j + 1] == 1)
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
		}

		else if (map[N][i][j + 1] == 3)//pk 小史莱姆
		{
			if (pk(xiaoshilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 4)//pk 中史莱姆
		{
			if (pk(zhongshilanmu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 5)//pk 大史莱姆
		{
			if (pk(dashilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 6)//pk 小蝙蝠
		{
			if (pk(xiaobianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 7)//pk 大蝙蝠
		{
			if (pk(dabianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 8)//pk 骷髅士兵
		{
			if (pk(kuloushibing) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 9)//pk 骷髅队长
		{
			if (pk(kulouduizhang) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 10)//pk 红骷髅
		{
			if (pk(hongkulou) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 11)//pk 巫师
		{
			if (pk(wushi) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 12)//pk 大法师
		{
			if (pk(dafashi) == true)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i][j + 1] == 13)//捡起黄钥匙
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.yellow_key++;
		}

		else if (map[N][i][j + 1] == 14)//捡起蓝钥匙
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.blue_key++;
		}

		else if (map[N][i][j + 1] == 15)//捡起红钥匙
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.red_key++;
		}

		else if (map[N][i][j + 1] == 16)//使用黄钥匙
		{
			if (role.yellow_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
				role.yellow_key--;
			}
		}

		else if (map[N][i][j + 1] == 17)//使用蓝钥匙
		{
			if (role.blue_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
				role.blue_key--;
			}
		}

		else if (map[N][i][j + 1] == 18)//使用红钥匙
		{
			if (role.red_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i][j + 1] = 2;
				role.red_key--;
			}
		}

		else if (map[N][i][j + 1] == 19)//进入下一层
		{
			N--;
		}

		else if (map[N][i][j + 1] == 20)//进入上一层
		{
			N++;
		}

		else if (map[N][i][j + 1] == 22) //捡起红宝石
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.attack = role.attack + 3;
		}

		else if (map[N][i][j + 1] == 23) //捡起蓝宝石
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.defence = role.defence + 3;
		}

		else if (map[N][i][j + 1] == 24) //捡起暴风小剑
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.attack = role.attack + 20;
		}

		else if (map[N][i][j + 1] == 25) //捡起圣物之盾
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.defence = role.defence + 20;
		}

		else if (map[N][i][j + 1] == 26)//捡起红药水
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.life = role.life + 300;
		}

		else if (map[N][i][j + 1] == 27) //捡起蓝药水
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
			role.life = role.life + 800;
		}

		else if (map[N][i][j + 1] == 28)//pk 张佳欣
		{
		if (pk(zhangjiaxin) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j + 1] == 29)//pk 官亮
		{
		if (pk(guanliang) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j + 1] == 30)//pk 曹丁尹
		{
		if (pk(caodingying) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j + 1] == 31)//pk 曾一航
		{
		if (pk(zengyihang) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i][j + 1] == 32)//pk 小范
		{
		if (pk(fanzheqian) == true)
		{
			map[N][i][j] = 1;
			map[N][i][j + 1] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}




		break;












	                                                                                           //往上走
	case 'W':
	case 'w':
	case 72:
		
		if (map[N][i - 1][j] == 1)
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
		}

		else if (map[N][i - 1][j] == 3)//pk 小史莱姆
		{
			if (pk(xiaoshilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 4)//pk 中史莱姆
		{
			if (pk(zhongshilanmu) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 5)//pk 大史莱姆
		{
			if (pk(dashilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 6)//pk 小蝙蝠
		{
			if (pk(xiaobianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 7)//pk 大蝙蝠
		{
			if (pk(dabianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 8)//pk 骷髅士兵
		{
			if (pk(kuloushibing) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 9)//pk 骷髅队长
		{
			if (pk(kulouduizhang) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 10)//pk 红骷髅
		{
			if (pk(hongkulou) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 11)//pk 巫师
		{
			if (pk(wushi) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 12)//pk 大法师
		{
			if (pk(dafashi) == true)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i - 1][j] == 13)//捡起黄钥匙
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.yellow_key++;
		}

		else if (map[N][i - 1][j] == 14)//捡起蓝钥匙
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.blue_key++;
		}

		else if (map[N][i - 1][j] == 15)//捡起红钥匙
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.red_key++;
		}

		else if (map[N][i - 1][j] == 16)//使用黄钥匙
		{
			if (role.yellow_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
				role.yellow_key--;
			}
		}

		else if (map[N][i - 1][j] == 17)//使用蓝钥匙
		{
			if (role.blue_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
				role.blue_key--;
			}
		}

		else if (map[N][i - 1][j] == 18)//使用红钥匙
		{
			if (role.red_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i - 1][j] = 2;
				role.red_key--;
			}
		}

		else if (map[N][i - 1][j] == 19)//进入下一层
		{
			N--;
		}

		else if (map[N][i - 1][j] == 20)//进入上一层
		{
			N++;
		}

		else if (map[N][i - 1][j] == 22) //捡起红宝石
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.attack = role.attack + 3;
		}

		else if (map[N][i - 1][j] == 23) //捡起蓝宝石
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.defence = role.defence + 3;
		}

		else if (map[N][i - 1][j] == 24) //捡起暴风小剑
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.attack = role.attack + 20;
		}

		else if (map[N][i - 1][j] == 25) //捡起圣物之盾
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.defence = role.defence + 20;
		}

		else if (map[N][i - 1][j] == 26)//捡起红药水
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.life = role.life + 300;
		}

		else if (map[N][i - 1][j] == 27) //捡起蓝药水
		{
			map[N][i][j] = 1;
			map[N][i - 1][j] = 2;
			role.life = role.life + 800;
		}

		else if (map[N][i-1][j] == 28)//pk 张佳欣
		{
		if (pk(zhangjiaxin) == true)
		{
			map[N][i][j] = 1;
			map[N][i-1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i-1][j] == 29)//pk 官亮
		{
		if (pk(guanliang) == true)
		{
			map[N][i][j] = 1;
			map[N][i-1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i-1][j] == 30)//pk 曹丁尹
		{
		if (pk(caodingying) == true)
		{
			map[N][i][j] = 1;
			map[N][i-1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i-1][j] == 31)//pk 曾一航
		{
		if (pk(zengyihang) == true)
		{
			map[N][i][j] = 1;
			map[N][i-1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i-1][j] == 32)//pk 小范
		{
		if (pk(fanzheqian) == true)
		{
			map[N][i][j] = 1;
			map[N][i-1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}



		break;










	                                                                                            	//往下走
	case 'S':
	case 's':
	case 80:
	

		if (map[N][i + 1][j] == 1)
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
		}

		else if (map[N][i + 1][j] == 3)//pk 小史莱姆
		{
			if (pk(xiaoshilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 4)//pk 中史莱姆
		{
			if (pk(zhongshilanmu) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 5)//pk 大史莱姆
		{
			if (pk(dashilaimu) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 6)//pk 小蝙蝠
		{
			if (pk(xiaobianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 7)//pk 大蝙蝠
		{
			if (pk(dabianfu) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 8)//pk 骷髅士兵
		{
			if (pk(kuloushibing) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 9)//pk 骷髅队长
		{
			if (pk(kulouduizhang) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 10)//pk 红骷髅
		{
			if (pk(hongkulou) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 11)//pk 巫师
		{
			if (pk(wushi) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 12)//pk 大法师
		{
			if (pk(dafashi) == true)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
			}
			else
			{
				//死亡界面
				break;
			}

		}

		else if (map[N][i + 1][j] == 13)//捡起黄钥匙
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.yellow_key++;
		}

		else if (map[N][i + 1][j] == 14)//捡起蓝钥匙
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.blue_key++;
		}

		else if (map[N][i + 1][j] == 15)//捡起红钥匙
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.red_key++;
		}

		else if (map[N][i + 1][j] == 16)//使用黄钥匙
		{
			if (role.yellow_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
				role.yellow_key--;
			}
		}

		else if (map[N][i + 1][j] == 17)//使用蓝钥匙
		{
			if (role.blue_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
				role.blue_key--;
			}
		}

		else if (map[N][i + 1][j] == 18)//使用红钥匙
		{
			if (role.red_key > 0)
			{
				map[N][i][j] = 1;
				map[N][i + 1][j] = 2;
				role.red_key--;
			}
		}

		else if (map[N][i + 1][j] == 19)//进入下一层
		{
			N--;
		}

		else if (map[N][i + 1][j] == 20)//进入上一层
		{
			N++;
		}

		else if (map[N][i + 1][j] == 22) //捡起红宝石
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.attack = role.attack + 3;
		}

		else if (map[N][i + 1][j] == 23) //捡起蓝宝石
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.defence = role.defence + 3;
		}

		else if (map[N][i + 1][j] == 24) //捡起暴风小剑
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.attack = role.attack + 20;
		}

		else if (map[N][i + 1][j] == 25) //捡起圣物之盾
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.defence = role.defence + 20;
		}

		else if (map[N][i + 1][j] == 26)//捡起红药水
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.life = role.life + 300;
		}

		else if (map[N][i + 1][j] == 27) //捡起蓝药水
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
			role.life = role.life + 800;
		}


		else if (map[N][i + 1][j] == 28)//pk 张佳欣
		{
		if (pk(zhangjiaxin) == true)
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i + 1][j] == 29)//pk 官亮
		{
		if (pk(guanliang) == true)
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i + 1][j] == 30)//pk 曹丁尹
		{
		if (pk(caodingying) == true)
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i + 1][j] == 31)//pk 曾一航
		{
		if (pk(zengyihang) == true)
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		else if (map[N][i + 1][j] == 32)//pk 小范
		{
		if (pk(fanzheqian) == true)
		{
			map[N][i][j] = 1;
			map[N][i + 1][j] = 2;
		}
		else
		{
			//死亡界面
			break;
		}

		}

		break;

		case 'h':
			monsterlist();

		break;

		case '|':
			role.life = role.life + 500;
			break;
		
		case'}':
			role.attack = role.attack + 10;
			break;

		case'b':
			shop();
			break;
	}
}


int main()
{
	
	loadresource();
	initgraph(900, 780);
	putrole();
	while (1)
	{
	drawmap(N);
	getkey();
	}

    




//	_getch();
	closegraph();
	//system("pause");
	return 0;
}
