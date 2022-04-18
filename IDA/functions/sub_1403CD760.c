#include "../winhttp.h"

//----- (00000001403CD760) ----------------------------------------------------
__int64 __fastcall sub_1403CD760(__int64 a1, _DWORD* a2)
{
	int v2; // ebx
	unsigned int v4; // edi
	__int64 v5; // rax

	v2 = *(_DWORD*)(a1 + 32616);
	if (v2 != *a2)
	{
		*(_DWORD*)(a1 + 32616) = *a2;
		sub_140619730(a1, a2, v2);
		v4 = *a2 & 1;
		if ((v2 & 1) != v4)
		{
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ItemAuctionsDisabled", byte_1409EC954, v4);
			v5 = qword_140C65898;
			if (v4 && *(_DWORD*)(qword_140C65898 + 26180) == 76)
			{
				sub_1403A71F0(qword_140C65898, 0, 0x65u, 1);
				v5 = qword_140C65898;
			}
			*(_DWORD*)(v5 + 28568) = 1;
		}
	}
	return 0i64;
}
// 1409EC954: using guessed type _BYTE byte_1409EC954[4];
// 140C65898: using guessed type __int64 qword_140C65898;

