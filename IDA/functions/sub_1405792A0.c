#include "../winhttp.h"

//----- (00000001405792A0) ----------------------------------------------------
unsigned int* __fastcall sub_1405792A0(
	__int64 a1,
	unsigned int a2,
	int a3,
	void(__fastcall*** a4)(_QWORD),
	void(__fastcall*** a5)(_QWORD),
	__int64* a6)
{
	unsigned int* result; // rax
	unsigned int* v9; // rsi
	__int64 v10; // rbp
	__int64 v11; // r14
	unsigned int v12; // ebx
	unsigned int* v13; // rdi
	unsigned int v14; // ebx
	__int64 v15; // rbx
	__int64 v16; // r8
	__m128 v17; // xmm6
	bool v18; // zf
	int v19; // eax
	unsigned __int64 v20; // rcx
	__int64 v21; // rax
	int v22; // xmm0_4
	int v23; // eax
	float v24; // xmm0_4
	float v25; // xmm2_4
	int v26; // eax
	float v27; // xmm1_4
	__int64* v28; // [rsp+30h] [rbp-178h]
	char v29[32]; // [rsp+40h] [rbp-168h] BYREF
	unsigned int v30; // [rsp+60h] [rbp-148h]
	int v31; // [rsp+90h] [rbp-118h]
	__int64 v32; // [rsp+D8h] [rbp-D0h]
	int v33; // [rsp+E0h] [rbp-C8h]
	float v34; // [rsp+E4h] [rbp-C4h]
	float v35; // [rsp+E8h] [rbp-C0h]
	float v36; // [rsp+ECh] [rbp-BCh]
	__m128 v37; // [rsp+F0h] [rbp-B8h]
	int v38; // [rsp+100h] [rbp-A8h]
	int v39; // [rsp+110h] [rbp-98h]
	int v40; // [rsp+114h] [rbp-94h]
	int v41; // [rsp+118h] [rbp-90h]
	int v42; // [rsp+11Ch] [rbp-8Ch]
	int v43; // [rsp+13Ch] [rbp-6Ch]

	v28 = (__int64*)qword_140C65B78;
	result = (unsigned int*)sub_14023D840(a2);
	if (result)
	{
		v9 = result + 1;
		v10 = 36i64;
		v11 = sub_1403D90D0(qword_140C65898, a3);
		do
		{
			result = (unsigned int*)qword_140C63840;
			v12 = *v9;
			if (qword_140C63840)
			{
				result = (unsigned int*)qword_140C63840(off_140A6D658, v12, qword_140C63858);
			}
			else
			{
				if (dword_140C64C94)
					goto LABEL_30;
				result = (unsigned int*)sub_14023D1A0();
				if ((int)result < 0)
					goto LABEL_30;
				result = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FE8 + 24i64))(
					qword_140C64FE8,
					v12);
			}
			v13 = result;
			if (result)
			{
				v14 = result[4];
				result = (unsigned int*)qword_140C63840;
				if (qword_140C63840)
				{
					result = (unsigned int*)qword_140C63840(off_140A6DFF8, v14, qword_140C63858);
					goto LABEL_14;
				}
				if (!dword_140C64C04)
				{
					result = (unsigned int*)sub_140248CA0();
					if ((int)result >= 0)
					{
						result = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(
							qword_140C63B40,
							v14);
					LABEL_14:
						v15 = (__int64)result;
						if (result)
						{
							v16 = result[37];
							if (!(_DWORD)v16
								|| v11
								&& (result = (unsigned int*)(*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
									qword_140C659A0,
									v11,
									v16,
									0i64,
									0i64,
									0),
									(_DWORD)result))
							{
								if (*(_DWORD*)(v15 + 4) == 5 && ((*(_BYTE*)(v15 + 88) & 4) != 0 || *(_DWORD*)(v15 + 12) == -1))
								{
									v17 = _mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128)v13[27], (__m128)v13[29]),
										_mm_unpacklo_ps((__m128)v13[28], (__m128)0i64));
									sub_140579ED0((__int64)v29, a3, v15, 0i64, 1);
									v18 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
									v19 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
									dword_140C8AF30 = v19;
									if (v18 || v19 == 0x3FFFFFFF)
									{
										v19 = 1;
										dword_140C8AF30 = 1;
									}
									v20 = *(_QWORD*)(v15 + 24);
									v39 = a3;
									v30 = v19 | 0x80000000;
									v40 = *(_DWORD*)(v15 + 16);
									v41 = *(_DWORD*)(v15 + 20);
									if (v20)
									{
										if (v20 <= qword_140C3FE70)
											v21 = v20 + qword_140C3FE68;
										else
											v21 = 0i64;
									}
									else
									{
										v21 = 0i64;
									}
									v22 = *(_DWORD*)(v15 + 52);
									v32 = v21;
									v23 = *(_DWORD*)(v15 + 32);
									v37 = v17;
									v33 = v22;
									v42 = v23;
									v24 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v15 + 56);
									v25 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v15 + 64);
									v38 = *(_DWORD*)(v15 + 40);
									v26 = *(_DWORD*)(v15 + 152);
									v34 = v24;
									v36 = v25;
									v27 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * *(float*)(v15 + 60);
									v43 = v26;
									v35 = v27;
									v31 = 0;
									result = (unsigned int*)sub_140576D20(v28, (__int64)v29, a4, a5, a6);
								}
							}
						}
					}
				}
			}
		LABEL_30:
			++v9;
			--v10;
		} while (v10);
	}
	return result;
}
// 140A6D658: using guessed type wchar_t *off_140A6D658[2];
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C64C94: using guessed type int dword_140C64C94;
// 140C64FE8: using guessed type __int64 qword_140C64FE8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C8AF30: using guessed type int dword_140C8AF30;

