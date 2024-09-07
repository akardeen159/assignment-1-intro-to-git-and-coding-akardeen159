#include<stdio.h>
#include<math.h>

 int sumfunction(int array[], int size){
	 int sum =0;
   	 for(int i=0; i<size; i++){
  	      sum += array[i];
  	 }
    
   	 return sum;

    }

 float averagefunction(int array[], int size){
        int average = 0;
        int sum=0;
        for(int i=0; i < size; i++){
            sum += array[i];
        }

        return (float)sum/size;
    }   

float standardfunction(int array[], int size){
        float avg = averagefunction(array, size);
        float numerator = 0;
        for (int i=0; i<size; i++){
            numerator += pow(array[i]- avg, 2);
        }
        numerator /= size;
        return sqrt(numerator);

    }


int main(){
    int size;
    printf("How many numbers?: ");
    scanf("%d", &size);

    int numbers[size];

    printf("what numbers?: \n");
    for (int i=0; i<size; i++){
        printf("number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }


    int resultsum = sumfunction(numbers, size);
    float resultaverage = averagefunction(numbers, size);
    float resultstandard = standardfunction(numbers, size);

    printf("sum of the numbers is: %d\n", resultsum);
    printf("the average is : %f\n", resultaverage);
    printf("standard deviation is: %f\n", resultstandard);

    return 0;
}
