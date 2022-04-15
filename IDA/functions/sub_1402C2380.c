#include "../winhttp.h"

//----- (00000001402C2380) ----------------------------------------------------
__int64 sub_1402C2380(__int64 a1, unsigned __int64 a2, __int64 a3, ...)
{
	unsigned __int64 v5; // rbp
	unsigned __int64 v6; // rsi
	int v7; // edi
	__int64 v8; // r11
	unsigned __int64 v9; // rax
	__int64 result; // rax
	_QWORD* v11; // rdi
	unsigned __int64 v12; // rsi
	int v13; // ebx
	unsigned __int64 v14; // [rsp+58h] [rbp+20h] BYREF
	va_list va; // [rsp+58h] [rbp+20h]
	_QWORD* v16; // [rsp+60h] [rbp+28h]
	va_list va1; // [rsp+68h] [rbp+30h] BYREF

	va_start(va1, a3);
	va_start(va, a3);
	v14 = va_arg(va1, _QWORD);
	v16 = va_arg(va1, _QWORD*);
	if (!a1 || !a2)
		return 2147942487i64;
	v5 = *(_QWORD*)a1;
	v6 = *(_QWORD*)(a1 + 8);
	v7 = *(_DWORD*)(a1 + 16);
	if (!*(_QWORD*)a1
		|| ((v5 - 1) & v5) != 0
		|| !v6
		|| ((v6 - 1) & v6) != 0
		|| ((a2 - 1) & a2) != 0
		|| !sub_1402C1120(v5, v6, a2, (__int64*)va))
	{
		return 2147942487i64;
	}
	v9 = 0i64;
	if (a2)
	{
		while (*(_QWORD*)(v8 + 24))
		{
			if (*(_DWORD*)v8 != v7 || *(_QWORD*)(v8 - 16) != v5 || *(_QWORD*)(v8 - 8) != v6)
				return 2147500037i64;
			++v9;
			v8 += 48i64;
			if (v9 >= a2)
				goto LABEL_15;
		}
		return 2147500035i64;
	}
	else
	{
	LABEL_15:
		if (v7 < 70 || v7 > 84 && (unsigned int)(v7 - 94) > 5)
		{
			v11 = v16;
			v12 = v14;
			result = sub_1402C1660(a1, a2, v14, (__int64)v16);
			if ((int)result >= 0)
			{
				v13 = sub_1402C1800(a2, v12, v11);
				if (v13 < 0)
					sub_1402B34D0(v11);
				return (unsigned int)v13;
			}
		}
		else
		{
			return 2147942450i64;
		}
	}
	return result;
}
// 1402C2420: variable 'v8' is possibly undefined

