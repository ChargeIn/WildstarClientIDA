#include "../winhttp.h"

//----- (0000000140757330) ----------------------------------------------------
__int64 __fastcall sub_140757330(__int64 a1)
{
	__int64 v1; // rsi
	int v2; // edi
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rax
	__int64 v7; // rax

	v1 = qword_140C659B0;
	v2 = 0;
	if (qword_140C659B0)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v4)
		{
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
			if (v5 == 166)
			{
				v6 = v1 + 104;
				goto LABEL_8;
			}
			if (v5 == 167)
			{
				v6 = v1 + 136;
			LABEL_8:
				if (v6)
					v2 = *(_DWORD*)(v6 + 16);
			}
		}
		v7 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = (double)v2;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;

