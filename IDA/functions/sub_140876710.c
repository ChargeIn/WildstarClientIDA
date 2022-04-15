#include "../winhttp.h"

//----- (0000000140876710) ----------------------------------------------------
__int64 __fastcall sub_140876710(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // rdi
	char v7; // cl
	char v8; // dl
	float* v9; // rcx
	char v10; // cl
	unsigned int v11; // ebx
	int v13; // [rsp+20h] [rbp-38h] BYREF
	__int64 v14; // [rsp+28h] [rbp-30h]
	int v15; // [rsp+30h] [rbp-28h]
	int v16; // [rsp+34h] [rbp-24h]
	int v17; // [rsp+38h] [rbp-20h]
	__int16 v18; // [rsp+3Ch] [rbp-1Ch]
	char v19; // [rsp+3Eh] [rbp-1Ah]
	float v20; // [rsp+48h] [rbp-10h]
	char v21; // [rsp+4Ch] [rbp-Ch]

	v6 = sub_140855940(a1);
	if (!v6)
		return 15i64;
	v7 = *(_BYTE*)(a1 + 100);
	v18 = 0;
	v19 = 0;
	v17 = 4;
	v14 = a2;
	v15 = a3;
	v8 = (v21 ^ v7) & 1 ^ v21;
	v16 = 0;
	v9 = (float*)(a1 + 88);
	v21 = v8;
	if ((v8 & 1) != 0)
		v20 = sub_14086C2E0(v9);
	else
		LODWORD(v20) = (int)sub_14086C2E0(v9);
	v10 = 2 * *(_BYTE*)(a1 + 101);
	v13 = 4;
	v21 ^= (v21 ^ v10) & 2;
	v11 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v6 + 128i64))(v6, &v13);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	return v11;
}

