#include "../winhttp.h"

//----- (00000001406F1190) ----------------------------------------------------
__int64 __fastcall sub_1406F1190(struct _FILETIME a1)
{
	signed __int64 v3; // rax
	float v4; // xmm0_4
	__int64 v5; // rax

	if (!qword_140C65970)
		return 0i64;
	v3 = sub_140527540(a1);
	v4 = (float)(int)v3;
	if (v3 < 0)
		v4 = v4 + 1.8446744e19;
	v5 = *(_QWORD*)(*(_QWORD*)&a1 + 16i64);
	*(double*)v5 = v4;
	*(_DWORD*)(v5 + 8) = 3;
	*(_QWORD*)(*(_QWORD*)&a1 + 16i64) += 16i64;
	return 1i64;
}
// 140C65970: using guessed type __int64 qword_140C65970;

