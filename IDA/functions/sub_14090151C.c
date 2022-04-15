#include "../winhttp.h"

//----- (000000014090151C) ----------------------------------------------------
int* __fastcall sub_14090151C(__int64* a1)
{
	int* result; // rax
	int* v3; // rbx

	result = (int*)sub_1409061DC();
	v3 = result;
	if (result)
	{
		if ((unsigned int)sub_140901564(result, a1))
			return 0i64;
		return v3;
	}
	return result;
}

