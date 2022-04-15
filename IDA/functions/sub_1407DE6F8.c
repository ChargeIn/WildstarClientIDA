#include "../winhttp.h"

//----- (00000001407DE6F8) ----------------------------------------------------
__int64 __fastcall sub_1407DE6F8(int a1)
{
	__int64 v1; // rbx
	unsigned int v3; // ecx
	__int128 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+30h] [rbp-18h]
	char v6; // [rsp+38h] [rbp-10h]

	v1 = a1;
	if (!dword_140C5F560)
		return off_140C103F8[a1] & 0x107;
	sub_1407DE348((__int64)&v4, 0i64);
	if (*(int*)(v4 + 212) <= 1)
		v3 = *(_WORD*)(*(_QWORD*)(v4 + 264) + 2 * v1) & 0x107;
	else
		v3 = sub_1407EA448(v1, 263, &v4);
	if (v6)
		*(_DWORD*)(v5 + 200) &= ~2u;
	return v3;
}
// 140C103F8: using guessed type wchar_t *off_140C103F8;
// 140C5F560: using guessed type int dword_140C5F560;

