#include "../winhttp.h"

//----- (00000001406A9550) ----------------------------------------------------
__int64 __fastcall sub_1406A9550(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v6; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+28h] [rbp-20h]

	v2 = sub_1406A93C0(a1);
	if (v2)
	{
		v4 = (unsigned __int64*)sub_14018F0E0(&v6, *(unsigned __int16**)(v2 + 56))[1];
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
		if (v7)
			sub_14018B900(v7, 0);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}

