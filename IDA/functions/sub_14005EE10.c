#include "../winhttp.h"

//----- (000000014005EE10) ----------------------------------------------------
__int64 __fastcall sub_14005EE10(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // rsi
	unsigned __int8* v4; // rbx
	const CHAR* v5; // rbp
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rax

	v2 = *(_QWORD*)(a1 + 16);
	v3 = *(_QWORD*)(a2 + 16);
	v4 = (unsigned __int8*)(a1 + 32);
	v5 = (const CHAR*)(a2 + 32);
	result = sub_1407DF29C((unsigned __int8*)(a1 + 32), (const CHAR*)(a2 + 32));
	if (!(_DWORD)result)
	{
		while (1)
		{
			v7 = -1i64;
			do
				++v7;
			while (v4[v7]);
			if (v7 == v3)
				break;
			if (v7 == v2)
				return 0xFFFFFFFFi64;
			v8 = v7 + 1;
			v4 += v8;
			v5 += v8;
			v2 -= v8;
			v3 -= v8;
			result = sub_1407DF29C(v4, v5);
			if ((_DWORD)result)
				return result;
		}
		return v7 != v2;
	}
	return result;
}

