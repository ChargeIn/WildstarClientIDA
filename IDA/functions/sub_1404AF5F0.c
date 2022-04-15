#include "../winhttp.h"

//----- (00000001404AF5F0) ----------------------------------------------------
__int64 __fastcall sub_1404AF5F0(__int64 a1, unsigned int a2)
{
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // [rsp+8h] [rbp+8h]

	if (!a2)
		return 0i64;
	v3 = *(_QWORD*)(qword_140C659D0 + 48);
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
	if (v4 == v3 || (v6 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v6 = *(_QWORD*)(qword_140C659D0 + 48);
	if (v6 == v3)
		return 0i64;
	else
		return *(_QWORD*)(v6 + 40);
}
// 140C659D0: using guessed type __int64 qword_140C659D0;

