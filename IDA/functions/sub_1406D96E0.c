#include "../winhttp.h"

//----- (00000001406D96E0) ----------------------------------------------------
__int64 __fastcall sub_1406D96E0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rax
	unsigned __int16* v4; // rdx
	unsigned __int16* v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	result = sub_1406D9630(a1);
	if (result)
	{
		v3 = *(_QWORD*)(result + 2632);
		if (v3)
		{
			v5 = *(unsigned __int16**)(v3 + 32);
			v4 = (unsigned __int16*)&word_140B7B704;
			if (v5)
				v4 = v5;
		}
		else
		{
			v4 = 0i64;
		}
		v6 = (unsigned __int64*)sub_14018F0E0(&v8, v4)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			sub_140058710((__int64)a1, v6, v7);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v9)
			sub_14018B900(v9, 0);
		return 1i64;
	}
	return result;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

