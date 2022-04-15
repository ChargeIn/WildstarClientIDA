#include "../winhttp.h"

//----- (0000000140334C60) ----------------------------------------------------
__int64 __fastcall sub_140334C60(__int64 a1)
{
	int* v2; // rax

	*(_BYTE*)(a1 + 16) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v2 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 32) = v2;
	*(_QWORD*)(a1 + 40) = v2;
	*(_QWORD*)(a1 + 48) = v2 + 2;
	if (v2)
		*(_BYTE*)v2 = 0;
	*(_BYTE*)(a1 + 56) = 0;
	*(_WORD*)(a1 + 78) = 0;
	*(_DWORD*)(a1 + 4) = 0;
	*(_WORD*)a1 = 2;
	*(_WORD*)(a1 + 2) = htons(0);
	*(_BYTE*)(a1 + 56) = 0;
	*(_WORD*)(a1 + 78) = 0;
	sub_140334D90(a1);
	if (!*(_BYTE*)(a1 + 56))
		sub_140334D90(a1);
	return a1;
}

