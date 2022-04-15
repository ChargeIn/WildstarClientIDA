//----- (000000014041EC10) ----------------------------------------------------
__m128 __fastcall sub_14041EC10(__int64 a1, unsigned int a2)
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

	v2 = dword_140C8A8A8;
	v3 = 0;
	if ((dword_140C8A8A8 & 1) == 0)
	{
		v2 = dword_140C8A8A8 | 1;
		dword_140C8A854 = 0;
		dword_140C8A8A8 |= 1u;
	}
	if ((v2 & 2) == 0)
	{
		v2 |= 2u;
		dword_140C8A85C = 0;
		dword_140C8A864 = 0;
		dword_140C8A86C = 0;
		dword_140C8A874 = 0;
		dword_140C8A87C = 0;
		dword_140C8A8A8 = v2;
	}
	if ((v2 & 4) != 0)
	{
		v5 = dword_140C8A8E4;
	}
	else
	{
		v2 |= 4u;
		v5 = 0;
		dword_140C8A8E4 = 0;
		dword_140C8A8A8 = v2;
	}
	if ((v2 & 8) == 0)
	{
		v2 |= 8u;
		dword_140C8A8EC = 0;
		dword_140C8A8F4 = 0;
		dword_140C8A8FC = 0;
		dword_140C8A904 = 0;
		dword_140C8A90C = 0;
		dword_140C8A8A8 = v2;
	}
	if ((v2 & 0x10) == 0)
	{
		v2 |= 0x10u;
		dword_140C8A8B4 = 0;
		dword_140C8A8A8 = v2;
	}
	if ((v2 & 0x20) == 0)
	{
		dword_140C8A8BC = 0;
		dword_140C8A8C4 = 0;
		dword_140C8A8CC = 0;
		dword_140C8A8D4 = 0;
		dword_140C8A8DC = 0;
		dword_140C8A8A8 = v2 | 0x20;
	}
	if (v5)
	{
		v7 = dword_140C8A8E0;
	}
	else
	{
		dword_140C8A8E4 = 1;
		v6 = sub_140200220(0x954u);
		if (!v6)
		{
			dword_140C8A8E0 = 0;
			goto LABEL_18;
		}
		v7 = *(_DWORD*)(v6 + 4);
		dword_140C8A8E0 = v7;
	}
	if (a2 < v7)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8A874)
		{
			v12 = dword_140C8A870;
		}
		else
		{
			dword_140C8A874 = 1;
			v11 = sub_140200220(0x953u);
			if (v11)
			{
				v12 = *(_DWORD*)(v11 + 36);
				dword_140C8A870 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8A870 = 0;
			}
		}
		if (dword_140C8A86C)
		{
			v14 = dword_140C8A868;
		}
		else
		{
			dword_140C8A86C = 1;
			v13 = sub_140200220(0x953u);
			if (v13)
			{
				v14 = *(int*)(v13 + 32);
				dword_140C8A868 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8A868 = 0;
			}
		}
		if (dword_140C8A864)
		{
			v16 = dword_140C8A860;
		}
		else
		{
			dword_140C8A864 = 1;
			v15 = sub_140200220(0x953u);
			if (v15)
			{
				v16 = *(int*)(v15 + 28);
				dword_140C8A860 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8A860 = 0;
			}
		}
		if (dword_140C8A85C)
		{
			v10 = dword_140C8A858;
		}
		else
		{
			dword_140C8A85C = 1;
			v17 = sub_140200220(0x953u);
			if (v17)
				v10 = *(int*)(v17 + 24);
			dword_140C8A858 = v10;
		}
		if (dword_140C8A854)
		{
			v3 = dword_140C8A850;
		}
		else
		{
			dword_140C8A854 = 1;
			v18 = sub_140200220(0x953u);
			if (v18)
				v3 = *(_DWORD*)(v18 + 4);
			dword_140C8A850 = v3;
		}
		v19 = a2 - v3;
	LABEL_49:
		v20 = (float)v19;
		v21 = (float)v19 * *(float*)&v16;
		goto LABEL_94;
	}
LABEL_18:
	if (dword_140C8A8B4)
	{
		v9 = dword_140C8A8B0;
	}
	else
	{
		dword_140C8A8B4 = 1;
		v8 = sub_140200220(0x956u);
		if (!v8)
		{
			dword_140C8A8B0 = 0;
			goto LABEL_51;
		}
		v9 = *(_DWORD*)(v8 + 4);
		dword_140C8A8B0 = v9;
	}
	if (a2 < v9)
	{
		*(float*)&v10 = 0.0;
		if (dword_140C8A904)
		{
			v12 = dword_140C8A900;
		}
		else
		{
			dword_140C8A904 = 1;
			v23 = sub_140200220(0x954u);
			if (v23)
			{
				v12 = *(_DWORD*)(v23 + 36);
				dword_140C8A900 = v12;
			}
			else
			{
				v12 = 0;
				dword_140C8A900 = 0;
			}
		}
		if (dword_140C8A8FC)
		{
			v14 = dword_140C8A8F8;
		}
		else
		{
			dword_140C8A8FC = 1;
			v24 = sub_140200220(0x954u);
			if (v24)
			{
				v14 = *(int*)(v24 + 32);
				dword_140C8A8F8 = v14;
			}
			else
			{
				*(float*)&v14 = 0.0;
				dword_140C8A8F8 = 0;
			}
		}
		if (dword_140C8A8F4)
		{
			v16 = dword_140C8A8F0;
		}
		else
		{
			dword_140C8A8F4 = 1;
			v25 = sub_140200220(0x954u);
			if (v25)
			{
				v16 = *(int*)(v25 + 28);
				dword_140C8A8F0 = v16;
			}
			else
			{
				*(float*)&v16 = 0.0;
				dword_140C8A8F0 = 0;
			}
		}
		if (dword_140C8A8EC)
		{
			v10 = dword_140C8A8E8;
			v19 = a2 - sub_14041F980();
		}
		else
		{
			dword_140C8A8EC = 1;
			v26 = sub_140200220(0x954u);
			if (v26)
				v10 = *(int*)(v26 + 24);
			dword_140C8A8E8 = v10;
			v19 = a2 - sub_14041F980();
		}
		goto LABEL_49;
	}
LABEL_51:
	*(float*)&v10 = 0.0;
	if (dword_140C8A8D4)
	{
		v12 = dword_140C8A8D0;
	}
	else
	{
		dword_140C8A8D4 = 1;
		v22 = sub_140200220(0x956u);
		if (v22)
		{
			v12 = *(_DWORD*)(v22 + 36);
			dword_140C8A8D0 = v12;
		}
		else
		{
			v12 = 0;
			dword_140C8A8D0 = 0;
		}
	}
	if (dword_140C8A8CC)
	{
		v14 = dword_140C8A8C8;
	}
	else
	{
		dword_140C8A8CC = 1;
		v27 = sub_140200220(0x956u);
		if (v27)
		{
			v14 = *(int*)(v27 + 32);
			dword_140C8A8C8 = v14;
		}
		else
		{
			*(float*)&v14 = 0.0;
			dword_140C8A8C8 = 0;
		}
	}
	if (dword_140C8A8C4)
	{
		v29 = *(float*)&dword_140C8A8C0;
	}
	else
	{
		dword_140C8A8C4 = 1;
		v28 = sub_140200220(0x956u);
		if (v28)
		{
			v29 = *(float*)(v28 + 28);
			dword_140C8A8C0 = LODWORD(v29);
		}
		else
		{
			v29 = 0.0;
			dword_140C8A8C0 = 0;
		}
	}
	if (dword_140C8A8BC)
	{
		v10 = dword_140C8A8B8;
	}
	else
	{
		dword_140C8A8BC = 1;
		v30 = sub_140200220(0x956u);
		if (v30)
			v10 = *(int*)(v30 + 24);
		dword_140C8A8B8 = v10;
	}
	v20 = (float)(int)(a2 - sub_14041F9D0());
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
// 140C8A850: using guessed type int dword_140C8A850;
// 140C8A854: using guessed type int dword_140C8A854;
// 140C8A858: using guessed type int dword_140C8A858;
// 140C8A85C: using guessed type int dword_140C8A85C;
// 140C8A860: using guessed type int dword_140C8A860;
// 140C8A864: using guessed type int dword_140C8A864;
// 140C8A868: using guessed type int dword_140C8A868;
// 140C8A86C: using guessed type int dword_140C8A86C;
// 140C8A870: using guessed type int dword_140C8A870;
// 140C8A874: using guessed type int dword_140C8A874;
// 140C8A87C: using guessed type int dword_140C8A87C;
// 140C8A8A8: using guessed type int dword_140C8A8A8;
// 140C8A8B0: using guessed type int dword_140C8A8B0;
// 140C8A8B4: using guessed type int dword_140C8A8B4;
// 140C8A8B8: using guessed type int dword_140C8A8B8;
// 140C8A8BC: using guessed type int dword_140C8A8BC;
// 140C8A8C0: using guessed type int dword_140C8A8C0;
// 140C8A8C4: using guessed type int dword_140C8A8C4;
// 140C8A8C8: using guessed type int dword_140C8A8C8;
// 140C8A8CC: using guessed type int dword_140C8A8CC;
// 140C8A8D0: using guessed type int dword_140C8A8D0;
// 140C8A8D4: using guessed type int dword_140C8A8D4;
// 140C8A8DC: using guessed type int dword_140C8A8DC;
// 140C8A8E0: using guessed type int dword_140C8A8E0;
// 140C8A8E4: using guessed type int dword_140C8A8E4;
// 140C8A8E8: using guessed type int dword_140C8A8E8;
// 140C8A8EC: using guessed type int dword_140C8A8EC;
// 140C8A8F0: using guessed type int dword_140C8A8F0;
// 140C8A8F4: using guessed type int dword_140C8A8F4;
// 140C8A8F8: using guessed type int dword_140C8A8F8;
// 140C8A8FC: using guessed type int dword_140C8A8FC;
// 140C8A900: using guessed type int dword_140C8A900;
// 140C8A904: using guessed type int dword_140C8A904;
// 140C8A90C: using guessed type int dword_140C8A90C;

