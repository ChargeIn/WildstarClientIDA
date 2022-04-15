#include "../winhttp.h"

//----- (000000014013D6C0) ----------------------------------------------------
int* __fastcall sub_14013D6C0(__int64 a1, char* a2)
{
	int* v3; // rax
	int* v4; // rdi
	int* v5; // rbx
	char v6; // al

	v3 = sub_14018B280(72i64, 0);
	v4 = v3 + 8;
	v5 = v3;
	if (v3 != (int*)-32i64)
	{
		*((_QWORD*)v3 + 5) = 0i64;
		*((_QWORD*)v3 + 6) = 0i64;
		*((_QWORD*)v3 + 7) = 0i64;
		sub_14001C1B0((_QWORD*)v3 + 4, *((int**)a2 + 5), *((_QWORD*)a2 + 6));
		v4[8] = *((_DWORD*)a2 + 16);
	}
	v6 = *a2;
	*((_QWORD*)v5 + 2) = 0i64;
	*(_BYTE*)v5 = v6;
	*((_QWORD*)v5 + 3) = 0i64;
	return v5;
}

