#include "../winhttp.h"

//----- (00000001403B2240) ----------------------------------------------------
__int64 __fastcall sub_1403B2240(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	__m128* a5,
	__int64 a6,
	float a7,
	__int64 a8)
{
	__m128* v8; // rbx
	__int64 result; // rax
	__int64 v12; // rax
	__int64 v13; // rdx
	unsigned __int64 v14; // rdi
	int v15; // eax
	_DWORD* v16; // rcx
	int v17; // ebp
	int v18; // eax
	int v19; // esi
	int v20; // eax
	__int64 v21; // rax
	BOOL v22; // r15d
	BOOL v23; // eax
	BOOL v24; // eax
	BOOL v25; // eax
	int v26; // eax
	int v27; // eax
	int v28; // eax
	int v29; // eax
	unsigned int v30; // ebp
	__int64 v31; // r12
	int v32; // eax
	__int64 v33; // rsi
	__int64 v34; // rcx
	__int64 v35; // rsi
	__int64 v36; // rax
	__int64 v37; // rcx
	__int64 v38; // r15
	int v39; // eax
	int v40; // edx
	__m128* v41; // rsi
	__int64 v42; // rax
	float v43; // xmm8_4
	float v44; // xmm11_4
	__m128 v45; // xmm7
	float v46; // xmm7_4
	unsigned __int64 v47; // rbp
	float v48; // xmm9_4
	__int64 v49; // rax
	unsigned __int64 v50; // rbp
	float v51; // xmm0_4
	__int64 v52; // rax
	float v53; // xmm10_4
	unsigned __int64 v54; // rbp
	float v55; // xmm9_4
	__int64 v56; // rax
	unsigned __int64 v57; // rbp
	float v58; // xmm0_4
	__int64 v59; // rax
	float v60; // xmm7_4
	float v61; // xmm8_4
	unsigned __int64 v62; // rbp
	float v63; // xmm7_4
	__int64 v64; // rax
	unsigned __int64 v65; // rbp
	float v66; // xmm1_4
	__int64 v67; // rax
	float v68; // xmm0_4
	float* v69; // r15
	float v70; // xmm3_4
	unsigned __int64 v71; // rax
	int v72; // eax
	__int64 v73; // rcx
	unsigned __int64 v74; // r8
	int* v75; // rdx
	__m128 v77; // [rsp+30h] [rbp-A8h]
	__m128 v78; // [rsp+40h] [rbp-98h]
	__m128 v79; // [rsp+40h] [rbp-98h]
	__int64 v80; // [rsp+E0h] [rbp+8h]

	v80 = a1;
	v8 = a5;
	if (!a5)
		return 91i64;
	if (a5[82].m128_i32[2])
		return 96i64;
	if ((__m128*)a3 != a5)
	{
		v12 = sub_1403D90D0(qword_140C65898, a5[12].m128_i32[0]);
		if (v12 && *(_DWORD*)(v12 + 128) == 9)
			return 96i64;
		a1 = v80;
	}
	if (*(_DWORD*)(*(_QWORD*)(a2 + 112) + 356i64)
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 40i64))(a1, v8->m128_u32[2]))
	{
		return 140i64;
	}
	result = sub_1403B4020(a2, v8->m128_f32);
	if ((_DWORD)result && (_DWORD)result != 317)
		return result;
	v14 = 0i64;
	if (a8)
		v15 = *(_DWORD*)(a8 + 28);
	else
		v15 = 0;
	v16 = *(_DWORD**)(a2 + 112);
	if (!v16[79])
		goto LABEL_96;
	v17 = v16[81];
	v18 = ~v15;
	v19 = v18 & v16[80];
	if (((unsigned __int8)v18 & (_BYTE)v16[80] & 1) == 0)
		goto LABEL_27;
	if (v8[37].m128_i32[0] || (v20 = 0, v8[8].m128_i32[0] == 23))
		v20 = 1;
	if ((v17 & 1) == 0)
	{
		if (v20)
		{
			result = 106i64;
			goto LABEL_97;
		}
		goto LABEL_27;
	}
	if (v20)
	{
	LABEL_27:
		if ((v19 & 2) != 0)
		{
			if ((v17 & 2) != 0)
			{
				if (!v8[42].m128_i32[3])
				{
					result = 109i64;
					goto LABEL_97;
				}
			}
			else if (v8[42].m128_i32[3])
			{
				result = 108i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 8) != 0)
		{
			v21 = sub_1405B3F90((__int64)v8);
			if ((v17 & 8) != 0)
			{
				if (*(_DWORD*)(v21 + 4896) == 2)
				{
					result = 113i64;
					goto LABEL_97;
				}
			}
			else if (*(_DWORD*)(v21 + 4896) != 2)
			{
				result = 112i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 0x20) != 0)
		{
			v22 = v8[12].m128_i32[1] == 0;
			v23 = sub_14047BD80((__int64)v8);
			if ((v17 & 0x20) != 0)
			{
				if (!v22 && !v23)
				{
					result = 117i64;
					goto LABEL_97;
				}
			}
			else if (v22 || v23)
			{
				result = 116i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 0x80u) != 0)
		{
			v24 = sub_14047BDC0((__int64)v8);
			if ((v17 & 0x80u) == 0)
			{
				if (v24)
				{
					result = 120i64;
					goto LABEL_97;
				}
			}
			else if (!v24)
			{
				result = 121i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 0x40) != 0)
		{
			v25 = sub_14047BE00((__int64)v8);
			if ((v17 & 0x40) != 0)
			{
				if (!v25)
				{
					result = 119i64;
					goto LABEL_97;
				}
			}
			else if (v25)
			{
				result = 118i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 0x100) != 0)
		{
			if ((v17 & 0x100) != 0)
			{
				if (v8[264].m128_i32[2] != 1)
				{
					result = 139i64;
					goto LABEL_97;
				}
			}
			else if (v8[264].m128_i32[2] == 1)
			{
				result = 138i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 0x200) != 0)
		{
			if ((v8[263].m128_i32[0] & 0x40) != 0 || (v26 = 0, (v8[263].m128_i32[0] & 0x800) != 0))
				v26 = 1;
			if ((v17 & 0x200) != 0)
			{
				if (!v26)
				{
					result = 173i64;
					goto LABEL_97;
				}
			}
			else if (v26)
			{
				result = 172i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 0x10) != 0)
		{
			if ((v17 & 0x10) != 0)
			{
				if (v8[5].m128_i32[1] <= 1)
				{
					result = 115i64;
					goto LABEL_97;
				}
			}
			else if (v8[5].m128_i32[1] > 1)
			{
				result = 114i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 4) != 0)
		{
			v27 = v8[263].m128_i32[0] & 4;
			if ((v17 & 4) != 0)
			{
				if (!v27)
				{
					result = 312i64;
					goto LABEL_97;
				}
			}
			else if (v27)
			{
				result = 311i64;
				goto LABEL_97;
			}
		}
		if ((v19 & 0x400) != 0)
		{
			if (v8[213].m128_i32[0] && *(__m128**)(qword_140C65898 + 25744) == v8)
			{
				v28 = sub_1403982A0(qword_140C65898, 1);
				v29 = sub_140469990((__int64)v8, v28);
			}
			else
			{
				v29 = 0;
			}
			if ((v17 & 0x400) != 0)
			{
				if (!v29)
				{
					result = 316i64;
					goto LABEL_97;
				}
			}
			else if (v29)
			{
				result = 315i64;
				goto LABEL_97;
			}
		}
	LABEL_96:
		result = sub_1403B2C40(a2, v8, 0, 0);
		goto LABEL_97;
	}
	result = 107i64;
LABEL_97:
	v30 = result;
	if ((_DWORD)result && (_DWORD)result != 317)
		return result;
	v31 = a6;
	if ((__m128*)a3 == v8)
	{
		if ((*(_DWORD*)(*(_QWORD*)(a2 + 112) + 268i64) & 0x40000000) != 0)
			v8 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a3 + 264));
		else
			v8 = 0i64;
	}
	else
	{
		v32 = v8[8].m128_i32[0];
		if (v32 == 20)
		{
			v33 = *(_QWORD*)(a2 + 112);
			if ((*(_BYTE*)(v33 + 272) & 4) != 0)
				return 102i64;
		}
		else
		{
			if (v32 > 23)
			{
				if (v32 <= 25 || v32 == 27)
				{
					if ((*(_BYTE*)(*(_QWORD*)(a2 + 112) + 272i64) & 0x40) != 0)
						return 305i64;
				}
				else if (v32 == 31 && !*(_DWORD*)(a6 + 72))
				{
					return 253i64;
				}
			}
			v33 = *(_QWORD*)(a2 + 112);
			if ((*(_BYTE*)(v33 + 272) & 8) != 0)
				return 103i64;
		}
		result = sub_1403B43F0(a2, v13, v8);
		if ((_DWORD)result && (_DWORD)result != 317)
			return result;
		result = sub_1403B44B0(v34, *(_DWORD*)v33, *(_DWORD*)(v33 + 296), (__int64)v8, v8[1].m128_i64[1], a3);
		v30 = result;
		if ((_DWORD)result)
		{
			if ((_DWORD)result != 317)
				return result;
		}
		v35 = sub_14047DCA0(a3);
		v36 = sub_14047DCA0((__int64)v8);
		v38 = v36;
		if (v35)
		{
			if (v36)
			{
				if (v35 == v36 && v35 != a3)
				{
					v37 = *(_QWORD*)(a2 + 112);
					if ((*(_DWORD*)(v37 + 268) & 0x10000000) == 0)
						return 99i64;
				}
				if (a4 || (a4 = sub_14055C900(v37, v35)) != 0)
				{
					v39 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v80 + 72i64))(
						v80,
						*(unsigned int*)(v35 + 8),
						*(unsigned int*)(v38 + 8));
					result = sub_1403B4560(a2, a4, v35, v38, v39);
					v30 = result;
					if ((_DWORD)result)
					{
						if ((_DWORD)result != 317)
							return result;
					}
				}
			}
		}
	}
	v40 = *(_DWORD*)(v31 + 40);
	v41 = (__m128*)a3;
	if (v40)
		v41 = (__m128*)sub_1403D90D0(qword_140C65898, v40);
	if (!v8 || !v41)
		return v30;
	if (!a3)
		return 30i64;
	if (!*(_DWORD*)(a3 + 132))
	{
		v42 = *(_QWORD*)(a2 + 112);
		v43 = *(float*)(v42 + 112);
		v78 = v41[286];
		v77 = v8[286];
		v44 = *(float*)(v42 + 108);
		v78.m128_f32[1] = v41[286].m128_f32[1] - v41[306].m128_f32[1];
		v77.m128_f32[1] = v8[286].m128_f32[1] - v8[306].m128_f32[1];
		v79 = _mm_sub_ps(v77, v78);
		v45 = _mm_mul_ps(v79, v79);
		v46 = fsqrt(
			(float)(v45.m128_f32[0] + _mm_shuffle_ps(v45, v45, 85).m128_f32[0])
			+ _mm_shuffle_ps(v45, v45, 170).m128_f32[0]);
		if (*(_DWORD*)(v31 + 84))
		{
			v44 = sub_1403AD860(v80, *(_DWORD*)v42, (__int64)v8);
			v43 = sub_1403AD8F0(v80, **(_DWORD**)(a2 + 112), (__int64)v8);
		}
		v47 = v8[208].m128_u64[1];
		if (v47)
		{
			v48 = sub_14047A940(v8) * *(float*)(v47 + 140);
		}
		else
		{
			v49 = sub_14022D500(v8[13].m128_u32[2]);
			if (v49)
				v48 = *(float*)(v49 + 40);
			else
				v48 = 0.0;
		}
		v50 = v41[208].m128_u64[1];
		if (v50)
		{
			v51 = sub_14047A940(v41) * *(float*)(v50 + 140);
		}
		else
		{
			v52 = sub_14022D500(v41[13].m128_u32[2]);
			if (v52)
				v51 = *(float*)(v52 + 40);
			else
				v51 = 0.0;
		}
		v53 = a7;
		result = sub_1407A17D0(v46, v51, v48, v44, a7);
		if ((_DWORD)result && (_DWORD)result != 317)
			return result;
		v54 = v8[208].m128_u64[1];
		if (v54)
		{
			v55 = sub_14047A940(v8) * *(float*)(v54 + 140);
		}
		else
		{
			v56 = sub_14022D500(v8[13].m128_u32[2]);
			if (v56)
				v55 = *(float*)(v56 + 40);
			else
				v55 = 0.0;
		}
		v57 = v41[208].m128_u64[1];
		if (v57)
		{
			v58 = sub_14047A940(v41) * *(float*)(v57 + 140);
		}
		else
		{
			v59 = sub_14022D500(v41[13].m128_u32[2]);
			if (v59)
				v58 = *(float*)(v59 + 40);
			else
				v58 = 0.0;
		}
		v60 = (float)(v46 - v55) - v58;
		if (v60 < 0.0)
			v60 = 0.0;
		if (v53 != 0.0 && v43 != 0.0)
			v43 = v43 + v53;
		if (v60 > v43)
			return 105i64;
		v30 = 0;
		v61 = *(float*)(*(_QWORD*)(a2 + 112) + 116i64);
		if (v61 > -1.0)
		{
			v62 = v8[208].m128_u64[1];
			if (v62)
			{
				v63 = sub_14047A940(v8) * *(float*)(v62 + 140);
			}
			else
			{
				v64 = sub_14022D500(v8[13].m128_u32[2]);
				if (v64)
					v63 = *(float*)(v64 + 40);
				else
					v63 = 0.0;
			}
			v65 = v41[208].m128_u64[1];
			if (v65)
			{
				v66 = sub_14047A940(v41) * *(float*)(v65 + 140);
			}
			else
			{
				v67 = sub_14022D500(v41[13].m128_u32[2]);
				if (v67)
					v66 = *(float*)(v67 + 40);
				else
					v66 = 0.0;
			}
			v68 = (float)(fabs(v79.m128_f32[1]) - v63) - v66;
			if (v68 < 0.0)
				v68 = 0.0;
			if (v68 > v61)
				return 183i64;
			v30 = 0;
		}
	}
	if ((v41[263].m128_i8[0] & 2) != 0 || (v69 = *(float**)(a2 + 112), ((_DWORD)v69[66] & 0x4000) == 0))
	{
		v69 = *(float**)(a2 + 112);
		v70 = v69[30];
		if (v41[8].m128_i32[0] == 13)
		{
			v71 = v41[1].m128_u64[1];
			if (v71)
				v70 = **(float**)(v71 + 200);
		}
		if (!sub_1400A7A40(v41 + 286, v41 + 276, v8 + 286, v70))
			return 101i64;
		v30 = 0;
	}
	v72 = *((_DWORD*)v69 + 67);
	if ((v72 & 0x40000) != 0 || v41 == v8)
		return v30;
	if ((v72 & 0x800) != 0 || sub_14047D550(v41, v8))
		return 0;
	v73 = a8;
	if (a8)
	{
		v74 = *(_QWORD*)(a8 + 8);
		LODWORD(a5) = 166;
		*(_DWORD*)(a8 + 16) = 166;
		*(_DWORD*)(v73 + 24) = 1;
		if (v74)
		{
			v75 = *(int**)v73;
			while (*v75 != 166)
			{
				if (*v75 <= 166)
				{
					++v14;
					++v75;
					if (v14 < v74)
						continue;
				}
				goto LABEL_204;
			}
		}
		else
		{
		LABEL_204:
			sub_1401C2E70((__int64*)v73, v14, (int*)&a5);
		}
	}
	return 166i64;
}
// 1403B26B4: variable 'v13' is possibly undefined
// 1403B26E2: variable 'v34' is possibly undefined
// 1403B2751: variable 'v37' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;

