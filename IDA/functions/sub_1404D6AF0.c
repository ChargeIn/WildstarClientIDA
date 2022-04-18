#include "../winhttp.h"

//----- (00000001404D6AF0) ----------------------------------------------------
__int64 __fastcall sub_1404D6AF0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned int v3; // r14d
	__int64 v4; // r15
	unsigned __int64 i; // r8
	__int64 v6; // r12
	__int64 v7; // rbp
	unsigned __int64 v8; // rsi
	_QWORD* v9; // rbx
	__int64 v10; // rcx
	int v11; // eax

	v2 = qword_140C65A50;
	v3 = 0;
	v4 = a2;
	for (i = 0i64; i < *(_QWORD*)(v2 + 8); *(_BYTE*)(*(_QWORD*)(*(_QWORD*)v2 + 8 * i - 8) + 64i64) = 0)
		++i;
	if (*(_DWORD*)a2)
	{
		while (1)
		{
			v6 = v3;
			v7 = *(_QWORD*)(v4 + 8) + 4i64 * v3;
			v8 = (*(__int64(__fastcall**)(__int64, __int64, unsigned __int64))(v2 + 40))(v7, a2, i);
			v9 = *(_QWORD**)(*(_QWORD*)(v2 + 32) + 8 * (v8 % *(_QWORD*)(v2 + 24)));
			if (!v9)
				break;
			while (v8 != *v9 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 48))(v7, v9 + 2))
			{
				v9 = (_QWORD*)v9[1];
				if (!v9)
					return 0i64;
			}
			if (v9 == (_QWORD*)-24i64)
				break;
			a2 = v9[3];
			++v3;
			*(_BYTE*)(a2 + 64) = *(_BYTE*)(v6 + *(_QWORD*)(v4 + 16));
			if (v3 >= *(_DWORD*)v4)
				goto LABEL_11;
		}
	}
	else
	{
	LABEL_11:
		v10 = qword_140C65898;
		v11 = *(_DWORD*)(v4 + 24);
		if (*(_DWORD*)(qword_140C65898 + 28264) != v11)
		{
			*(_DWORD*)(qword_140C65898 + 28264) = v11;
			sub_1403CDBF0(v10);
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "CharacterEldanAugmentationsUpdated", &unk_1409D10E6);
			v10 = qword_140C65898;
		}
		Apollo_LUAEvent(*(_QWORD*)(v10 + 29504), "PrimalMatrixUpdated", &unk_1409D139A);
	}
	return 0i64;
}
// 1404D6B4E: variable 'i' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A50: using guessed type __int64 qword_140C65A50;

