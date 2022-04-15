#include "../winhttp.h"

//----- (000000014060A770) ----------------------------------------------------
void __fastcall sub_14060A770(_QWORD* a1, int a2, unsigned int a3, float a4)
{
	__int64 v5; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdx
	int* v11; // r8
	bool v12; // zf
	int v13; // ecx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rax
	__int128* v17; // rdi
	unsigned int v18; // eax
	float* v19; // rax
	float v20; // xmm0_4
	int v21; // ecx
	int v22; // edx
	__m128 v23; // xmm3
	float v24; // xmm0_4
	int* v25; // rax
	float v26; // xmm1_4
	int v27; // ecx
	int v28; // eax
	float v29; // xmm1_4
	int v30; // ecx
	float v31; // xmm0_4
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rcx
	int v36; // eax
	float v37; // xmm1_4
	int v38; // ecx
	float v39; // xmm0_4
	__int64 v40; // rcx
	float v41; // [rsp+20h] [rbp-29h] BYREF
	__int64 v42; // [rsp+28h] [rbp-21h] BYREF
	int v43; // [rsp+30h] [rbp-19h]
	int v44; // [rsp+34h] [rbp-15h]
	int v45; // [rsp+38h] [rbp-11h]
	__int64 v46; // [rsp+3Ch] [rbp-Dh]
	int v47; // [rsp+44h] [rbp-5h]
	float v48; // [rsp+C0h] [rbp+77h] BYREF
	float v49; // [rsp+C8h] [rbp+7Fh] BYREF

	if (a3 > 1)
	{
		v49 = a4;
		v5 = a1[6];
		if (v5)
		{
			v9 = *(_QWORD*)(v5 + 8i64 * *(int*)(v5 + 104));
			if (v9)
			{
				if ((*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v9 + 848i64))(v9, *((unsigned int*)a1 + 11)))
				{
					v11 = (int*)qword_140C63750;
					if (*((_DWORD*)a1 + 9) != a2)
					{
						v12 = *((float*)a1 + 7) == 0.0;
						*((_DWORD*)a1 + 6) = 0;
						if (v12)
						{
							v13 = dword_140C45930;
							if (*v11 < dword_140C45930)
								v13 = *v11;
							*((_DWORD*)a1 + 7) = dword_140C45940[v13];
						}
					}
					v14 = a1[6];
					*((_DWORD*)a1 + 9) = a2;
					*((_DWORD*)a1 + 10) = a3;
					v15 = *(_QWORD*)(v14 + 8i64 * *(int*)(v14 + 104));
					if (v15)
					{
						v16 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v15 + 880i64))(
							v15,
							*((unsigned int*)a1 + 11),
							0i64);
						v11 = (int*)qword_140C63750;
						v17 = (__int128*)v16;
					}
					else
					{
						v17 = &xmmword_140C78390;
					}
					v18 = *((_DWORD*)a1 + 9);
					if (*((_DWORD*)a1 + 8) <= v18)
					{
						v34 = *a1;
						*((_DWORD*)a1 + 8) = v18;
						*((_DWORD*)a1 + 7) = 0;
						if (v34)
							(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v34 + 320i64))(v34, 0i64, v11);
						v33 = a1[2];
						if (!v33)
							goto LABEL_33;
					}
					else
					{
						v19 = &v49;
						if (a4 >= *((float*)a1 + 7))
							v19 = (float*)a1 + 7;
						v20 = *((float*)a1 + 7) - *v19;
						*((float*)a1 + 7) = v20;
						if (v20 == 0.0)
						{
							v21 = dword_140C458D0;
							v22 = *((_DWORD*)a1 + 8);
							v23 = 0i64;
							v23.m128_f32[0] = (float)*((int*)a1 + 10);
							if (*v11 < dword_140C458D0)
								v21 = *v11;
							v24 = (float)*((int*)a1 + 9);
							v25 = (int*)&v48;
							v48 = a4 * dword_140C458E0[v21];
							v41 = (float)((float)v22 * (float)(1.0 / v23.m128_f32[0])) - (float)(v24 * (float)(1.0 / v23.m128_f32[0]));
							if (v41 <= v48)
								v25 = (int*)&v41;
							v23.m128_f32[0] = (float)(v23.m128_f32[0] * *(float*)v25) + *((float*)a1 + 6);
							v26 = v23.m128_f32[0];
							v27 = (int)v23.m128_f32[0];
							if ((int)v23.m128_f32[0] != 0x80000000 && (float)v27 != v23.m128_f32[0])
								v26 = (float)(v27 - (_mm_movemask_ps(_mm_unpacklo_ps(v23, v23)) & 1));
							v10 = (unsigned int)(v22 - (int)v26);
							*((_DWORD*)a1 + 8) = v10;
							*((float*)a1 + 6) = v23.m128_f32[0] - (float)(int)v26;
						}
						if (*a1)
						{
							(*(void(__fastcall**)(_QWORD, __int64, int*))(*(_QWORD*)*a1 + 296i64))(*a1, 1i64, v11);
							(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*a1 + 320i64))(*a1, 1i64);
							(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 112i64))(*a1);
							(*(void(__fastcall**)(_QWORD, __int128*))(*(_QWORD*)*a1 + 72i64))(*a1, v17);
							v28 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a1 + 424i64))(
								*a1,
								150i64,
								0i64)
								+ 20);
							v29 = (float)*((int*)a1 + 8);
							v30 = *((_DWORD*)a1 + 10);
							v42 = 150i64;
							v43 = 0;
							v45 = 0;
							v31 = (float)v30;
							v32 = *a1;
							v46 = 3i64;
							v47 = 0;
							v44 = (int)(float)((float)(1.0 - (float)(v29 / v31)) * (float)v28);
							(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v32 + 584i64))(v32, 0i64, &v42);
						}
						v33 = a1[2];
						if (!v33)
							goto LABEL_33;
					}
					(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v33 + 112i64))(v33, v10, v11);
				LABEL_33:
					v35 = a1[1];
					if (v35)
					{
						(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v35 + 296i64))(v35, 1i64, v11);
						(*(void(__fastcall**)(_QWORD, __int64))(*(_QWORD*)a1[1] + 320i64))(a1[1], 1i64);
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[1] + 112i64))(a1[1]);
						(*(void(__fastcall**)(_QWORD, __int128*))(*(_QWORD*)a1[1] + 72i64))(a1[1], v17);
						v36 = *(_DWORD*)((*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(*(_QWORD*)a1[1] + 424i64))(
							a1[1],
							150i64,
							0i64)
							+ 20);
						v37 = (float)*((int*)a1 + 9);
						v38 = *((_DWORD*)a1 + 10);
						v42 = 150i64;
						v43 = 0;
						v45 = 0;
						v39 = (float)v38;
						v40 = a1[1];
						v46 = 3i64;
						v47 = 0;
						v44 = (int)(float)((float)(1.0 - (float)(v37 / v39)) * (float)v36);
						(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v40 + 584i64))(v40, 0i64, &v42);
					}
				}
			}
		}
	}
}
// 14060AA55: variable 'v10' is possibly undefined
// 14060AA55: variable 'v11' is possibly undefined
// 140C458D0: using guessed type int dword_140C458D0;
// 140C458E0: using guessed type float dword_140C458E0[14];
// 140C45930: using guessed type int dword_140C45930;
// 140C45940: using guessed type int dword_140C45940[14];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C78390: using guessed type __int128 xmmword_140C78390;

