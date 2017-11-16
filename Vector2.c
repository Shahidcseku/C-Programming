#include<Stdio.h>


struct Vector{


float x;
float y;


}position;

struct Vector f(float deltaTime);
int main()
{



int i;

for(i =0;i<4;i++)
{
    f(3.2*i);
    printf("X =%.2f, Y = %.2f\n",position.x,position.y);
}



}


struct Vector f(float deltaTime){

float deltatime;

float x,y;

    x = deltaTime;
    y = 4;

    return position;



};
