#include "../winhttp.h"

//----- (0000000140894430) ----------------------------------------------------
__int64 __fastcall sub_140894430(__int64 a1)
{
	__int64 v1; // rbx
	__int64 result; // rax
	unsigned int v4; // esi
	__int64 v5; // rdi

	v1 = *(_QWORD*)(a1 + 168);
	if (v1 == *(_QWORD*)(a1 + 176))
		return 1i64;
	while (1)
	{
		result = sub_140856410(*(_QWORD*)(v1 + 8));
		v4 = result;
		if ((_DWORD)result != 1)
			break;
		v1 += 16i64;
		if (v1 == *(_QWORD*)(a1 + 176))
			return result;
	}
	v5 = *(_QWORD*)(a1 + 168);
	if (v5 != v1)
	{
		do
		{
			sub_1408567B0(*(_QWORD*)(v5 + 8));
			v5 += 16i64;
		} while (v5 != v1);
		return v4;
	}
	return result;
}

