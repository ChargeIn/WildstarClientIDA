#include "../winhttp.h"

//----- (0000000140857240) ----------------------------------------------------
__int64 __fastcall sub_140857240(__int64 a1, __int64 a2)
{
	__int64 v3; // rdx
	__int64 v5; // rcx
	__int64 result; // rax

	*(_QWORD*)(a1 + 96) = 0i64;
	*(_DWORD*)(a1 + 104) = 0;
	v3 = *(_QWORD*)a2;
	if (v3)
		sub_14083A530(qword_140C61B98, v3);
	v5 = *(_QWORD*)(a1 + 248);
	*(_QWORD*)(a1 + 96) = *(_QWORD*)a2;
	*(_DWORD*)(a1 + 104) = *(_DWORD*)(a2 + 8);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 16i64))(v5);
		*(_QWORD*)(a1 + 248) = 0i64;
	}
	result = sub_140830F00(qword_140C61BA8, *(_DWORD*)(a2 + 8), 0);
	*(_QWORD*)(a1 + 248) = result;
	return result;
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

