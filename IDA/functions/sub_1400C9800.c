#include "../winhttp.h"

//----- (00000001400C9800) ----------------------------------------------------
__int64 __fastcall sub_1400C9800(__int64 a1, __int64 a2)
{
	int v4; // [rsp+30h] [rbp-C8h] BYREF
	int v5; // [rsp+34h] [rbp-C4h] BYREF
	__int128 v6; // [rsp+38h] [rbp-C0h]
	__int128 v7; // [rsp+48h] [rbp-B0h]
	__m128 v8; // [rsp+60h] [rbp-98h] BYREF
	__m128 v9; // [rsp+70h] [rbp-88h] BYREF
	__int128 v10[6]; // [rsp+80h] [rbp-78h] BYREF

	sub_1400C9960(a1, (float*)&v5, &v8, (float*)&v4, &v9);
	LODWORD(v6) = v5;
	*((_QWORD*)&v6 + 1) = &v8;
	LODWORD(v7) = v4;
	*((_QWORD*)&v7 + 1) = &v9;
	v10[0] = v6;
	v10[1] = v7;
	sub_1401B0840((int*)v10, a2);
	return a2;
}

