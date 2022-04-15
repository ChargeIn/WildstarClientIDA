#include "../winhttp.h"

//----- (000000014083F180) ----------------------------------------------------
__int64 __fastcall sub_14083F180(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	unsigned __int16 v7; // ax
	int v9; // [rsp+20h] [rbp-48h] BYREF
	__int64 v10; // [rsp+28h] [rbp-40h]

	sub_1408425E0(a2);
	*(_BYTE*)(a2 + 120) |= 8u;
	*(_QWORD*)(a2 + 72) = a3;
	*(_QWORD*)(a2 + 80) = a4;
	HIWORD(v9) = 24;
	v10 = a2;
	v7 = sub_1403B55D0();
	sub_14082BB30(qword_140C61B68, &v9, v7);
	return sub_140828530();
}

