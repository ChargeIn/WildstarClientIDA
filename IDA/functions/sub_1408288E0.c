#include "../winhttp.h"

//----- (00000001408288E0) ----------------------------------------------------
__int64 __fastcall sub_1408288E0(__int64 a1, int a2, float a3, float a4)
{
	unsigned __int16 v4; // ax
	int v6; // [rsp+20h] [rbp-48h] BYREF
	__int64 v7; // [rsp+28h] [rbp-40h]
	int v8; // [rsp+30h] [rbp-38h]
	float v9; // [rsp+34h] [rbp-34h]
	float v10; // [rsp+38h] [rbp-30h]

	v9 = a3;
	v10 = a4;
	v7 = a1;
	v8 = a2;
	HIWORD(v6) = 20;
	v4 = sub_14082EEA0();
	return sub_14082BB30(qword_140C61B68, &v6, v4);
}

