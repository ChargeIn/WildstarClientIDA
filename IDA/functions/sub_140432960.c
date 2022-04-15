#include "../winhttp.h"

//----- (0000000140432960) ----------------------------------------------------
__int64 __fastcall sub_140432960(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 i; // r8
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v10; // [rsp+8h] [rbp+8h]
	__int64 v11; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 16);
	v4 = *(_QWORD*)(v3 + 8);
	for (i = v3; v4; v4 = *(_QWORD*)(v4 + 16))
		i = v4;
	if (i == v3 || (v10 = i, *(_DWORD*)(i + 32)))
		v10 = *(_QWORD*)(a1 + 16);
	if (v10 == v3 || v10 == -40)
		return 0i64;
	v6 = *(_QWORD*)(v10 + 48);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v11 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v11 = v6;
	if (v11 == v6)
		return 0i64;
	else
		return *(_QWORD*)(v11 + 40);
}

