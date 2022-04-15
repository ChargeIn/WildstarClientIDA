#include "../winhttp.h"

//----- (00000001408707F0) ----------------------------------------------------
__int64 __fastcall sub_1408707F0(__int64 a1)
{
	__int64 v2; // rcx
	void(__fastcall * **v3)(_QWORD, _QWORD); // rdi
	int v4; // esi

	v2 = *(_QWORD*)(a1 + 24);
	if (v2)
	{
		sub_140872290(v2);
		v3 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 24);
		v4 = dword_140C10F20;
		if (v3)
		{
			(**v3)(v3, 0i64);
			sub_140881720(v4, (__int64)v3);
		}
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	return sub_140881720(dword_140C10F20, a1);
}
// 140C10F20: using guessed type int dword_140C10F20;

