#include "../winhttp.h"

//----- (00000001405CFCB0) ----------------------------------------------------
__int64 __fastcall sub_1405CFCB0(__int64 a1)
{
	float v1; // xmm1_4
	int v2; // eax
	float v3; // xmm0_4
	float v4; // xmm1_4
	float v5; // xmm0_4
	__int64 result; // rax

	v1 = *(float*)&dword_140C3B438;
	*(_QWORD*)a1 = off_140B6DDB0;
	*(_QWORD*)(a1 + 8) = 0i64;
	v2 = dword_140C4DEA0;
	v3 = v1 * 0.0055555557;
	v4 = -(float)((float)(v1 * 0.0055555557) * 30.0);
	if (*(_DWORD*)qword_140C63750 < dword_140C4DEA0)
		v2 = *(_DWORD*)qword_140C63750;
	v5 = v3 * *((float*)&xmmword_140C4DEB0 + v2);
	*(_DWORD*)(a1 + 24) = 1036831949;
	*(_QWORD*)(a1 + 48) = 1036831949i64;
	*(_QWORD*)(a1 + 80) = 1065353216i64;
	result = a1;
	*(float*)(a1 + 20) = v5;
	*(float*)(a1 + 16) = v5;
	*(_OWORD*)(a1 + 32) = 0i64;
	*(float*)(a1 + 56) = v4;
	*(_DWORD*)(a1 + 60) = 0;
	*(_OWORD*)(a1 + 96) = xmmword_140C78390;
	*(_OWORD*)(a1 + 112) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 128) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 144) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 160) = xmmword_140C78390;
	*(_OWORD*)(a1 + 176) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 192) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 208) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 224) = xmmword_140C78390;
	*(_OWORD*)(a1 + 240) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 256) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 272) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 288) = xmmword_140C78390;
	*(_OWORD*)(a1 + 304) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 320) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 336) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 352) = xmmword_140C78390;
	*(_OWORD*)(a1 + 368) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 384) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 400) = xmmword_140C783C0;
	*(_OWORD*)(a1 + 416) = xmmword_140C78390;
	*(_OWORD*)(a1 + 432) = xmmword_140C783A0;
	*(_OWORD*)(a1 + 448) = xmmword_140C783B0;
	*(_OWORD*)(a1 + 464) = xmmword_140C783C0;
	*(_QWORD*)(a1 + 512) = 0i64;
	return result;
}
// 140B6DDB0: using guessed type __int64 (__fastcall *off_140B6DDB0[125])();
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C3B438: using guessed type int dword_140C3B438;
// 140C4DEA0: using guessed type int dword_140C4DEA0;
// 140C4DEB0: using guessed type __int128 xmmword_140C4DEB0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;

