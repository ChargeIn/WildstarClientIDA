#include "../winhttp.h"

//----- (0000000140432A10) ----------------------------------------------------
__int64 __fastcall sub_140432A10(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 i; // rax
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v9; // [rsp+8h] [rbp+8h]
	__int64 v10; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65960 + 16);
	v3 = v2;
	for (i = *(_QWORD*)(v2 + 8); i; i = *(_QWORD*)(i + 16))
		v3 = i;
	if (v3 == v2 || (v9 = v3, *(_DWORD*)(v3 + 32)))
		v9 = *(_QWORD*)(qword_140C65960 + 16);
	if (v9 == v2 || v9 == -40)
		return 0i64;
	v5 = *(_QWORD*)(v9 + 112);
	v6 = v5;
	v7 = *(_QWORD*)(v5 + 8);
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < a2)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v6 = v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v6 == v5 || (v10 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v10 = v5;
	if (v10 == v5)
		return 0i64;
	else
		return *(_QWORD*)(v10 + 40);
}
// 140C65960: using guessed type __int64 qword_140C65960;

