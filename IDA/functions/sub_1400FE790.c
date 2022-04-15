#include "../winhttp.h"

//----- (00000001400FE790) ----------------------------------------------------
__int64 __fastcall sub_1400FE790(__int64 a1)
{
	__int64 result; // rax
	__int64* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // [rsp+50h] [rbp-28h] BYREF
	__int64 v6; // [rsp+58h] [rbp-20h]

	if (*(_BYTE*)(a1 + 65))
		return *(_QWORD*)(a1 + 24);
	v3 = (__int64*)(a1 + 24);
	if (!*(_QWORD*)(a1 + 24))
	{
		sub_1400FE2E0(&v5, *(int**)(a1 + 40));
		if ((*(int(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			v6,
			0i64,
			0i64,
			0,
			256,
			0,
			0,
			v3) < 0)
		{
			*(_BYTE*)(a1 + 64) = 1;
			*v3 = 0i64;
		}
		if (v6)
			sub_14018B900(v6, 0);
	}
	v4 = *v3;
	if (*v3)
	{
		LODWORD(v5) = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, __int64*))(*(_QWORD*)v4 + 32i64))(v4, &v5))
			return 0i64;
	}
	result = *v3;
	*(_BYTE*)(a1 + 65) = 1;
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;

