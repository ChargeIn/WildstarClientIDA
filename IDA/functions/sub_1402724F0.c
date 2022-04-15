#include "../winhttp.h"

//----- (00000001402724F0) ----------------------------------------------------
__int64 __fastcall sub_1402724F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	int v9; // ecx
	__int64 result; // rax
	char v11[24]; // [rsp+20h] [rbp-58h] BYREF
	int v12; // [rsp+38h] [rbp-40h]
	unsigned int v13; // [rsp+3Ch] [rbp-3Ch]

	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 296i64))(a1);
	sub_1402725D0(a1, 0, a2);
	sub_1402725D0(a1, 1u, a3);
	sub_1402725D0(a1, 2u, a4);
	sub_1402725D0(a1, 3u, a5);
	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 7624) + 96i64))(*(_QWORD*)(a1 + 7624), v11);
	v9 = v12;
	result = v13;
	*(_DWORD*)(a1 + 10392) = v12;
	*(_DWORD*)(a1 + 10396) = result;
	*(_DWORD*)(a1 + 10408) = v9;
	*(_DWORD*)(a1 + 10412) = result;
	*(_QWORD*)(a1 + 10420) = 1065353216i64;
	*(_QWORD*)(a1 + 10400) = 0i64;
	*(_DWORD*)(a1 + 10416) = 0;
	return result;
}
// 1402724F0: using guessed type char var_58[24];

