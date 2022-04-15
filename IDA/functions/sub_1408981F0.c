//----- (00000001408981F0) ----------------------------------------------------
__int64 __fastcall sub_1408981F0(_BYTE* a1, _DWORD* a2, __int64 a3, unsigned int a4)
{
	__int64(__fastcall * **v4)(_QWORD, _QWORD); // rbx
	signed int v9; // r13d
	__int64 v10; // r13
	int v11; // r14d
	signed int v12; // esi
	double v13; // xmm1_8
	double v14; // xmm0_8
	int v15; // eax
	int* v16; // rsi
	__int64 v17; // r14
	_QWORD* v18; // rbp
	int v20; // eax
	int v21; // edx
	int v22; // r8d
	int v23; // eax
	unsigned int v24; // [rsp+30h] [rbp-48h]
	__int64 v25; // [rsp+38h] [rbp-40h]
	int v26; // [rsp+88h] [rbp+10h] BYREF
	unsigned int v27; // [rsp+90h] [rbp+18h] BYREF
	int v28; // [rsp+98h] [rbp+20h] BYREF

	v4 = 0i64;
	v25 = 0i64;
	v9 = 0;
	if (a3)
	{
		v25 = *(_QWORD*)(a3 + 8);
		v26 = a2[15];
		v10 = *(_QWORD*)(*(_QWORD*)(a3 + 24) + 128i64);
		sub_140891B60(v10, 0, a2[16] & 0x1F, &v26, 1, &v27);
		v11 = a2[12];
		v24 = v27;
		v12 = a2[14] - v11 * (dword_140C110B4 / 0x3E8u);
		if (v12 < (signed int)-v27)
		{
			v12 = -v27;
			v13 = (double)(int)(a2[14] + v27) * 1000.0 / (double)dword_140C110B4;
			if (v13 <= 0.0)
				v14 = -0.5;
			else
				v14 = 0.5;
			v11 = (int)(v14 + v13);
		}
		if (!v12 && !v11 && (a2[16] & 0x20) != 0)
			v12 = sub_1408922F0(v10);
		v15 = sub_140891630(v10);
		sub_14088C9F0(a3, v11, a2[13], v15 + v12);
		v9 = v24;
	}
	v16 = a2 + 17;
	v28 = 0;
	if (a4)
	{
		v17 = sub_140830F00(qword_140C61BA8, a4, 0);
		if (v17)
		{
			sub_140891AA0(v17, (__int64)(a2 + 17), 0, 0, &v26, &v28);
			v4 = sub_1408917A0(v17, (__int64)a1);
			if (!v4)
				a1[200] = 0;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17);
		}
		else
		{
			a1[200] = 0;
		}
	}
	v18 = sub_14088FB00((__int64)a1, v25 + v9, (__int64)v4);
	if (v4)
		sub_14088B630((__int64)v4);
	if (!v18)
		return (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 200i64))(a1);
	if (v4)
	{
		if ((v16[5] & 8) != 0)
		{
			v20 = sub_140892310((__int64)v4[16]);
			v21 = v28;
			v22 = v28 - v20;
		}
		else
		{
			v21 = v28;
			v22 = v28;
		}
		v23 = sub_14088D6B0((__int64)v18, v21, v22, v16);
		sub_14088E1D0((__int64)v18, *v16, v16[1], v23 + v16[2]);
	}
	return (__int64)v18;
}
// 140C110B4: using guessed type int dword_140C110B4;

