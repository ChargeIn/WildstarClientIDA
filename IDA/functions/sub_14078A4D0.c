#include "../winhttp.h"

//----- (000000014078A4D0) ----------------------------------------------------
void __fastcall sub_14078A4D0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // rax

	v1 = *(_QWORD*)(a1 + 104);
	if (v1 && *(_DWORD*)(a1 + 92) == 5)
	{
		v2 = *(_QWORD*)(a1 + 24);
		if (!*(_DWORD*)(v2 + 1360))
			sub_1400EA3E0(
				*(_QWORD*)(v2 + 1424),
				"FlippedCardMouseEnter",
				byte_1409FA0D4,
				(unsigned int)(*(_DWORD*)(a1 + 40) + 1),
				v1);
	}
}
// 1409FA0D4: using guessed type _BYTE byte_1409FA0D4[56];

