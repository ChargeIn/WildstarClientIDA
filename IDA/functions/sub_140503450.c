#include "../winhttp.h"

//----- (0000000140503450) ----------------------------------------------------
__int64 __fastcall sub_140503450(__int64 a1)
{
	int v2; // edi
	int** v3; // rbx
	int* v4; // rax
	int* v5; // rax

	v2 = 3;
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	v3 = (int**)(a1 + 64);
	*(_QWORD*)a1 = off_140B6A420;
	do
	{
		*(v3 - 1) = 0i64;
		*v3 = 0i64;
		v3[1] = 0i64;
		v4 = sub_14018B280(16i64, 0);
		*(v3 - 1) = v4;
		*v3 = v4;
		v3[1] = v4 + 4;
		if (v4)
			*(_WORD*)v4 = 0;
		v3[4] = 0i64;
		v3[5] = 0i64;
		v3[6] = 0i64;
		v5 = sub_14018B280(16i64, 0);
		v3[4] = v5;
		v3[5] = v5;
		v3[6] = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		v3 += 11;
		--v2;
	} while (v2 >= 0);
	sub_140503600(a1, 1u, 0, 0, 0);
	*(_QWORD*)(a1 + 32) = qword_140C46108;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 140C46108: using guessed type __int64 qword_140C46108;

