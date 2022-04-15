#include "../winhttp.h"

//----- (0000000140195170) ----------------------------------------------------
__int64 __fastcall sub_140195170(__int64 a1)
{
	int** v2; // rbx
	int v3; // esi
	int* v4; // rax
	int* v5; // rax

	v2 = (int**)(a1 + 48);
	*(_QWORD*)a1 = off_140B5E6A8;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v3 = 5;
	do
	{
		v4 = sub_14018B280(64i64, 0);
		--v3;
		v2[1] = 0i64;
		*v2 = v4;
		*(_BYTE*)v4 = 0;
		*((_QWORD*)*v2 + 1) = 0i64;
		v5 = *v2;
		v2 += 4;
		*((_QWORD*)v5 + 2) = v5;
		*((_QWORD*)*(v2 - 4) + 3) = *(v2 - 4);
	} while (v3 >= 0);
	*(_DWORD*)(a1 + 232) = sub_14018CDF0();
	*(_QWORD*)(a1 + 236) = 0i64;
	*(_QWORD*)(a1 + 244) = 0i64;
	*(_QWORD*)(a1 + 252) = 0i64;
	sub_1407E4830((int*)(a1 + 264), 0i64, 0x868ui64);
	return a1;
}
// 140B5E6A8: using guessed type __int64 (__fastcall *off_140B5E6A8[9])();

