#include "../winhttp.h"

//----- (00000001406026E0) ----------------------------------------------------
__int64 __fastcall sub_1406026E0(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rdx
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v8; // rdx

	v3 = *(_QWORD*)(a1 + 64);
	if (v3 && *(_QWORD*)(v3 + 72) == *a2)
	{
		sub_140607120(a1, v3, (__int64)(a2 + 2));
		sub_14079EE60(*(_QWORD*)(a1 + 64), a1 + 80, (unsigned __int64*)(*(_QWORD*)(a1 + 64) + 104i64));
		v5 = *(_QWORD*)(a1 + 64);
		if ((*(_BYTE*)(v5 + 8) & 1) != 0)
		{
			if (v5 && *(_QWORD*)(v5 + 96))
				v6 = *(_QWORD*)(*(_QWORD*)(v5 + 88) + 8i64 * *(_QWORD*)(v5 + 104));
			else
				v6 = 0i64;
			if (!*(_DWORD*)(v6 + 272) || !*(_QWORD*)(v6 + 280))
				sub_140605020(a1, 0);
		}
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "Group_Add", byte_1409EA054, a2[5]);
		return 0i64;
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 72);
		if (v8 && *(_QWORD*)(v8 + 72) == *a2)
		{
			sub_140607120(a1, v8, (__int64)(a2 + 2));
			sub_14079EE60(*(_QWORD*)(a1 + 72), a1 + 80, (unsigned __int64*)(*(_QWORD*)(a1 + 72) + 104i64));
		}
		return 0i64;
	}
}
// 1409EA054: using guessed type _BYTE byte_1409EA054[32];
// 140C65898: using guessed type __int64 qword_140C65898;

