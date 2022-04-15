//----- (000000014041E670) ----------------------------------------------------
__m128 __fastcall sub_14041E670(__int64 a1, unsigned int a2)
{
	int v2; // eax
	int v3; // ebx
	int v5; // ecx
	__int64 v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rax
	unsigned int v9; // eax
	int v10; // xmm8_4
	__int64 v11; // rax
	int v12; // xmm9_4
	__int64 v13; // rax
	int v14; // xmm10_4
	__int64 v15; // rax
	int v16; // xmm7_4
	__int64 v17; // rax
	__int64 v18; // rax
	int v19; // edi
	float v20; // xmm6_4
	float v21; // xmm1_4
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	float v29; // xmm7_4
	__int64 v30; // rax
	__int128 v31; // xmm0
	__int128 v32; // xmm7

	v2 = dword_140C8A910;
	v3 = 0;
	if ((dword_140C8A910 & 1) == 0)
	{
		v2 = dword_140C8A910 | 1;
		dword_140C8A91C = 0;
		dword_140C8A910 |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		v2 |= 2u;
		dword_140C8A984 = 0;
		dword_140C8A98C = 0;
		dword_140C8A994 = 0;
		dword_140C8A99C = 0;
		dword_140C8A9A4 = 0;
		dword_140C8A910 = v2;
	}
	if ((v2 & 4) != 0)
	{
		v5 = dword_140C8A9AC;
	}
	else
	{
		v2 |= 4u;
		v5 = 0;
		dword_140C8A9AC = 0;
		dword_140C8A910 = v2;
	}
	if ((v2 & 8) == 0)
	{
		v2 |= 8u;
		dword_140C8A954 = 0;
		dword_140C8A95C = 0;
		dword_140C8A964 = 0;
		dword_140C8A96C = 0;
		dword_140C8A974 = 0;
		dword_140C8A910 = v2;
	}
	if ((v2 & 0x10) == 0)
	{
		v2 |= 0x10u;
		dword_140C8A97C = 0;
		dword_140C8A910 = v2;
	}
	if ((v2 & 0x20) == 0)
	{
		dword_140C8A884 = 0;
		dword_140C8A88C = 0;
		dword_140C8A894 = 0;
		dword_140C8A89C = 0;
		dword_140C8A8A4 = 0;
		dword_140C8A910 = v2 | 0x20;
	}
	if (v5)
	{
		v7 = dword_140C8A9A8;
	}
	else
	{
		dword_140C8A9AC = 1;
		v6 = sub_140200220(0x403u);
		if (!v6)
		{
			dword_140C8A9A8 = 0;
			goto LABEL_18;
		}
		v7 = *(_DWORD*)(v6 + 4);
		dword_140C8A9A8 = v7;
	}
	if (a2 < v7)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8A99C)
		{
			v12 = dword_140C8A998;
		}
		else
		{
			dword_140C8A99C = 1;
			v11 = sub_140200220(0x404u);
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 36);
				dword_140C8A998 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8A998 = 0;
			}
		}
		if (dword_140C8A994)
		{
			v14 = dword_140C8A990;
		}
		else
		{
			dword_140C8A994 = 1;
			v13 = sub_140200220(0x404u);
			if (v13)
			{
				v14 = *(int*)(v13 + 32);
				dword_140C8A990 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8A990 = 0;
			}
		}
		if (dword_140C8A98C)
		{
			v16 = dword_140C8A988;
		}
		else
		{
			dword_140C8A98C = 1;
			v15 = sub_140200220(0x404u);
			if (v15)
			{
				v16 = *(int*)(v15 + 28);
				dword_140C8A988 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8A988 = 0;
			}
		}
		if (dword_140C8A984)
		{
			v10 = dword_140C8A980;
		}
		else
		{
			dword_140C8A984 = 1;
			v17 = sub_140200220(0x404u);
			if (v17)
				v10 = *(int*)(v17 + 24);
			dword_140C8A980 = v10;
		}
		if (dword_140C8A91C)
		{
			v3 = dword_140C8A918;
		}
		else
		{
			dword_140C8A91C = 1;
			v18 = sub_140200220(0x404u);
			if (v18)
				v3 = *(_DWORD*)(v18 + 4);
			dword_140C8A918 = v3;
		}
		v19 = a2 - v3;
	LABEL_49:
		v20 = (float)v19;
		v21 = (float)v19 * *(float*)&v16;
		goto LABEL_94;
	}
LABEL_18:
	if (dword_140C8A97C)
	{
		v9 = dword_140C8A978;
	}
	else
	{
		dword_140C8A97C = 1;
		v8 = sub_140200220(0x4E7u);
		if (!v8)
		{
			dword_140C8A978 = 0;
			goto LABEL_51;
		}
		v9 = *(_DWORD*)(v8 + 4);
		dword_140C8A978 = v9;
	}
	if (a2 < v9)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8A96C)
		{
			v12 = dword_140C8A968;
		}
		else
		{
			dword_140C8A96C = 1;
			v23 = sub_140200220(0x403u);
			if (v23)
			{
				v12 = *(_DWORD*)(v23 + 36);
				dword_140C8A968 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8A968 = 0;
			}
		}
		if (dword_140C8A964)
		{
			v14 = dword_140C8A960;
		}
		else
		{
			dword_140C8A964 = 1;
			v24 = sub_140200220(0x403u);
			if (v24)
			{
				v14 = *(int*)(v24 + 32);
				dword_140C8A960 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8A960 = 0;
			}
		}
		if (dword_140C8A95C)
		{
			v16 = dword_140C8A958;
		}
		else
		{
			dword_140C8A95C = 1;
			v25 = sub_140200220(0x403u);
			if (v25)
			{
				v16 = *(int*)(v25 + 28);
				dword_140C8A958 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8A958 = 0;
			}
		}
		if (dword_140C8A954)
		{
			v10 = dword_140C8A950;
			v19 = a2 - sub_14041F8E0();
		}
		else
		{
			dword_140C8A954 = 1;
			v26 = sub_140200220(0x403u);
			if (v26)
				v10 = *(int*)(v26 + 24);
			dword_140C8A950 = v10;
			v19 = a2 - sub_14041F8E0();
		}
		goto LABEL_49;
	}
LABEL_51:
	*(float*)&v10 = 0.0;
	if (dword_140C8A89C)
	{
		v12 = dword_140C8A898;
	}
	else
	{
		dword_140C8A89C = 1;
		v22 = sub_140200220(0x4E7u);
		if (v22)
		{
			v12 = *(_DWORD*)(v22 + 36);
			dword_140C8A898 = v12;
		}
		else
		{
			v12 = 0;
			dword_140C8A898 = 0;
		}
	}
	if (dword_140C8A894)
	{
		v14 = dword_140C8A890;
	}
	else
	{
		dword_140C8A894 = 1;
		v27 = sub_140200220(0x4E7u);
		if (v27)
		{
			v14 = *(int*)(v27 + 32);
			dword_140C8A890 = v14;
		}
		else
		{
			*(float*)&v14 = 0.0;
			dword_140C8A890 = 0;
		}
	}
	if (dword_140C8A88C)
	{
		v29 = *(float*)&dword_140C8A888;
	}
	else
	{
		dword_140C8A88C = 1;
		v28 = sub_140200220(0x4E7u);
		if (v28)
		{
			v29 = *(float*)(v28 + 28);
			dword_140C8A888 = LODWORD(v29);
		}
		else
		{
			v29 = 0.0;
			dword_140C8A888 = 0;
		}
	}
	if (dword_140C8A884)
	{
		v10 = dword_140C8A880;
	}
	else
	{
		dword_140C8A884 = 1;
		v30 = sub_140200220(0x4E7u);
		if (v30)
			v10 = *(int*)(v30 + 24);
		dword_140C8A880 = v10;
	}
	v20 = (float)(int)(a2 - sub_14041F930());
	v21 = v29 * v20;
LABEL_94:
	v31 = 0x402DF854u;
	*(double*)&v31 = sub_1408FBFC0(COERCE_DOUBLE(1076754516i64), v21);
	v32 = v31;
	*(float*)&v32 = *(float*)&v31 * *(float*)&v10;
	*(double*)&v31 = sub_1408FBFC0(COERCE_DOUBLE((unsigned __int64)LODWORD(v20)), *(float*)&v12);
	*(float*)&v32 = *(float*)&v32 + (float)(*(float*)&v31 * *(float*)&v14);
	return (__m128)v32;
}
// 140C8A880: using guessed type int dword_140C8A880;
// 140C8A884: using guessed type int dword_140C8A884;
// 140C8A888: using guessed type int dword_140C8A888;
// 140C8A88C: using guessed type int dword_140C8A88C;
// 140C8A890: using guessed type int dword_140C8A890;
// 140C8A894: using guessed type int dword_140C8A894;
// 140C8A898: using guessed type int dword_140C8A898;
// 140C8A89C: using guessed type int dword_140C8A89C;
// 140C8A8A4: using guessed type int dword_140C8A8A4;
// 140C8A910: using guessed type int dword_140C8A910;
// 140C8A918: using guessed type int dword_140C8A918;
// 140C8A91C: using guessed type int dword_140C8A91C;
// 140C8A950: using guessed type int dword_140C8A950;
// 140C8A954: using guessed type int dword_140C8A954;
// 140C8A958: using guessed type int dword_140C8A958;
// 140C8A95C: using guessed type int dword_140C8A95C;
// 140C8A960: using guessed type int dword_140C8A960;
// 140C8A964: using guessed type int dword_140C8A964;
// 140C8A968: using guessed type int dword_140C8A968;
// 140C8A96C: using guessed type int dword_140C8A96C;
// 140C8A974: using guessed type int dword_140C8A974;
// 140C8A978: using guessed type int dword_140C8A978;
// 140C8A97C: using guessed type int dword_140C8A97C;
// 140C8A980: using guessed type int dword_140C8A980;
// 140C8A984: using guessed type int dword_140C8A984;
// 140C8A988: using guessed type int dword_140C8A988;
// 140C8A98C: using guessed type int dword_140C8A98C;
// 140C8A990: using guessed type int dword_140C8A990;
// 140C8A994: using guessed type int dword_140C8A994;
// 140C8A998: using guessed type int dword_140C8A998;
// 140C8A99C: using guessed type int dword_140C8A99C;
// 140C8A9A4: using guessed type int dword_140C8A9A4;
// 140C8A9A8: using guessed type int dword_140C8A9A8;
// 140C8A9AC: using guessed type int dword_140C8A9AC;

