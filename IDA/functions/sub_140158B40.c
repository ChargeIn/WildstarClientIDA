#include "../winhttp.h"

//----- (0000000140158B40) ----------------------------------------------------
__int64 __fastcall sub_140158B40(
	__int64 a1,
	int* a2,
	__int64 a3,
	__m128i* a4,
	int* a5,
	void(__fastcall*** a6)(_QWORD),
	char a7)
{
	_QWORD* v8; // rcx
	__int64 v10; // rax
	__int64 v12; // rax
	int* v13; // rax
	int* v14; // rax
	int* v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rdx
	__int64 v19; // rdx
	__int64 v21; // [rsp+30h] [rbp-38h] BYREF
	__int64 v22; // [rsp+38h] [rbp-30h]

	*(_BYTE*)(a1 + 8) = 0;
	*(_BYTE*)(a1 + 10) = 1;
	v8 = (_QWORD*)(a1 + 16);
	*(v8 - 2) = &off_140B5CAE0;
	*((_BYTE*)v8 - 7) = a7;
	v10 = 0i64;
	v8[1] = 0i64;
	v8[2] = 0i64;
	v8[3] = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v10;
		while (*((_WORD*)a2 + v10));
	}
	sub_14001C1B0(v8, a2, (__int64)a2 + 2 * v10);
	sub_1401095E0(a1 + 48);
	v12 = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	if (*(_WORD*)a5)
	{
		do
			++v12;
		while (*((_WORD*)a5 + v12));
	}
	sub_14001C1B0((_QWORD*)(a1 + 96), a5, (__int64)a5 + 2 * v12);
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	v13 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 136) = v13;
	*(_QWORD*)(a1 + 144) = v13;
	*(_QWORD*)(a1 + 152) = v13 + 2;
	if (v13)
		*(_BYTE*)v13 = 0;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	v14 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 168) = v14;
	*(_QWORD*)(a1 + 176) = v14;
	*(_QWORD*)(a1 + 184) = v14 + 4;
	if (v14)
		*(_WORD*)v14 = 0;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	v15 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 200) = v15;
	*(_QWORD*)(a1 + 208) = v15;
	*(_QWORD*)(a1 + 216) = v15 + 4;
	if (v15)
		*(_WORD*)v15 = 0;
	*(_QWORD*)(a1 + 224) = a6;
	if (a6)
		(**a6)(a6);
	if (a3)
		sub_140109710((__int64*)(a1 + 48), a3 + 240, a4, 0);
	v16 = sub_14018F0E0(&v21, (unsigned __int16*)a5);
	v17 = *(_QWORD*)(a1 + 136);
	*(_QWORD*)(a1 + 136) = v16[1];
	v16[1] = v17;
	v18 = *(_QWORD*)(a1 + 144);
	*(_QWORD*)(a1 + 144) = v16[2];
	v16[2] = v18;
	v19 = *(_QWORD*)(a1 + 152);
	*(_QWORD*)(a1 + 152) = v16[3];
	v16[3] = v19;
	if (v22)
		sub_14018B900(v22, 0);
	return a1;
}
// 140B5CAE0: using guessed type __int64 (__fastcall *off_140B5CAE0)();

