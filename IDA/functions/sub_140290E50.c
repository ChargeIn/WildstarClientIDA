#include "../winhttp.h"

//----- (0000000140290E50) ----------------------------------------------------
int __fastcall sub_140290E50(__int64* a1, unsigned int a2)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	int v5; // edi
	__int64 v6; // rax
	_DWORD* v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rdx
	int v13; // edi
	__int64 v14; // rax
	bool v15; // zf
	int v16; // edi
	int v17; // edi
	int v19[10]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v20; // [rsp+50h] [rbp+8h] BYREF

	v2 = *a1;
	v3 = a2;
	v19[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v2 + 32))(a1, v19);
	v5 = 1 << v3;
	LODWORD(v6) = *((_DWORD*)a1 + 41) | *((_DWORD*)a1 + 40);
	if (((unsigned int)v6 & (1 << v3)) != 0)
	{
		if (((_DWORD)a1[20] & v5) != 0)
		{
			v7 = (_DWORD*)(a1[18] + 24 * v3);
			LODWORD(v6) = *v7;
			if (*v7 > 1u)
			{
				LODWORD(v6) = v6 - 1;
				*v7 = v6;
				return v6;
			}
		}
		v8 = a1[13];
		if (!v8)
			return v6;
		if (a1[17])
		{
			if ((unsigned int)v3 >= *((_DWORD*)a1 + 11))
				return v6;
			sub_14003D8F0(&v20, a1[2] + 24);
			v9 = *(_QWORD*)(a1[17] + 16 * v3);
			if (v9)
			{
				if ((*(int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 160i64))(v9, 0i64) >= 0)
				{
					v12 = a1[17];
					v13 = ~v5;
					if ((*(_BYTE*)(v12 + 16 * v3 + 8) & 2) != 0)
					{
						*((_DWORD*)a1 + 41) &= v13;
						(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1[2] + 6608) + 248i64))(
							*(_QWORD*)(a1[2] + 6608),
							*(_QWORD*)(v12 + 16 * v3),
							a1[13]);
					}
					else
					{
						v14 = a1[18];
						*((_DWORD*)a1 + 40) &= v13;
						*(_DWORD*)(v14 + 24 * v3) = 0;
					}
					v10 = a1[17];
					v11 = *(_QWORD*)(v10 + 16 * v3);
					if (!v11)
						goto LABEL_17;
					goto LABEL_16;
				}
				v10 = a1[17];
				v11 = *(_QWORD*)(v10 + 16 * v3);
				if (v11)
				{
				LABEL_16:
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 16i64))(v11);
					*(_QWORD*)(v10 + 16 * v3) = 0i64;
				}
			}
		LABEL_17:
			LODWORD(v6) = sub_14003D880(&v20);
			return v6;
		}
		LODWORD(v6) = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 160i64))(v8, (unsigned int)v3);
		if ((int)v6 >= 0)
		{
			LODWORD(v6) = *((_DWORD*)a1 + 40);
			v15 = ((unsigned int)v6 & v5) == 0;
			v16 = ~v5;
			if (v15)
			{
				*((_DWORD*)a1 + 41) &= v16;
			}
			else
			{
				v17 = v6 & v16;
				v6 = a1[18];
				*((_DWORD*)a1 + 40) = v17;
				*(_DWORD*)(v6 + 24 * v3) = 0;
			}
		}
	}
	return v6;
}
// 140290E50: using guessed type int var_28[10];

