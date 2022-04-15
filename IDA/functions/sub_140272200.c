#include "../winhttp.h"

//----- (0000000140272200) ----------------------------------------------------
__int64 __fastcall sub_140272200(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
	__int64 v6; // rcx
	__int64 result; // rax
	int v8[6]; // [rsp+20h] [rbp-18h] BYREF

	if (*(_QWORD*)(a1 + 10376) != a2 || *(_QWORD*)(a1 + 10384) != __PAIR64__(a4, a3))
	{
		*(_QWORD*)(a1 + 10376) = a2;
		*(_DWORD*)(a1 + 10384) = a3;
		*(_DWORD*)(a1 + 10388) = a4;
		v6 = *(_QWORD*)(a1 + 10376);
		v8[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v6 + 32i64))(v6, v8);
		(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 6608) + 80i64))(
			*(_QWORD*)(a1 + 6608),
			*(unsigned int*)(a1 + 10384),
			*(unsigned int*)(a1 + 10388),
			*(_QWORD*)(*(_QWORD*)(a1 + 10376) + 40i64));
	}
	result = *(unsigned int*)(a1 + 240);
	if (*(_DWORD*)(a2 + 60) != (_DWORD)result)
	{
		*(_DWORD*)(a2 + 60) = result;
		_InterlockedIncrement((volatile signed __int32*)(a1 + 1052));
		return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32*)(a1 + 1056), *(_DWORD*)(a2 + 56));
	}
	return result;
}
// 140272200: using guessed type int var_18[6];

