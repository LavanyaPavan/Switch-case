#include <stdio.h>
void main()
{
  int choice=0;
  printf("1.Pasta\n2.Sandwich\n3.Burger\n4.Pizza\n5.French Fries\n");
  printf("Enter your choice\n");
  scanf("%d",&choice);
  switch (choice)
  {
  	case 1:
  		printf("Food item- Pasta\n Rs 179\n");
  		break;
    case 2:
    	printf("Food item- Sandwich\n Rs 149\n");
    	break;
    case 3:
    	printf("Food item- Burger\n Rs 129\n");
    	break;
    case 4:
    	printf("Food item- Pizza\n Rs 239\n");
    	break;
    case 5:
    	printf("Food item- French Fries\n Rs 99\n");
    	break;
    default : printf("Invalid choice");
  }
}
