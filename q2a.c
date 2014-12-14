/*The equation for the motion of a pendulum vibrating along the vertical direction with the
frequency ω and the amplitude a*/

#include <math.h>                                                     /*Necessay Libraries*/
#include <gsl/gsl_errno.h>

int func (double tau, const double y[], double f[], void *params)     /*Initizaling the function*/
{
  double Omega = *(double *) params;

  f[0] = y[1];
  f[1] = -(1.-0.01 * Omega * Omega * sin(Omega*tau)) * sin(y[0]);    /*Motion of the pendulum*/

  return GSL_SUCCESS;
}

