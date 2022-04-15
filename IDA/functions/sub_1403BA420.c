#include "../winhttp.h"

//----- (00000001403BA420) ----------------------------------------------------
__int64 __fastcall sub_1403BA420(__int64 a1, int a2, int a3)
{
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 i; // rcx
	__int64 j; // rcx

	v3 = *(_QWORD*)(qword_140C65898 + 5248);
	v4 = *(_QWORD*)(v3 + 16);
	while (v4 != v3)
	{
		if (*(_DWORD*)(v4 + 36) == a2 && *(_DWORD*)(v4 + 40) == a3)
			return v4 + 32;
		v5 = *(_QWORD*)(v4 + 24);
		if (v5)
		{
			v4 = *(_QWORD*)(v4 + 24);
			for (i = *(_QWORD*)(v5 + 16); i; i = *(_QWORD*)(i + 16))
				v4 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v4 = j;
			if (*(_QWORD*)(v4 + 24) != j)
				v4 = j;
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

