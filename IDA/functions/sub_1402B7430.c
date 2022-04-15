#include "../winhttp.h"

//----- (00000001402B7430) ----------------------------------------------------
__int64 __fastcall sub_1402B7430(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	__int64 result; // rax
	__int64 v8; // rax
	__int64 v9; // rdx
	int v10; // eax
	unsigned int v11; // ecx
	unsigned int v12; // [rsp+20h] [rbp-38h] BYREF
	unsigned int v13; // [rsp+24h] [rbp-34h] BYREF
	_QWORD v14[2]; // [rsp+28h] [rbp-30h] BYREF

	if (!a2)
		return 2147500035i64;
	*(_QWORD*)a3 = 0i64;
	*(_QWORD*)(a3 + 8) = 0i64;
	*(_QWORD*)(a3 + 24) = 0i64;
	*(_QWORD*)(a3 + 40) = 0i64;
	*(_QWORD*)(a3 + 48) = 0i64;
	*(_QWORD*)(a3 + 16) = 1i64;
	*(_QWORD*)(a3 + 32) = 1i64;
	*(_DWORD*)(a3 + 52) = 3;
	result = (*(__int64(__fastcall**)(__int64, unsigned int*, unsigned int*))(*(_QWORD*)a2 + 24i64))(a2, &v13, &v12);
	if ((int)result >= 0)
	{
		v8 = v13;
		*(_QWORD*)(a3 + 24) = 1i64;
		*(_QWORD*)a3 = v8;
		*(_QWORD*)(a3 + 8) = v12;
		result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)a2 + 32i64))(a2, v14);
		if ((int)result >= 0)
		{
			v10 = sub_1402B7240(v14, v9, a4);
			v11 = 0;
			*(_DWORD*)(a3 + 48) = v10;
			if (!v10)
				return (unsigned int)-2147024846;
			return v11;
		}
	}
	return result;
}
// 1402B74D4: variable 'v9' is possibly undefined
// 1402B7430: using guessed type _QWORD var_30[2];

