/*
 * Author: Trey Turner
 *
 *
 * This is a program that prompts inputs of
 * an angle of incidence and an index of refraction
 * and computes then prints the angle of refraction
 *
 */
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char **argv){

  double indexOfRefraction, angleOfRefraction, angleOfIncidence;
  printf("Please enter an angle of incidence value.\n");
  scanf("%lf",&angleOfIncidence);
  if(angleOfIncidence>360||angleOfIncidence<0){
    printf("You've entered an invalid value (%lf). Exiting program...", angleOfIncidence);
    exit(1);
  }
  printf("Please enter an index of refraction value.\n");
  scanf("%lf", &indexOfRefraction);
  if(indexOfRefraction>5||indexOfRefraction<1){
    printf("You've entered an invalid value (%lf). Exiting program...", indexOfRefraction);
    exit(1);
  }
  angleOfRefraction = asin(sin(angleOfIncidence)/indexOfRefraction);
  printf("Angle of Incidence: %.0f degrees\n", angleOfIncidence);
  printf("Index of Refraction: %.3lf\n", indexOfRefraction);
  printf("Angle of Refraction: %.2lf\n", angleOfRefraction);

  return 0;
}
