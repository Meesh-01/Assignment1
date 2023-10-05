int main() {
    int  in [2];
    int  max, min, avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &in[0], &in[1], &in[2]);

    max = in[0];
    min = in[0];

    avg = (in[0]+in[1]+in[2])/3;

    for (int i=0 ; i<3; i++ ){

        if (in[i]>max)
        {
            max = in[i];
        }

        else if (in[i]<min)
        {
            max = in[i];
        }
        
        
    }
    
  printf("The maximum number is: %d\n", max);
  printf("The minimum number is: %d\n", min);
  printf("The average is: %d\n", avg);
    

    
}