#include <stdio.h>
 
int main() {
	int s,min,h;
	scanf("%d", &s);

	if(s > 3601){
		h = s / 3600;
		s = s - (h*3600);
	}
	else
		h = 0;

	if(s > 60){
		min = s / 60;
		s = s - (min*60);
	}

	printf("%d:%d:%d\n", h, min, s);
    return 0;
}