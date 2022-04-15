#include "../winhttp.h"

//----- (0000000140663DB0) ----------------------------------------------------
__int64 __fastcall sub_140663DB0(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD* v4; // rsi
	int* v5; // rax
	unsigned __int16* v6; // rsi
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int16* v10; // [rsp+28h] [rbp-20h]
	int* v11; // [rsp+30h] [rbp-18h]
	int* v12; // [rsp+38h] [rbp-10h]

	v2 = (_QWORD**)sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *v2;
		v5 = sub_14018B280(16i64, 0);
		v10 = (unsigned __int16*)v5;
		v11 = v5;
		v12 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		sub_140550860(v4, (__int64)&v9, 0);
		v6 = v10;
		v7 = (unsigned __int64*)sub_14018F0E0(&v9, v10)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			sub_140058710((__int64)a1, v7, v8);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v10)
			sub_14018B900((__int64)v10, 0);
		if (v6)
			sub_14018B900((__int64)v6, 0);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

