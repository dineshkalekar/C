#include<stdio.h>
int main() {
	char day; // M- Monday; , T- Tuesday; 
	printf("enter day :");
	//scanf_s("%c",&day);

	switch (day)
	{
	case 'M': printf(" Monday \n ");
	      break;
	case 'T': printf(" Tuesday \n ");
		  break;
	case 'W': printf(" Wednesday \n ");
	      break;
	case 't': printf(" Thursday \n ");
		  break;
	case 'F': printf(" Friday \n ");
		  break;
	case 's': printf(" Saturday \n ");
		  break;
	case 'S': printf(" Sunday\n ");
		  break;

	default: printf("Not valid day !\n");
		break;
	}  printf("<..Thank You ...>");
	 

}