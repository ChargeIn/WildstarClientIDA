#include "../winhttp.h"

//----- (00000001403EB750) ----------------------------------------------------
void __fastcall sub_1403EB750(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5; // ecx
	float v6; // xmm8_4
	int v7; // ecx
	_DWORD* v8; // rdi
	float v9; // xmm6_4
	float v10; // xmm6_4
	__int64 v11; // rax
	int v12; // xmm3_4
	int v13; // eax
	_DWORD* v14; // rdi
	float v15; // xmm6_4
	__int64 v16; // rax
	__int64 v17; // rcx
	int v18; // eax
	int v19; // ecx
	float v20; // xmm10_4
	float v21; // xmm9_4
	float v22; // xmm4_4
	float v23; // xmm2_4
	double v24; // xmm0_8
	float v25; // xmm1_4
	int v26[4]; // [rsp+20h] [rbp-C8h] BYREF
	int v27[4]; // [rsp+30h] [rbp-B8h] BYREF
	__int64 v28[2]; // [rsp+40h] [rbp-A8h] BYREF
	int v29; // [rsp+50h] [rbp-98h]
	int v30; // [rsp+54h] [rbp-94h]
	__int64 v31; // [rsp+58h] [rbp-90h]

	v1 = *(_QWORD*)(a1 + 29632);
	*(_DWORD*)(a1 + 29640) = 1065353216;
	while (v1)
	{
		if (*(int*)(v1 + 72) < 1)
		{
			v3 = *(_QWORD*)(v1 + 56);
			if (v3)
			{
				v26[0] = 0;
				if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v3 + 24i64))(v3, v26, 0i64))
					goto LABEL_46;
			}
			v4 = *(_QWORD*)(v1 + 64);
			if (v4)
			{
				v27[0] = 0;
				if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 32i64))(v4, v27))
					goto LABEL_46;
			}
			*(_DWORD*)(v1 + 72) = 1;
		}
		if (*(int*)(v1 + 72) < 2)
			*(_DWORD*)(v1 + 76) = dword_140C636A8;
		v5 = *(_DWORD*)(v1 + 4);
		v6 = 0.0;
		if (v5)
		{
			v7 = v5 - 1;
			if (!v7)
			{
				v6 = fmaxf(0.0, fminf((float)(dword_140C636A8 - *(_DWORD*)(v1 + 76)) / (float)*(int*)(v1 + 12), 1.0));
				goto LABEL_38;
			}
			if (v7 != 1)
				goto LABEL_38;
			v8 = *(_DWORD**)(a1 + 120);
			if (v8 && (!v8[148] || *(_QWORD*)(a1 + 29568)))
			{
				v9 = (float)(*(int(__fastcall**)(_QWORD))(*(_QWORD*)v8 + 64i64))(*(_QWORD*)(a1 + 120));
				v10 = v9 / (float)(*(int(__fastcall**)(_DWORD*))(*(_QWORD*)v8 + 72i64))(v8);
				if ((dword_140DC27E0 & 2) != 0)
				{
					v12 = dword_140DC27E8;
				}
				else
				{
					dword_140DC27E0 |= 2u;
					v11 = sub_140200220(0x426u);
					if (v11)
					{
						v12 = *(int*)(v11 + 24);
						dword_140DC27E8 = v12;
					}
					else
					{
						*(float*)&v12 = 1.0;
						dword_140DC27E8 = 1065353216;
					}
				}
				if (v10 <= *(float*)&v12)
				{
					v13 = dword_140C45CF0;
					if (*(_DWORD*)qword_140C63750 < dword_140C45CF0)
						v13 = *(_DWORD*)qword_140C63750;
					goto LABEL_37;
				}
			}
		}
		else
		{
			v14 = *(_DWORD**)(a1 + 120);
			if (v14 && (!v14[148] || *(_QWORD*)(a1 + 29568)))
			{
				v15 = (float)(*(int(__fastcall**)(_QWORD))(*(_QWORD*)v14 + 64i64))(*(_QWORD*)(a1 + 120));
				v10 = v15 / (float)(*(int(__fastcall**)(_DWORD*))(*(_QWORD*)v14 + 72i64))(v14);
				if ((dword_140DC27E0 & 1) != 0)
				{
					v12 = dword_140DC27E4;
				}
				else
				{
					dword_140DC27E0 |= 1u;
					v16 = sub_140200220(0x25Du);
					if (v16)
					{
						v12 = *(int*)(v16 + 24);
						dword_140DC27E4 = v12;
					}
					else
					{
						*(float*)&v12 = 1.0;
						dword_140DC27E4 = 1065353216;
					}
				}
				if (v10 <= *(float*)&v12)
				{
					v13 = dword_140C45CF0;
					if (*(_DWORD*)qword_140C63750 < dword_140C45CF0)
						v13 = *(_DWORD*)qword_140C63750;
				LABEL_37:
					v6 = fmaxf(
						0.0,
						fminf(
							(float)(*(float*)&v12 - v10) / (float)(*(float*)&v12 - *((float*)&off_140C45CE0 + v13 + 8)),
							1.0));
				LABEL_38:
					if (*(int*)(v1 + 72) < 2)
					{
						v17 = *(_QWORD*)(v1 + 56);
						v18 = dword_140C636A8;
						*(float*)(v1 + 80) = v6;
						*(_DWORD*)(v1 + 76) = v18;
						*(_QWORD*)(v1 + 84) = 0i64;
						if (v17)
						{
							v28[0] = 1334i64;
							v28[1] = 1065353216i64;
							v29 = 0;
							v31 = 0i64;
							v30 = 3;
							(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v17 + 584i64))(v17, 0i64, v28);
						}
						*(_DWORD*)(v1 + 72) = 2;
					}
					v19 = dword_140C636A8 - *(_DWORD*)(v1 + 76);
					v20 = (float)((float)(*(float*)(v1 + 28) - *(float*)(v1 + 24)) * v6) + *(float*)(v1 + 24);
					v21 = (float)((float)(*(float*)(v1 + 36) - *(float*)(v1 + 32)) * v6) + *(float*)(v1 + 32);
					v22 = (float)((float)(*(float*)(v1 + 44) - *(float*)(v1 + 40)) * v6) + *(float*)(v1 + 40);
					if (v6 != *(float*)(v1 + 80))
					{
						v23 = *(float*)(v1 + 84);
						*(float*)(v1 + 80) = v6;
						*(float*)(v1 + 84) = (float)(v23 - (float)((float)((float)((float)v19 * 0.001) * v22) * 6.2831855))
							+ (float)((float)((float)((float)v19 * 0.001) * *(float*)(v1 + 88)) * 6.2831855);
					}
					HIDWORD(v24) = 0;
					*(float*)(v1 + 88) = v22;
					*(float*)&v24 = (float)((float)((float)((float)v19 * 0.001) * v22) * 6.2831855) + *(float*)(v1 + 84);
					*(float*)&v24 = sub_1408FE3D0(v24);
					v25 = (float)((float)(*(float*)(v1 + 52) - *(float*)(v1 + 48)) * v6) + *(float*)(v1 + 48);
					*(float*)(v1 + 92) = (float)((float)((float)(*(float*)&v24 + 1.0) * 0.5) * (float)(v21 - v20)) + v20;
					*(float*)(v1 + 96) = v25;
					*(float*)(a1 + 29640) = fminf(*(float*)(a1 + 29640), v25);
					goto LABEL_46;
				}
			}
		}
		*(_DWORD*)(v1 + 72) = 1;
	LABEL_46:
		v1 = *(_QWORD*)(v1 + 112);
	}
}
// 140C45CE0: using guessed type __int64 (__fastcall **off_140C45CE0)();
// 140C45CF0: using guessed type int dword_140C45CF0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140DC27E0: using guessed type int dword_140DC27E0;
// 140DC27E4: using guessed type int dword_140DC27E4;
// 140DC27E8: using guessed type int dword_140DC27E8;
// 1403EB750: using guessed type int var_C8[4];
// 1403EB750: using guessed type int var_B8[4];

