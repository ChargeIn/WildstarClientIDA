#include "../winhttp.h"

//----- (00000001403BAD30) ----------------------------------------------------
__int64 __fastcall sub_1403BAD30(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // r8
	unsigned __int8 v9; // dl
	__int64 v10; // [rsp+20h] [rbp+20h]

	if (!a2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 2728);
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
	v8 = *(_QWORD*)(v10 + 40);
	v9 = a3;
	if (a3 > (unsigned __int8)(*(_BYTE*)(v8 + 8) - 1))
		v9 = *(_BYTE*)(v8 + 8) - 1;
	return *(unsigned int*)(*(_QWORD*)(*(_QWORD*)v8 + 8i64 * v9) + 4i64);
}

