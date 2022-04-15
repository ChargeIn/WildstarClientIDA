#include "../winhttp.h"

//----- (000000014044A710) ----------------------------------------------------
__int64 __fastcall sub_14044A710(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rax
	int v8; // ecx
	int v9; // eax
	int v10; // eax
	int* v11; // rax
	__int64 result; // rax

	*(_QWORD*)a1 = 1i64;
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 48) = 4;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v2 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 144) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 144) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 144) + 16i64) = *(_QWORD*)(a1 + 144);
	*(_QWORD*)(*(_QWORD*)(a1 + 144) + 24i64) = *(_QWORD*)(a1 + 144);
	v3 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 176) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 16i64) = *(_QWORD*)(a1 + 176);
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 24i64) = *(_QWORD*)(a1 + 176);
	v4 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 208) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 16i64) = *(_QWORD*)(a1 + 208);
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 24i64) = *(_QWORD*)(a1 + 208);
	*(_DWORD*)(a1 + 232) = 0;
	v5 = sub_14018B280(56i64, 0);
	*(_QWORD*)(a1 + 248) = v5;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_BYTE*)v5 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 248) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 248) + 16i64) = *(_QWORD*)(a1 + 248);
	*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24i64) = *(_QWORD*)(a1 + 248);
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_DWORD*)(a1 + 272) = 1414420037;
	*(_DWORD*)(a1 + 340) = 0;
	v6 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 352) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 352) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 352) + 16i64) = *(_QWORD*)(a1 + 352);
	*(_QWORD*)(*(_QWORD*)(a1 + 352) + 24i64) = *(_QWORD*)(a1 + 352);
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 376) = 0i64;
	*(_QWORD*)(a1 + 400) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	*(_QWORD*)(a1 + 408) = 0i64;
	*(_QWORD*)(a1 + 416) = 0i64;
	*(_QWORD*)(a1 + 424) = 0i64;
	v7 = sub_140200220(0x940u);
	if (v7)
		v8 = *(_DWORD*)(v7 + 4);
	else
		v8 = 0;
	v9 = dword_140C636A8;
	*(_DWORD*)(a1 + 440) = v8;
	*(_DWORD*)(a1 + 436) = 0;
	v10 = v9 - v8;
	*(_DWORD*)(a1 + 444) = 1;
	if (!v8)
		v8 = 1;
	*(_DWORD*)(a1 + 432) = v10;
	*(_DWORD*)(a1 + 448) = v8;
	v11 = sub_14018B280(18i64, 0);
	if (v11)
	{
		*((_QWORD*)v11 + 1) = 0i64;
		*(_QWORD*)v11 = off_140B55060;
	}
	else
	{
		v11 = 0i64;
	}
	*((_WORD*)v11 + 8) = 0;
	*(_QWORD*)(a1 + 456) = v11 + 4;
	*(_QWORD*)(a1 + 464) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	result = a1;
	*(_QWORD*)(a1 + 496) = 0i64;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C636A8: using guessed type int dword_140C636A8;

