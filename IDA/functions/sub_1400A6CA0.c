//----- (00000001400A6CA0) ----------------------------------------------------
__int64 __fastcall sub_1400A6CA0(_QWORD* a1, _QWORD* a2, __int64 a3)
{
	int v7; // r12d
	unsigned __int64 v8; // r15
	unsigned int v9; // r14d
	int* v10; // rax
	const __m128i* v11; // rdi
	__int64 v12; // rax
	__int64 v13; // r9
	unsigned __int8* v14; // rsi
	char v15; // r14
	const __m128i* v16; // r15
	int v17; // eax
	int v18; // ecx
	int v19; // ecx
	int v20; // eax
	unsigned int v21; // edi
	_BYTE* v22; // rdx
	const __m128i* v23[2]; // [rsp+20h] [rbp-E0h] BYREF
	char v24[16]; // [rsp+30h] [rbp-D0h] BYREF
	int v25; // [rsp+40h] [rbp-C0h]
	int v26; // [rsp+48h] [rbp-B8h]
	_BYTE* v27; // [rsp+50h] [rbp-B0h]
	int v28; // [rsp+58h] [rbp-A8h]
	char v29; // [rsp+7Ch] [rbp-84h]
	unsigned __int8* v30; // [rsp+88h] [rbp-78h]
	int v31; // [rsp+B0h] [rbp-50h] BYREF
	__int64 v32; // [rsp+B4h] [rbp-4Ch]

	if (!a3)
		return 2147500037i64;
	v31 = 3;
	v32 = 3i64;
	v7 = 0;
	sub_1403376A0((__int64)&v31, a1, v23);
	v8 = LODWORD(v23[0]);
	v9 = LODWORD(v23[0]) + 1;
	v10 = (int*)sub_1403374E0(a2, (unsigned int)(LODWORD(v23[0]) + 1));
	v11 = (const __m128i*)v10;
	if (!v10)
	{
		v12 = 0x141D0CE10i64;
		v13 = v9;
	LABEL_23:
		v23[0] = (const __m128i*)v12;
		sub_1401A3130(11, 0, v23, v13);
		return 2147500037i64;
	}
	if ((int)sub_140337250((__int64)a1, v10, v8) < 0)
		return 2147500037i64;
	v14 = v30;
	v15 = v29;
	v11->m128i_i8[v8] = 0;
	v16 = v23[0];
	*(_QWORD*)(a3 + 152) = v11;
	*(_QWORD*)(a3 + 136) = 0i64;
	v25 = 0;
	while (1)
	{
		while (1)
		{
			if (v7 == 5)
			{
				v18 = 5;
			}
			else
			{
				v17 = sub_1403377F0((__int64)v24, v11, v23);
				v14 = v30;
				v15 = v29;
				v7 = v25;
				v16 = v23[0];
				v18 = v17;
			}
			if (v18)
				break;
			v21 = v26 + v28 + 1;
			if (v21 >= 0x80)
			{
				v12 = 0x141D0CDA0i64;
				v13 = v21;
				goto LABEL_23;
			}
			v22 = v27;
			*(_BYTE*)a3 = 47;
			sub_1407DEB70(a3 + 1, v22, v21);
			*(_BYTE*)(v21 + 1 + a3) = 0;
			*(_QWORD*)(a3 + 160) = v16;
		LABEL_18:
			v11 = v16;
		}
		v19 = v18 - 1;
		if (v19)
			break;
		if (v15 == 108)
		{
			v11 = v16;
			*(_WORD*)(a3 + 144) = sub_1407DF3E4(v14);
		}
		else
		{
			if (v15 != 115)
				goto LABEL_18;
			v20 = sub_1407DF3E4(v14);
			*(_QWORD*)(a3 + 136) = v14;
			v11 = v16;
			*(_DWORD*)(a3 + 128) = v20;
		}
	}
	if (v19 != 1)
	{
		v23[0] = (const __m128i*)0x141D0D010i64;
		sub_1401A3130(11, 0, v23);
		return 2147500037i64;
	}
	*(_QWORD*)(a3 + 168) = v16;
	return 0i64;
}
// 1400A6CA0: using guessed type char var_1D0[16];

