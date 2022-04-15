#include "../winhttp.h"

//----- (000000014006A5E0) ----------------------------------------------------
__int64 __fastcall sub_14006A5E0(__int64 a1, unsigned int* a2, int a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rcx
	int* v8; // r8
	int v9; // ecx

	result = *a2;
	if ((_DWORD)result == 13)
	{
		v6 = (int)a2[2];
		v7 = *(_QWORD*)(*(_QWORD*)a1 + 24i64);
		result = (*(_DWORD*)(v7 + 4 * v6) ^ ((a3 + 1) << 14)) & 0x7FC000;
		*(_DWORD*)(v7 + 4 * v6) ^= result;
	}
	else if ((_DWORD)result == 14)
	{
		v8 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 24i64) + 4i64 * (int)a2[2]);
		*v8 = *v8 & 0x7FFFFF ^ ((a3 + 1) << 23);
		*(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 24i64) + 4i64 * (int)a2[2]) ^= (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 24i64)
			+ 4i64 * (int)a2[2]) ^ (*(_DWORD*)(a1 + 60) << 6)) & 0x3FC0;
		result = *(unsigned __int8*)(*(_QWORD*)a1 + 115i64);
		v9 = *(_DWORD*)(a1 + 60) + 1;
		if (v9 > (int)result)
		{
			if (v9 >= 250)
				sub_140062CF0(*(_QWORD*)(a1 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64));
			*(_BYTE*)(*(_QWORD*)a1 + 115i64) = v9;
		}
		++* (_DWORD*)(a1 + 60);
	}
	return result;
}

