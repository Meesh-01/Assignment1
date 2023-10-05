#include <stdio.h>

int main(){

	char HM [12] [20] = {
	"Muharram",
	"Safar",
	"Rabi I",
	"Rabi II",
	"Jumada I",
	"Jumada II",
	"Rajab",
	"Shaaban",
	"Ramadan",
	"Shawwal",
	"Dhu al-Qidah",
	"Dhu al-Hijjah"	
	};

    int x;

    printf("Enter the month nombuer: ");
    
    scanf("%d",&x);
    getchar();

    switch (x)
    {
    case 1:
        printf("%s\n",HM[0]);
        break;
        case 2:
        printf("%s\n",HM[1]);
        break;
        case 3:
        printf("%s\n",HM[2]);
        break;
        case 4:
        printf("%s\n",HM[3]);
        break;
        case 5:
        printf("%s\n",HM[4]);
        break;
        case 6:
        printf("%s\n",HM[5]);
        break;
        case 7:
        printf("%s\n",HM[6]);
        break;
        case 8:
        printf("%s\n",HM[7]);
        break;case 9:
        printf("%s\n",HM[8]);
        break;
        case 10:
        printf("%s\n",HM[9]);
        break;
        case 11:
        printf("%s\n",HM[10]);
        break;
        case 12:
        printf("%s\n",HM[11]);
        break;

    
    default:
        break;
    }
}