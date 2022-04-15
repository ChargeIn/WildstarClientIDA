#include "../winhttp.h"

//----- (0000000140134570) ----------------------------------------------------
__int64 __fastcall sub_140134570(__int64 a1, __int64 a2, __int64 a3)
{
	int* v6; // rax
	int* v7; // rax
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	int* v12; // rax

	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 32) = v6;
	*(_QWORD*)(a1 + 40) = v6;
	*(_QWORD*)(a1 + 48) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	v7 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 72) = v7;
	*(_QWORD*)(a1 + 80) = v7;
	*(_QWORD*)(a1 + 88) = v7 + 2;
	if (v7)
		*(_BYTE*)v7 = 0;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v8 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 104) = v8;
	*(_QWORD*)(a1 + 112) = v8;
	*(_QWORD*)(a1 + 120) = v8 + 2;
	if (v8)
		*(_BYTE*)v8 = 0;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	v9 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 136) = v9;
	*(_QWORD*)(a1 + 144) = v9;
	*(_QWORD*)(a1 + 152) = v9 + 2;
	if (v9)
		*(_BYTE*)v9 = 0;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	v10 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 168) = v10;
	*(_QWORD*)(a1 + 176) = v10;
	*(_QWORD*)(a1 + 184) = v10 + 2;
	if (v10)
		*(_BYTE*)v10 = 0;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	v11 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 200) = v11;
	*(_QWORD*)(a1 + 208) = v11;
	*(_QWORD*)(a1 + 216) = v11 + 2;
	if (v11)
		*(_BYTE*)v11 = 0;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	v12 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 232) = v12;
	*(_QWORD*)(a1 + 240) = v12;
	*(_QWORD*)(a1 + 248) = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	*(_QWORD*)a1 = a2;
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)(a1 + 8) = a3;
	*(_DWORD*)(a1 + 56) = -2;
	return a1;
}

