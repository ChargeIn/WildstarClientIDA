#include "../winhttp.h"

//----- (00000001405CB870) ----------------------------------------------------
__int64 __fastcall sub_1405CB870(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // edx
	unsigned int v4; // ebx
	int v5; // eax
	int v6; // eax
	__int64 v8; // [rsp+20h] [rbp-38h] BYREF
	__int64 v9; // [rsp+28h] [rbp-30h]
	__int64 v10; // [rsp+30h] [rbp-28h]
	__int64 v11; // [rsp+38h] [rbp-20h]
	int v12; // [rsp+40h] [rbp-18h]

	*(_QWORD*)a1 = a2;
	v3 = *(_DWORD*)(a3 + 24);
	v4 = 0;
	*(_DWORD*)(a1 + 8) = v3;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a3 + 32);
	v8 = 0i64;
	v11 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v12 = 0;
	HIDWORD(v8) = *(_DWORD*)(a3 + 8);
	v5 = *(_DWORD*)(a3 + 28);
	LODWORD(v8) = v3;
	LODWORD(v9) = v5;
	v11 = *(_QWORD*)(a3 + 12);
	v12 = *(_DWORD*)(a3 + 20);
	v6 = sub_140577660(qword_140C65B78, &v8);
	if (v6 < 0)
		return (unsigned int)v6;
	return v4;
}
// 140C65B78: using guessed type __int64 qword_140C65B78;

