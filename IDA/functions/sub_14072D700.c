#include "../winhttp.h"

//----- (000000014072D700) ----------------------------------------------------
__int64 __fastcall sub_14072D700(_QWORD* a1)
{
	__int64 result; // rax
	int v3; // eax
	__int64 v4; // rcx
	__int16* v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	result = sub_140056AB0(a1, 1u);
	if (result)
	{
		v3 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)result + 40i64))(*(_QWORD*)result);
		v5 = sub_14034BDD0(v4, v3);
		v6 = (unsigned __int64*)sub_14018F0E0(&v8, (unsigned __int16*)v5)[1];
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
// 14072D730: variable 'v4' is possibly undefined

