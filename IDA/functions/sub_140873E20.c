#include "../winhttp.h"

//----- (0000000140873E20) ----------------------------------------------------
__int64 __fastcall sub_140873E20(__int64 a1, __int64 a2, unsigned __int16* a3)
{
	return sub_14083A7B0(
		qword_140C61B98,
		a2,
		*(_QWORD*)(a1 + 64),
		*(_DWORD*)(a1 + 72),
		*(_DWORD*)(a1 + 36),
		(*(_BYTE*)(a1 + 76) & 0x20) != 0,
		a3);
}
// 140C61B98: using guessed type __int64 qword_140C61B98;

