#include "../winhttp.h"

//----- (00000001407F847A) ----------------------------------------------------
void sub_1407F847A()
{
	_mm_setcsr(_mm_getcsr() & 0xFFFFFFC0);
}

