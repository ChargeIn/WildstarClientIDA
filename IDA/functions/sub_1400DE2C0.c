//----- (00000001400DE2C0) ----------------------------------------------------
__int64 __fastcall sub_1400DE2C0(_QWORD* a1)
{
	__int64 result; // rax
	float v3; // xmm2_4
	__int128 v4; // xmm0
	__int64 v5; // rax
	__int64 v6; // rax
	float v7; // xmm0_4
	__int64 v8; // rax
	float v9; // xmm0_4
	__int64 v10; // rax
	__int128 v11; // [rsp+30h] [rbp-68h]
	__int128 v12; // [rsp+40h] [rbp-58h]
	__int128 v13; // [rsp+50h] [rbp-48h]

	result = sub_1400D66A0(a1, 1u);
	if (result)
	{
		v3 = 0.0;
		v11 = *(_OWORD*)(result + 80);
		v12 = *(_OWORD*)(result + 96);
		v4 = *(_OWORD*)(result + 112);
		v13 = v4;
		if ((_QWORD)v11)
			LODWORD(v4) = 0;
		v5 = a1[2];
		*(double*)v5 = *(float*)&v4;
		*(_DWORD*)(v5 + 8) = 3;
		a1[2] += 16i64;
		v6 = a1[2];
		if (*((_QWORD*)&v11 + 1))
			v7 = 0.0;
		else
			v7 = *((float*)&v13 + 1);
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = v7;
		a1[2] += 16i64;
		v8 = a1[2];
		if ((_QWORD)v12)
			v9 = 0.0;
		else
			v9 = *((float*)&v13 + 2);
		*(_DWORD*)(v8 + 8) = 3;
		*(double*)v8 = v9;
		a1[2] += 16i64;
		v10 = a1[2];
		if (!*((_QWORD*)&v12 + 1))
			v3 = *((float*)&v13 + 3);
		*(_DWORD*)(v10 + 8) = 3;
		*(double*)v10 = v3;
		a1[2] += 16i64;
		return 4i64;
	}
	return result;
}

