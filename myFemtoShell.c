#include <stdio.h>
#include <string.h>

int main()
{

char User_Input[20] = {" "};
char User_exit[] = "exit";
char User_Exit[] = "Exit";

	while(1)
	{
		printf("Dear user, Please provide your input>");
		gets(User_Input);
	
		if(strcmp(User_Input ,User_Exit) &&  strcmp(User_Input,User_exit))
		{
			printf("You said: %s\n",User_Input);
		}
		else
		{
			printf("Good bye! \n");
			break;
		}
	
	}


return 0;
}
