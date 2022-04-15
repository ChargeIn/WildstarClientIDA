#include "../winhttp.h"

//----- (0000000140828990) ----------------------------------------------------
__int64 __fastcall sub_140828990(int a1, float a2, __int64 a3, int a4, int a5)
{
	unsigned __int16 v5; // ax
	int v7[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+30h] [rbp-38h]
	int v9; // [rsp+38h] [rbp-30h]
	int v10; // [rsp+3Ch] [rbp-2Ch]

	*(float*)&v7[3] = a2;
	v7[2] = a1;
	v8 = a3;
	if (a4)
	{
		v9 = a4;
		HIWORD(v7[0]) = 3;
		v10 = a5;
		v5 = sub_14082EEA0();
	}
	else
	{
		HIWORD(v7[0]) = 2;
		v5 = sub_140055BD0();
	}
	return sub_14082BB30(qword_140C61B68, v7, v5);
}

