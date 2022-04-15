#include "../winhttp.h"

//----- (000000014057D530) ----------------------------------------------------
__int64 __fastcall sub_14057D530(__int64 a1, __int64 a2)
{
	int v4; // eax
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v8 = 0i64;
	v4 = sub_14058F720(a1 + 664, a2 + 16, &v8);
	v5 = v8;
	if (v4)
	{
		v6 = qword_140C65898;
		*(_DWORD*)(v8 + 120) = *(_DWORD*)(a2 + 24);
		sub_1404277D0(*(_QWORD*)(v6 + 29504), a1, v5, 0);
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

