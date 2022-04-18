#include "../winhttp.h"

//----- (00000001403B85A0) ----------------------------------------------------
__int64 __fastcall sub_1403B85A0(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // r9
	int v6; // r8d

	v3 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a2);
	v4 = v3;
	if (v3)
	{
		v5 = *(_QWORD*)(a2 + 8);
		v6 = *(_DWORD*)(a2 + 16);
		*(_QWORD*)(v3 + 176) = *(_QWORD*)(a2 + 24);
		*(_DWORD*)(v3 + 220) = v6;
		*(_QWORD*)(v3 + 224) = v5;
		*(_DWORD*)(v3 + 292) = 1;
		if ((int)sub_14056A430(v3) >= 0)
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ItemModified", byte_1409EAD24, v4);
	}
	return 0i64;
}
// 1409EAD24: using guessed type _BYTE byte_1409EAD24[24];
// 140C65898: using guessed type __int64 qword_140C65898;

