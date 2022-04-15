#include "../winhttp.h"

//----- (00000001400198C0) ----------------------------------------------------
__int64 __fastcall sub_1400198C0(__int64 a1, __int64* a2, __int64 a3, int a4, __int64 a5)
{
	__int64 v6; // rax
	__int64 v8; // rdi
	int v9; // ebp
	int** v10; // rbx
	int* v11; // rax
	int* v12; // rax
	int* v13; // rax
	__int64 v14; // rbp

	*(_QWORD*)a1 = &off_140B5E6E8;
	v6 = *a2;
	*(_DWORD*)(a1 + 16) = a4;
	*(_QWORD*)(a1 + 8) = v6;
	*(_QWORD*)(a1 + 20) = *((unsigned int*)a2 + 2);
	if (*(_QWORD*)(a1 + 8))
		*(_QWORD*)sub_14019D520(qword_140C63750 + 8, (__int64*)(a1 + 8)) = a1;
	v8 = a1 + 32;
	v9 = 4;
	v10 = (int**)(a1 + 48);
	*(_QWORD*)a1 = off_140B55270;
	do
	{
		*(v10 - 1) = 0i64;
		*v10 = 0i64;
		v10[1] = 0i64;
		v11 = sub_14018B280(16i64, 0);
		*(v10 - 1) = v11;
		*v10 = v11;
		v10[1] = v11 + 4;
		if (v11)
			*(_WORD*)v11 = 0;
		v10 += 4;
		--v9;
	} while (v9 >= 0);
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	v12 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 200) = v12;
	*(_QWORD*)(a1 + 208) = v12;
	*(_QWORD*)(a1 + 216) = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 240) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	v13 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 232) = v13;
	*(_QWORD*)(a1 + 240) = v13;
	*(_QWORD*)(a1 + 248) = v13 + 4;
	if (v13)
		*(_WORD*)v13 = 0;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 280) = 0i64;
	sub_14001C1B0((_QWORD*)(a1 + 256), *(int**)(a3 + 8), *(_QWORD*)(a3 + 16));
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 304) = a5;
	*(_DWORD*)(a1 + 296) = 0;
	v14 = 5i64;
	do
	{
		if (a1 + 256 != v8)
			sub_14001C480(v8, *(int**)(a1 + 264), *(int**)(a1 + 272));
		v8 += 32i64;
		--v14;
	} while (v14);
	return a1;
}
// 140B55270: using guessed type __int64 (__fastcall *off_140B55270[7])();
// 140B5E6E8: using guessed type __int64 (__fastcall *off_140B5E6E8)();
// 140C63750: using guessed type __int64 qword_140C63750;

