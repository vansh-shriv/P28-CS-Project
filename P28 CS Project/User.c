/*
_______o888ooo___
____o8888888888888__
___ *888888888888888o_
___o8888888888888__8888
__o8888888888888_  88888
___88888888888     88888
______ * 88888    888888
_______888888__
______o888888888
____o888888888888o
___88888888888888888
_o88888888888888888888
8888888888888888888888
*8888888888888888888888
_ * 88888888888 *_88888
__8888888888 * ___ *8888
__8888888888____  _88888o
__* 888888888o_____ 88888o
___88888888888_____ * 8888o
___ * 888888888888o___ *8888
____ * 8888888888888o___ *888
_____ * 88888888888888____8888
_______8888888888888o____ * 888
________888888888888______ * 888o
_________8888888888 * _______ * 8888
_________ * 8888888888oo______ * 888
__________ * 8888888888888o
___________ * 88888888888888o
____________ * 888888888888888o
______________88888888___8888o
_______________8888888_o88888
_______________ * 8888888888 *
_________________8888888 *
__________________88888888888o
___________________88888888__ * o
____________________8888888o
_____________________8888888
______________________8888888
______________________ * 8888888
______________________888888888oo
______________________888__888888o
_____________________o88___88888
_____________________ * _____8888
__________________________o88

*/


/*


_______oBBBBB8o______oBBBBBBB
_____o8BBBBBBBBBBB__BBBBBBBBB8________o88o,
___o8BBBBBB**8BBBB__BBBBBBBBBB_____oBBBBBBBo,
__oBBBBBBB*___***___BBBBBBBBBB_____BBBBBBBBBBo,
_8BBBBBBBBBBooooo___*BBBBBBB8______*BB*_8BBBBBBo,
_8BBBBBBBBBBBBBBBB8ooBBBBBBB8___________8BBBBBBB8,
__*BBBBBBBBBBBBBBBBBBBBBBBBBB8_o88BB88BBBBBBBBBBBB,
____*BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB8,
______**8BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB*,
___________*BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB8*,
____________*BBBBBBBBBBBBBBBBBBBBBBBB8888**,
_____________BBBBBBBBBBBBBBBBBBBBBBB*,
_____________*BBBBBBBBBBBBBBBBBBBBB*,
______________*BBBBBBBBBBBBBBBBBB8,
_______________*BBBBBBBBBBBBBBBB*,
________________8BBBBBBBBBBBBBBB8,
_________________8BBBBBBBBBBBBBBBo,
__________________BBBBBBBBBBBBBBB8,
__________________BBBBBBBBBBBBBBBB,
__________________8BBBBBBBBBBBBBBB8,
__________________*BBBBBBBBBBBBBBBB,
__________________8BBBBBBBBBBBBBBBB8,
_________________oBBBBBBBBBBBBBBBBBB,
________________oBBBBBBBBBBBBBBBBBBB,
________________BBBBBBBBBBBBBBBBBBBB,
_______________8BBBBBBBBBBBBBBBBBBB8,
______________oBBBBBBBBB88BBBBBBBBB8,
______________8BBBBBBBBB*8BBBBBBBBB*,
______________BBBBBBBBB*_BBBBBBBBB8,
______________BBBBBBBB8_oBBBBBBBBB*,
______________8BBBBBBB__oBBBBBBBB*,
______________BBBBBBB*__8BBBBBBB*,
_____________8BBBBBB*___BBBBBBB*,
____________8BBBBBB8___oBBBBBB8,
___________8BBBBBB8____8BBBBBB*,
__________oBBBBBB8____BBBBBBB8,
__________BBBBBBB8___BBBBBBBB*,
_________oBBBBBBB8___BBBBBBBB,
_________8BBBBBB8____BBBBBBB*,
_________BBBBBB*_____8BBBBB*,
________oBBBB8_______BBBBB*,
________oBBB8________BBBB*,
______8BBBB*_______*BBBBBBBB8o,
______BBBBB*____________*88BBBo

*/


#include "includeheaders.h"

void nameandpassword()
{
	system("cls");
	printf("\033[10;50HUSERNAME:");
	scanf("%s", username);
	printf("\033[11;50HPASSWORD:%s",save);
	scanf("%s", userpassword);
	fflush(stdout);
}


void genderpage()
{
	system("cls");
	printf("%s\033[4;0H     __oBBBBB8o______oBBBBBBB\n     o8BBBBBBBBBBB__BBBBBBBBB8________o\n     BBBBBB**8BBBB__BBBBBBBBBB_____oBBBBB\n     BBBBB*___ ***___BBBBBBBBBB_____BBBBBBBB\n     BBBBBBBooooo___*BBBBBBB8______ * BB * _8B\n     BBBBBBBBBBBBB8ooBBBBBBB8___________8BBBBB\n     BBBBBBBBBBBBBBBBBBBBBBBBBB8_o88BB88BBBBBB\n     * BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n     _ * *8BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n     ______ * BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n     _______ * BBBBBBBBBBBBBBBBBBBBBBBB888\n     ________BBBBBBBBBBBBBBBBBBBBB\n     ________ * BBBBBBBBBBBBBBBBBBB\n     _________ * BBBBBBBBBBBBBBBB",green);
	printf("\033[4;80H_______o888ooo___\033[5;80H____o8888888888888__\033[6;80H___*888888888888888o_\033[7;80H___o8888888888888__8888\033[8;80H__o8888888888888_  88888\033[9;80H___88888888888     88888\033[10;80H______ * 88888    888888\033[11;80H_______888888__\033[12;80H______o888888888\033[13;80H____o888888888888o\033[14;80H___88888888888888888\033[15;80H_o88888888888888888888\033[16;80H8888888888888888888888\033[17;80H* 8888888888888888888888%s",white);
	printf("%s\033[19;24HBOY\033[19;90HGIRL",yellow);
	printf("\033[20;24H===\033[20;90H====%s", white);
	printf("%s\033[22;44HAre you a boy or girl?(b/g):%s%s",magenta,white,save);
	do
	{
		usergender = getchar();
		printf("%s\033[0K", reset);
	} while (usergender != 'b' && usergender != 'g');
}



void loginportal()
{
	system("cls");
	printf("Login page\n");
	printf("Press Enter To Continue:\n");
	char enterscreen;
	enterscreen = getchar();
	genderpage();
	nameandpassword();
}