//----- (00000001400C96C0) ----------------------------------------------------
__m128* __fastcall sub_1400C96C0(__int64 a1, __m128* a2)
{
	__int64 v4; // rbx
	int v6; // [rsp+30h] [rbp-D0h] BYREF
	float v7[3]; // [rsp+34h] [rbp-CCh] BYREF
	__m128 v8; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v9; // [rsp+50h] [rbp-B0h]
	__int128 v10; // [rsp+60h] [rbp-A0h]
	__m128 v11; // [rsp+70h] [rbp-90h] BYREF
	__m128 v12[4]; // [rsp+80h] [rbp-80h] BYREF
	__m128* v13[10]; // [rsp+C0h] [rbp-40h] BYREF
	__int128 v14[6]; // [rsp+110h] [rbp+10h] BYREF

	sub_1400C98B0(a1, a2);
	v4 = *(_QWORD*)(a1 + 16);
	if (v4)
	{
		v8.m128_u64[1] = (unsigned __int64)a2;
		v8.m128_u64[0] = (unsigned __int64)v12;
		do
		{
			sub_1400C9960(v4, v7, &v8, (float*)&v6, &v11);
			*(float*)&v9 = v7[0];
			*((_QWORD*)&v9 + 1) = &v8;
			LODWORD(v10) = v6;
			*((_QWORD*)&v10 + 1) = &v11;
			v14[0] = v9;
			v14[1] = v10;
			sub_1401B09D0((__int64)v14, v12);
			v13[0] = v12;
			v13[1] = a2;
			sub_1401AFB10(v13, a2);
			v4 = *(_QWORD*)(v4 + 16);
		} while (v4);
	}
	return a2;
}
// 1400C96C0: using guessed type __m128 var_120[4];
// 1400C96C0: using guessed type float var_16C[3];

