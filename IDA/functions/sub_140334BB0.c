#include "../winhttp.h"

//----- (0000000140334BB0) ----------------------------------------------------
__int64 __fastcall sub_140334BB0(__int64 a1, u_long a2, u_short a3)
{
	int* v6; // rax

	*(_BYTE*)(a1 + 16) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v6 = sub_14018B280(8i64, 0);
	*(_QWORD*)(a1 + 32) = v6;
	*(_QWORD*)(a1 + 40) = v6;
	*(_QWORD*)(a1 + 48) = v6 + 2;
	if (v6)
		*(_BYTE*)v6 = 0;
	*(_BYTE*)(a1 + 56) = 0;
	*(_WORD*)(a1 + 78) = 0;
	*(_WORD*)a1 = 2;
	*(_DWORD*)(a1 + 4) = htonl(a2);
	*(_WORD*)(a1 + 2) = htons(a3);
	*(_BYTE*)(a1 + 56) = 0;
	*(_WORD*)(a1 + 78) = 0;
	sub_140334D90(a1);
	if (!*(_BYTE*)(a1 + 56))
		sub_140334D90(a1);
	return a1;
}

