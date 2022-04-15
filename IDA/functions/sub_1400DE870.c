#include "../winhttp.h"

//----- (00000001400DE870) ----------------------------------------------------
__int64 __fastcall sub_1400DE870(_QWORD* a1)
{
	__int64 result; // rax
	unsigned __int16* v3; // rax
	unsigned __int16* v4; // rdx
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = *(unsigned __int16**)(result + 536);
		v4 = (unsigned __int16*)&word_140B7B704;
		if (v3)
			v4 = v3;
		v5 = (unsigned __int64*)sub_14018F0E0(&v7, v4)[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			sub_140058710((__int64)a1, v5, v6);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v8)
			sub_14018B900(v8, 0);
		return 1i64;
	}
	return result;
}
// 140B7B704: using guessed type __int16 word_140B7B704;

