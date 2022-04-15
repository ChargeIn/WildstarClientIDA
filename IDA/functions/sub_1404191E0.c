#include "../winhttp.h"

//----- (00000001404191E0) ----------------------------------------------------
__int64 __fastcall sub_1404191E0(__int64 a1)
{
	_QWORD** v2; // rax
	unsigned __int64* v3; // rdx
	unsigned __int64 v4; // r8
	__int64 v6; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int16* v7; // [rsp+28h] [rbp-40h]
	__int64 v8; // [rsp+40h] [rbp-28h] BYREF
	__int64 v9; // [rsp+48h] [rbp-20h]

	v2 = (_QWORD**)sub_140417660(a1, 1);
	if (v2 && *v2)
	{
		sub_14040FE30(*v2, &v6);
		v3 = (unsigned __int64*)sub_14018F0E0(&v8, v7)[1];
		if (v3)
		{
			v4 = -1i64;
			do
				++v4;
			while (*((_BYTE*)v3 + v4));
			sub_140058710(a1, v3, v4);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v9)
			sub_14018B900(v9, 0);
		if (v7)
		{
			sub_14018B900((__int64)v7, 0);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return 1i64;
}

