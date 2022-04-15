#include "../winhttp.h"

//----- (00000001404184E0) ----------------------------------------------------
__int64 __fastcall sub_1404184E0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	__int16* v6; // rax
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = sub_140417BF0(a1, 1u);
	if (v2)
	{
		v4 = sub_14020A3A0(v2[81]);
		if (v4)
		{
			v6 = sub_14034BDD0(v5, *(_DWORD*)(v4 + 4));
			v7 = (unsigned __int64*)sub_14018F0E0(&v9, (unsigned __int16*)v6)[1];
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
				sub_14018B900(v10, 0);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14041853D: variable 'v5' is possibly undefined

