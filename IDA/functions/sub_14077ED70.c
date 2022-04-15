#include "../winhttp.h"

//----- (000000014077ED70) ----------------------------------------------------
__int64 __fastcall sub_14077ED70(__int64 a1)
{
	__int64 result; // rax

	result = qword_140C65970;
	if (!qword_140C65970)
		goto LABEL_3;
	*(_DWORD*)(a1 + 240) = 1065353216;
	*(_OWORD*)(a1 + 208) = xmmword_140B7B240;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_OWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 148) = 0i64;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_QWORD*)(a1 + 172) = 0i64;
	*(_QWORD*)(a1 + 180) = 0i64;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	if (*(_DWORD*)(result + 8) != 2)
	{
	LABEL_3:
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
	return result;
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65970: using guessed type __int64 qword_140C65970;

