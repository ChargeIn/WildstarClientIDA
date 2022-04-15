//----- (00000001405B45E0) ----------------------------------------------------
float __fastcall sub_1405B45E0(__int64 a1, unsigned int a2, unsigned int a3)
{
	unsigned int v3; // edi
	int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rsi
	__int64 v9; // rax
	int v10; // xmm0_4
	float result; // xmm0_4
	__int64 v12; // rax
	unsigned __int64 v13; // rdx
	int v14; // r8d
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	__int64 v17; // rax
	int v18; // r8d
	int v19; // edx
	__int64 v20; // rcx
	float v21; // xmm6_4
	float v22; // xmm0_4

	v3 = a3;
	if (a3 == 5)
		v3 = 4;
	if ((unsigned int)(*(_DWORD*)(a1 + 128) - 24) > 1)
		goto LABEL_17;
	v6 = *(_DWORD*)(a1 + 688);
	if (!v6)
		goto LABEL_17;
	v7 = sub_1403D90D0(qword_140C65898, v6);
	v8 = v7;
	if (!v7)
		goto LABEL_17;
	a2 = *(_DWORD*)(v7 + 4232);
	if (*(_DWORD*)(v7 + 4896) != 2)
		v3 = *(_DWORD*)(v7 + 4896);
	if (*(_DWORD*)(a1 + 684) || v3 && v3 - 4 > 1)
		goto LABEL_17;
	if ((dword_140DC34A8 & 1) == 0)
	{
		dword_140DC34A8 |= 1u;
		v9 = sub_140200220(0x4FFu);
		if (v9)
			v10 = *(_DWORD*)(v9 + 24);
		else
			v10 = 1065353216;
		dword_140DC34AC = v10;
	}
	result = sub_1405B45E0(v8, a2, v3) * *(float*)&dword_140DC34AC;
	if (result <= 0.0)
	{
	LABEL_17:
		v12 = *(_QWORD*)(a1 + 24);
		if (v12 && *(_DWORD*)(v12 + 4) == 7)
		{
			v13 = *(_QWORD*)(a1 + 408);
			v14 = 0;
			v15 = 0i64;
			if (v13)
			{
				v16 = *(_QWORD*)(a1 + 400);
				while (*(_DWORD*)v16 || *(_BYTE*)(v16 + 4))
				{
					++v15;
					v16 += 12i64;
					if (v15 >= v13)
						goto LABEL_26;
				}
				v14 = *(_DWORD*)(*(_QWORD*)(a1 + 400) + 12 * v15 + 8);
			}
		LABEL_26:
			v17 = sub_1403D90D0(qword_140C65898, v14);
			v18 = v3;
			v19 = a2;
			v20 = a1;
			if (v17)
			{
				v21 = *(float*)(v17 + 3004);
				v22 = sub_1405B4780(a1, a2, v3).m128_f32[0] * v21;
				return v22 * *(float*)(a1 + 2276);
			}
		}
		else
		{
			v18 = v3;
			v19 = a2;
			v20 = a1;
		}
		LODWORD(v22) = sub_1405B4780(v20, v19, v18).m128_u32[0];
		return v22 * *(float*)(a1 + 2276);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC34A8: using guessed type int dword_140DC34A8;
// 140DC34AC: using guessed type int dword_140DC34AC;

