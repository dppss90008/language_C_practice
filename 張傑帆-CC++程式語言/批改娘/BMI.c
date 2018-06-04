# include<stdio.h>
# include<stdlib.h>

int main(void){

	double CM;
	double KG;
	
	scanf("%lf",&CM);
	scanf("%lf",&KG);
	
	CM = CM/100;
	double BMI = KG/(CM*CM);
	
	printf("%.2f\n",BMI);
	
	if(BMI <18.5) printf("Underweight");
	else if(BMI>=18.5 && BMI<24) printf("Normal");
	else if(BMI>=24 && BMI<27) printf("Overweight");
	else if(BMI>=27 && BMI<30) printf("Obese Class I");
	else if(BMI>=30 && BMI<35) printf("Obese Class II");
	else if(BMI>35 ) printf("Obese Class III");
	
	


	return 0;
}

