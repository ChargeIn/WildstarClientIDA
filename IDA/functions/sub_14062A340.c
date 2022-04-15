#include "../winhttp.h"

//----- (000000014062A340) ----------------------------------------------------
__int64 __fastcall sub_14062A340(__int64 a1, __int64 a2)
{
	unsigned int v2; // eax
	unsigned __int64* v5; // r8
	int v6; // eax
	__int64 v7; // rbx
	__int64 v9; // [rsp+30h] [rbp-18h] BYREF
	unsigned __int64 v10; // [rsp+38h] [rbp-10h]

	v2 = *(_DWORD*)(a2 + 4);
	if (v2)
	{
		v5 = *(unsigned __int64**)(a2 + 8);
		v10 = 0i64;
		v9 = 0i64;
		v6 = sub_140629C20((__int64*)a1, &v9, v5, v2);
		v7 = v9;
		if (v6 >= 0)
			sub_140430650(*(_QWORD*)(qword_140C65898 + 29504), v9, v10, *(_DWORD*)a2, *(_QWORD*)(a1 + 48));
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

