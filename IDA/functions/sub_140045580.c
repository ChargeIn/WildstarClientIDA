#include "../winhttp.h"

//----- (0000000140045580) ----------------------------------------------------
__int64 __fastcall sub_140045580(__int64 a1)
{
	__int64 v1; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)a1 = off_140B55940;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 232) = 0;
	if (!*(_QWORD*)(a1 + 240))
	{
		*(_QWORD*)(a1 + 240) = &qword_140C66E40;
		*(_QWORD*)(a1 + 248) = qword_140C66E40;
		qword_140C66E40 = a1;
		v1 = *(_QWORD*)(a1 + 248);
		if (v1)
			*(_QWORD*)(v1 + 240) = a1 + 248;
	}
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55940: using guessed type __int64 (__fastcall *off_140B55940[9])();
// 140C66E40: using guessed type __int64 qword_140C66E40;

