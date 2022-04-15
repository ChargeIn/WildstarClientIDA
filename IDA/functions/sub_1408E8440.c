#include "../winhttp.h"

//----- (00000001408E8440) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408E8440(__int64 a1, __int64* a2, float a3, float a4, float a5, float a6)
{
	int v6; // r10d
	__int64 v7; // r14
	__int64 v10; // r15
	unsigned int v11; // r9d
	unsigned int v12; // r8d
	int v13; // ebx
	__int64 v14; // r12
	unsigned __int64 result; // rax
	unsigned int v16; // r8d
	unsigned int i; // ecx
	unsigned __int64 v18; // rdi
	__int64 v19; // rbx
	int v20; // edx
	int v21; // ecx
	__m128 v22; // xmm5
	float v23; // xmm4_4
	int v24; // ebp
	float v25; // xmm7_4
	float v26; // xmm6_4
	float v27; // xmm9_4
	float v28; // xmm3_4
	__m128 v29; // xmm0
	float v30; // xmm8_4
	float v31; // xmm2_4
	float v32; // xmm4_4
	float v33; // xmm6_4
	float v34; // xmm3_4
	__int64 v35; // rdi
	__int64 v36; // r11
	__int64 v37; // rbp
	__int64 v38; // r15
	__int64 v39; // rsi
	__int64 v40; // rcx
	__int64 v41; // rdx
	float v42; // xmm2_4
	unsigned int v43; // r9d
	unsigned int v44; // eax
	__int64 v45; // r8
	float v46; // xmm0_4
	float v47; // xmm1_4
	float v48; // xmm2_4
	float v49; // xmm1_4
	float v50; // xmm0_4
	float v51; // xmm1_4
	float v52; // xmm1_4
	__int64 v53; // rdx
	__int64 v54; // r8
	float v55; // xmm0_4
	__int64 v56; // r11
	__int64 v57; // rsi
	__int64 v58; // rdi
	__int64 v59; // rdx
	__int64 v60; // rcx
	float v61; // xmm1_4
	unsigned int v62; // r9d
	__int64 v63; // r8
	float v64; // xmm0_4
	float v65; // xmm0_4
	__int64 v66; // rdx
	__int64 v67; // r8
	float v68; // xmm0_4
	__int64 v69; // rsi
	__int64 v70; // r11
	unsigned __int64 v71; // r15
	unsigned int v72; // r9d
	unsigned int v73; // ebp
	__int64 v74; // rdi
	float v75; // xmm1_4
	unsigned int v76; // r10d
	unsigned __int64 v77; // rdx
	__int64 v78; // rcx
	__int64 v79; // r8
	float v80; // xmm0_4
	float v81; // xmm0_4
	__int64 v82; // rdx
	__int64 v83; // r8
	float v84; // xmm0_4
	__int64 v85; // rdi
	__int64 v86; // rsi
	__int64 v87; // rbp
	__int64 v88; // rdx
	unsigned int v89; // ecx
	float v90; // xmm1_4
	unsigned __int64 v91; // r8
	unsigned int v92; // ecx
	float v93; // xmm0_4
	float v94; // xmm0_4
	__int64 v95; // r8
	unsigned __int64 v96; // rcx
	float v97; // xmm0_4
	int v98; // [rsp+24h] [rbp-74h]
	unsigned int v99; // [rsp+28h] [rbp-70h]

	v6 = *(_DWORD*)(a1 + 8);
	v7 = 0i64;
	v10 = a1;
	v11 = 0;
	v12 = v6 & 0xFFFFFFF7;
	if ((v6 & 0xFFFFFFF7) != 0)
	{
		do
		{
			++v11;
			v12 &= v12 - 1;
		} while (v12);
	}
	v13 = *(unsigned __int16*)(a1 + 18);
	v14 = 2i64;
	result = (unsigned int)(v6 - 3);
	v16 = 2;
	if (v11 < 2)
		v16 = v11;
	v99 = v16;
	if ((result & 0xFFFFFFFA) != 0 || v6 == 7)
	{
		v20 = 0;
		v21 = v6 & 0x33;
		if ((v6 & 0x33) != 0)
		{
			do
			{
				++v20;
				v21 &= v21 - 1;
			} while (v21);
		}
		v22 = (__m128)0x3F800000u;
		v23 = 0.0;
		v24 = v6 & 4;
		v25 = 0.0;
		v26 = 0.0;
		v27 = 0.0;
		v28 = (float)v20;
		if ((v6 & 4) != 0)
		{
			if ((v6 & 7) == 7)
			{
				v25 = a3 * a3;
				v23 = a4 * a4;
			}
			else
			{
				v28 = v28 + 1.0;
			}
		}
		v98 = v6 & 8;
		if ((v6 & 8) != 0)
		{
			v27 = a5 * a5;
			v26 = a6 * a6;
		}
		v29 = (__m128)0x3F800000u;
		v29.m128_f32[0] = 1.0 / (float)((float)(v25 + v28) + v27);
		v30 = _mm_sqrt_ps(v29).m128_f32[0];
		v31 = 1.0 / (float)v13;
		v22.m128_f32[0] = 1.0 / (float)((float)(v23 + v28) + v26);
		v32 = (float)(v23 - v25) * v31;
		v33 = (float)(v26 - v27) * v31;
		v34 = (float)(_mm_sqrt_ps(v22).m128_f32[0] - v30) * v31;
		if (v16)
		{
			v35 = *(_QWORD*)a1;
			v36 = *a2;
			v37 = 4i64 * *((unsigned __int16*)a2 + 8);
			v38 = 4i64 * *(unsigned __int16*)(v10 + 16);
			v39 = v16;
			do
			{
				v40 = v35;
				v41 = v36;
				v42 = v30;
				v43 = 0;
				if (v13 >= 4)
				{
					v44 = ((unsigned int)(v13 - 4) >> 2) + 1;
					v45 = v44;
					v43 = 4 * v44;
					do
					{
						v46 = v42;
						v41 += 16i64;
						v40 += 16i64;
						v47 = v42 + v34;
						v48 = (float)(v42 + v34) + v34;
						v49 = v47 * *(float*)(v40 - 12);
						*(float*)(v41 - 16) = v46 * *(float*)(v40 - 16);
						v50 = v48 * *(float*)(v40 - 8);
						*(float*)(v41 - 12) = v49;
						v51 = v48 + v34;
						v42 = (float)(v48 + v34) + v34;
						v52 = v51 * *(float*)(v40 - 4);
						*(float*)(v41 - 8) = v50;
						*(float*)(v41 - 4) = v52;
						--v45;
					} while (v45);
				}
				if (v43 < v13)
				{
					v53 = v41 - v40;
					v54 = v13 - v43;
					do
					{
						v55 = v42;
						v40 += 4i64;
						v42 = v42 + v34;
						*(float*)(v53 + v40 - 4) = v55 * *(float*)(v40 - 4);
						--v54;
					} while (v54);
				}
				v35 += v38;
				v36 += v37;
				--v39;
			} while (v39);
			v10 = a1;
			v24 = v6 & 4;
		}
		result = v6 & 7;
		if ((_BYTE)result == 7)
		{
			result = *(_QWORD*)v10;
			v56 = *a2;
			v57 = *(_QWORD*)v10 + 8i64 * *(unsigned __int16*)(v10 + 16);
			v58 = 4i64 * *((unsigned __int16*)a2 + 8);
			do
			{
				v59 = v57;
				v60 = v56;
				v61 = v25;
				v62 = 0;
				if (v13 >= 4)
				{
					result = ((unsigned int)(v13 - 4) >> 2) + 1;
					v63 = (unsigned int)result;
					v62 = 4 * result;
					do
					{
						v60 += 16i64;
						v59 += 16i64;
						*(float*)(v60 - 16) = (float)(v61 * *(float*)(v59 - 16)) + *(float*)(v60 - 16);
						*(float*)(v60 - 12) = (float)((float)(v61 + v32) * *(float*)(v59 - 12)) + *(float*)(v60 - 12);
						v64 = (float)(v61 + v32) + v32;
						*(float*)(v60 - 8) = (float)(v64 * *(float*)(v59 - 8)) + *(float*)(v60 - 8);
						v65 = v64 + v32;
						v61 = v65 + v32;
						*(float*)(v60 - 4) = (float)(v65 * *(float*)(v59 - 4)) + *(float*)(v60 - 4);
						--v63;
					} while (v63);
				}
				if (v62 < v13)
				{
					v66 = v59 - v60;
					v67 = v13 - v62;
					do
					{
						v68 = v61;
						v60 += 4i64;
						v61 = v61 + v32;
						*(float*)(v60 - 4) = (float)(v68 * *(float*)(v66 + v60 - 4)) + *(float*)(v60 - 4);
						--v67;
					} while (v67);
				}
				v56 += v58;
				--v14;
			} while (v14);
		}
		if ((v6 & 0x30) != 0)
		{
			v69 = *(unsigned __int16*)(v10 + 16);
			v70 = *a2;
			v71 = *(_QWORD*)v10;
			v72 = 0;
			v73 = (v24 | 8u) >> 2;
			v74 = 4i64 * *((unsigned __int16*)a2 + 8);
			do
			{
				v75 = v30;
				v76 = 0;
				v77 = v71 + 4 * v69 * (v72 + v73);
				v78 = v70;
				if (v13 >= 4)
				{
					result = ((unsigned int)(v13 - 4) >> 2) + 1;
					v79 = (unsigned int)result;
					v76 = 4 * result;
					do
					{
						v78 += 16i64;
						v77 += 16i64;
						*(float*)(v78 - 16) = (float)(v75 * *(float*)(v77 - 16)) + *(float*)(v78 - 16);
						*(float*)(v78 - 12) = (float)((float)(v75 + v34) * *(float*)(v77 - 12)) + *(float*)(v78 - 12);
						v80 = (float)(v75 + v34) + v34;
						*(float*)(v78 - 8) = (float)(v80 * *(float*)(v77 - 8)) + *(float*)(v78 - 8);
						v81 = v80 + v34;
						v75 = v81 + v34;
						*(float*)(v78 - 4) = (float)(v81 * *(float*)(v77 - 4)) + *(float*)(v78 - 4);
						--v79;
					} while (v79);
				}
				if (v76 < v13)
				{
					v82 = v77 - v78;
					v83 = v13 - v76;
					do
					{
						v84 = v75;
						v78 += 4i64;
						v75 = v75 + v34;
						*(float*)(v78 - 4) = (float)(v84 * *(float*)(v82 + v78 - 4)) + *(float*)(v78 - 4);
						--v83;
					} while (v83);
				}
				++v72;
				v70 += v74;
			} while (v72 < 2);
		}
		if (v98)
		{
			result = v99;
			if (v99)
			{
				v85 = *a2;
				v86 = v99;
				v87 = 4i64 * *((unsigned __int16*)a2 + 8);
				do
				{
					result = sub_1408A1610(a1);
					v88 = v85;
					v89 = 0;
					v90 = v27;
					v91 = result;
					if (v13 >= 4)
					{
						v92 = ((unsigned int)(v13 - 4) >> 2) + 1;
						result = v92;
						v89 = 4 * v92;
						do
						{
							v88 += 16i64;
							v91 += 16i64;
							*(float*)(v88 - 16) = (float)(v90 * *(float*)(v91 - 16)) + *(float*)(v88 - 16);
							*(float*)(v88 - 12) = (float)((float)(v90 + v33) * *(float*)(v91 - 12)) + *(float*)(v88 - 12);
							v93 = (float)(v90 + v33) + v33;
							*(float*)(v88 - 8) = (float)(v93 * *(float*)(v91 - 8)) + *(float*)(v88 - 8);
							v94 = v93 + v33;
							v90 = v94 + v33;
							*(float*)(v88 - 4) = (float)(v94 * *(float*)(v91 - 4)) + *(float*)(v88 - 4);
							--result;
						} while (result);
					}
					if (v89 < v13)
					{
						v95 = v91 - v88;
						result = v13 - v89;
						v96 = result;
						do
						{
							v97 = v90;
							v88 += 4i64;
							v90 = v90 + v33;
							*(float*)(v88 - 4) = (float)(v97 * *(float*)(v95 + v88 - 4)) + *(float*)(v88 - 4);
							--v96;
						} while (v96);
					}
					v85 += v87;
					--v86;
				} while (v86);
			}
		}
	}
	else
	{
		for (i = 0; v6; v6 &= result)
		{
			result = (unsigned int)(v6 - 1);
			++i;
		}
		if (i)
		{
			v18 = (unsigned int)(4 * v13);
			v19 = i;
			do
			{
				result = (unsigned __int64)sub_1407DB590(
					(int*)(*a2 + 4 * v7 * *((unsigned __int16*)a2 + 8)),
					(int*)(*(_QWORD*)v10 + 4 * v7 * *(unsigned __int16*)(v10 + 16)),
					v18);
				++v7;
				--v19;
			} while (v19);
		}
	}
	return result;
}
// 140B79ED0: using guessed type int dword_140B79ED0;

