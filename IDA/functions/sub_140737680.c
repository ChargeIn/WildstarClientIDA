#include "../winhttp.h"

//----- (0000000140737680) ----------------------------------------------------
__int64 __fastcall sub_140737680(__int64 a1)
{
	int v1; // r10d
	__int64 v2; // rdx
	__int64 v3; // rax
	__int64 v4; // rax

	v1 = 0;
	v2 = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
			if (*(_DWORD*)(v3 + 16) == 7)
				break;
			if (++v2 >= (unsigned __int64)qword_140C7DE20)
				goto LABEL_8;
		}
		if (v3 && (*(_BYTE*)(v3 + 20) & 0x10) != 0)
			v1 = 3;
	}
LABEL_8:
	v4 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (double)v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

