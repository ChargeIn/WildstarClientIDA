#include "../winhttp.h"

//----- (000000014057A630) ----------------------------------------------------
__int64 __fastcall sub_14057A630(__int64 a1, int* a2, double a3, double a4)
{
	__int64 v6; // rcx
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rax
	int v10; // edx
	_DWORD* v11; // rax
	__int64 v12; // rcx
	_DWORD* v13; // rdx
	bool v14; // zf
	int v16; // [rsp+30h] [rbp+8h] BYREF
	__int64 v17; // [rsp+40h] [rbp+18h] BYREF

	if (*(_QWORD*)(a1 + 25744))
	{
		v16 = *a2;
		sub_1403F4900(qword_140C65898, 0x635u, (__int64)&v16);
		v8 = *(_QWORD*)(a1 + 25744);
		if (v8)
			LODWORD(v8) = *(_DWORD*)(v8 + 264);
		if (a2[2] == (_DWORD)v8)
			sub_14055B0E0(a1, 0, a3, a4);
		if (a2[1])
			sub_1405B3CF0(*(_QWORD*)(a1 + 25744), dword_140C636A8);
		if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 3416i64))
		{
			v9 = *(_QWORD*)(a1 + 120);
			if (v9)
			{
				if (a2[2] == *(_DWORD*)(v9 + 8))
				{
					v17 = 0i64;
					LODWORD(v17) = *(_DWORD*)(a1 + 29008);
					HIDWORD(v17) = v17;
					sub_1403F4900(a1, 0x63Au, (__int64)&v17);
				}
			}
		}
		v10 = a2[2];
		if (*(_DWORD*)(*(_QWORD*)(a1 + 25744) + 8i64) != v10)
		{
			v11 = (_DWORD*)sub_1403D90D0(qword_140C65898, v10);
			if (v11)
			{
				v12 = *(_QWORD*)(a1 + 25744);
				*(_DWORD*)(v12 + 3408) = 0;
				sub_1403968B0(v12, v11);
				*(_DWORD*)(qword_140C65898 + 25728) = 0;
			}
			else
			{
				v6 = (unsigned int)a2[2];
				*(_DWORD*)(qword_140C65898 + 25728) = v6;
			}
		}
		v13 = *(_DWORD**)(a1 + 25744);
		v14 = v13[893] == 1;
		v13[853] = 1;
		if (!v14 && !v13[852])
			sub_14057A450(v6, (__int64)v13, a3);
		sub_14055BAC0((_QWORD*)a1, (__int64)v13, v7, a4);
	}
	return 0i64;
}
// 14057A76A: variable 'v6' is possibly undefined
// 14057A772: variable 'v13' is possibly undefined
// 14057A772: variable 'v7' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

