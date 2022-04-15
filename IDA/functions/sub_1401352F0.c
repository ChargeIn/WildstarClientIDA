#include "../winhttp.h"

//----- (00000001401352F0) ----------------------------------------------------
__int64 __fastcall sub_1401352F0(
	__int64 a1,
	__int64 a2,
	int a3,
	int* a4,
	int* a5,
	char a6,
	int a7,
	char a8,
	__int64 a9)
{
	int v10; // eax
	int* v14; // rax
	int* v15; // rax
	int* v16; // rax
	int* v17; // rax
	int* v18; // rax
	int* v19; // rax
	int* v20; // rax
	int* v21; // rax
	int* v22; // rax
	int* v23; // rax
	int* v24; // rdx
	__int64 v25; // rax
	int* v26; // rdx
	__int64 v27; // rax

	v10 = dword_140C8A07C + 1;
	*(_DWORD*)a1 = dword_140C8A07C + 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	dword_140C8A07C = v10;
	v14 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v14;
	*(_QWORD*)(a1 + 32) = v14;
	*(_QWORD*)(a1 + 40) = v14 + 4;
	if (v14)
		*(_WORD*)v14 = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v15 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 56) = v15;
	*(_QWORD*)(a1 + 64) = v15;
	*(_QWORD*)(a1 + 72) = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	v16 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 96) = v16;
	*(_QWORD*)(a1 + 104) = v16;
	*(_QWORD*)(a1 + 112) = v16 + 4;
	if (v16)
		*(_WORD*)v16 = 0;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	v17 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 128) = v17;
	*(_QWORD*)(a1 + 136) = v17;
	*(_QWORD*)(a1 + 144) = v17 + 4;
	if (v17)
		*(_WORD*)v17 = 0;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	v18 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 160) = v18;
	*(_QWORD*)(a1 + 168) = v18;
	*(_QWORD*)(a1 + 176) = v18 + 4;
	if (v18)
		*(_WORD*)v18 = 0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	v19 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 192) = v19;
	*(_QWORD*)(a1 + 200) = v19;
	*(_QWORD*)(a1 + 208) = v19 + 4;
	if (v19)
		*(_WORD*)v19 = 0;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	v20 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 224) = v20;
	*(_QWORD*)(a1 + 232) = v20;
	*(_QWORD*)(a1 + 240) = v20 + 4;
	if (v20)
		*(_WORD*)v20 = 0;
	v21 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 288) = v21;
	*(_BYTE*)v21 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 288) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 288) + 16i64) = *(_QWORD*)(a1 + 288);
	*(_QWORD*)(*(_QWORD*)(a1 + 288) + 24i64) = *(_QWORD*)(a1 + 288);
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 360) = 0i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	*(_QWORD*)(a1 + 376) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	*(_QWORD*)(a1 + 400) = 0i64;
	*(_QWORD*)(a1 + 408) = 0i64;
	*(_QWORD*)(a1 + 424) = 0i64;
	*(_QWORD*)(a1 + 432) = 0i64;
	*(_QWORD*)(a1 + 440) = 0i64;
	v22 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 456) = v22;
	*(_QWORD*)v22 = v22;
	*(_QWORD*)(*(_QWORD*)(a1 + 456) + 8i64) = *(_QWORD*)(a1 + 456);
	v23 = sub_14018B280(96i64, 0);
	*(_QWORD*)(a1 + 480) = 0i64;
	v24 = (int*)&unk_1409D8D6C;
	*(_QWORD*)(a1 + 472) = v23;
	*(_BYTE*)v23 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 472) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 472) + 16i64) = *(_QWORD*)(a1 + 472);
	*(_QWORD*)(*(_QWORD*)(a1 + 472) + 24i64) = *(_QWORD*)(a1 + 472);
	*(_QWORD*)(a1 + 512) = 0i64;
	*(_QWORD*)(a1 + 520) = 0i64;
	*(_QWORD*)(a1 + 528) = 0i64;
	if (a5)
		v24 = a5;
	v25 = 0i64;
	*(_QWORD*)(a1 + 8) = a2;
	if (*(_WORD*)v24)
	{
		do
			++v25;
		while (*((_WORD*)v24 + v25));
	}
	sub_14001C480(a1 + 120, v24, (int*)((char*)v24 + 2 * v25));
	v26 = (int*)&unk_1409D8D8C;
	if (a4)
		v26 = a4;
	v27 = 0i64;
	if (*(_WORD*)v26)
	{
		do
			++v27;
		while (*((_WORD*)v26 + v27));
	}
	sub_14001C480(a1 + 88, v26, (int*)((char*)v26 + 2 * v27));
	*(_BYTE*)(a1 + 264) = a6;
	*(_BYTE*)(a1 + 272) = a8;
	*(_BYTE*)(a1 + 312) = 0;
	*(_DWORD*)(a1 + 496) = 0;
	*(_QWORD*)(a1 + 536) = 1i64;
	*(_DWORD*)(a1 + 268) = a7;
	*(_DWORD*)(a1 + 544) = 0;
	*(_QWORD*)(a1 + 552) = 0i64;
	*(_QWORD*)(a1 + 560) = 0i64;
	*(_QWORD*)(a1 + 2568) = 0i64;
	*(_DWORD*)(a1 + 2576) = 0;
	sub_1407E4830((int*)(a1 + 1768), 0i64, 0x320ui64);
	sub_1407E4830((int*)(a1 + 968), 0i64, 0x320ui64);
	*(_DWORD*)(a1 + 548) = 0;
	*(_DWORD*)(a1 + 500) = 0;
	if (a9)
		sub_14013D040(a1 + 280, a9);
	sub_140135AD0(a1, a3);
	return a1;
}
// 140C8A07C: using guessed type int dword_140C8A07C;

