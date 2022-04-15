#include "../winhttp.h"

//----- (000000014072B1A0) ----------------------------------------------------
__int64 sub_14072B1A0()
{
	__int64 v0; // rbx
	__int64 v1; // rcx

	v0 = qword_140C665E0;
	if (qword_140C665E0)
	{
		if (dword_140C4B488)
			sub_14072AFA0(qword_140C665E0, &dword_140C4B488);
		v1 = *(_QWORD*)(v0 + 1168);
		*(_DWORD*)(v0 + 20) = 10;
		sub_14078B4A0(v1);
	}
	return 0i64;
}
// 140C4B488: using guessed type int dword_140C4B488;
// 140C665E0: using guessed type __int64 qword_140C665E0;

