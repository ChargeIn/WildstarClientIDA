#include "../winhttp.h"

//----- (0000000140868680) ----------------------------------------------------
__int64 __fastcall sub_140868680(int a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx

	v2 = sub_1408819F0(dword_140C10F20, 160i64);
	v3 = v2;
	if (!v2)
		return 0i64;
	sub_140865E10(v2, a1);
	*(_QWORD*)v3 = off_1409A48B0;
	*(_QWORD*)(v3 + 48) = 0i64;
	*(_QWORD*)(v3 + 56) = 0i64;
	*(_QWORD*)(v3 + 64) = 0i64;
	*(_QWORD*)(v3 + 72) = 0i64;
	*(_QWORD*)(v3 + 80) = 0i64;
	*(_QWORD*)(v3 + 88) = 0i64;
	*(_QWORD*)(v3 + 96) = 0i64;
	*(_QWORD*)(v3 + 104) = 0i64;
	*(_QWORD*)(v3 + 112) = 0i64;
	*(_QWORD*)(v3 + 120) = 0i64;
	*(_QWORD*)(v3 + 136) = 0i64;
	*(_QWORD*)(v3 + 144) = 0i64;
	*(_DWORD*)(v3 + 152) = 0;
	if ((unsigned int)sub_140868740(v3) == 1)
		return v3;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3);
	return 0i64;
}
// 1409A48B0: using guessed type __int64 (__fastcall *off_1409A48B0[12])();
// 140C10F20: using guessed type int dword_140C10F20;

