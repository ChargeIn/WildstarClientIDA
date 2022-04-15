#include "../winhttp.h"

//----- (00000001404ADC50) ----------------------------------------------------
__int64 __fastcall sub_1404ADC50(__int64 a1, unsigned int a2, _QWORD* a3, int a4)
{
	__int64 v4; // r10
	int v8; // eax
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rax
	int v12; // edx
	__int64 v13; // rcx
	__m128* v14; // rbx
	int v15; // eax
	__int64 v16; // rcx
	__int64 v18; // rcx

	v4 = qword_140C65898;
	if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120))
	{
		v8 = dword_140DC30C4;
		if ((dword_140DC30C4 & 1) == 0)
		{
			v8 = dword_140DC30C4 | 1;
			dword_140DC30CC = 0;
			dword_140DC30C4 |= 1u;
		}
		if ((v8 & 2) != 0)
		{
			if (dword_140DC30D4)
			{
				v10 = dword_140DC30D0;
				goto LABEL_12;
			}
		}
		else
		{
			dword_140DC30C4 = v8 | 2;
		}
		dword_140DC30D4 = 1;
		v9 = sub_140200220(0x51Bu);
		v4 = qword_140C65898;
		if (v9)
		{
			v10 = *(_DWORD*)(v9 + 8);
			dword_140DC30D0 = v10;
		}
		else
		{
			v10 = 0;
			dword_140DC30D0 = 0;
		}
	LABEL_12:
		if (a4 != v10)
		{
			if (a4
				|| (dword_140DC30CC
					? (v12 = dword_140DC30C8)
					: (dword_140DC30CC = 1, v11 = sub_140200220(0x51Bu), v4 = qword_140C65898, !v11)
					? (v12 = 0, dword_140DC30C8 = 0)
					: (v12 = *(_DWORD*)(v11 + 4), dword_140DC30C8 = v12),
					(v13 = *(_QWORD*)(*(_QWORD*)(v4 + 120) + 5640i64)) == 0))
			{
			LABEL_22:
				v14 = *(__m128**)(v4 + 120);
				v15 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v4 + 72) + 8i64))(v4 + 72);
				*a3 = sub_1404AF1E0(v16, a2, v15, v14 + 286);
				a3[1] = 1i64;
				a3[2] = 0i64;
				return 1i64;
			}
			while (*(_DWORD*)(v13 + 8) != v12)
			{
				v13 = *(_QWORD*)(v13 + 136);
				if (!v13)
					goto LABEL_22;
			}
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 + 72) + 8i64))(v4 + 72);
		*a3 = sub_1404AF440(v18, a2);
		a3[1] = 15i64;
		a3[2] = 0x900000000i64;
		return 1i64;
	}
	return 0i64;
}
// 1404ADD7F: variable 'v16' is possibly undefined
// 1404ADDCC: variable 'v18' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC30C4: using guessed type int dword_140DC30C4;
// 140DC30C8: using guessed type int dword_140DC30C8;
// 140DC30CC: using guessed type int dword_140DC30CC;
// 140DC30D0: using guessed type int dword_140DC30D0;
// 140DC30D4: using guessed type int dword_140DC30D4;

