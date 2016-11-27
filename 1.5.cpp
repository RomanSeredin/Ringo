#include <stdio.h>
#include <Windows.h>

  int main()
{
	char str[] = "hello";
	int len = 0;
	int widht, height;
	printf("Input a string: ");
	scanf_s("%[^\n]s", str, (unsigned)_countof(str));
	while (*(str + len) != '\0')
	{
		len++;
	}
	HANDLE hWndConsole;
	if (hWndConsole = GetStdHandle(-12))
	{
		CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
		if (GetConsoleScreenBufferInfo(hWndConsole, &consoleInfo))
		{
			widht = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left + 1;
			height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
		}
	}
	for (int j = 0; j < height / 2; j++) {
		printf("\n");
	                                     }
	for (int i = 0; i < widht / 2 - len / 2; i++) {
		printf(" ");
	                                              }
	printf("%s", str);
	getchar(); getchar(); getchar();
	getchar(); getchar(); getchar();
	getchar(); getchar(); getchar();
	return 0;
}

