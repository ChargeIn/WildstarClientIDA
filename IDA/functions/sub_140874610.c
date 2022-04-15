#include "../winhttp.h"

//----- (0000000140874610) ----------------------------------------------------
__int64 __fastcall sub_140874610(__int64 a1, unsigned int a2)
{
	__int64 v2; // rsi
	unsigned __int64 v4; // rdi
	__int64 v5; // rax
	_QWORD* v6; // rdx
	__int64 v7; // r8
	unsigned __int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx

	v2 = a2;
	v4 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 4;
	if (v4 >= *(unsigned int*)(a1 + 16) && !sub_1408744F0(a1, 1) || v4 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 8);
	if (v5)
		*(_DWORD*)(v5 + 8) = 0;
	v6 = *(_QWORD**)(a1 + 8);
	v7 = 16 * v2;
	v8 = 16 * v2 + *(_QWORD*)a1;
	*(_QWORD*)(a1 + 8) = v6 + 2;
	if ((unsigned __int64)v6 > v8)
	{
		do
		{
			v9 = *(v6 - 2);
			v6 -= 2;
			v6[2] = v9;
			v6[3] = v6[1];
		} while ((unsigned __int64)v6 > v7 + *(_QWORD*)a1);
	}
	v10 = v7 + *(_QWORD*)a1;
	if (v10)
		*(_DWORD*)(v10 + 8) = 0;
	return v7 + *(_QWORD*)a1;
}

