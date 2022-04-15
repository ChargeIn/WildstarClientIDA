#include "../winhttp.h"

//----- (00000001404C6C90) ----------------------------------------------------
__int64 __fastcall sub_1404C6C90(__int64 a1, int a2, __int64* a3, int a4, int a5)
{
	__int64 v5; // rax
	__int64 v7; // rax
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax

	v5 = *a3;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 24) = v5;
	v7 = a3[1];
	*(_DWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 20) = a4;
	*(_DWORD*)(a1 + 40) = 4;
	*(_QWORD*)(a1 + 32) = v7;
	v8 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 56) = v8;
	*(_BYTE*)v8 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 16i64) = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(*(_QWORD*)(a1 + 56) + 24i64) = *(_QWORD*)(a1 + 56);
	v9 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 88) = v9;
	*(_BYTE*)v9 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 16i64) = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(*(_QWORD*)(a1 + 88) + 24i64) = *(_QWORD*)(a1 + 88);
	v10 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = v10;
	*(_BYTE*)v10 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 16i64) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 24i64) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_DWORD*)(a1 + 152) = a5;
	*(_DWORD*)(a1 + 156) = 0;
	sub_140019600((_QWORD*)(a1 + 160));
	v11 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 208) = v11;
	*(_BYTE*)v11 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 16i64) = *(_QWORD*)(a1 + 208);
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 24i64) = *(_QWORD*)(a1 + 208);
	return a1;
}

