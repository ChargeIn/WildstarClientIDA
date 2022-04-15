#include "../winhttp.h"

//----- (0000000140663930) ----------------------------------------------------
__int64 __fastcall sub_140663930(_QWORD* a1)
{
	__int64* v2; // rax
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v6; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int16* v7; // [rsp+28h] [rbp-40h]
	__int64 v8; // [rsp+40h] [rbp-28h] BYREF
	__int64 v9; // [rsp+48h] [rbp-20h]

	v2 = (__int64*)sub_140056AB0(a1, 1u);
	if (v2)
	{
		sub_140550550(*v2, &v6);
		v4 = (unsigned __int64*)sub_14018F0E0(&v8, v7)[1];
		if (v4)
		{
			v5 = -1i64;
			do
				++v5;
			while (*((_BYTE*)v4 + v5));
			sub_140058710((__int64)a1, v4, v5);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v9)
			sub_14018B900(v9, 0);
		if (v7)
			sub_14018B900((__int64)v7, 0);
		return 1i64;
	}
	else
	{
		sub_140058710((__int64)a1, (unsigned __int64*)&unk_1409D145E, 0i64);
		return 1i64;
	}
}

