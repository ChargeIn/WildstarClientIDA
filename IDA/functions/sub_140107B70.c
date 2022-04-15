#include "../winhttp.h"

//----- (0000000140107B70) ----------------------------------------------------
__int64 __fastcall sub_140107B70(__int64 a1, __int64 a2)
{
	int* v3; // rax
	int v4; // edi
	int** v5; // rbx
	int i; // esi
	int* v7; // rax
	int v8; // esi
	int** v9; // rbx
	int* v10; // rax
	int** v11; // rbx
	int* v12; // rax

	*(_QWORD*)(a1 + 8) = a2;
	*(_DWORD*)(a1 + 16) = 3;
	*(_BYTE*)(a1 + 20) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)a1 = off_140B56AC0;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 64) = v3;
	*(_QWORD*)(a1 + 72) = v3;
	*(_QWORD*)(a1 + 80) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = 5;
	v5 = (int**)(a1 + 104);
	for (i = 5; i >= 0; --i)
	{
		*(v5 - 1) = 0i64;
		*v5 = 0i64;
		v5[1] = 0i64;
		v7 = sub_14018B280(16i64, 0);
		*(v5 - 1) = v7;
		*v5 = v7;
		v5[1] = v7 + 4;
		if (v7)
			*(_WORD*)v7 = 0;
		v5 += 4;
	}
	v8 = 5;
	v9 = (int**)(a1 + 296);
	do
	{
		*(v9 - 1) = 0i64;
		*v9 = 0i64;
		v9[1] = 0i64;
		v10 = sub_14018B280(16i64, 0);
		*(v9 - 1) = v10;
		*v9 = v10;
		v9[1] = v10 + 4;
		if (v10)
			*(_WORD*)v10 = 0;
		v9 += 4;
		--v8;
	} while (v8 >= 0);
	v11 = (int**)(a1 + 488);
	do
	{
		*(v11 - 1) = 0i64;
		*v11 = 0i64;
		v11[1] = 0i64;
		v12 = sub_14018B280(16i64, 0);
		*(v11 - 1) = v12;
		*v11 = v12;
		v11[1] = v12 + 4;
		if (v12)
			*(_WORD*)v12 = 0;
		v11 += 4;
		--v4;
	} while (v4 >= 0);
	return a1;
}
// 140B56AC0: using guessed type __int64 (__fastcall *off_140B56AC0[17])();

