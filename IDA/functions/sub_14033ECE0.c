#include "../winhttp.h"

//----- (000000014033ECE0) ----------------------------------------------------
int __fastcall sub_14033ECE0(__int64 a1)
{
	__int64 v2; // rcx
	int result; // eax

	if (*(_DWORD*)(a1 + 280) != 1)
	{
		*(_DWORD*)(a1 + 280) = 1;
		v2 = a1 + 144;
		if (!*(_BYTE*)(v2 + 56))
			sub_140334D90(v2);
		if (!*(_BYTE*)(a1 + 72))
			sub_140334D90(a1 + 16);
		sub_1400035B0();
		result = closesocket(*(_QWORD*)(a1 + 272));
		*(_QWORD*)(a1 + 272) = 0i64;
	}
	return result;
}

