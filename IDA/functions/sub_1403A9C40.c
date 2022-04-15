#include "../winhttp.h"

//----- (00000001403A9C40) ----------------------------------------------------
__int64 __fastcall sub_1403A9C40(__int64 a1, unsigned int a2)
{
	__int64 v5; // rdx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // [rsp+40h] [rbp+18h]

	if (!sub_140224D00(a2))
		return 0i64;
	v5 = *(_QWORD*)(a1 + 32432);
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
	if (v6 == v5 || (v8 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v8 = *(_QWORD*)(a1 + 32432);
	if (v8 == v5)
		return 0i64;
	else
		return *(unsigned int*)(v8 + 36);
}

