#include "../winhttp.h"

//----- (000000014066DAB0) ----------------------------------------------------
__int64 __fastcall sub_14066DAB0(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbx
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v13; // [rsp+30h] [rbp+8h]
	__int64 v14; // [rsp+30h] [rbp+8h]

	v2 = qword_140C65990;
	v3 = *(_QWORD*)(qword_140C65998 + 48);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v13 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v13 = *(_QWORD*)(qword_140C65998 + 48);
	if (v13 == v3)
		return 0i64;
	v6 = *(_QWORD*)(v13 + 40);
	if (!v6)
		return 0i64;
	v7 = *(_QWORD*)(v6 + 16);
	if (!v7)
		return 0i64;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 48i64))(v7);
	v9 = *(_QWORD*)(v2 + 16);
	v10 = *(_QWORD*)(v9 + 8);
	v11 = v9;
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < v8)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v11 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v11 == v9 || (v14 = v11, v8 < *(_DWORD*)(v11 + 32)))
		v14 = *(_QWORD*)(v2 + 16);
	if (v14 == v9)
		return 0i64;
	else
		return *(_QWORD*)(v14 + 40);
}
// 140C65990: using guessed type __int64 qword_140C65990;
// 140C65998: using guessed type __int64 qword_140C65998;

