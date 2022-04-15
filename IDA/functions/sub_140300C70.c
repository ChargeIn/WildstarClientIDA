#include "../winhttp.h"

//----- (0000000140300C70) ----------------------------------------------------
__int64 __fastcall sub_140300C70(__int64* a1, int a2)
{
	__int64 v2; // rax
	int* v5; // rcx
	int** v6; // rbx
	__int64 v7; // rax
	__int64 v9; // rsi
	unsigned int v10; // edi
	unsigned int v11; // eax
	unsigned int v12; // edx
	int v13; // r9d
	unsigned __int16* v14; // rdx
	int v15; // eax
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v16[0] = 0;
	if ((*(unsigned int(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v16, 0i64))
	{
		v9 = a1[8];
		v10 = *(_DWORD*)(v9 + 1184);
		if (v10)
		{
			v11 = sub_14030E3B0(a1[7], a2);
			v12 = 0;
			v13 = *(unsigned __int16*)(112i64 * v11 + *(_QWORD*)(v9 + 24));
			do
			{
				if (v13 <= *(unsigned __int16*)(*(_QWORD*)(v9 + 1192) + 4i64 * v12))
					break;
				++v12;
			} while (v12 < v10);
			if (v12 < v10 && (v14 = (unsigned __int16*)(*(_QWORD*)(v9 + 1192) + 4i64 * v12), *v14 == v13))
			{
				v15 = v14[1];
				if (v15 != *((_DWORD*)a1 + 78))
				{
					*((_DWORD*)a1 + 78) = v15;
					return 1i64;
				}
			}
			else if (*((_DWORD*)a1 + 78))
			{
				*((_DWORD*)a1 + 78) = 0;
				return 1i64;
			}
		}
		return 0i64;
	}
	else
	{
		v5 = sub_14018B280(40i64, 0);
		if (v5)
		{
			*(_QWORD*)v5 = &off_140B64078;
			*((_QWORD*)v5 + 2) = 0i64;
			*((_QWORD*)v5 + 3) = 0i64;
			*((_QWORD*)v5 + 1) = a1;
			v6 = (int**)(a1 + 9);
			if (!*((_QWORD*)v5 + 2))
			{
				*((_QWORD*)v5 + 2) = v6;
				*((_QWORD*)v5 + 3) = *v6;
				*v6 = v5;
				v7 = *((_QWORD*)v5 + 3);
				if (v7)
					*(_QWORD*)(v7 + 16) = v5 + 6;
			}
			v5[8] = a2;
			*(_QWORD*)v5 = off_140B63FE8;
		}
		return 0i64;
	}
}
// 140300D49: conditional instruction was optimized away because edi.4!=0
// 140B63FE8: using guessed type __int64 (__fastcall *off_140B63FE8[19])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 140300C70: using guessed type int var_18[6];

