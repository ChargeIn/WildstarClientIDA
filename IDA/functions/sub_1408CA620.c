#include "../winhttp.h"

//----- (00000001408CA620) ----------------------------------------------------
int* __fastcall sub_1408CA620(unsigned int* a1)
{
	int* result; // rax

	result = (int*)*((_QWORD*)a1 + 1);
	if (result)
		return sub_1407E4830(*((int**)a1 + 1), 0i64, 8i64 * *a1);
	return result;
}

