#include "../winhttp.h"

//----- (00000001401BF6E0) ----------------------------------------------------
__int64 __fastcall sub_1401BF6E0(__int64 a1)
{
	int v2; // ebp
	_DWORD* v3; // rdi
	int* v4; // rax
	int v5; // ecx
	__int64 result; // rax

	v2 = 0;
	if ((*(int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 40) + 120i64))(*(_QWORD*)(a1 + 40), a1 + 52) >= 0
		&& (v3 = (_DWORD*)(a1 + 56),
			(*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64, __int64))(**(_QWORD**)(a1 + 40) + 88i64))(
				*(_QWORD*)(a1 + 40),
				*(unsigned int*)(a1 + 52),
				0i64,
				a1 + 56,
				16i64) >= 0)
		&& *v3 == 1095320664
		&& *(_DWORD*)(a1 + 60) == 1)
	{
		v2 = 1;
	}
	else
	{
		v3 = (_DWORD*)(a1 + 56);
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_QWORD*)(a1 + 64) = 0i64;
		*(_DWORD*)(a1 + 56) = 1095320664;
		*(_DWORD*)(a1 + 60) = 1;
		*(_DWORD*)(a1 + 52) = 0;
	}
	v4 = sub_14018B280(56i64, 0);
	if (v4)
	{
		v5 = *(_DWORD*)(a1 + 68);
		*((_QWORD*)v4 + 1) = 0i64;
		*((_QWORD*)v4 + 2) = 0i64;
		*((_QWORD*)v4 + 3) = 0i64;
		*((_QWORD*)v4 + 4) = 0i64;
		*((_QWORD*)v4 + 5) = 0i64;
		*v4 = v5;
		*((_QWORD*)v4 + 6) = 0i64;
	}
	else
	{
		v4 = 0i64;
	}
	*(_QWORD*)(a1 + 72) = v4;
	sub_1401BCEA0(v4, a1);
	if (v2)
		return 0i64;
	sub_1401BD1F0(*(unsigned int**)(a1 + 72), a1);
	*(_DWORD*)(a1 + 68) = **(_DWORD**)(a1 + 72);
	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 40) + 40i64))(
		*(_QWORD*)(a1 + 40),
		a1 + 52,
		16i64);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, _DWORD*, __int64))(**(_QWORD**)(a1 + 40) + 104i64))(
			*(_QWORD*)(a1 + 40),
			*(unsigned int*)(a1 + 52),
			0i64,
			v3,
			16i64);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 40) + 128i64))(
				*(_QWORD*)(a1 + 40),
				*(unsigned int*)(a1 + 52));
			if ((int)result >= 0)
				return 0i64;
		}
	}
	return result;
}

