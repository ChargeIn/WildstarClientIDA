#include "../winhttp.h"

//----- (0000000140713580) ----------------------------------------------------
__int64 __fastcall sub_140713580(__int64 a1, __int64 a2)
{
	__int64 v2; // rax

	*(_QWORD*)a2 = qword_140C784C0;
	*(_QWORD*)(a2 + 8) = qword_140C784C8;
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		*(_DWORD*)a2 = *(_DWORD*)(v2 + 40);
		*(_DWORD*)(a2 + 4) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 44i64);
		*(_DWORD*)(a2 + 8) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 48i64);
		*(_DWORD*)(a2 + 12) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 52i64);
	}
	return a2;
}
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;

