#include "../winhttp.h"

//----- (00000001403984E0) ----------------------------------------------------
void sub_1403984E0()
{
	__int64 v0; // rbx
	_DWORD* v1; // rax

	v0 = qword_140C65898;
	if (qword_140C65970)
	{
		v1 = *(_DWORD**)(qword_140C65898 + 120);
		if (v1)
		{
			if (!v1[148] && (v1[1052] & 0x100) == 0 && v1[1058] != 1 && !sub_14039E0A0(qword_140C65898))
				sub_14039E060(v0);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

