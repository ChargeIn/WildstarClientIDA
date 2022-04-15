#include "../winhttp.h"

//----- (00000001400B7480) ----------------------------------------------------
_WORD* __fastcall sub_1400B7480(__int64 a1, _QWORD* a2)
{
	__int64 v4; // rbx
	_QWORD* v5; // rax
	int* v6; // rdx
	_WORD* result; // rax
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]
	_QWORD* v10; // [rsp+58h] [rbp+10h] BYREF

	v10 = a2;
	if (*(_QWORD*)(a1 + 48) == *(_QWORD*)(a1 + 56))
		*(_QWORD*)(a1 + 72) = a2;
	++* (_DWORD*)(a1 + 80);
	v4 = *a2;
	v5 = sub_14018EFA0(&v8, (__int64)L"%d");
	(*(void(__fastcall**)(_QWORD*, _QWORD*))(v4 + 72))(a2, v5);
	if (v9)
		sub_14018B900(v9, 0);
	v6 = *(int**)(a1 + 56);
	if (v6 == *(int**)(a1 + 64))
	{
		sub_1400B9430((_QWORD*)(a1 + 40), v6, &v10);
	}
	else
	{
		if (v6)
			*(_QWORD*)v6 = a2;
		*(_QWORD*)(a1 + 56) += 8i64;
	}
	result = *(_WORD**)(a1 + 96);
	if (result != *(_WORD**)(a1 + 104))
	{
		*result = 0;
		result = *(_WORD**)(a1 + 96);
		*(_QWORD*)(a1 + 104) = result;
	}
	return result;
}
// 1409D2FA4: using guessed type wchar_t aD_5[3];

