#include "../winhttp.h"

//----- (00000001407F6A98) ----------------------------------------------------
__int64 __fastcall sub_1407F6A98(_DWORD* a1, char* a2, _OWORD* a3)
{
	char v5; // bl
	int v6; // ecx
	__int64 result; // rax
	char v8[16]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v9; // [rsp+50h] [rbp-38h]
	char v10; // [rsp+58h] [rbp-30h]
	char* v11; // [rsp+60h] [rbp-28h] BYREF
	unsigned __int16 v12[8]; // [rsp+68h] [rbp-20h] BYREF

	sub_1407DE348((__int64)v8, a3);
	v5 = sub_1407F2EAC((__int64)v12, &v11, a2, 0, 0, 0, 0, (__int64)v8);
	v6 = sub_1407F234C(v12, a1);
	result = 3i64;
	if ((v5 & 3) == 0)
	{
		if (v6 == 1)
			goto LABEL_9;
		if (v6 == 2)
			goto LABEL_6;
	LABEL_8:
		result = 0i64;
		goto LABEL_9;
	}
	if ((v5 & 1) != 0)
	{
	LABEL_6:
		result = 4i64;
		goto LABEL_9;
	}
	if ((v5 & 2) == 0)
		goto LABEL_8;
LABEL_9:
	if (v10)
		*(_DWORD*)(v9 + 200) &= ~2u;
	return result;
}
// 1407F6A98: using guessed type unsigned __int16 var_20[8];

