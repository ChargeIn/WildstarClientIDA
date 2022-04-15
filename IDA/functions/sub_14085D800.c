#include "../winhttp.h"

//----- (000000014085D800) ----------------------------------------------------
__int64 __fastcall sub_14085D800(__int64 a1, int a2, _QWORD* a3)
{
	__int64 v5; // rbp
	__int64 v7; // rax
	bool v8; // di
	__int64 v9; // rdx
	__int64 v10; // r15
	float v11; // xmm6_4
	char v12; // al
	__int64 v13; // rbx
	char v14; // cl
	__int64 v15; // rax
	__int64 v16; // rax
	unsigned __int16 v17; // cx
	unsigned int v18; // r13d
	unsigned int v19; // edx
	unsigned int v20; // eax
	char v21; // r12
	unsigned int v22; // ebx
	float* v23; // rdi
	__int64 v24; // rax
	bool v25; // r10
	int* v26; // r8
	float v27; // xmm0_4
	__int64 v28; // rcx
	bool v29; // bl
	_DWORD* v30; // rcx
	unsigned __int16* v31; // rax
	__int64 v32; // rax
	unsigned int v33; // r15d
	unsigned int v34; // edi
	__int64 v35; // rax
	__int64 v36; // rbx
	unsigned __int64 v37; // r12
	float v38; // xmm9_4
	char v39; // al
	char v40; // dl
	__int64 v41; // rax
	__int64 v42; // rax
	float v43; // xmm9_4
	float v44; // xmm15_4
	float v45; // xmm13_4
	float v46; // xmm4_4
	float v47; // xmm14_4
	float v48; // xmm11_4
	float v49; // xmm7_4
	float v50; // xmm8_4
	float v51; // xmm6_4
	float v52; // xmm12_4
	float v53; // xmm10_4
	float v54; // xmm0_4
	float v55; // xmm3_4
	float v56; // xmm9_4
	float v57; // xmm0_4
	float v58; // xmm5_4
	float v59; // xmm15_4
	float v60; // xmm2_4
	float v61; // xmm9_4
	float v62; // xmm15_4
	float v63; // xmm13_4
	float v64; // xmm4_4
	float v65; // xmm0_4
	float v66; // xmm5_4
	float v67; // xmm1_4
	float v68; // xmm3_4
	float v69; // xmm5_4
	float v70; // xmm2_4
	float v71; // xmm4_4
	float v72; // xmm1_4
	double v73; // xmm6_8
	float v74; // xmm8_4
	float v75; // xmm13_4
	int v76; // xmm8_4
	double v77; // xmm0_8
	float v78; // xmm0_4
	unsigned __int32 v79; // xmm0_4
	float v81; // [rsp+30h] [rbp-118h]
	float v82; // [rsp+34h] [rbp-114h]
	int** v83; // [rsp+38h] [rbp-110h]
	float v84; // [rsp+38h] [rbp-110h]
	int v85[4]; // [rsp+40h] [rbp-108h] BYREF
	__int64 v86; // [rsp+50h] [rbp-F8h] BYREF
	int v87; // [rsp+58h] [rbp-F0h]
	unsigned int i; // [rsp+150h] [rbp+8h]
	unsigned int v89; // [rsp+150h] [rbp+8h]
	char v90; // [rsp+158h] [rbp+10h]
	unsigned int v91; // [rsp+160h] [rbp+18h]
	float v92; // [rsp+160h] [rbp+18h]
	unsigned int v93; // [rsp+168h] [rbp+20h]
	float v94; // [rsp+168h] [rbp+20h]

	a3[1] = *a3;
	v5 = *(_QWORD*)(a1 + 88);
	if (!*(_QWORD*)(v5 + 80))
		*(_QWORD*)(v5 + 80) = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552), *(_DWORD*)(v5 + 12));
	v7 = *(_QWORD*)(v5 + 80);
	v8 = v7 && (*(_BYTE*)(v7 + 133) & 1) != 0;
	v90 = v8;
	if (a2 == 1)
	{
		if ((*(_BYTE*)(v5 + 76) & 8) == 0 && (*(_BYTE*)(a1 + 380) & 0x40) == 0)
		{
			v9 = *(_QWORD*)(a1 + 176);
			*(_BYTE*)(a1 + 442) = *(_BYTE*)(v9 + 18);
			*(_BYTE*)(a1 + 443) ^= (*(_BYTE*)(a1 + 443) ^ *(_BYTE*)(v9 + 19)) & 7;
			if ((unsigned int)sub_14084C510(a1 + 432, *(int**)(v9 + 8), *(_WORD*)(v9 + 16)) == 1)
				*(_BYTE*)(a1 + 380) |= 0x40u;
		}
		v10 = *(_QWORD*)(a1 + 176);
		v11 = 1.0e10;
		if ((*(_DWORD*)(v10 + 136) & 0x40000000) != 0
			|| (v12 = *(_BYTE*)(v5 + 76), (v12 & 8) == 0)
			|| (v13 = *(_QWORD*)(v10 + 104), v14 = *(_BYTE*)(v13 + 16), (v14 & 2) == 0) && (v12 & 1) != 0
			|| (v14 & 1) == 0 && v8)
		{
			v16 = v10 + 8;
			if ((*(_BYTE*)(v5 + 76) & 8) == 0)
				v16 = a1 + 432;
			v83 = (int**)v16;
			v17 = 1;
			if ((*(_BYTE*)(v16 + 11) & 7) != 0)
				v17 = *(_WORD*)(v16 + 8);
			v18 = *(unsigned __int8*)(v16 + 10);
			v19 = v17;
			v20 = 0;
			v93 = v17;
			v91 = v18;
			for (i = 0; v18; i = v20)
			{
				if ((v18 & 1) != 0)
				{
					v21 = 1 << v20;
					v22 = 0;
					v23 = (float*)&byte_140C62000[128 * (unsigned __int64)v20];
					if (v19)
					{
						do
						{
							v24 = sub_140846EB0((__int64)a3);
							if (!v24)
								break;
							*(_BYTE*)(v24 + 17) = v21;
							v25 = (*(_BYTE*)(v5 + 76) & 1) != 0 && *((_BYTE*)v23 + 40);
							v26 = &dword_140C10FB0;
							if (*v83)
								v26 = *v83;
							v27 = sub_14085D600(
								v23,
								(float*)&v26[6 * v22],
								*(float*)(*(_QWORD*)(a1 + 176) + 100i64),
								v25,
								v90,
								v24).m128_f32[0];
							if (v27 < v11)
								v11 = v27;
							++v22;
						} while (v22 < v93);
						v18 = v91;
						v20 = i;
						v19 = v93;
					}
					++v20;
					v18 >>= 1;
				}
				else
				{
					v18 >>= 1;
					++v20;
				}
				v91 = v18;
			}
			if ((*(_BYTE*)(v5 + 76) & 8) != 0)
				sub_14084BF40(*(_QWORD*)(a1 + 176), a3);
		}
		else
		{
			do
			{
				v15 = sub_140846EB0((__int64)a3);
				if (!v15)
					break;
				*(_DWORD*)v15 = *(_DWORD*)v13;
				*(_DWORD*)(v15 + 4) = *(_DWORD*)(v13 + 4);
				*(_DWORD*)(v15 + 8) = *(_DWORD*)(v13 + 8);
				*(_DWORD*)(v15 + 12) = *(_DWORD*)(v13 + 12);
				*(_BYTE*)(v15 + 16) ^= (*(_BYTE*)(v13 + 16) ^ *(_BYTE*)(v15 + 16)) & 1;
				*(_BYTE*)(v15 + 16) ^= (*(_BYTE*)(v13 + 16) ^ *(_BYTE*)(v15 + 16)) & 2;
				*(_BYTE*)(v15 + 17) = *(_BYTE*)(v13 + 17);
				if (*(float*)v13 < v11)
					v11 = *(float*)v13;
				v13 += 20i64;
			} while (v13 != *(_QWORD*)(v10 + 112));
		}
		sub_14085D4B0(a1, v11, v5 + 8);
		return (a3[1] - *a3) / 36i64;
	}
	v28 = *(_QWORD*)(a1 + 504);
	if (v28)
	{
		v29 = (*(_BYTE*)(v5 + 76) & 0x20) != 0;
		sub_140867B00(v28, v29);
		if (v29)
		{
			v30 = *(_DWORD**)(a1 + 504);
			if ((v30[10] & 2) != 0 && sub_1408677E0(v30))
			{
				v31 = (unsigned __int16*)sub_14084EB00(*(_QWORD*)(a1 + 160));
				sub_14083A800(qword_140C61B98, *(_QWORD*)(a1 + 504), v31);
			}
		}
	}
	v32 = *(_QWORD*)(a1 + 176);
	v33 = 0;
	v34 = *(unsigned __int8*)(v32 + 18);
	if (*(_BYTE*)(v32 + 18))
	{
		v89 = 0;
		while ((v34 & 1) == 0)
		{
			v34 >>= 1;
			++v33;
		LABEL_83:
			if (!v34)
				return (a3[1] - *a3) / 36i64;
		}
		v35 = sub_140846EB0((__int64)a3);
		v36 = v35;
		if (!v35)
			return (a3[1] - *a3) / 36i64;
		v37 = (unsigned __int64)v33 << 7;
		*(_BYTE*)(v35 + 17) = 1 << v33;
		v38 = sub_140829600((float*)(v5 + 24)).m128_f32[0];
		v84 = v38;
		*(float*)v36 = v38 / (float)(*(float*)&byte_140C62000[v37 + 36] * *(float*)(*(_QWORD*)(a1 + 176) + 100i64));
		v39 = *(_BYTE*)(v5 + 76);
		if ((v39 & 1) != 0 && byte_140C62000[v37 + 40])
		{
			v40 = 1;
		}
		else
		{
			v40 = 0;
			if (!v90)
			{
			LABEL_82:
				++v33;
				v34 >>= 1;
				goto LABEL_83;
			}
		}
		if ((v39 & 0x10) != 0 || (v41 = *(_QWORD*)(a1 + 504)) == 0)
		{
			v74 = *(float*)(v5 + 24);
			*(_QWORD*)&v73 = *(unsigned int*)(v5 + 28);
			v75 = *(float*)(v5 + 32);
		}
		else
		{
			v42 = *(_QWORD*)(v41 + 136);
			v43 = *(float*)&byte_140C62000[v37 + 80];
			v44 = *(float*)&byte_140C62000[v37 + 96];
			v45 = *(float*)(v42 + 4i64 * v89 + 12);
			v46 = *(float*)(v42 + 4i64 * v89);
			v47 = *(float*)(v42 + 4i64 * v89 + 24);
			v48 = *(float*)(v42 + 4i64 * v89 + 16);
			v49 = *(float*)(v42 + 4i64 * v89 + 4);
			v50 = *(float*)(v42 + 4i64 * v89 + 20);
			v51 = *(float*)(v42 + 4i64 * v89 + 8);
			v52 = *(float*)(v42 + 4i64 * v89 + 28);
			v53 = *(float*)(v42 + 4i64 * v89 + 32);
			v54 = *(float*)&byte_140C62000[v37 + 84];
			v92 = (float)((float)(v43 * v46) + (float)(v54 * v45)) + (float)(*(float*)&byte_140C62000[v37 + 88] * v47);
			v55 = *(float*)&byte_140C62000[v37 + 100];
			v94 = (float)((float)(v43 * v49) + (float)(v54 * v48)) + (float)(*(float*)&byte_140C62000[v37 + 88] * v52);
			v81 = (float)((float)(v43 * v51) + (float)(v54 * v50)) + (float)(*(float*)&byte_140C62000[v37 + 88] * v53);
			v56 = *(float*)&byte_140C62000[v37 + 92];
			v57 = v44 * v48;
			v58 = (float)((float)(v56 * v46) + (float)(v44 * v45)) + (float)(v55 * v47);
			v59 = (float)(v44 * v50) + (float)(v56 * v51);
			v60 = *(float*)&byte_140C62000[v37 + 108];
			v61 = (float)((float)(v56 * v49) + v57) + (float)(v55 * v52);
			v82 = v58;
			v62 = v59 + (float)(v55 * v53);
			v63 = (float)((float)(*(float*)&byte_140C62000[v37 + 104] * v46) + (float)(v60 * v45))
				+ (float)(*(float*)&byte_140C62000[v37 + 112] * v47);
			v64 = (float)(*(float*)&byte_140C62000[v37 + 104] * v49) + (float)(v60 * v48);
			v65 = *(float*)(v5 + 24);
			v66 = *(float*)&byte_140C62000[v37 + 104] * v51;
			v67 = *(float*)&byte_140C62000[v37 + 112];
			v68 = v67 * v53;
			v89 += 9;
			*(_QWORD*)&v73 = LODWORD(v82);
			v69 = v66 + (float)(v60 * v50);
			v70 = *(float*)(v5 + 32);
			v71 = v64 + (float)(v67 * v52);
			v72 = *(float*)(v5 + 28);
			*(float*)&v73 = (float)(v82 * v65) + (float)(v61 * v72);
			v38 = v84;
			*(float*)&v73 = *(float*)&v73 + (float)(v62 * v70);
			v74 = (float)((float)(v92 * v65) + (float)(v94 * v72)) + (float)(v81 * v70);
			v75 = (float)((float)(v63 * v65) + (float)(v71 * v72)) + (float)((float)(v69 + v68) * v70);
		}
		*(float*)&v85[2] = v75;
		v85[1] = LODWORD(v73);
		*(float*)v85 = v74;
		if (!v40)
		{
		LABEL_75:
			if (v90)
			{
				if (v38 <= 0.0
					|| (v86 = 0i64, v87 = 1065353216, v78 = sub_140829590((float*)v85, (float*)&v86) / v38, v78 >= 1.0))
				{
					v78 = 1.0;
				}
				else if (v78 <= -1.0)
				{
					v78 = -1.0;
				}
				v79 = sub_1408FCCB0(v78).m128_u32[0];
				*(_BYTE*)(v36 + 16) &= ~1u;
				*(_DWORD*)(v36 + 12) = v79;
			}
			goto LABEL_82;
		}
		if (v75 == 0.0)
		{
			if (v74 == 0.0)
			{
				v76 = 0;
				LODWORD(v77) = 0;
			LABEL_74:
				*(_BYTE*)(v36 + 16) |= 2u;
				*(_DWORD*)(v36 + 4) = v76;
				*(_DWORD*)(v36 + 8) = LODWORD(v77);
				goto LABEL_75;
			}
			if (v74 <= 0.0)
				v76 = -1077342245;
			else
				v76 = 1070141403;
		}
		else
		{
			v76 = sub_1408FD190(v74, v75);
		}
		*(float*)&v73 = *(float*)&v73 / v38;
		v77 = sub_1408FCF3C(v73);
		goto LABEL_74;
	}
	return (a3[1] - *a3) / 36i64;
}
// 140C10FB0: using guessed type int dword_140C10FB0;
// 140C61B98: using guessed type __int64 qword_140C61B98;
// 140C62000: using guessed type _BYTE byte_140C62000[80];

