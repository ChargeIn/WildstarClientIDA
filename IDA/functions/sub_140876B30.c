#include "../winhttp.h"

//----- (0000000140876B30) ----------------------------------------------------
__int64 __fastcall sub_140876B30(__int64 a1, __int64* a2)
{
	unsigned int v4; // edi
	__int64 v5; // rax
	__int64 v6; // rbp
	__int64 v7; // rax
	int v8; // ecx
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // r15
	int v11; // r14d
	__int64 v12; // rdi
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int64 v15; // rsi
	unsigned __int64 i; // rdx
	_QWORD* v17; // rcx
	__int64 v19; // [rsp+50h] [rbp+8h]

	v4 = *(_DWORD*)*a2;
	*a2 += 4i64;
	if (!v4)
		return 1i64;
	v5 = sub_1408819F0(dword_140C10F20, 8i64 * v4);
	*(_QWORD*)(a1 + 64) = v5;
	*(_QWORD*)(a1 + 72) = v5;
	if (v5)
	{
		*(_DWORD*)(a1 + 80) = v4;
		v6 = v4;
		while (1)
		{
			v7 = *a2 + 4;
			v8 = *(_DWORD*)*a2;
			*a2 = v7++;
			LODWORD(v19) = v8;
			LOBYTE(v8) = *(_BYTE*)(v7 - 1);
			*a2 = v7;
			v9 = *(unsigned int*)(a1 + 80);
			BYTE4(v19) = (_BYTE)v8 != 0;
			v10 = (unsigned int)((__int64)(*(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64)) >> 3);
			if (v10 < v9)
				goto LABEL_11;
			v11 = v9 + 4;
			v12 = sub_1408819F0(dword_140C10F20, 8i64 * (unsigned int)(v9 + 4));
			if (v12)
				break;
		LABEL_14:
			if (!--v6)
				return 1i64;
		}
		v13 = *(_QWORD*)(a1 + 64);
		v14 = (*(_QWORD*)(a1 + 72) - v13) >> 3;
		v15 = (unsigned int)v14;
		if (v13)
		{
			for (i = 0i64; i < (unsigned int)v14; *(_QWORD*)(v12 + 8 * i - 8) = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * i - 8))
				++i;
			sub_140881720(dword_140C10F20, *(_QWORD*)(a1 + 64));
		}
		*(_QWORD*)(a1 + 64) = v12;
		*(_DWORD*)(a1 + 80) = v11;
		*(_QWORD*)(a1 + 72) = v12 + 8 * v15;
	LABEL_11:
		if (v10 < *(unsigned int*)(a1 + 80))
		{
			v17 = *(_QWORD**)(a1 + 72);
			*(_QWORD*)(a1 + 72) = v17 + 1;
			if (v17)
				*v17 = v19;
		}
		goto LABEL_14;
	}
	return 2i64;
}
// 140876B7A: conditional instruction was optimized away because edi.4!=0
// 140C10F20: using guessed type int dword_140C10F20;

