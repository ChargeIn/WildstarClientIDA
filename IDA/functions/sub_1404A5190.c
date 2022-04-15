#include "../winhttp.h"

//----- (00000001404A5190) ----------------------------------------------------
void __fastcall sub_1404A5190(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	unsigned int v3; // esi
	_DWORD* v4; // rdi
	int* v5; // rbx
	int* v6; // rax
	__int64 v7; // rcx
	int v8; // eax

	if (a2 && a3)
	{
		*a2 = *a3;
		v3 = 0;
		v4 = a2 + 2;
		v5 = a3 + 2;
		a2[1] = a3[1];
		do
		{
			if (!*v5)
				break;
			v6 = sub_14018B280(16i64, 0);
			if (v6)
			{
				*(_QWORD*)v6 = 0i64;
				*((_QWORD*)v6 + 1) = 0i64;
			}
			*(_QWORD*)v4 = v6;
			++v3;
			*v6 = *v5;
			*(_DWORD*)(*(_QWORD*)v4 + 4i64) = v5[3];
			*(_DWORD*)(*(_QWORD*)v4 + 8i64) = v5[6];
			v7 = *(_QWORD*)v4;
			v8 = v5[9];
			++v5;
			v4 += 2;
			*(_DWORD*)(v7 + 12) = v8;
		} while (v3 < 3);
	}
}

