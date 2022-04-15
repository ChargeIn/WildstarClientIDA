#include "../winhttp.h"

//----- (0000000140932570) ----------------------------------------------------
_QWORD* __fastcall sub_140932570(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	_QWORD* v4; // rax
	_QWORD* v5; // rax
	_QWORD* result; // rax
	_QWORD* v7; // rax
	_QWORD* v8; // rdi
	_QWORD* v9; // rax
	_QWORD* v10; // rax

	if (*(_DWORD*)a1)
		return 0i64;
	if (*(_DWORD*)(a1 + 108))
	{
		v2 = *(_QWORD*)(a1 + 56);
		v3 = *(_QWORD*)(v2 + 8);
		if ((unsigned __int64)(v3 + 7) > 0xFF0)
		{
			v5 = (_QWORD*)off_140C1B1E0(4096i64);
			if (!v5)
			{
				*(_DWORD*)a1 = 2;
			LABEL_9:
				if (*(_DWORD*)a1)
					return 0i64;
				goto LABEL_12;
			}
			*v5 = *(_QWORD*)(a1 + 56);
			*(_QWORD*)(a1 + 56) = v5;
			v5[1] = 7i64;
			v4 = v5 + 2;
		}
		else
		{
			*(_QWORD*)(v2 + 8) = v3 + 7;
			v4 = (_QWORD*)(v2 + v3 + 16);
		}
		if (v4)
		{
			*(_BYTE*)v4 = 6;
			*(_QWORD*)(a1 + 88) += 6i64;
			*(_DWORD*)((char*)v4 + 1) = 1686980765;
			*(_WORD*)((char*)v4 + 5) = -2012;
			*(_DWORD*)(a1 + 108) = 0;
			goto LABEL_12;
		}
		goto LABEL_9;
	}
LABEL_12:
	result = *(_QWORD**)(a1 + 32);
	if (!result || result[2] != *(_QWORD*)(a1 + 88))
	{
		v7 = sub_14092D590(a1, 24i64);
		v8 = v7;
		if (v7
			&& ((*v7 = 0i64, v7[2] = *(_QWORD*)(a1 + 88), (v9 = *(_QWORD**)(a1 + 32)) == 0i64)
				? (*(_QWORD*)(a1 + 8) = v8)
				: (*v9 = v8),
				*(_QWORD*)(a1 + 32) = v8,
				(v10 = sub_14092D610(a1, 2i64)) != 0i64))
		{
			*(_WORD*)v10 = 0;
			return v8;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 140C1B1E0: using guessed type __int64 (__fastcall *off_140C1B1E0)(_QWORD);

