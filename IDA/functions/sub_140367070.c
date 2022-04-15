#include "../winhttp.h"

//----- (0000000140367070) ----------------------------------------------------
int __fastcall sub_140367070(void(__fastcall*** a1)(_QWORD), __int64 a2)
{
	int* v4; // rax
	__int64* v5; // rax

	v4 = (int*)((__int64(__fastcall*)(_QWORD))(*a1)[5])(a1);
	v5 = (__int64*)sub_14035BF90(a2, v4);
	if (v5)
		LODWORD(v5) = sub_140382F90(v5, a1);
	return (int)v5;
}

