#include "../winhttp.h"

//----- (00000001408ADC70) ----------------------------------------------------
int* __fastcall sub_1408ADC70(__int64 a1)
{
	int* v2; // rcx
	int* result; // rax

	v2 = *(int**)(a1 + 8);
	if (v2)
		result = sub_1407E4830(v2, 0i64, (unsigned int)(4 * *(_DWORD*)a1));
	*(_DWORD*)(a1 + 16) = 0;
	return result;
}

