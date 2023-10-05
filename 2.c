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

	for(int i=0; i<12;i++){
	
		printf("%s\n",HM[i]);
	}



}

