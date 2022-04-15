#include "../winhttp.h"

//----- (0000000140827AD0) ----------------------------------------------------
__int64 __fastcall sub_140827AD0(const WCHAR* a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int* a5)
{
	unsigned int v8; // eax
	__int128 v10; // [rsp+20h] [rbp-88h]
	__int128 v11; // [rsp+30h] [rbp-78h]
	__int64 v12; // [rsp+50h] [rbp-58h]
	__int128 v13[3]; // [rsp+60h] [rbp-48h] BYREF
	__int64 v14; // [rsp+90h] [rbp-18h]

	v8 = sub_1408273A0(a1);
	*((_QWORD*)&v10 + 1) = a2;
	*a5 = v8;
	LODWORD(v10) = 0;
	DWORD2(v11) = 0;
	LODWORD(v12) = 0;
	*(_QWORD*)&v11 = a3;
	v13[0] = v10;
	v13[1] = v11;
	v14 = v12;
	v13[2] = __PAIR64__(a4, v8);
	return sub_140841990((struct _RTL_CRITICAL_SECTION*)qword_140C61B58, v13);
}
// 140827B27: variable 'v10' is possibly undefined
// 140827B3A: variable 'v11' is possibly undefined
// 140827B45: variable 'v12' is possibly undefined
// 140C61B58: using guessed type __int64 qword_140C61B58;

