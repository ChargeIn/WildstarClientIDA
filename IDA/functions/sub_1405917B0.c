#include "../winhttp.h"

//----- (00000001405917B0) ----------------------------------------------------
void __fastcall sub_1405917B0(__int64 a1)
{
	unsigned int v2; // eax
	__int64 v3; // rsi
	char v4; // dl
	char v5; // al

	if (*(_DWORD*)(a1 + 392) || *(_DWORD*)(a1 + 408))
	{
		v2 = *(_DWORD*)(a1 + 380);
		if (v2 > 5)
			v2 = 5;
		v3 = 0i64;
		for (*(_DWORD*)(a1 + 380) = v2; (unsigned int)v3 < *(_DWORD*)(a1 + 380); v3 = (unsigned int)(v3 + 1))
			*(float*)(a1 + 4 * v3 + 440) = sub_140591BD0(a1, *(_DWORD*)(*(_QWORD*)(a1 + 384) + 4 * v3));
		v4 = -1;
		v5 = (int)(float)((float)(fmaxf(0.0, fminf((float)*(int*)(a1 + 376) / (float)(1 << *(_DWORD*)(a1 + 428)), 1.0))
			* 255.0)
			+ 0.0000099999997);
		if (v5 != -1)
			v4 = v5;
		*(_BYTE*)(a1 + 402) = v4;
	}
}

