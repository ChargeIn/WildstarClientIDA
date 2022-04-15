#include "../winhttp.h"

//----- (000000014072C110) ----------------------------------------------------
void __fastcall sub_14072C110(__int64 a1)
{
	int v1; // esi
	__int64 v3; // rbx
	int* v4; // rax

	v1 = dword_140C636A8;
	if (*(_DWORD*)(a1 + 1264))
	{
		do
		{
			v3 = *(_QWORD*)(a1 + 1496);
			v4 = sub_14018B280(24i64, 0);
			if (v4 != (int*)-16i64)
				v4[4] = v1;
			*(_QWORD*)v4 = v3;
			*((_QWORD*)v4 + 1) = *(_QWORD*)(v3 + 8);
			**(_QWORD**)(v3 + 8) = v4;
			*(_QWORD*)(v3 + 8) = v4;
		} while ((*(_DWORD*)(a1 + 1264))-- != 1);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

