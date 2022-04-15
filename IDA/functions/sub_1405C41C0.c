#include "../winhttp.h"

//----- (00000001405C41C0) ----------------------------------------------------
__int64 __fastcall sub_1405C41C0(unsigned __int64 a1, _DWORD* a2)
{
	__int64 v2; // rsi
	__int64 v4; // rbx
	__int64 v5; // rdx
	unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v7 = a1;
	v2 = qword_140C65B98;
	v4 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v4)
	{
		if (sub_14079EE60(*(_QWORD*)(qword_140C65898 + 27728), qword_140C65898 + 27744, &v7))
		{
			v5 = *(_QWORD*)(*(_QWORD*)(v4 + 88) + 8 * v7);
			if (v5)
				*(_DWORD*)(v5 + 152) = *a2;
		}
	}
	*(_DWORD*)(v2 + 160) = *a2;
	sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 5080i64);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

