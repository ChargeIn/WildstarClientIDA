//----- (00000001403D16C0) ----------------------------------------------------
__int64 __fastcall sub_1403D16C0(__int64 a1, int a2, int a3)
{
	int v7; // eax
	__int64 v8; // rax
	int v9; // xmm0_4
	__int64 v10; // rax
	int v11; // xmm0_4
	__int64 v12; // rax
	int v13; // xmm1_4
	__int64 v14; // rax
	unsigned int v15; // edi
	int v16; // r14d
	double v17; // xmm0_8
	double v18; // xmm0_8
	int v19; // r15d
	int v20; // ebx
	__int64 v21; // rcx
	__int64 v22; // rax
	int v23; // xmm0_4
	__int64 v24; // rax
	int v25; // edx
	__int64 v26; // rbx
	__int64 v27; // rsi
	unsigned __int64 i; // rbx
	__int64 v29; // rax
	__int64 v30; // r14
	int v31; // edx
	__int64 v32; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v33; // [rsp+28h] [rbp-20h]
	int v34; // [rsp+60h] [rbp+18h] BYREF

	v34 = a3;
	if (a2 >= 3)
		return 0i64;
	v7 = dword_140DC2348;
	if ((dword_140DC2348 & 1) == 0)
	{
		dword_140DC2348 |= 1u;
		v8 = sub_140200220(0x45Eu);
		if (v8)
			v9 = *(_DWORD*)(v8 + 24);
		else
			v9 = 1039206529;
		v7 = dword_140DC2348;
		dword_140DC234C = v9;
	}
	if ((v7 & 2) == 0)
	{
		dword_140DC2348 = v7 | 2;
		v10 = sub_140200220(0x45Eu);
		if (v10)
			v11 = *(_DWORD*)(v10 + 28);
		else
			v11 = -1064094925;
		v7 = dword_140DC2348;
		dword_140DC2350 = v11;
	}
	if ((v7 & 4) != 0)
	{
		v13 = dword_140DC2354;
	}
	else
	{
		dword_140DC2348 = v7 | 4;
		v12 = sub_140200220(0x45Eu);
		if (v12)
		{
			v13 = *(_DWORD*)(v12 + 32);
			dword_140DC2354 = v13;
		}
		else
		{
			v13 = 1082130432;
			dword_140DC2354 = 1082130432;
		}
	}
	v14 = *(_QWORD*)(a1 + 120);
	v15 = 0;
	if (v14)
		v16 = *(_DWORD*)(v14 + 56);
	else
		v16 = 0;
	HIDWORD(v17) = 0;
	*(float*)&v17 = (float)v16 + *(float*)&dword_140DC2350;
	v18 = sub_1408FBFC0(v17, *(float*)&v13);
	v19 = 1;
	if ((int)(float)((float)(*(float*)&v18 * *(float*)&dword_140DC234C) / (float)(v16 - 5)) > 1)
		v19 = (int)(float)((float)(*(float*)&v18 * *(float*)&dword_140DC234C) / (float)(v16 - 5));
	if (!a2)
	{
		v31 = 0;
		return (unsigned int)(v19 * (__int16)sub_1403CDE70(a1, v31));
	}
	v20 = a2 - 1;
	if (!v20)
	{
		if (!sub_1401FD360(a3))
			return 0i64;
		v31 = a3;
		return (unsigned int)(v19 * (__int16)sub_1403CDE70(a1, v31));
	}
	if (v20 == 1)
	{
		if (sub_1401FD7A0(a3) && (unsigned int)sub_1403CDF50(a1, a3, *(_BYTE*)(a1 + 28140), 1))
		{
			if ((dword_140DC2348 & 8) == 0)
			{
				dword_140DC2348 |= 8u;
				v22 = sub_140200220(0x4A6u);
				if (v22)
					v23 = *(_DWORD*)(v22 + 24);
				else
					v23 = 1066192077;
				dword_140DC2358 = v23;
			}
			v24 = *(_QWORD*)(a1 + 120);
			if (v24)
				v25 = *(_DWORD*)(v24 + 220);
			else
				v25 = 23;
			v33 = 0i64;
			v32 = 0i64;
			v26 = sub_14079B380(v21, v25);
			sub_140003460(&v32, &v34);
			sub_1403CDAA0(a1, a3, v26, &v32);
			v27 = v32;
			for (i = 0i64; i < v33; ++i)
			{
				v29 = sub_1401FD7A0(*(_DWORD*)(v27 + 4 * i));
				v27 = v32;
				v30 = v29;
				if (v29 && (unsigned int)sub_1403CDF50(a1, *(_DWORD*)(v32 + 4 * i), *(_BYTE*)(a1 + 28140), 1))
					LOWORD(v15) = *(_WORD*)(v30 + 16) + v15;
			}
			v15 = (int)(float)((float)((float)v19 * *(float*)&dword_140DC2358) * (float)(__int16)v15);
			if (v27)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
			return v15;
		}
		return 0i64;
	}
	return v15;
}
// 1403D189A: variable 'v21' is possibly undefined
// 140DC2348: using guessed type int dword_140DC2348;
// 140DC234C: using guessed type int dword_140DC234C;
// 140DC2350: using guessed type int dword_140DC2350;
// 140DC2354: using guessed type int dword_140DC2354;
// 140DC2358: using guessed type int dword_140DC2358;

