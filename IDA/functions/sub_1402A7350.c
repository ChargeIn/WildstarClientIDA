#include "../winhttp.h"

//----- (00000001402A7350) ----------------------------------------------------
__int64 __fastcall sub_1402A7350(__int64 a1, unsigned int a2)
{
	__int64 v2; // rdi
	__int64 v5; // rbp
	__int64 v6; // rax
	__int64 v7; // rdx
	int** v8; // rsi
	int* v9; // rax
	int* v10; // rdi
	int v11[10]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+50h] [rbp+8h] BYREF

	v2 = a2;
	if (!*(_QWORD*)(a1 + 112))
		return 0i64;
	v5 = a2;
	if (*(_QWORD*)(a1 + 328) <= (unsigned __int64)a2)
		sub_1402A2FF0((__int64*)(a1 + 320), a2 + 1);
	if (!*(_QWORD*)(*(_QWORD*)(a1 + 320) + 8 * v2))
	{
		v6 = *(int*)(a1 + 48);
		v7 = *(_QWORD*)(a1 + 112);
		v11[1] = 9;
		v11[2] = v2;
		v11[3] = -1;
		v12 = 0i64;
		v11[0] = dword_140AE8190[v6];
		if ((*(int(__fastcall**)(_QWORD, __int64, int*, __int64*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64) + 56i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
			v7,
			v11,
			&v12) >= 0)
		{
			v8 = (int**)(*(_QWORD*)(a1 + 320) + 8 * v2);
			if (v8)
			{
				v9 = sub_14018B280(24i64, 0);
				v10 = v9;
				if (v9)
				{
					*(_QWORD*)v9 = off_140B55048;
					v9[2] = 1;
					*(_QWORD*)v9 = off_140B61188;
					*((_QWORD*)v9 + 2) = v12;
					if (v12)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
				}
				else
				{
					v10 = 0i64;
				}
				*v8 = v10;
			}
		}
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 16i64))(v12);
	}
	return *(_QWORD*)(*(_QWORD*)(a1 + 320) + 8 * v5);
}
// 140AE8190: using guessed type _DWORD dword_140AE8190[28];
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B61188: using guessed type __int64 (__fastcall *off_140B61188[3])();

