#include "../winhttp.h"

//----- (0000000140398470) ----------------------------------------------------
void __fastcall sub_140398470(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	_DWORD* v4; // rax

	v3 = qword_140C65898;
	if (qword_140C65970)
	{
		v4 = *(_DWORD**)(qword_140C65898 + 120);
		if (v4)
		{
			if (!v4[148] && ((v4[1052] & 0x100) != 0 || v4[1058] == 1 || sub_14039E0A0(qword_140C65898) || sub_14039E060(v3)))
				sub_14056F9F0(a1, a2, a3);
		}
	}
}
// 1403984CB: variable 'a1' is possibly undefined
// 1403984CB: variable 'a2' is possibly undefined
// 1403984CB: variable 'a3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

