#include "../winhttp.h"

//----- (000000014029E170) ----------------------------------------------------
__int64 __fastcall sub_14029E170(__int64 a1, int a2)
{
	_DWORD* v3; // rbx
	__int64 v4; // r8
	__int64 v5; // rdx
	__int64 result; // rax
	char v7[64]; // [rsp+40h] [rbp-78h] BYREF
	int X; // [rsp+80h] [rbp-38h]
	int Y; // [rsp+84h] [rbp-34h]

	if (*(_DWORD*)(a1 + 72) != a2)
	{
		v3 = (_DWORD*)qword_140C636A0;
		++* (_DWORD*)qword_140C636A0;
		*(_DWORD*)(a1 + 72) = a2;
		if (a2)
		{
			(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6320i64) + 56i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6320i64),
				v7);
			SetWindowPos(*(HWND*)(a1 + 48), HWND_MESSAGE | 0x2, X, Y, *(_DWORD*)(a1 + 24), *(_DWORD*)(a1 + 28), 0x40u);
			v4 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 6320i64);
			v5 = 1i64;
		}
		else
		{
			ShowWindow(*(HWND*)(a1 + 48), 7);
			v4 = 0i64;
			v5 = 0i64;
		}
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 88) + 80i64))(*(_QWORD*)(a1 + 88), v5, v4);
		result = sub_14029D680((_QWORD*)a1);
		--* v3;
	}
	return result;
}
// 140C636A0: using guessed type __int64 qword_140C636A0;
// 14029E170: using guessed type char var_78[64];

