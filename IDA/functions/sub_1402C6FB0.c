#include "../winhttp.h"

//----- (00000001402C6FB0) ----------------------------------------------------
__int64 __fastcall sub_1402C6FB0(__int64* a1, __int64 a2)
{
	__m128* v2; // rbp
	__int64 v5; // rsi
	__int64 v6; // rax
	__int64 v7; // rdi

	v2 = (__m128*)a1[5];
	if (!v2)
		return 2147500035i64;
	v5 = *(_QWORD*)(a2 + 40);
	if (!v5)
		return 2147500035i64;
	if (*a1 != *(_QWORD*)a2)
		return 2147500037i64;
	v6 = a1[1];
	if (v6 != *(_QWORD*)(a2 + 8))
		return 2147500037i64;
	v7 = 0i64;
	if (!v6)
		return 0i64;
	while (sub_1402C4F90(v5, *(_QWORD*)(a2 + 24), *(_DWORD*)(a2 + 16), v2, *a1))
	{
		v2 = (__m128*)((char*)v2 + a1[3]);
		v5 += *(_QWORD*)(a2 + 24);
		if (++v7 >= (unsigned __int64)a1[1])
			return 0i64;
	}
	return 2147500037i64;
}

