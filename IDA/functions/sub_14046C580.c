#include "../winhttp.h"

//----- (000000014046C580) ----------------------------------------------------
__int64 __fastcall sub_14046C580(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	unsigned int v5; // ebp
	__int64 v6; // rbx
	__int64 v8; // rcx
	unsigned int v9; // ebx
	__int64 i; // rdi
	__int64 v11; // r8

	v4 = sub_140200220(0x19Eu);
	if (v4)
		v5 = *(_DWORD*)(v4 + 4);
	else
		v5 = 0;
	if (*(_DWORD*)(a1 + 128) == 20)
	{
		v6 = sub_1401F31E0(*(_DWORD*)(a2 + 220));
		if (v6)
		{
			if ((unsigned int)sub_14045A950(a1, *(_DWORD*)(a2 + 8)))
				return *(unsigned int*)(v6 + 84);
		}
	}
	v8 = *(_QWORD*)(a1 + 24);
	if (!v8)
		return v5;
	if (*(_DWORD*)(v8 + 108) || *(_DWORD*)(v8 + 328))
		return 0i64;
	v9 = 0;
	for (i = 16i64; ; i += 4i64)
	{
		v11 = *(unsigned int*)(i + *(_QWORD*)(*(_QWORD*)(a1 + 24) + 192i64));
		if (!(_DWORD)v11
			|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
				+ 24i64))(
					qword_140C659A0,
					a2,
					v11,
					a1,
					0i64,
					0))
		{
			break;
		}
		if (++v9 >= 4)
			return v5;
	}
	return *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 192i64) + 4i64 * v9);
}
// 140C659A0: using guessed type __int64 qword_140C659A0;

