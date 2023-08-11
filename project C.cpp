#include <stdio.h>
#define TOLL_RATE 0.05

int main(){
	float distance, total_bill;
	int vehicle_type;
	
	printf("Enter the distance travelled in kilometers: ");
	scanf("%f",&distance);
	
	printf("Enter the type of vehicle(1 for CAR, 2 for TRUCK, 3 for BUS, 4 for OTHERS):");
	scanf("%d",&vehicle_type);
	
	if (vehicle_type == 1) {
		total_bill = distance*TOLL_RATE;
    } else if (vehicle_type == 2) {
		total_bill = distance*TOLL_RATE*2;
    } else if (vehicle_type == 3) {
		total_bill = distance*TOLL_RATE*3;
    } else if (vehicle_type == 4) {
		total_bill = distance*TOLL_RATE*4;
    } else {
    	printf("Invalid vehicle type");
    	return 1;
	}
	printf("Total toll gate bill: $%.2f\n", total_bill);
	
return 0;
}
