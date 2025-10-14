#include <cstdio>
#include <cmath>

int main(int argc, char **argv)
{
	char str1[2] = "";
	char str2[2] = "";
	int cv1 = 0;
	int cv2 = 0;
	scanf("%1s%d %1s%d", str1, &cv1, str2, &cv2);
	int ch1 = str1[0] - 'A' + 1;
	int ch2 = str2[0] - 'A' + 1;
	bool f = 0;
	if (abs(cv1 - cv2) <= 1 && abs(ch1 - ch2) <= 1)
	{
		printf("King\n");
		f = 1;
	}
	if (cv1 == cv2 || ch1 == ch2 || cv1 - cv2 == ch1 - ch2 || cv1 - cv2 == -(ch1 - ch2))
	{
		printf("Queen\n");
		f = 1;
	}
	if (cv1 == cv2 || ch1 == ch2)
	{
		printf("Rook\n");
		f = 1;
	}
	if (cv1 - cv2 == ch1 - ch2 || cv1 - cv2 == -(ch1 - ch2))
	{
		printf("Bishop\n");
		f = 1;
	}
	if (ch1 == ch2 && cv1 != 1 && cv1 != 8 && (abs(cv1 - cv2) <= 1 || cv2 - cv1 <= 2 && cv1 == 2 || cv1 - cv2 <= 2 && cv1 == 7))
	{
		printf("Pawn\n");
		f = 1;
	}
	if (abs(cv1 - cv2) == 2 && abs(ch1 - ch2) == 1 || abs(cv1 - cv2) == 1 && abs(ch1 - ch2) == 2)
	{
		printf("Knight\n");
		f = 1;
	}
	if (f == 0)
	{
		printf("Nobody\n");
	}
	return 0;
}
