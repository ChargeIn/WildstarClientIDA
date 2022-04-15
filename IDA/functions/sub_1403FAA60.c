#include "../winhttp.h"

//----- (00000001403FAA60) ----------------------------------------------------
__int64 __fastcall sub_1403FAA60(__int64 a1)
{
	__int64 v2; // rax
	int* v3; // rax
	unsigned int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	int* v7; // rax
	unsigned int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // rax
	int* v11; // rax
	unsigned int v12; // edx
	__int64 v13; // rcx
	__int64 v14; // rax
	int* v15; // rax
	unsigned int v16; // edx
	__int64 v17; // rcx
	__int64 v18; // rax
	int* v19; // rax
	unsigned int v20; // edx
	__int64 v21; // rcx
	__int64 v22; // rax
	int* v23; // rax
	unsigned int v24; // edx
	__int64 v25; // rcx
	__int64 v26; // rax
	int* v27; // rax
	unsigned int v28; // edx
	__int64 v29; // rcx

	*(_DWORD*)a1 = 0;
	*(_DWORD*)(a1 + 4) = 31;
	*(_DWORD*)(a1 + 8) = 31;
	*(_DWORD*)(a1 + 12) = 31;
	v2 = 248i64;
	if (!is_mul_ok(0x1Fui64, 8ui64))
		v2 = -1i64;
	v3 = sub_14018B280(v2, 0);
	v4 = 0;
	for (*(_QWORD*)(a1 + 16) = v3; v4 < *(_DWORD*)(a1 + 4); *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v5) = 0i64)
		v5 = v4++;
	*(_DWORD*)(a1 + 24) = 1;
	*(_DWORD*)(a1 + 32) = 16;
	*(_DWORD*)(a1 + 36) = 16;
	*(_DWORD*)(a1 + 28) = 96;
	v6 = 768i64;
	if (!is_mul_ok(0x60ui64, 8ui64))
		v6 = -1i64;
	v7 = sub_14018B280(v6, 0);
	v8 = 0;
	for (*(_QWORD*)(a1 + 40) = v7; v8 < *(_DWORD*)(a1 + 28); *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8 * v9) = 0i64)
		v9 = v8++;
	*(_DWORD*)(a1 + 48) = 2;
	*(_DWORD*)(a1 + 52) = 232;
	*(_DWORD*)(a1 + 56) = 32;
	*(_DWORD*)(a1 + 60) = 32;
	v10 = 1856i64;
	if (!is_mul_ok(0xE8ui64, 8ui64))
		v10 = -1i64;
	v11 = sub_14018B280(v10, 0);
	v12 = 0;
	for (*(_QWORD*)(a1 + 64) = v11; v12 < *(_DWORD*)(a1 + 52); *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v13) = 0i64)
		v13 = v12++;
	*(_DWORD*)(a1 + 72) = 10;
	*(_DWORD*)(a1 + 76) = 250;
	*(_DWORD*)(a1 + 80) = 20;
	*(_DWORD*)(a1 + 84) = 20;
	v14 = 2000i64;
	if (!is_mul_ok(0xFAui64, 8ui64))
		v14 = -1i64;
	v15 = sub_14018B280(v14, 0);
	v16 = 0;
	for (*(_QWORD*)(a1 + 88) = v15; v16 < *(_DWORD*)(a1 + 76); *(_QWORD*)(*(_QWORD*)(a1 + 88) + 8 * v17) = 0i64)
		v17 = v16++;
	*(_DWORD*)(a1 + 96) = 5;
	*(_DWORD*)(a1 + 100) = 96;
	*(_DWORD*)(a1 + 104) = 96;
	*(_DWORD*)(a1 + 108) = 96;
	v18 = 768i64;
	if (!is_mul_ok(0x60ui64, 8ui64))
		v18 = -1i64;
	v19 = sub_14018B280(v18, 0);
	v20 = 0;
	for (*(_QWORD*)(a1 + 112) = v19; v20 < *(_DWORD*)(a1 + 100); *(_QWORD*)(*(_QWORD*)(a1 + 112) + 8 * v21) = 0i64)
		v21 = v20++;
	*(_DWORD*)(a1 + 120) = 8;
	*(_DWORD*)(a1 + 124) = 85;
	*(_DWORD*)(a1 + 128) = 85;
	*(_DWORD*)(a1 + 132) = 85;
	v22 = 680i64;
	if (!is_mul_ok(0x55ui64, 8ui64))
		v22 = -1i64;
	v23 = sub_14018B280(v22, 0);
	v24 = 0;
	for (*(_QWORD*)(a1 + 136) = v23; v24 < *(_DWORD*)(a1 + 124); *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v25) = 0i64)
		v25 = v24++;
	*(_DWORD*)(a1 + 144) = 9;
	*(_DWORD*)(a1 + 148) = 204;
	*(_DWORD*)(a1 + 152) = 204;
	*(_DWORD*)(a1 + 156) = 204;
	v26 = 1632i64;
	if (!is_mul_ok(0xCCui64, 8ui64))
		v26 = -1i64;
	v27 = sub_14018B280(v26, 0);
	v28 = 0;
	for (*(_QWORD*)(a1 + 160) = v27; v28 < *(_DWORD*)(a1 + 148); *(_QWORD*)(*(_QWORD*)(a1 + 160) + 8 * v29) = 0i64)
		v29 = v28++;
	*(_QWORD*)(a1 + 1200) = 0i64;
	*(_QWORD*)(a1 + 1192) = 0i64;
	sub_1407E4830((int*)(a1 + 168), 0i64, 0x400ui64);
	return a1;
}

