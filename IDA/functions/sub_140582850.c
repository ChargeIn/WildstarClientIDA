#include "../winhttp.h"

//----- (0000000140582850) ----------------------------------------------------
__int64 __fastcall sub_140582850(__int64 a1, __int64 a2)
{
	__int64 v3; // rax

	v3 = sub_1405845F0(a1, *(_QWORD*)(a2 + 8));
	if (v3)
	{
		*(_DWORD*)(v3 + 876) = *(_DWORD*)(a2 + 16);
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "RecruitmentMinLevel", byte_1409EAA34, v3);
	}
	return 0i64;
}
// 1409EAA34: using guessed type _BYTE byte_1409EAA34[32];
// 140C65898: using guessed type __int64 qword_140C65898;

