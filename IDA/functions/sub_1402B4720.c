#include "../winhttp.h"

//----- (00000001402B4720) ----------------------------------------------------
__int64 __fastcall sub_1402B4720(__int64 a1)
{
	int* v1; // rdi
	unsigned __int64 i; // rsi

	v1 = *(int**)(a1 + 40);
	if (!v1)
		return 2147500035i64;
	for (i = 0i64; i < *(_QWORD*)(a1 + 8); ++i)
	{
		sub_1402C2A00((__int64)v1, *(_QWORD*)(a1 + 24), v1, *(_QWORD*)(a1 + 24), *(_DWORD*)(a1 + 16), 1);
		v1 = (int*)((char*)v1 + *(_QWORD*)(a1 + 24));
	}
	return 0i64;
}

