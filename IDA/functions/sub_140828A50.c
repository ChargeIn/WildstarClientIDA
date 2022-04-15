#include "../winhttp.h"

//----- (0000000140828A50) ----------------------------------------------------
__int64 __fastcall sub_140828A50(int a1, int a2, char a3, char a4)
{
	unsigned __int16 v4; // ax
	int v6[4]; // [rsp+20h] [rbp-48h] BYREF
	char v7; // [rsp+30h] [rbp-38h]
	char v8; // [rsp+31h] [rbp-37h]

	v6[2] = a1;
	v7 = a3;
	HIWORD(v6[0]) = 7;
	if (a2 == 748895195)
		a2 = 0;
	v8 = a4;
	v6[3] = a2;
	v4 = sub_140783020();
	return sub_14082BB30(qword_140C61B68, v6, v4);
}

