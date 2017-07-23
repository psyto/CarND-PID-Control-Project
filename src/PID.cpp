#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {

  // Initialize coefficients
  this->Kp = kp;
  this->Ki = ki;
  this->Kd = Kd;

  // Initialize Errors
  p_error = 0;
  i_error = 0;
  d_error = 0;

}

void PID::UpdateError(double cte) {

  p_error = cte;
  d_error = cte - p_error;
  i_error = cte + i_error;

}

double PID::TotalError() {

  return -Kp * p_error - Kd * d_error - Ki * i_error;

}
