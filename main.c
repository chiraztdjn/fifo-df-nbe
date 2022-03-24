#include <stdio.h>
#include <stdlib.h>


int main()
{
const int n=12;
    int df = 0;
    // declaration de chaine ref
    int ref_str[n] ;

    printf("enter ref value : \n");
  for (int i=0;i<n;i++)
scanf ("%d",&ref_str[i]);

// frames input

    int frames ;
    printf ("enter number of frames : ");
    scanf("%d",&frames);
 // other variables declaration
    int m, k, s, pages;

    pages = sizeof(ref_str)/sizeof(ref_str[0]);

    printf("ref  \t Frame 1 \t\t\t Frame 2    ");
    int frame[frames];
    for(m = 0; m < frames; m++)
    {
        frame[m] = -1;
    }

    for(m = 0; m < pages; m++)
    {
        s = 0;

        for(k = 0; k < frames; k++)
        {
            if(ref_str[m] == frame[k])
            {
                s++;
                df--;

            }

         }

        df++;




        if((df <= frames) && (s == 0))
        {
            frame[m] = ref_str[m];

        }
        else if(s == 0)
        {
            frame[(df -1) % frames] = ref_str[m];


        }

        printf("\n");
        printf("%d\t\t\t",ref_str[m]);
        for(k = 0; k < frames; k++)
        {

            if(frame[k] != -1)


                printf(" %d\t\t\t", frame[k]);


            else
                printf(" - \t\t\t");



        }

}
    printf("\nTotal Page Faults:\t%d\n", df);
    return 0;
}

