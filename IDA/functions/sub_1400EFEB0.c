#include "../winhttp.h"

//----- (00000001400EFEB0) ----------------------------------------------------
__int64 __fastcall sub_1400EFEB0(__int64 a1, __int64 a2, unsigned __int64* a3, int a4)
{
	int v4; // edi
	unsigned __int64 v8; // r8
	_DWORD* v9; // rax
	__int64* v10; // rax
	__int64 result; // rax

	v4 = 0;
	if (a3)
	{
		v8 = -1i64;
		do
			++v8;
		while (*((_BYTE*)a3 + v8));
		sub_140058710(a1, a3, v8);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	v9 = *(_DWORD**)(a1 + 16);
	LOBYTE(v4) = a4 != 0;
	v9[2] = 1;
	*v9 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v10 = (__int64*)sub_1400580E0(a1, -3);
	result = sub_14005EA50(a1, v10, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 32i64;
	return result;
}

