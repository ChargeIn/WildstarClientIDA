#include "../winhttp.h"

//----- (00000001402FD120) ----------------------------------------------------
__int64 __fastcall sub_1402FD120(__int64* a1, int a2)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // r8
	__int64 result; // rax
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *a1;
	v3 = a2;
	v7[0] = -1;
	(*(void(__fastcall**)(__int64*, int*, _QWORD))(v2 + 16))(a1, v7, 0i64);
	v5 = a1[8];
	if ((unsigned int)v3 >= *(_DWORD*)(v5 + 1360))
		return 0xFFFFFFFFi64;
	result = *(unsigned __int16*)(*(_QWORD*)(v5 + 1368) + 2 * v3);
	if ((unsigned int)result >= *(_DWORD*)(v5 + 1344))
		return 0xFFFFFFFFi64;
	return result;
}
// 1402FD120: using guessed type int var_18[6];

