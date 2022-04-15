#include "../winhttp.h"

//----- (0000000140828720) ----------------------------------------------------
__int64 __fastcall sub_140828720(int a1, float a2)
{
	unsigned __int16 v3; // ax
	int v4[18]; // [rsp+20h] [rbp-48h] BYREF

	if (a2 <= 0.0)
		return 31i64;
	*(float*)&v4[3] = a2;
	v4[2] = a1;
	HIWORD(v4[0]) = 35;
	v3 = sub_1403B55D0();
	return sub_14082BB30(qword_140C61B68, v4, v3);
}

