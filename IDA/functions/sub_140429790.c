#include "../winhttp.h"

//----- (0000000140429790) ----------------------------------------------------
__int64 __fastcall sub_140429790(__int64 a1)
{
	__int64 result; // rax

	result = Apollo_LUAEvent(a1, "PersonaUpdateCharacterStats", &unk_1409D0F0E);
	++qword_140C65C40;
	return result;
}
// 140C65C40: using guessed type __int64 qword_140C65C40;

