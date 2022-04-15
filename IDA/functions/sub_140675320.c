//----- (0000000140675320) ----------------------------------------------------
__int64 __fastcall sub_140675320(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	unsigned int v5; // esi
	int v6; // edx
	float v7; // xmm6_4
	__int64 v8; // rbx
	__int64 v9; // rax
	_DWORD* v10; // rax
	int v11; // r9d
	int v12; // edx
	__int64 v13; // rax
	int v14; // ecx
	__int64 v15; // rax
	__int64 v16; // r15
	__int64 v17; // rbx
	__int64 v18; // r12
	float v19; // ecx
	_QWORD* v20; // rsi
	__int64 v21; // rax
	__int64 v22; // r8
	__int64 v23; // r8
	_QWORD* v24; // rcx
	_QWORD* v26; // rcx
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	__int64 v30; // r9
	__m128 v31; // [rsp+30h] [rbp-29h] BYREF
	__int64 v32; // [rsp+40h] [rbp-19h] BYREF
	__int64 v33; // [rsp+48h] [rbp-11h]
	__int64 v34; // [rsp+50h] [rbp-9h]
	__int64 v35[3]; // [rsp+58h] [rbp-1h] BYREF
	__int64 v36; // [rsp+D8h] [rbp+7Fh]

	v2 = 0i64;
	v5 = 0;
	if (*(_DWORD*)(qword_140C65898 + 26180) == 49)
		v6 = *(_DWORD*)(qword_140C65898 + 26176);
	else
		v6 = 0;
	v7 = 1.0;
	v8 = sub_1403D90D0(qword_140C65898, v6);
	if (*(_DWORD*)(a1 + 1344))
		v9 = *(_QWORD*)(a1 + 168);
	else
		v9 = 0i64;
	v10 = (_DWORD*)sub_140243A00(*(_DWORD*)(v9 + 448));
	if (v10)
	{
		v11 = v10[1];
		v31 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)(unsigned int)v10[3], (__m128)0i64),
			_mm_unpacklo_ps((__m128)(unsigned int)v10[4], (__m128)0i64));
		LODWORD(v7) = sub_1405E6230(qword_140C65898 + 5784, 14, v31.m128_f32, v11).m128_u32[0];
		goto LABEL_9;
	}
	if (!v8
		|| (v7 = *(float*)(v8 + 14044), !*(_DWORD*)(a1 + 1364))
		|| !*(_DWORD*)(a1 + 952)
		|| a1 == -952
		|| (v23 = *(unsigned int*)(a1 + 1188), (_DWORD)v23)
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				0i64,
				v23,
				0i64,
				0i64,
				0)
		&& (*(_BYTE*)(a1 + 1196) & 1) != 0)
	{
	LABEL_9:
		v36 = 2i64;
		do
		{
			v12 = *(_DWORD*)(a1 + 1336);
			v13 = a1 + 192;
			if (!v12)
				v13 = 0i64;
			if (*(_QWORD*)(v13 + v2 + 40))
			{
				v14 = *(_DWORD*)(v13 + v2 + 48);
				if (v14 < 15
					|| v14 == 15 && (*(_DWORD*)(v13 + v2 + 56) || *(_DWORD*)(v13 + v2 + 52) == 1 || *(_DWORD*)(v13 + v2 + 60)))
				{
					v15 = a1 + 192;
					if (!v12)
						v15 = 0i64;
					v16 = *(_QWORD*)(v15 + v2 + 40);
					v17 = *(_QWORD*)(v15 + v2 + 48);
					v18 = *(_QWORD*)(v15 + v2 + 56);
					v19 = v7;
					if (v7 < 0.0)
						LODWORD(v19) = 0x80000000 - LODWORD(v7);
					if ((int)abs32(LODWORD(v19) - 1065353216) > 84 && (_DWORD)v17 == 1)
					{
						v33 = 1i64;
						v17 = 1i64;
						v34 = 0i64;
						v18 = 0i64;
						v16 = (unsigned int)(int)(float)((float)(int)v16 * v7);
					}
					v20 = *(_QWORD**)(a2 + 16);
					if (*(_QWORD*)(v20[4] + 120i64) >= *(_QWORD*)(v20[4] + 112i64))
						sub_14005E2C0(*(_QWORD*)(a2 + 16));
					v21 = v20[5];
					if (v21 == v20[10])
						v22 = v20[15];
					else
						v22 = *(_QWORD*)(**(_QWORD**)(v21 + 8) + 24i64);
					v26 = (_QWORD*)sub_1400627D0((__int64)v20, 0x18ui64, v22);
					v27 = v20[2];
					*(_QWORD*)v27 = v26;
					*(_DWORD*)(v27 + 8) = 7;
					v20[2] += 16i64;
					v26[6] = v16;
					v26[7] = v17;
					v26[8] = v18;
					v28 = v20[4];
					v29 = sub_140062650((__int64)v20, (unsigned __int64*)"Game.Money", 0xAui64);
					v30 = v20[2];
					v31.m128_u64[0] = v29;
					v31.m128_i32[2] = 4;
					sub_14005E8E0((__int64)v20, v28 + 160, (int*)&v31, v30);
					v20[2] += 16i64;
					sub_140058BF0((__int64)v20, -2);
					sub_1400FB470(a2);
					v5 = 1;
					*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
				}
			}
			v2 += 24i64;
			--v36;
		} while (v36);
		return v5;
	}
	v24 = *(_QWORD**)(a2 + 16);
	v32 = *(_QWORD*)(a1 + 1088);
	v33 = *(_QWORD*)(a1 + 1096);
	v34 = *(_QWORD*)(a1 + 1104);
	v35[0] = *(_QWORD*)(a1 + 1112);
	v35[1] = *(_QWORD*)(a1 + 1120);
	v35[2] = *(_QWORD*)(a1 + 1128);
	if ((unsigned int)sub_140501210(v24, &v32))
	{
		sub_1400FB470(a2);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if ((unsigned int)sub_140501210(*(_QWORD**)(a2 + 16), v35))
	{
		sub_1400FB470(a2);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

