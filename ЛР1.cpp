#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a_1 = 10;
	cout << "a_1 = " << a_1 << " | тип: int, размер: 4 б." << endl;
	int a_2 = 20;
	cout << "a_2 = " << a_2 << " | тип: int, размер: 4 б." << endl;
	int a_3 = 30;
	cout << "a_3 = " << a_3 << " | тип: int, размер: 4 б." << endl;
	int a_4 = 40;
	cout << "a_4 = " << a_4 << " | тип: int, размер: 4 б." << endl;
	int a_5 = 50;
	cout << "a_5 = " << a_5 << " | тип: int, размер: 4 б." << endl;

	short s_1 = 1;
	cout << "s_1 = " << s_1 << " | тип: short, размер: 2 б." << endl;
	short s_2 = 2;
	cout << "s_2 = " << s_2 << " | тип: short, размер: 2 б." << endl;
	short s_3 = 3;
	cout << "s_3 = " << s_3 << " | тип: short, размер: 2 б." << endl;
	short s_4 = 1;
	cout << "s_4 = " << s_4 << " | тип: short, размер: 2 б." << endl;
	short s_5 = 1;
	cout << "s_5 = " << s_5 << " | тип: short, размер: 2 б." << endl;

	long l_1 = 3;
	cout << "l_1 = " << l_1 << " | тип: long, размер: 4 б." << endl;
	long l_2 = 6;
	cout << "l_2 = " << l_2 << " | тип: long, размер: 4 б." << endl;
	long l_3 = 9;
	cout << "l_3 = " << l_3 << " | тип: long, размер: 4 б." << endl;
	long l_4 = 12;
	cout << "l_4 = " << l_4 << " | тип: long, размер: 4 б." << endl;
	long l_5 = 15;
	cout << "l_5 = " << l_5 << " | тип: long, размер: 4 б." << endl;

	float f_1 = 5.7;
	cout << "f_1 = " << f_1 << " | тип: float, размер: 4 б." << endl;
	float f_2 = 5.8;
	cout << "f_2 = " << f_2 << " | тип: float, размер: 4 б." << endl;
	float f_3 = 5.9;
	cout << "f_3 = " << f_3 << " | тип: float, размер: 4 б." << endl;
	float f_4 = 6.0;
	cout << "f_4 = " << f_4 << " | тип: float, размер: 4 б." << endl;
	float f_5 = 6.1;
	cout << "f_5 = " << f_5 << " | тип: float, размер: 4 б." << endl;

	double d_1 = 921.357;
	cout << "d_1 = " << d_1 << " | тип: double, размер: 8 б." << endl;
	double d_2 = 921.457;
	cout << "d_2 = " << d_2 << " | тип: double, размер: 8 б." << endl;
	double d_3 = 921.557;
	cout << "d_3 = " << d_3 << " | тип: double, размер: 8 б." << endl;
	double d_4 = 921.657;
	cout << "d_4 = " << d_4 << " | тип: double, размер: 8 б." << endl;
	double d_5 = 921.757;
	cout << "d_5 = " << d_5 << " | тип: double, размер: 8 б." << endl;

	char c_1 = 'a';
	cout << "c_1 = " << c_1 << " | тип: char, размер: 1 б." << endl;
	char c_2 = 'b';
	cout << "c_2 = " << c_2 << " | тип: char, размер: 1 б." << endl;
	char c_3 = 'c';
	cout << "c_3 = " << c_3 << " | тип: char, размер: 1 б." << endl;
	char c_4 = 'd';
	cout << "c_4 = " << c_4 << " | тип: char, размер: 1 б." << endl;
	char c_5 = 'e';
	cout << "c_5 = " << c_5 << " | тип: char, размер: 1 б." << endl;

	bool b_1 = true;
	cout << "b_1 = " << b_1 << " | тип: bool, размер: 1 б." << endl;
	bool b_2 = false;
	cout << "b_2 = " << b_2 << " | тип: bool, размер: 1 б." << endl;
	bool b_3 = true;
	cout << "b_3 = " << b_3 << " | тип: bool, размер: 1 б." << endl;
	bool b_4 = false;
	cout << "b_4 = " << b_4 << " | тип: bool, размер: 1 б." << endl;
	bool b_5 = true;
	cout << "b_5 = " << b_5 << " | тип: bool, размер: 1 б." << endl;

	string str_1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla elementum sodales dolor, ac convallis ante pulvinar quis. Sed a vestibulum elit, at mollis lectus. Pellentesque scelerisque ipsum sit amet tortor pretium dapibus. Morbi purus est, mollis in sapien vitae, feugiat bibendum velit. Quisque nibh augue, lacinia sit amet vestibulum vel, mollis sit amet metus. Donec tempus leo quis consequat tempor. Ut quam enim, blandit dictum lobortis ac, porta sit amet diam. Nulla auctor at nisi non sodales.";
	int read_1 = size(str_1);
	cout << "str_1 = " << str_1 << " | тип: string, размер: " << read_1 << " б." << endl;

	string str_2 = "Maecenas egestas, justo in elementum commodo, mauris felis aliquam metus, id aliquet velit lorem non tortor. Aenean nec massa in massa pretium sodales. Sed rutrum mattis malesuada. Nullam in ante placerat, condimentum felis in, congue nibh. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aenean in aliquet dolor. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Suspendisse lobortis justo quam. Quisque in dignissim ipsum. Nulla in consequat dui, lacinia malesuada lorem. Nunc non fermentum enim. Curabitur fermentum sem ac lacus vestibulum, ac porttitor elit ultrices. In porta, ante in laoreet venenatis, orci est feugiat leo, at maximus risus nunc sed ligula. Suspendisse at lacus mollis, euismod dolor quis, viverra magna. Nullam scelerisque leo sagittis ligula dapibus scelerisque. Suspendisse egestas venenatis lacus, ut porta enim aliquam sed.";
	int read_2 = size(str_2);
	cout << "str_2 = " << str_2 << " | тип: string, размер: " << read_2 << " б." << endl;

	string str_3 = "Fusce ullamcorper vestibulum congue. Aliquam semper, lorem efficitur tristique accumsan, eros risus maximus sapien, vel tempus odio nisl in est. Aliquam erat volutpat. Vestibulum semper at leo et vestibulum. Nulla scelerisque viverra dolor non aliquam. Etiam iaculis mattis fermentum. Sed tempor, justo ultricies molestie bibendum, diam erat consectetur justo, vitae luctus lorem velit nec massa. Etiam feugiat dolor libero, non pharetra metus placerat consequat. In maximus est at mauris imperdiet, ac sagittis felis laoreet. Pellentesque justo justo, accumsan vitae tortor vel, placerat suscipit turpis. Sed non urna dui.";
	int read_3 = size(str_3);
	cout << "str_3 = " << str_3 << " | тип: string, размер: " << read_3 << " б." << endl;

	string str_4 = "Nullam tempus lectus et dolor scelerisque hendrerit. Nullam tincidunt eros sem, interdum ullamcorper nunc aliquam at. Etiam sodales consectetur tristique. Cras in augue tempus tortor lacinia ullamcorper. Quisque id nisl in turpis gravida pellentesque vitae vel nunc. Nullam at tortor consequat, condimentum purus vitae, fermentum nisi. Nulla facilisis tortor eget ligula accumsan, in posuere arcu vulputate. Mauris rutrum, mi dictum elementum dapibus, metus tortor fringilla purus, congue pulvinar quam libero et odio.";
	int read_4 = size(str_4);
	cout << "str_4 = " << str_4 << " | тип: string, размер: " << read_4 << " б." << endl;

	string str_5 = "Sed nec nisi eget mi imperdiet accumsan. Quisque nec ante sit amet elit dignissim varius eget malesuada dui. Maecenas non lorem eu leo sagittis bibendum a et erat. Duis pellentesque vel magna at imperdiet. Curabitur ut suscipit libero, nec laoreet mauris. Morbi et sapien fringilla, lobortis ipsum sit amet, tincidunt turpis. Ut id dolor ut enim commodo accumsan eget quis nunc. Donec at diam ut nibh commodo efficitur vel sed purus. Phasellus vulputate iaculis nisl sed dictum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Curabitur iaculis, orci at vulputate hendrerit, libero elit condimentum odio, at tempus felis dui sed tortor. Vestibulum ac nisi sem. Praesent eget bibendum eros. Fusce quis pretium velit, sit amet venenatis magna. Vestibulum sed enim accumsan, ullamcorper lectus eu, consequat dui.";
	int read_5 = size(str_5);
	cout << "str_5 = " << str_5 << " | тип: string, размер: " << read_5 << " б." << endl;
	return 0;
}
