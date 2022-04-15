#include "../winhttp.h"

//----- (00000001407642F0) ----------------------------------------------------
__int64 __fastcall sub_1407642F0(__int64 a1, __int64 a2)
{
	int v3; // ebp
	__int64 v4; // rcx
	int v6; // r14d
	int v7; // ebx
	__int64 v8; // rax
	int v9; // ebx
	int v10; // eax
	bool v11; // cc
	int v13; // ebx

	v3 = 0;
	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (v4)
		v6 = *(_DWORD*)(v4 + 56);
	else
		v6 = 0;
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 24i64))(*(_QWORD*)(a1 + 32));
	v8 = *(_QWORD*)(qword_140C65898 + 120);
	v9 = v7 - v6;
	if (v8)
		v3 = *(_DWORD*)(v8 + 56);
	v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 32) + 24i64))(*(_QWORD*)(a2 + 32)) - v3;
	v11 = v9 <= 0;
	if (v9 < 0)
	{
		if (v10 < 0)
		{
			if (v10 > v9)
				return 1i64;
			if (v10 < v9)
				return 0xFFFFFFFFi64;
			goto LABEL_17;
		}
		v11 = v9 <= 0;
	}
	if (!v11 && v10 > 0)
	{
		if (v10 > v9)
			return 0xFFFFFFFFi64;
		if (v10 < v9)
			return 1i64;
	}
LABEL_17:
	if (v9 != v10)
	{
		if (!v9)
			return 0xFFFFFFFFi64;
		if (!v10)
			return 1i64;
	}
	if (*(_DWORD*)(a1 + 16) == *(_DWORD*)(a2 + 16))
		return (unsigned int)(int)(float)(*(float*)(a1 + 20) - *(float*)(a2 + 20));
	if (*(_DWORD*)(a1 + 16) == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72))
		return 0xFFFFFFFFi64;
	v13 = *(_DWORD*)(a2 + 16);
	if (v13 == (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72))
		return 1i64;
	return (unsigned int)(*(_DWORD*)(a1 + 16) - v13);
}
// 140C65898: using guessed type __int64 qword_140C65898;

