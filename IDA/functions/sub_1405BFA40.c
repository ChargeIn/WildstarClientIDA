#include "../winhttp.h"

//----- (00000001405BFA40) ----------------------------------------------------
__int64 __fastcall sub_1405BFA40(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 i; // rcx
	__int64 j; // rcx

	v1 = *(_QWORD*)(a1 + 72);
	v2 = *(_QWORD*)(v1 + 16);
	if (v2 == v1)
		return 0i64;
	while (*(_DWORD*)(v2 + 60))
	{
		v3 = *(_QWORD*)(v2 + 24);
		if (v3)
		{
			v2 = *(_QWORD*)(v2 + 24);
			for (i = *(_QWORD*)(v3 + 16); i; i = *(_QWORD*)(i + 16))
				v2 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v2 + 8); v2 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v2 = j;
			if (*(_QWORD*)(v2 + 24) != j)
				v2 = j;
		}
		if (v2 == v1)
			return 0i64;
	}
	return 1i64;
}

