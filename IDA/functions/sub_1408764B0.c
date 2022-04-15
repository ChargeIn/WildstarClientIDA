#include "../winhttp.h"

//----- (00000001408764B0) ----------------------------------------------------
__int64 __fastcall sub_1408764B0(_BYTE* a1, __int64 a2, int a3)
{
	__int64 result; // rax
	__int64 v7; // rdi
	char v8; // cl
	int v9; // r9d
	char v10; // dl
	float* v11; // rcx
	char v12; // cl
	__int64 v13; // rax
	int v14; // [rsp+20h] [rbp-38h] BYREF
	__int64 v15; // [rsp+28h] [rbp-30h]
	int v16; // [rsp+30h] [rbp-28h]
	int v17; // [rsp+34h] [rbp-24h]
	int v18; // [rsp+38h] [rbp-20h]
	char v19; // [rsp+3Ch] [rbp-1Ch]
	bool v20; // [rsp+3Dh] [rbp-1Bh]
	char v21; // [rsp+3Eh] [rbp-1Ah]
	float v22; // [rsp+48h] [rbp-10h]
	char v23; // [rsp+4Ch] [rbp-Ch]

	result = sub_14085A9A0();
	v7 = result;
	if (result)
	{
		v8 = v23 ^ a1[100];
		v9 = a1[62] & 0x1F;
		v19 = 0;
		v21 = 0;
		v15 = a2;
		v10 = v8 & 1 ^ v23;
		v18 = v9;
		v16 = a3;
		v17 = 0;
		v11 = (float*)(a1 + 88);
		v23 = v10;
		if ((v10 & 1) != 0)
			v22 = sub_14086C2E0(v11);
		else
			LODWORD(v22) = (int)sub_14086C2E0(v11);
		v12 = 2 * a1[101];
		v14 = 4;
		v23 ^= (v23 ^ v12) & 2;
		v13 = *(_QWORD*)v7;
		v20 = v15 == 0;
		(*(void(__fastcall**)(__int64, int*))(v13 + 128))(v7, &v14);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
	}
	return result;
}

