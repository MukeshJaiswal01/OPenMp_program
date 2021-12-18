
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <omp.h>

 struct R_data{
           
            int no_of_customer;
            int no_of_idlis;
            int no_of_vada;
            int no_of_dosas;
            int no_of_rava_idli;
       };
       
 struct Total_Data{
            int no_of_customer;
            int no_of_idlis;
            int no_of_vada;
            int no_of_dosas;
            int no_of_rava_idli;
 };
 
 struct Receive_data{
     
            int no_of_customer;
            int no_of_idlis;
            int no_of_vada;
            int no_of_dosas;
            int no_of_rava_idli;
     
     
 };
 

int main()
{
   
    struct R_data r_data[8];
    struct Total_Data t_data;
    struct Receive_data R_data[8];
    int n;
    
    for(int i = 0; i < 8; i++){
        
        r_data[i].no_of_customer = rand() % 10;
        r_data[i].no_of_idlis = rand() % 10;
        r_data[i].no_of_vada = rand() % 10;
        r_data[i].no_of_dosas = rand() % 10;
        r_data[i].no_of_rava_idli = rand() % 10;
    }
    
   
   
    
    #pragma omp parallel for
    
     {
         printf("first part of the question\n");
         printf("Enter the restaurand number\n");
         
          scanf("%d", &n);
         
         
             
          R_data[n-1].no_of_customer = r_data[n-1].no_of_customer;
          R_data[n-1].no_of_idlis = r_data[n-1].no_of_idlis;
          R_data[n-1].no_of_vada = r_data[n-1].no_of_vada;
          R_data[n-1].no_of_dosas = r_data[n-1].no_of_dosas;
          R_data[n-1].no_of_rava_idli = r_data[n-1].no_of_rava_idli;
          
          printf(" restaurant number : M(%d)\n", n-1);
          printf(" customer %d \n",R_data[n-1].no_of_customer);
          printf(" idlis %d \n", R_data[n-1].no_of_idlis );
          printf(" vada %d\n",  R_data[n-1].no_of_vada);
          printf(" dosa %d\n",  R_data[n-1].no_of_dosas);
          printf("rava_idli %d\n", R_data[n-1].no_of_rava_idli);
          
         
        
         
        
         
         
         
         
         
        for(int i = 0; i<8; i++)
        
        {
        
        t_data.no_of_customer +=  r_data[i].no_of_customer;
        t_data.no_of_idlis +=  r_data[i].no_of_customer;
        t_data.no_of_vada  +=    r_data[i].no_of_vada;
        t_data.no_of_dosas      +=   r_data[i].no_of_dosas;
        t_data.no_of_rava_idli  +=    r_data[i].no_of_rava_idli;
        
        
    }
    printf("second part of question\n\n");
    printf("total customer %d \n",t_data.no_of_customer);
    printf("total idlis %d \n",t_data.no_of_idlis );
    printf("total vada %d\n",t_data.no_of_vada );
    printf("total dosa %d\n",t_data.no_of_dosas);
    printf("total rava_idli %d\n",t_data.no_of_rava_idli );
    
    
    
     }
    
    
    
       
 
       
       
}
