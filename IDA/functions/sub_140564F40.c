#include "../winhttp.h"

//----- (0000000140564F40) ----------------------------------------------------
__int64 __fastcall sub_140564F40(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // r10
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v8; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 1928);
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
	if (v4 == v3 || (v8 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v8 = *(_QWORD*)(a1 + 1928);
	if (v8 == v3)
		return 0i64;
	if (a3 == -1)
		return 0i64;
	v6 = *(_QWORD*)(v8 + 40);
	if (a3 >= *(_DWORD*)(v6 + 8))
		return 0i64;
	else
		return *(_QWORD*)(*(_QWORD*)v6 + 8i64 * a3);
}

