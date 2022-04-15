#include "../winhttp.h"

//----- (0000000140407530) ----------------------------------------------------
_BOOL8 __fastcall sub_140407530(__int64 a1)
{
	unsigned __int16* v1; // rbx
	__int16* v3; // rax

	v1 = *(unsigned __int16**)(a1 + 8);
	v3 = sub_14034BDD0(a1, 215974);
	return (unsigned int)sub_14018E2C0((__int64)v3, v1)
		&& (unsigned int)sub_14018E2C0((__int64)&unk_1409E869C, *(unsigned __int16**)(a1 + 8));
}

