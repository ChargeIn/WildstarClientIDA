#include "../winhttp.h"

//----- (000000014047AB20) ----------------------------------------------------
_BOOL8 __fastcall sub_14047AB20(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v2; // edx
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v8; // [rsp+8h] [rbp+8h]

	v1 = *(_QWORD*)(a1 + 24);
	if (!v1)
		return 0i64;
	v2 = *(_DWORD*)(v1 + 116);
	if (!v2)
		return 0i64;
	v3 = *(_QWORD*)(qword_140C659D0 + 16);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v8 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v8 = *(_QWORD*)(qword_140C659D0 + 16);
	return v8 != v3 && (v6 = *(_QWORD*)(v8 + 40)) != 0 && (*(_BYTE*)(*(_QWORD*)v6 + 12i64) & 4) != 0;
}
// 140C659D0: using guessed type __int64 qword_140C659D0;

