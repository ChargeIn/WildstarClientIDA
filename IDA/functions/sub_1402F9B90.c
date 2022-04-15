#include "../winhttp.h"

//----- (00000001402F9B90) ----------------------------------------------------
int* __fastcall sub_1402F9B90(_QWORD* a1)
{
	__int64 v1; // rax
	unsigned __int64 v2; // rbx
	int* result; // rax
	_QWORD* v5; // rcx
	_QWORD* v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned int i; // esi
	__int64 v10; // r8
	unsigned __int64 v11; // rdx
	unsigned __int16 v12; // r9
	int v13[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = *a1;
	v2 = 0i64;
	v13[0] = 0;
	if ((*(unsigned int(__fastcall**)(_QWORD*, int*, _QWORD))(v1 + 16))(a1, v13, 0i64))
	{
		v8 = a1[8];
		for (i = 0; i < *(_DWORD*)(v8 + 512); ++i)
		{
			(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD))(*a1 + 728i64))(
				a1,
				*(unsigned __int16*)(*(_QWORD*)(v8 + 520) + 4i64 * i),
				0i64);
			v8 = a1[8];
		}
		do
		{
			v10 = a1[8];
			v11 = *(int*)&asc_140AF1418[v2];
			result = (int*)*(unsigned int*)(v10 + 528);
			if ((unsigned __int64)result > v11)
			{
				result = *(int**)(v10 + 536);
				v12 = *((_WORD*)result + v11);
				if (v12 != 0xFFFF)
				{
					result = *(int**)(v10 + 520);
					if ((result[v12] & 0x10000) != 0)
						result = (int*)(*(__int64(__fastcall**)(_QWORD*, unsigned __int64, __int64))(*a1 + 728i64))(
							a1,
							v11,
							1i64);
				}
			}
			v2 += 4i64;
		} while (v2 < 0x10);
	}
	else
	{
		result = sub_14018B280(32i64, 0);
		v5 = result;
		if (result)
		{
			*(_QWORD*)result = &off_140B64078;
			*((_QWORD*)result + 2) = 0i64;
			*((_QWORD*)result + 3) = 0i64;
			*((_QWORD*)result + 1) = a1;
			v6 = a1 + 9;
			if (!*((_QWORD*)result + 2))
			{
				*((_QWORD*)result + 2) = v6;
				*((_QWORD*)result + 3) = *v6;
				*v6 = result;
				v7 = *((_QWORD*)result + 3);
				if (v7)
					*(_QWORD*)(v7 + 16) = v5 + 3;
			}
			result = (int*)off_140B64038;
			*v5 = off_140B64038;
		}
	}
	return result;
}
// 140B64038: using guessed type __int64 (__fastcall *off_140B64038[9])();
// 140B64078: using guessed type __int64 (__fastcall *off_140B64078)();
// 1402F9B90: using guessed type int var_18[6];

