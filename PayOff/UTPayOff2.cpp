#include <minmax.h>
#include "UTPayOff2.h"

UTPayOffCall::UTPayOffCall(double Strike_) : Strike(Strike_)
{
}

double UTPayOffCall::operator () (double Spot) const
{
	return max(Spot - Strike, 0.0);
}


double UTPayOffPut::operator () (double Spot) const
{
	return max(Strike - Spot, 0.0);
}

UTPayOffPut::UTPayOffPut(double Strike_) : Strike(Strike_)
{
}

/*
*
* Copyright (c) 2002
* Mark Joshi
*
* Permission to use, copy, modify, distribute and sell this
* software for any purpose is hereby
* granted without fee, provided that the above copyright notice
* appear in all copies and that both that copyright notice and
* this permission notice appear in supporting documentation.
* Mark Joshi makes no representations about the
* suitability of this software for any purpose. It is provided
* "as is" without express or implied warranty.
*/