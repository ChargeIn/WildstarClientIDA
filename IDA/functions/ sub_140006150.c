#include "../winhttp.h"

//----- (0000000140006150) ----------------------------------------------------
_QWORD* __fastcall sub_140006150(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // r8
	_QWORD* result; // rax
	__int64 v5; // rax
	__int64 v6; // [rsp+20h] [rbp-48h] BYREF
	int v7; // [rsp+28h] [rbp-40h]
	__int64 v8; // [rsp+30h] [rbp-38h]
	int v9; // [rsp+38h] [rbp-30h]
	__int64 v10; // [rsp+40h] [rbp-28h]
	int v11; // [rsp+48h] [rbp-20h]
	__int64 v12; // [rsp+50h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 128);
	v3 = 0i64;
	if (v2)
	{
		result = *(_QWORD**)(a1 + 120);
		while (*result != *(_QWORD*)a2)
		{
			++v3;
			result += 8;
			if (v3 >= v2)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v5 = *(_QWORD*)a2;
		v8 = 0i64;
		v6 = v5;
		LODWORD(v5) = *(_DWORD*)(a2 + 8);
		v9 = 0;
		v10 = 0i64;
		v11 = 0;
		v7 = v5;
		v12 = 0i64;
		result = (_QWORD*)sub_1400073F0((__int64*)(a1 + 120), (__int64)&v6);
		if (v8)
			return (_QWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	}
	return result;
}

