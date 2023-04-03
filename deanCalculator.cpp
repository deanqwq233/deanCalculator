/*
	Name: 多功能计算器v3.0番茄钟更新
	Author: deanqwq233
	Date: 20230403
*/
#include<cstdio>
#include<windows.h>
#include<stdio.h>
#include<iostream>
int saolei(void);
int yinjie(void);
int awzh(void);
void fullscreen();
void fanqie();
using namespace std;
int main()
{
	fullscreen();
	long double a, b, c, d, pai = 3.141592653589793238462643383279502884197169399375105820974944, r, h, l;
	int n;
	char jsj;
	SYSTEMTIME time;
	GetLocalTime(&time);
	cout << "于" << time.wYear << "年" << time.wMonth << "月" << time.wDay << "日" << time.wHour << "时" << time.wMinute << "分" << time.wSecond << """秒启动" << endl;
	for (;;)
	{
		system("color 0F");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
		cout << "多功能计算器v3.0  by deanqwq233" << endl;
		system("title 功能选择");
		cout << "执行任务完成后程序会自动重置，无需重启程序。" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "功能合集：" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "1为加法运算" << endl;
		cout << "2为减法运算" << endl;
		cout << "3为乘法运算" << endl;
		cout << "4为除法运算" << endl;
		cout << "5为乘方运算" << endl;
		cout << "6为开根运算" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "7为计算圆的周长、面积" << endl;
		cout << "8为计算矩形的周长、面积" << endl;
		cout << "9为计算长方体的表面积、体积" << endl;
		cout << "10为计算圆柱体的表面积、体积" << endl;
		cout << "11为计算圆锥体的表面积、体积" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
		cout << "12为播放滴声C大调音阶" << endl;
		cout << "13为播放滴声乐曲《爱我中华》" << endl;
		cout << "14为扫雷游戏" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "15为关闭计算机电源" << endl;
		cout << "16为重启计算机系统" << endl;
		cout << "17为注销此系统账户" << endl;
		cout << "18为启动番茄钟" << endl;
		cout << "19为退出多功能计算器v3.0" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "请输入功能编号：";
		cin >> n;
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
		if (n == 1)
		{
			system("title 加法");
			cout << "请输入第一个加数：";
			cin >> a;
			cout << endl;
			cout << "请输入第二个加数：";
			cin >> b;
			cout << endl;
			cout << "结果：" << a + b << endl;
		}
		if (n == 2)
		{
			system("title 减法");
			cout << "请输入第一个减数：";
			cin >> a;
			cout << endl;
			cout << "请输入第二个减数：";
			cin >> b;
			cout << endl;
			cout << "结果：" << a - b << endl;
		}
		if (n == 3)
		{
			system("title 乘法");
			cout << "请输入第一个乘数：";
			cin >> a;
			cout << endl;
			cout << "请输入第二个乘数：";
			cin >> b;
			cout << endl;
			cout << "结果：" << a * b << endl;
		}
		if (n == 4)
		{
			system("title 除法");
			cout << "请输入被除数：";
			cin >> a;
			cout << endl;
			cout << "请输入除数(不为零)：";
			cin >> b;
			cout << endl;
			if (b == 0)
			{
				system("title 好啊");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout << "都说了不为零，怎么就那么倔呢？" << endl;
				cout << "得想个办法治一治，要不把程序结束了吧……" << endl;
				return 0;
			}
			cout << "结果：" << a / b << endl;
		}
		if (n == 5)
		{
			system("title 乘方");
			cout << "请输入幂的底数：";
			cin >> a;
			cout << endl;
			cout << "请输入幂的次数：";
			cin >> b;
			cout << endl;
			cout << "结果：" << pow(a, b) << endl;
		}
		if (n == 6)
		{
			system("title 根号");
			cout << "请输入要被开方的数：";
			cin >> a;
			cout << endl;
			cout << "结果：" << sqrt(a) << endl;
		}
		if (n == 7)
		{
			system("title 圆");
			cout << "请输入所求圆的半径：";
			cin >> r;
			cout << endl;
			cout << "周长为：" << 2 * pai * r << endl;
			cout << "面积为：" << pai * r * r << endl;
		}
		if (n == 8)
		{
			system("title 矩形");
			cout << "请输入所求矩形的长：";
			cin >> a;
			cout << endl;
			cout << "请输入所求矩形的宽：";
			cin >> b;
			cout << endl;
			cout << "周长为：" << a + a + b + b << endl;
			cout << "面积为：" << a * b << endl;
		}
		if (n == 9)
		{
			system("title 长方体");
			cout << "请输入所求长方体的长：";
			cin >> a;
			cout << endl;
			cout << "请输入所求长方体的宽：";
			cin >> b;
			cout << endl;
			cout << "请输入所求长方体的高：";
			cin >> h;
			cout << endl;
			cout << "表面积为：" << (a * b + b * h + a * h) * 2 << endl;
			cout << "体积为：" << a * b * h << endl;
		}
		if (n == 10)
		{
			system("title 圆柱体");
			cout << "请输入所求圆柱体的底面半径：";
			cin >> r;
			cout << endl;
			cout << "请输入所求圆柱体的高：";
			cin >> h;
			cout << endl;
			cout << "表面积为：" << 2 * pai * r * h + pai * r * r * 2 << endl;
			cout << "体积为：" << pai * r * r * h << endl;
		}
		if (n == 11)
		{
			system("title 圆锥体");
			cout << "请输入所求圆锥体的底面半径：";
			cin >> r;
			cout << endl;
			cout << "请输入所求圆锥体的高：";
			cin >> h;
			cout << endl;
			cout << "请输入所求圆锥体的母线长度：";
			cin >> l;
			cout << endl;
			cout << "表面积为：" << pai * r * r + pai * r * l << endl;
			cout << "体积为：" << pai * r * r * h / 3 << endl;
		}
		if (n == 12)
		{
			system("title 音乐");
			cout << "播放中……" << endl;
			yinjie();
		}
		if (n == 13)
		{
			system("title 音乐");
			cout << "播放中……" << endl;
			awzh();
		}
		if (n == 14)
		{
			saolei();
		}
		if (n == 15)
		{
			system("title 关机");
			cout << "最后一次确认：是否关闭计算机(是Y/否N)：";
			cin >> jsj;
			if (jsj == 'Y')
			{
				system("shutdown -s -t 001");
			}
			else
			{
				system("cls");
				continue;
			}
		}
		if (n == 16)
		{
			system("title 重启");
			cout << "最后一次确认：是否重新启动计算机(是Y/否N)：";
			cin >> jsj;
			if (jsj == 'Y')
			{
				system("shutdown -r -t 001");
			}
			else
			{
				system("cls");
				continue;
			}
		}
		if (n == 17)
		{
			system("title 注销");
			cout << "最后一次确认：是否注销此系统账户(是Y/否N)：";
			cin >> jsj;
			if (jsj == 'Y')
			{
				system("shutdown -l");
			}
			else
			{
				system("cls");
				continue;
			}
		}
		if (n == 18)
		{
			fanqie();
		}
		if (n == 19)
		{
			system("title 再见");
			cout << "感谢使用，再见！" << endl;
			cout << "本次使用高级计算器" << (double)clock() / CLOCKS_PER_SEC << "秒" << endl;

			return 0;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
#define dido 262
#define dire 294
#define dimi 330     
#define difa 349
#define diso 392
#define dila 440
#define disi 494
#define do1 523
#define re 578
#define mi 659
#define fa 698
#define so 784
#define la 880
#define si 988
#define gaodo 1046
#define gaore 1175
#define gaomi 1318
#define gaofa 1480
#define gaoso 1568
#define gaola 1760
#define gaosi 1976
#define yipai 400
#define banpai 200
#define xiuzhi 512
int yinjie(void)
{
	Beep(do1, yipai);
	Beep(re, yipai);
	Beep(mi, yipai);
	Beep(fa, yipai);
	Beep(so, yipai);
	Beep(la, yipai);
	Beep(si, yipai);
	Beep(gaodo, yipai);
	cout << "播放结束……" << endl;
	return 0;
}
int awzh(void)
{
	Beep(disi, yipai);
	Beep(re, yipai);
	Beep(disi, yipai);
	Beep(re, yipai);
	Beep(fa, yipai);
	Beep(re, yipai);
	Sleep(xiuzhi);
	Beep(fa, yipai);
	Beep(disi, yipai);
	Beep(dido, yipai);
	Beep(fa, yipai);
	Beep(re, yipai);
	Sleep(xiuzhi);
	Beep(disi, yipai);
	Beep(re, yipai);
	Beep(disi, yipai);
	Beep(re, yipai);
	Beep(fa, yipai);
	Beep(si, yipai);
	Beep(si, yipai);
	Beep(fa, yipai);
	Beep(fa, yipai);
	Beep(re, yipai);
	Beep(disi, yipai);
	Beep(do1, yipai);
	Sleep(xiuzhi);
	Beep(disi, yipai);
	Beep(re, yipai);
	Beep(disi, yipai);
	Beep(re, yipai);
	Beep(fa, yipai);
	Beep(re, yipai);
	Sleep(xiuzhi);
	Beep(fa, yipai);
	Beep(disi, yipai);
	Beep(gaodo, yipai);
	Beep(fa, yipai);
	Beep(so, (yipai + yipai));
	Beep(si, yipai);
	Beep(fa, yipai);
	Beep(fa, yipai);
	Beep(re, yipai);
	Beep(fa, yipai);
	Beep(re, yipai);
	Beep(re, yipai);
	Beep(disi, yipai);
	Beep(do1, yipai);
	Beep(disi, yipai);
	Sleep(xiuzhi);
	Beep(dila, yipai);
	Beep(disi, yipai);
	cout << "播放结束……" << endl;
	return 0;
}
int saolei(void)
{
	system("title 寄");
	bool a[10][10], b[10][10];
	int n = 0;
	int x, y, i, j, h, s, k;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout << "■";
		}
		cout << endl;
	}
	for (i = 1; i <= 10; i++)
	{
		h = (rand() % (9)) + 1;
		s = (rand() % (9)) + 1;
		if (a[h][s] == 0)
		{
			a[h][s] = 1;
			i++;
		}
	}
	/*

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	*/
	for (;;)
	{
		cout << "请输入要翻的方块的横轴x：";
		cin >> x;
		cout << "请输入要翻的方块的竖轴y：";
		cin >> y;
		b[x][y] = 1;
		system("cls");
		if (h == x && s == y)
		{
			system("cls");
			cout << "雷炸了，游戏结束。" << endl;
			break;
		}
		if (a[x][y] == 0)
		{
			for (j = 1; j <= 9; j++)
			{
				for (k = 1; k <= 9; k++)
				{
					if ((j == x && k == y) || b[j][k] == 1)
					{
						if (a[x - 1][y - 1] == 1)
						{
							n++;
						}
						if (a[x - 1][y] == 1)
						{
							n++;
						}
						if (a[x][y - 1] == 1)
						{
							n++;
						}
						if (a[x + 1][y + 1] == 1)
						{
							n++;
						}
						if (a[x + 1][y] == 1)
						{
							n++;
						}
						if (a[x][y + 1] == 1)
						{
							n++;
						}
						if (a[x + 1][y - 1] == 1)
						{
							n++;
						}
						if (a[x - 1][y + 1] == 1)
						{
							n++;
						}
						cout << " " << n;
					}
					else
					{
						cout << "■";
					}
				}
				cout << endl;
			}
		}
	}
	return 0;
}
void fullscreen()
{
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);
	int cy = GetSystemMetrics(SM_CYSCREEN);

	LONG l_WinStyle = GetWindowLong(hwnd, GWL_STYLE);

	SetWindowLong(hwnd, GWL_STYLE, (l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);

	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}
void fanqie()
{
	fullscreen();
	cout << "                                                                 *=@@\******" << endl;
	cout << "                                                                ***@@@@@]***" << endl;
	cout << "                                                                    =@@/@@^*****" << endl;
	cout << "                                                                    *,@@`\@\****" << endl;
	cout << "                                                                    **,@@,=@@***" << endl;
	cout << "                                                                    ***=@^,=@@** " << endl;
	cout << "                                    ** *********                    ** *@@**=@\*" << endl;
	cout << "                                    ** *********                    ** *@@**=@\*                    ** ***** " << endl;
	cout << "                                    *@@@@@@\]***                     *  @@***\@^                    *****]]" << endl;
	cout << "                                    ***,\@@@@@@@@]`*********           *@@***=@@****        ********,/@@@@/* " << endl;
	cout << "                                    ***,\@@@@@@@@]`*********           *@@***=@@****        ********,/@@@@/* " << endl;
	cout << "                                            **\@@@`**,@@@@]****]]]]]@@@@@@=@@`\@@@@@]]]]]***]@@@/`/@@/**   " << endl;
	cout << "                                            *****[@@@`***[@@@@@@[[[[[[^@@^/@^*=@^*,[[[\[@@@@@[*]@@@\]***   " << endl;
	cout << "                                        * ******,/@@@@@\*`*`/@@@]*****=@@*@@`*=@@**`*]@@@/,`*/@@@`[\@@@@@\`* ***" << endl;
	cout << "                                          * */@@@[*,`*/@@@^\@@`,@@@\*`@@`,@@**=@@*,@@@@@``*/@@/********,,\@@@\`*" << endl;
	cout << "                                    ** ***,@@@`,*********\@@@\@@],\@@@@^*=@^**=@@@@//@@/,@@@`***************,\@@\*** " << endl;
	cout << "                                    *** ,@@/`[**********`,`[@@@@@@`*\@`*@@@@@\=@@\/@@/]@@@*,****          **,*,[@@\*" << endl;
	cout << "                                    ***@@/******  ******,,]@@@@`,\@@***/@@@@@/**/@@`/@@/********        ********,,@@\***" << endl;
	cout << "                                    *=@@`***      ****,@@@/\**]/@@^,**,@@**=@\**\[=@@@@@@@]*``**            *******,@@^*" << endl;
	cout << "                                ****/@@*****  ***`**/@@//@@@@@/[]]]]`*/@^,,/@@\]]]]]]]]**,\@@\******            *****\@\ *** " << endl;
	cout << "                                ***@@/*`****  **,*/@@[**,]@@@@@@@@@@@@@@@@@[\@@@@@@@@@@@@@@\/@@^****            ******,@@***" << endl;
	cout << "                                **/@/***    ****,@@/*,@@@@^,**********@@`*/@@/`***********,\@@@@@`****              ****@@`*  " << endl;
	cout << "                                *=@/****     ***@@\/@@/`****    *****=@^/@@`/**`****    ******[@@@^*****            * **,@@* " << endl;
	cout << "                            *** ,@@*****  *****=@@@@/*******      ***@@@@@******            ****\@@@****              ***=@\****" << endl;
	cout << "                              **@@`*****  *****@@/*`**** *        ***\@@/******             ****,,\[****              ****@@** *" << endl;
	cout << "                            ***=@/**        ********              **`=@@****                    ********              ****=@^*** " << endl;
	cout << "                            * */@^**            ***               ***,[*****                    *****  *              ****=@\* * " << endl;
	cout << "                             **@@***                                ********                                            ***@@ ** " << endl;
	cout << "                            ***@@***                                **                                                  ***@@* * " << endl;
	cout << "                            * *@@***                                                                                  ****=@@* * " << endl;
	cout << "                             **@@***                                                                                  ****=@@* " << endl;
	cout << "                            ***=@^**                                                                                  ****=@^ ** " << endl;
	cout << "                            ** =@\**                                                                                  ****@@^*** " << endl;
	cout << "                                @@`****                                                                              * **=@@ " << endl;
	cout << "                                =@@*****                                                                             * **@@^" << endl;
	cout << "                                *=@@****                                                                          ******/@/*" << endl;
	cout << "                                **\@\*=*                                                                          *****/@/** " << endl;
	cout << "                                ***\@@`** **                                                                  ******``@@/***" << endl;
	cout << "                                *****@@@*,**                                                                  ******]@@`* * " << endl;
	cout << "                                    **,@@@/*****   *                                                    ********,*,@@/**   " << endl;
	cout << "                                    ****,\@@@`*,****                                                    ****`*,,,@@@`*** " << endl;
	cout << "                                        ****\@@@]*`************                                   ** ********\/@@/**" << endl;
	cout << "                                        ****** [@@@\]***********                                  ******`,]@@@/`****" << endl;
	cout << "                                                ***[\@@@@]`***************** ** *********************]/@@@@[  " << endl;
	cout << "                                                *** ** *,[\@@@@@@@]]]`**********************,]/@@@@@@@[`**** " << endl;
	cout << "                                                                *[[[@@@@@@@@@@@@@@@@@@@@@@@@@/[[   " << endl;
	cout << "                                                                * **  *** ***   *   *** *** ****" << endl;

	system("color 0F"); Sleep(50);
	system("color 1F"); Sleep(50);
	system("color 2F"); Sleep(50);
	system("color 3F"); Sleep(50);
	system("color 4F"); Sleep(50);
	system("color 5F"); Sleep(50);
	system("color 6F"); Sleep(50);
	system("color 7F"); Sleep(50);
	system("color 8F"); Sleep(50);
	system("color 9F"); Sleep(50);
	system("pause");
	system("cls");
	system("title 番茄钟");
	int n, m, i;
	cout << "请输入你想专注的时间，以整分钟为单位：";
	cin >> n;
	system("cls");
	system("taskkill -f -im explorer.exe");
	system("cls");
	for (i = 0; i < n; i++)
	{
		cout << "现在还剩：" << n - i << "分钟" << endl;
		cout << "                                                                ***@@@@@]***" << endl;
		cout << "                                                                    =@@/@@^*****" << endl;
		cout << "                                                                    *,@@`\@\****" << endl;
		cout << "                                                                    **,@@,=@@***" << endl;
		cout << "                                                                    ***=@^,=@@** " << endl;
		cout << "                                    ** *********                    ** *@@**=@\*" << endl;
		cout << "                                    ** *********                    ** *@@**=@\*                    ** ***** " << endl;
		cout << "                                    *@@@@@@\]***                     *  @@***\@^                    *****]]" << endl;
		cout << "                                    ***,\@@@@@@@@]`*********           *@@***=@@****        ********,/@@@@/* " << endl;
		cout << "                                    ***,\@@@@@@@@]`*********           *@@***=@@****        ********,/@@@@/* " << endl;
		cout << "                                            **\@@@`**,@@@@]****]]]]]@@@@@@=@@`\@@@@@]]]]]***]@@@/`/@@/**   " << endl;
		cout << "                                            *****[@@@`***[@@@@@@[[[[[[^@@^/@^*=@^*,[[[\[@@@@@[*]@@@\]***   " << endl;
		cout << "                                        * ******,/@@@@@\*`*`/@@@]*****=@@*@@`*=@@**`*]@@@/,`*/@@@`[\@@@@@\`* ***" << endl;
		cout << "                                          * */@@@[*,`*/@@@^\@@`,@@@\*`@@`,@@**=@@*,@@@@@``*/@@/********,,\@@@\`*" << endl;
		cout << "                                    ** ***,@@@`,*********\@@@\@@],\@@@@^*=@^**=@@@@//@@/,@@@`***************,\@@\*** " << endl;
		cout << "                                    *** ,@@/`[**********`,`[@@@@@@`*\@`*@@@@@\=@@\/@@/]@@@*,****          **,*,[@@\*" << endl;
		cout << "                                    ***@@/******  ******,,]@@@@`,\@@***/@@@@@/**/@@`/@@/********        ********,,@@\***" << endl;
		cout << "                                    *=@@`***      ****,@@@/\**]/@@^,**,@@**=@\**\[=@@@@@@@]*``**            *******,@@^*" << endl;
		cout << "                                ****/@@*****  ***`**/@@//@@@@@/[]]]]`*/@^,,/@@\]]]]]]]]**,\@@\******            *****\@\ *** " << endl;
		cout << "                                ***@@/*`****  **,*/@@[**,]@@@@@@@@@@@@@@@@@[\@@@@@@@@@@@@@@\/@@^****            ******,@@***" << endl;
		cout << "                                **/@/***    ****,@@/*,@@@@^,**********@@`*/@@/`***********,\@@@@@`****              ****@@`*  " << endl;
		cout << "                                *=@/****     ***@@\/@@/`****    *****=@^/@@`/**`****    ******[@@@^*****            * **,@@* " << endl;
		cout << "                            *** ,@@*****  *****=@@@@/*******      ***@@@@@******            ****\@@@****              ***=@\****" << endl;
		cout << "                              **@@`*****  *****@@/*`**** *        ***\@@/******             ****,,\[****              ****@@** *" << endl;
		cout << "                            ***=@/**        ********              **`=@@****                    ********              ****=@^*** " << endl;
		cout << "                            * */@^**            ***               ***,[*****                    *****  *              ****=@\* * " << endl;
		cout << "                             **@@***                                ********                                            ***@@ ** " << endl;
		cout << "                            ***@@***                                **                                                  ***@@* * " << endl;
		cout << "                            * *@@***                                                                                  ****=@@* * " << endl;
		cout << "                             **@@***                                                                                  ****=@@* " << endl;
		cout << "                            ***=@^**                                                                                  ****=@^ ** " << endl;
		cout << "                            ** =@\**                                                                                  ****@@^*** " << endl;
		cout << "                                @@`****                                                                              * **=@@ " << endl;
		cout << "                                =@@*****                                                                             * **@@^" << endl;
		cout << "                                *=@@****                                                                          ******/@/*" << endl;
		cout << "                                **\@\*=*                                                                          *****/@/** " << endl;
		cout << "                                ***\@@`** **                                                                  ******``@@/***" << endl;
		cout << "                                *****@@@*,**                                                                  ******]@@`* * " << endl;
		cout << "                                    **,@@@/*****   *                                                    ********,*,@@/**   " << endl;
		cout << "                                    ****,\@@@`*,****                                                    ****`*,,,@@@`*** " << endl;
		cout << "                                        ****\@@@]*`************                                   ** ********\/@@/**" << endl;
		cout << "                                        ****** [@@@\]***********                                  ******`,]@@@/`****" << endl;
		cout << "                                                ***[\@@@@]`***************** ** *********************]/@@@@[  " << endl;
		cout << "                                                *** ** *,[\@@@@@@@]]]`**********************,]/@@@@@@@[`**** " << endl;
		cout << "                                                                *[[[@@@@@@@@@@@@@@@@@@@@@@@@@/[[   " << endl;
		cout << "                                                                * **  *** ***   *   *** *** ****" << endl;
		Sleep(60000);
		system("cls");
	}
	cout << "时间到了，感谢使用" << endl;
	Beep(200, 1000);
	cout << "正在启动资源管理器......" << endl;
	mainstart: main();
	system("explorer.exe");
	goto mainstart;
}