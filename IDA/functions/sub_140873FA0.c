#include "../winhttp.h"

//----- (0000000140873FA0) ----------------------------------------------------
__int64 __fastcall sub_140873FA0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdx

	*(_QWORD*)a1 = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
	*(_BYTE*)(a1 + 24) = *(_BYTE*)(a2 + 24);
	*(_BYTE*)(a1 + 25) = *(_BYTE*)(a2 + 25);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	if (qword_140C61B98)
	{
		v3 = **(_QWORD**)(a1 + 16);
		if (v3)
			sub_14083A530(qword_140C61B98, v3);
	}
	return a1;
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

