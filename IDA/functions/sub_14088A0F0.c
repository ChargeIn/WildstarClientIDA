#include "../winhttp.h"

//----- (000000014088A0F0) ----------------------------------------------------
__int64 __fastcall sub_14088A0F0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rbp
	__int64 v5; // rbx
	__int64 v6; // rdx
	__int64 v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // r9
	__int64 i; // rdx
	__int64 v11; // rdi
	__int64 result; // rax

	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 96i64);
	EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
	v5 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 56) = 0i64;
	v6 = *(_QWORD*)(v5 + 8);
	v7 = *(_QWORD*)(v4 + 296);
	v8 = *(_QWORD**)(v6 + 16);
	if (v7)
	{
		*v8 = v7;
		*(_QWORD*)(v4 + 296) = v8;
	}
	else
	{
		*(_QWORD*)(v4 + 296) = v8;
		*v8 = 0i64;
	}
	*(_QWORD*)(v6 + 16) = 0i64;
	if (a2 != 1 && *(_DWORD*)(v6 + 28) != -1)
		sub_140889E50((_QWORD*)(v4 + 168), (__int64*)v6);
	LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
	LOBYTE(v9) = 1;
	for (i = v5; ; i = v11)
	{
		v11 = *(_QWORD*)(i + 24);
		if (i == v5)
			v5 = *(_QWORD*)(i + 24);
		else
			MEMORY[0x18] = *(_QWORD*)(i + 24);
		result = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD**)(i + 32) + 40i64))(
			*(_QWORD*)(i + 32),
			i,
			a2,
			v9);
		LOBYTE(v9) = 0;
		if (!v11)
			break;
	}
	return result;
}
// 14088A1B1: variable 'v9' is possibly undefined

