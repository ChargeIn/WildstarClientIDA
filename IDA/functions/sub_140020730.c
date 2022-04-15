#include "../winhttp.h"

//----- (0000000140020730) ----------------------------------------------------
__int64 __fastcall sub_140020730(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int v5; // eax
	__int64 v6; // rax

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
	*(_QWORD*)a1 = off_140B55380;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 200) = v2;
	*(_QWORD*)(a1 + 208) = v2;
	*(_QWORD*)(a1 + 216) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	*(_DWORD*)(a1 + 224) = 0;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	v3 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 304) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 304) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 304) + 16i64) = *(_QWORD*)(a1 + 304);
	*(_QWORD*)(*(_QWORD*)(a1 + 304) + 24i64) = *(_QWORD*)(a1 + 304);
	v4 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 336) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 336) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 336) + 16i64) = *(_QWORD*)(a1 + 336);
	*(_QWORD*)(*(_QWORD*)(a1 + 336) + 24i64) = *(_QWORD*)(a1 + 336);
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_DWORD*)(a1 + 368) = 5;
	sub_1407E4830((int*)(a1 + 376), 0i64, 0x68ui64);
	v5 = dword_140C636A8;
	*(_DWORD*)(a1 + 480) = 0;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_DWORD*)(a1 + 496) = 2;
	*(_QWORD*)(a1 + 504) = -1i64;
	*(_DWORD*)(a1 + 512) = 0;
	*(_QWORD*)(a1 + 520) = 0i64;
	*(_QWORD*)(a1 + 532) = 0i64;
	*(_DWORD*)(a1 + 540) = 0;
	*(_QWORD*)(a1 + 560) = 0i64;
	*(_QWORD*)(a1 + 568) = 0i64;
	*(_DWORD*)(a1 + 576) = 0;
	*(_DWORD*)(a1 + 588) = 0;
	*(_DWORD*)(a1 + 592) = 200;
	*(_DWORD*)(a1 + 596) = 1;
	*(_DWORD*)(a1 + 600) = 200;
	*(_DWORD*)(a1 + 584) = v5 - 200;
	*(_DWORD*)(a1 + 608) = 0;
	*(_QWORD*)(a1 + 616) = a1;
	*(_QWORD*)(a1 + 624) = sub_140023D30;
	*(_QWORD*)(a1 + 632) = 0i64;
	*(_DWORD*)(a1 + 640) = 4;
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_QWORD*)(a1 + 672) = 0i64;
	*(_QWORD*)(a1 + 688) = 0i64;
	*(_QWORD*)(a1 + 696) = 0i64;
	*(_DWORD*)(a1 + 648) = 1414420037;
	*(_DWORD*)(a1 + 716) = 13;
	if (!*(_QWORD*)(a1 + 168))
	{
		*(_QWORD*)(a1 + 168) = &qword_140C66DA8;
		*(_QWORD*)(a1 + 176) = qword_140C66DA8;
		qword_140C66DA8 = a1;
		v6 = *(_QWORD*)(a1 + 176);
		if (v6)
			*(_QWORD*)(v6 + 168) = a1 + 176;
	}
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B55380: using guessed type __int64 (__fastcall *off_140B55380[9])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

