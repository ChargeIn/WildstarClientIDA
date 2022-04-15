#include "../winhttp.h"

//----- (0000000140487BC0) ----------------------------------------------------
__int64 __fastcall sub_140487BC0(__int64 a1)
{
	unsigned int v2; // ebx
	__int64 v3; // rcx
	int v4; // r8d
	int v5; // edx
	int v6; // edx

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v3)
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3);
	else
		v4 = 0;
	v5 = *(_DWORD*)(*(_QWORD*)(a1 + 32) + 20i64);
	if (!v5)
		return 1i64;
	v6 = v5 - 1;
	if (v6)
	{
		if (v6 == 1)
		{
			LOBYTE(v2) = v4 == 166;
			return v2;
		}
		else
		{
			return 0i64;
		}
	}
	else
	{
		LOBYTE(v2) = v4 == 167;
		return v2;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

