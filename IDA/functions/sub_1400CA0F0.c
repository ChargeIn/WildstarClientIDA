//----- (00000001400CA0F0) ----------------------------------------------------
void __fastcall sub_1400CA0F0(char* a1)
{
	__int64 v2; // rcx
	int v3; // eax
	float v4; // xmm6_4
	__int64 v5; // rcx
	__int64 v6; // rdi
	__int64 v7; // rcx
	int v8; // eax
	__int64* v9; // rcx
	double v10; // xmm0_8
	float v11; // xmm1_4
	__int64 v12; // rcx
	__int64 v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // [rsp+20h] [rbp-38h] BYREF
	__int64 v18; // [rsp+28h] [rbp-30h]
	__int64 v19; // [rsp+60h] [rbp+8h] BYREF

	if (*((float*)a1 + 162) <= 0.0)
		return;
	v2 = *((_QWORD*)a1 + 2);
	if (v2)
	{
		if (!sub_1400D1A60(v2))
			return;
	}
	v3 = dword_140C3C1E0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3C1E0)
		v3 = *(_DWORD*)qword_140C63750;
	v4 = dword_140C3C1F0[v3];
	v5 = *((_QWORD*)a1 + 36);
	if (v5)
	{
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5))
		{
			v6 = *((_QWORD*)a1 + 36);
			if ((int)sub_1400FB720(v6, L"fHideTransition", 3) >= 0)
			{
				v7 = *(_QWORD*)(*(_QWORD*)(v6 + 16) + 16i64);
				v8 = *(_DWORD*)(v7 - 8);
				v9 = (__int64*)(v7 - 16);
				if (v8 != 3)
				{
					if (v8 != 4 || !sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v19))
					{
						v10 = 0.0;
					LABEL_14:
						v11 = v10;
						*(_QWORD*)(*(_QWORD*)(v6 + 16) + 16i64) -= 32i64;
						if (v11 > 0.0)
							v4 = 1.0 / v11;
						goto LABEL_16;
					}
					LODWORD(v18) = 3;
					v9 = &v17;
					v17 = v19;
				}
				v10 = *(double*)v9;
				goto LABEL_14;
			}
		}
	}
LABEL_16:
	sub_1400D42F0((__int64)a1, 0, 0, v4);
	v12 = *((_QWORD*)a1 + 45);
	if (v12)
		sub_14010B100((unsigned int*)(v12 + 312));
	(*(void(__fastcall**)(char*))(*(_QWORD*)a1 + 472i64))(a1);
	v13 = *((_QWORD*)a1 + 4);
	v14 = *(_QWORD*)(v13 + 2880);
	if (v14)
	{
		v15 = *(_QWORD*)(v14 + 16);
		if (v15)
		{
			if ((char*)v15 == a1 || sub_1400D1A90(v15, (__int64)a1))
				sub_1400E8BF0(v13);
		}
	}
	v16 = *((_QWORD*)a1 + 4);
	if (v16 && *(char**)(v16 + 2880) == a1)
		sub_1400E8BF0(v16);
	sub_1400E9490(*((_QWORD*)a1 + 4), *((_DWORD*)a1 + 6));
	if (!*((_QWORD*)a1 + 2))
		(*(void(__fastcall**)(_QWORD, char*))(**((_QWORD**)a1 + 4) + 96i64))(*((_QWORD*)a1 + 4), a1);
	sub_1400D4070((__int64)a1, 0xEu, a1, &unk_1409D0252, v17, v18);
}
// 1400CA26A: variable 'v13' is possibly undefined
// 140A15278: using guessed type wchar_t aFhidetransitio[16];
// 140C3C1E0: using guessed type int dword_140C3C1E0;
// 140C3C1F0: using guessed type float dword_140C3C1F0[22];
// 140C63750: using guessed type __int64 qword_140C63750;

