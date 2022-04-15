#include "../winhttp.h"

//----- (0000000140104210) ----------------------------------------------------
int* __fastcall sub_140104210(_QWORD* a1, __int64 a2)
{
	int* v4; // rax
	int* v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rcx
	int* result; // rax
	int* v9; // rdx
	int* v10; // [rsp+40h] [rbp+18h] BYREF

	v4 = sub_14018B280(56i64, 0);
	v5 = v4;
	if (v4)
	{
		*((_QWORD*)v4 + 1) = a1;
		v4[4] = 0;
		*((_BYTE*)v4 + 20) = 0;
		*((_QWORD*)v4 + 4) = 0i64;
		*((_QWORD*)v4 + 5) = 0i64;
		*((_QWORD*)v4 + 6) = 0i64;
		*(_QWORD*)v4 = off_140B56B90;
	}
	else
	{
		v5 = 0i64;
	}
	(*(void(__fastcall**)(int*, __int64))(*(_QWORD*)v5 + 40i64))(v5, a2);
	(*(void(__fastcall**)(int*))(*(_QWORD*)v5 + 56i64))(v5);
	if ((int)((__int64)(*((_QWORD*)v5 + 5) - *((_QWORD*)v5 + 4)) >> 3) <= 0)
		return (int*)(**(__int64(__fastcall***)(int*, __int64))v5)(v5, 1i64);
	v6 = *((_QWORD*)v5 + 4);
	if (!*(_QWORD*)v6)
		return (int*)(**(__int64(__fastcall***)(int*, __int64))v5)(v5, 1i64);
	v7 = *(_QWORD*)(*(_QWORD*)v6 + 64i64) - *(_QWORD*)(*(_QWORD*)v6 + 56i64);
	result = (int*)((unsigned __int64)((unsigned __int128)(v7 * (__int128)0x6BCA1AF286BCA1Bi64) >> 64) >> 63);
	if ((int)(v7 / 304) <= 0)
		return (int*)(**(__int64(__fastcall***)(int*, __int64))v5)(v5, 1i64);
	v9 = (int*)a1[9];
	v10 = v5;
	if (v9 == (int*)a1[10])
		return sub_1400B9430(a1 + 7, v9, &v10);
	if (v9)
		*(_QWORD*)v9 = v5;
	a1[9] += 8i64;
	return result;
}
// 140B56B90: using guessed type __int64 (__fastcall *off_140B56B90[33])();

