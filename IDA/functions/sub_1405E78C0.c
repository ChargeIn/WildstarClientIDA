#include "../winhttp.h"

//----- (00000001405E78C0) ----------------------------------------------------
__int64 __fastcall sub_1405E78C0(__int64 a1, int a2)
{
	__int64 v4; // rbp
	__int64 v6; // rbp
	unsigned int v7; // esi
	unsigned int v8; // ebx
	__int64 i; // rdi

	v4 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v4)
		return 11i64;
	v6 = *(_QWORD*)(v4 + 224);
	if (!v6)
		return 11i64;
	v7 = 11;
	v8 = 0;
	for (i = 540i64; ; i += 4i64)
	{
		if (*(_DWORD*)(i + v6 - 440) == a2)
		{
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 56i64))(a1, v8);
			if (*(float*)(i + *(_QWORD*)(qword_140C65898 + 120)) > 0.0)
				break;
		}
		if (++v8 >= 8)
			return v7;
	}
	return v8;
}
// 1405E7939: conditional instruction was optimized away because ebx.4<8u
// 140C65898: using guessed type __int64 qword_140C65898;

