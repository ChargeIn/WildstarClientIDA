#include "../winhttp.h"

//----- (0000000140899EB0) ----------------------------------------------------
__int64 __fastcall sub_140899EB0(_QWORD* a1)
{
	__int64 v2; // rsi
	__int64 v3; // rbx
	unsigned __int64 v4; // rcx
	signed __int64 v5; // rcx
	void* v6; // rsp
	void* v7; // rsp
	__int64 v8; // rdx
	unsigned int* v9; // r9
	unsigned int vars0; // [rsp+30h] [rbp+0h] BYREF

	v2 = (a1[18] - a1[17]) / 24i64;
	v3 = (unsigned int)v2;
	v4 = 4i64 * (unsigned int)v2 + 15;
	if (v4 <= 4 * (unsigned __int64)(unsigned int)v2)
		v4 = 0xFFFFFFFFFFFFFF0i64;
	v5 = v4 & 0xFFFFFFFFFFFFFFF0ui64;
	v6 = alloca(v5);
	v7 = alloca(v5);
	if ((_DWORD)v2)
	{
		v8 = 0i64;
		v9 = &vars0;
		do
		{
			++v9;
			v8 += 24i64;
			*(v9 - 1) = *(_DWORD*)(v8 + a1[17] - 16);
			--v3;
		} while (v3);
	}
	return sub_140834990(a1[16] + 272i64, *(_DWORD*)(a1[16] + 24i64), &vars0, v2, 0);
}

