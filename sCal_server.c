/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "sCal.h"

float *
s_cal_1_svc(defvar *argp, struct svc_req *rqstp)
{
	static float  result;

	printf("The function is called\n");

	//Printing the arguments sent by client in the server side
	printf("The arguments are: %c,%f,%f\n",argp->x,argp->a,argp->b);

//Function for the simple calculator
	if(argp->x == '+')
		result = argp->a + argp->b;
	else if(argp->x == '-')
		result = argp->a - argp->b;
	else if(argp->x == '*')
		result = argp->a * argp->b;
	else if(argp->x == '/')
		result = argp->a / argp->b;
	else if(argp->x == '%')
		result = (argp->a / argp->b)*100;

//Printing the result in the server side
	printf("%f\n", result);

//To send the result to the client side
	return &result;
}
