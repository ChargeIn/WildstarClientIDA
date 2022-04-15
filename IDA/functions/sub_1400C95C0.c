//----- (00000001400C95C0) ----------------------------------------------------
__m128* __fastcall sub_1400C95C0(__int64 a1, __m128* a2)
{
	__int64 v4; // rbx
	int v6; // [rsp+30h] [rbp-D0h] BYREF
	int v7; // [rsp+34h] [rbp-CCh] BYREF
	__m128* v8[2]; // [rsp+38h] [rbp-C8h] BYREF
	__int128 v9; // [rsp+48h] [rbp-B8h]
	__int128 v10; // [rsp+58h] [rbp-A8h]
	__m128 v11; // [rsp+70h] [rbp-90h] BYREF
	__m128 v12; // [rsp+80h] [rbp-80h] BYREF
	char v13[64]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v14[6]; // [rsp+D0h] [rbp-30h] BYREF

	sub_1400C9800(a1, (__int64)a2);
	v4 = *(_QWORD*)(a1 + 16);
	if (v4)
	{
		v8[0] = a2;
		v8[1] = (__m128*)v13;
		do
		{
			sub_1400C9960(v4, (float*)&v7, &v11, (float*)&v6, &v12);
			LODWORD(v9) = v7;
			*((_QWORD*)&v9 + 1) = &v11;
			LODWORD(v10) = v6;
			*((_QWORD*)&v10 + 1) = &v12;
			v14[0] = v9;
			v14[1] = v10;
			sub_1401B0840((int*)v14, (__int64)v13);
			sub_1401AFB10(v8, a2);
			v4 = *(_QWORD*)(v4 + 16);
		} while (v4);
	}
	return a2;
}

