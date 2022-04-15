#include "../winhttp.h"

//----- (0000000140843460) ----------------------------------------------------
__int64 __fastcall sub_140843460(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx

	v3 = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 4776), a2);
	v4 = v3;
	if (!v3)
		return 15i64;
	sub_1408434C0(a1, v3, 0);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
	return 1i64;
}

