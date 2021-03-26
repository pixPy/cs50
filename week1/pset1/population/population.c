#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int StartPopulation;
    do
    {
        StartPopulation = get_int("Starting size of population: ");

    }
    while (StartPopulation<9);

    // TODO: Prompt for end size
    int EndPopulation;
    do
    {
        EndPopulation = get_int("Ending size of population: ");
    }
    while(EndPopulation<StartPopulation);

    // TODO: Calculate number of years until we reach threshold
    int Years = 0;
    while ( EndPopulation > StartPopulation )
    
    {
     StartPopulation = StartPopulation + (StartPopulation / 3) - (StartPopulation / 4);
     ++Years;
     }

    // TODO: Print number of years
    printf("Years: %i\n", Years);

    return 0;
}