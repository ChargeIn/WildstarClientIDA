#include "../winhttp.h"

//----- (0000000140860E30) ----------------------------------------------------
__int64 __fastcall sub_140860E30(__int64 a1)
{
	__int64 result; // rax
	_DWORD* v3; // rdx
	__int64 v4; // rdx

	result = *(unsigned __int8*)(a1 + 381);
	if ((result & 0x10) == 0 && (result & 0x40) != 0)
	{
		v3 = *(_DWORD**)(a1 + 504);
		if (v3)
			sub_14083A770(qword_140C61B98, v3);
		*(_BYTE*)(a1 + 381) &= ~0x40u;
		result = sub_140858700(4u, a1);
		v4 = *(_QWORD*)(a1 + 128);
		if (v4)
			return sub_14083B0C0(qword_140C61B70, v4);
	}
	return result;
}
// 140C61B70: using guessed type __int64 qword_140C61B70;
// 140C61B98: using guessed type __int64 qword_140C61B98;

