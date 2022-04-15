#include "../winhttp.h"

//----- (0000000140267380) ----------------------------------------------------
__int64 __fastcall sub_140267380(_QWORD* a1, __int64 a2, char a3, float a4, int a5)
{
	__int64 v7; // rdi
	__int64 result; // rax
	float* v9; // r8
	int v10; // r13d
	float v11; // xmm9_4
	float v12; // xmm10_4
	float v13; // xmm11_4
	unsigned __int64 v14; // rdx
	char* v15; // r12
	char* v16; // rbx
	char* v17; // r11
	char* v18; // rsi
	char* v19; // r14
	char* v20; // rdi
	char* v21; // r10
	char* v22; // r8
	float* v23; // rcx
	char* v24; // rax
	char* v25; // r9
	char* v26; // r15
	float v27; // xmm2_4
	float v28; // xmm3_4
	float v29; // xmm4_4
	float v30; // xmm5_4
	float v31; // xmm6_4
	float v32; // xmm7_4
	float v33; // xmm2_4
	float v34; // xmm3_4
	unsigned __int64 v35; // rax
	float v36; // xmm4_4
	float v37; // xmm1_4
	char* v38; // rbx
	float v39; // xmm1_4
	char* v40; // r12
	float v41; // xmm1_4
	float v42; // xmm2_4
	__int64 v43; // rdi
	float v44; // xmm5_4
	float v45; // xmm4_4
	float v46; // xmm3_4
	float v47; // xmm1_4
	float v48; // xmm2_4
	float v49; // xmm6_4
	float v50; // xmm0_4
	unsigned __int16 v51; // r8
	__int64 v52; // r15
	__int64 v53; // r12
	unsigned __int16 v54; // dx
	__int128 v55; // xmm0
	__int128 v56; // xmm1
	float v57; // xmm13_4
	float v58; // xmm14_4
	float v59; // xmm15_4
	float v60; // xmm6_4
	float v61; // xmm7_4
	float v62; // xmm10_4
	_DWORD* v63; // r13
	float v64; // xmm12_4
	float v65; // xmm0_4
	int v66; // eax
	unsigned int v67; // ebx
	float v68; // xmm6_4
	float v69; // xmm7_4
	float v70; // xmm10_4
	char* v71; // r12
	char* v72; // r11
	char* v73; // rsi
	char* v74; // r14
	unsigned __int64 v75; // r9
	float* v76; // rdx
	char* v77; // r10
	char* v78; // r15
	float v79; // xmm3_4
	float v80; // xmm4_4
	float v81; // xmm5_4
	float v82; // xmm2_4
	unsigned int v83; // r8d
	float v84; // xmm2_4
	unsigned __int64 v85; // rcx
	float v86; // xmm0_4
	unsigned __int64 v87; // rax
	float v88; // xmm3_4
	float v89; // xmm4_4
	float v90; // xmm5_4
	float v91; // xmm0_4
	float v92; // xmm0_4
	float v93; // xmm0_4
	float v94; // xmm5_4
	int v95; // [rsp+30h] [rbp-D0h]
	int v96; // [rsp+34h] [rbp-CCh]
	__int64 v97; // [rsp+40h] [rbp-C0h]
	__int128 v98; // [rsp+40h] [rbp-C0h]
	__int128 v99; // [rsp+50h] [rbp-B0h]
	__int128 v100; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v101; // [rsp+70h] [rbp-90h] BYREF
	char* v102; // [rsp+80h] [rbp-80h]
	_QWORD* v103; // [rsp+88h] [rbp-78h]
	char* v104; // [rsp+90h] [rbp-70h]
	char* v105; // [rsp+98h] [rbp-68h]
	char* v106; // [rsp+A0h] [rbp-60h]
	char* v107; // [rsp+A8h] [rbp-58h]
	char* v108; // [rsp+B0h] [rbp-50h]
	char* v109; // [rsp+B8h] [rbp-48h]
	char* v110; // [rsp+C0h] [rbp-40h]
	char* v111; // [rsp+C8h] [rbp-38h]
	char* v112; // [rsp+D0h] [rbp-30h]
	__int64 v113; // [rsp+D8h] [rbp-28h]
	__int128 v114; // [rsp+E0h] [rbp-20h]
	__int128 v115; // [rsp+F0h] [rbp-10h]
	float v116; // [rsp+100h] [rbp+0h]
	float v117; // [rsp+104h] [rbp+4h]
	float v118; // [rsp+108h] [rbp+8h]
	float v119; // [rsp+10Ch] [rbp+Ch]
	float v120; // [rsp+110h] [rbp+10h]
	float v121; // [rsp+114h] [rbp+14h]
	float v122; // [rsp+118h] [rbp+18h]
	float v123; // [rsp+11Ch] [rbp+1Ch]
	int v124; // [rsp+120h] [rbp+20h] BYREF
	char v125[4]; // [rsp+124h] [rbp+24h] BYREF
	char v127[4]; // [rsp+12Ch] [rbp+2Ch] BYREF
	char v128[4]; // [rsp+130h] [rbp+30h] BYREF
	char v130[4]; // [rsp+148h] [rbp+48h] BYREF
	char v131[4]; // [rsp+14Ch] [rbp+4Ch] BYREF
	char v132[4]; // [rsp+150h] [rbp+50h] BYREF
	char v134[4]; // [rsp+158h] [rbp+58h] BYREF
	char v135[4]; // [rsp+15Ch] [rbp+5Ch] BYREF
	char v136[4]; // [rsp+160h] [rbp+60h] BYREF
	char v138[4]; // [rsp+168h] [rbp+68h] BYREF
	char v139[4]; // [rsp+16Ch] [rbp+6Ch] BYREF
	char v140[4]; // [rsp+170h] [rbp+70h] BYREF
	char v142[4]; // [rsp+220h] [rbp+120h] BYREF
	char v143[4]; // [rsp+224h] [rbp+124h] BYREF
	char v144[248]; // [rsp+228h] [rbp+128h] BYREF

	v113 = a2;
	v103 = a1;
	v7 = 4i64;
	if (a3)
	{
		result = 0i64;
		v9 = (float*)(a2 + 28);
		do
		{
			if (a4 > *(v9 - 4))
				++result;
			if (a4 > *v9)
				++result;
			if (a4 > v9[4])
				++result;
			if (a4 > v9[8])
				++result;
			v9 += 16;
			--v7;
		} while (v7);
		if (result == 16)
		{
			*a1 = -65536i64;
			return result;
		}
		v7 = (result == 0) + 3i64;
	}
	v97 = v7;
	v10 = a5 & 0x10000;
	v95 = a5 & 0x10000;
	if ((a5 & 0x10000) != 0)
		sub_1407E4830(&v124, 0i64, 0x100ui64);
	v11 = *(float*)&dword_140C40620;
	v12 = *(float*)&dword_140C4061C;
	v13 = *(float*)&dword_140C40618;
	v14 = 0i64;
	v15 = &v125[-a2 - 4];
	v96 = a5 & 0x40000;
	v16 = &v125[-a2];
	v112 = &v127[-a2];
	v17 = v127 - a2 + 2;
	v18 = &v130[-a2];
	v105 = &v128[-a2];
	v19 = &v134[-a2];
	v20 = &v128[-a2];
	v106 = &v131[-a2];
	v21 = &v138[-a2];
	v108 = &v132[-a2];
	v22 = &v142[-a2];
	v23 = (float*)(a2 + 8);
	v107 = &v125[-a2 - 4];
	v109 = &v135[-a2];
	v110 = &v125[-a2];
	v102 = &v136[-a2];
	v111 = &v139[-a2];
	v24 = &v140[-a2];
	v25 = &v143[-a2];
	v26 = &v127[-a2];
	v104 = v24;
	do
	{
		v27 = *(v23 - 2);
		v28 = *(v23 - 1);
		v29 = *v23;
		if (v10)
		{
			v27 = v27 + *(float*)((char*)v23 + (_QWORD)v15 - 8);
			v28 = v28 + *(float*)((char*)v23 + (_QWORD)v16 - 8);
			v29 = v29 + *(float*)((char*)v23 + (_QWORD)v15);
		}
		*(float*)((char*)v23 + (_QWORD)v25) = 1.0;
		v30 = (float)(int)(float)((float)(v27 * 31.0) + 0.5) * 0.032258064;
		*(float*)&v22[(_QWORD)v23 - 8] = v30;
		v31 = (float)(int)(float)((float)(v28 * 63.0) + 0.5) * 0.015873017;
		*(float*)&v25[(_QWORD)v23 - 8] = v31;
		v32 = (float)(int)(float)((float)(v29 * 31.0) + 0.5) * 0.032258064;
		*(float*)&v22[(_QWORD)v23] = v32;
		if (v10)
		{
			v33 = v27 - v30;
			v34 = v28 - v31;
			v35 = v14 & 3;
			v36 = v29 - v32;
			if (v35 != 3)
			{
				v37 = (float)(v34 * 0.4375) + *(float*)((char*)v23 + (_QWORD)v26);
				*(float*)((char*)v23 + (_QWORD)v17) = (float)(v33 * 0.4375) + *(float*)((char*)v23 + (_QWORD)v17);
				*(float*)((char*)v23 + (_QWORD)v26) = v37;
				*(float*)((char*)v23 + (_QWORD)v20) = (float)(v36 * 0.4375) + *(float*)((char*)v23 + (_QWORD)v20);
			}
			if (v14 < 0xC)
			{
				if ((v14 & 3) != 0)
				{
					v38 = v106;
					v39 = (float)(v34 * 0.1875) + *(float*)((char*)v23 + (_QWORD)v106);
					*(float*)((char*)v23 + (_QWORD)v18) = (float)(v33 * 0.1875) + *(float*)((char*)v23 + (_QWORD)v18);
					*(float*)((char*)v23 + (_QWORD)v38) = v39;
					*(float*)((char*)v23 + (_QWORD)v108) = (float)(v36 * 0.1875) + *(float*)((char*)v23 + (_QWORD)v108);
					v16 = v110;
				}
				v40 = v109;
				v41 = (float)(v34 * 0.3125) + *(float*)((char*)v23 + (_QWORD)v109);
				*(float*)((char*)v23 + (_QWORD)v19) = (float)(v33 * 0.3125) + *(float*)((char*)v23 + (_QWORD)v19);
				*(float*)((char*)v23 + (_QWORD)v40) = v41;
				*(float*)((char*)v23 + (_QWORD)v102) = (float)(v36 * 0.3125) + *(float*)((char*)v23 + (_QWORD)v102);
				v15 = v107;
				if (v35 != 3)
				{
					v42 = (float)(v33 * 0.0625) + *(float*)&v21[(_QWORD)v23];
					*(float*)&v111[(_QWORD)v23] = (float)(v34 * 0.0625) + *(float*)&v111[(_QWORD)v23];
					*(float*)&v21[(_QWORD)v23] = v42;
					*(float*)&v104[(_QWORD)v23] = (float)(v36 * 0.0625) + *(float*)&v104[(_QWORD)v23];
				}
			}
		}
		if (!v96)
		{
			*(float*)&v22[(_QWORD)v23 - 8] = v30 * v13;
			*(float*)&v25[(_QWORD)v23 - 8] = v31 * v12;
			*(float*)&v22[(_QWORD)v23] = v32 * v11;
		}
		++v14;
		v23 += 4;
	} while (v14 < 0x10);
	v43 = v97;
	sub_140266120((float*)&v101, (float*)&v100, (__int64)v142, v97, a5);
	if (v96)
	{
		v44 = *((float*)&v101 + 2);
		v45 = *((float*)&v101 + 1);
		v46 = *(float*)&v101;
		v47 = *((float*)&v100 + 2);
		v48 = *((float*)&v100 + 1);
		v49 = *(float*)&v100;
	}
	else
	{
		v45 = *((float*)&v101 + 1) * *(float*)&dword_140C4062C;
		v49 = *(float*)&v100 * *(float*)&dword_140C40628;
		v48 = *((float*)&v100 + 1) * *(float*)&dword_140C4062C;
		v46 = *(float*)&dword_140C40628 * *(float*)&v101;
		v44 = *((float*)&v101 + 2) * *(float*)&dword_140C40630;
		v47 = *((float*)&v100 + 2) * *(float*)&dword_140C40630;
	}
	v50 = 1.0;
	if (v46 >= 0.0)
	{
		if (v46 > 1.0)
			v46 = 1.0;
	}
	else
	{
		v46 = 0.0;
	}
	if (v45 >= 0.0)
	{
		if (v45 > 1.0)
			v45 = 1.0;
	}
	else
	{
		v45 = 0.0;
	}
	if (v44 >= 0.0)
	{
		if (v44 > 1.0)
			v44 = 1.0;
	}
	else
	{
		v44 = 0.0;
	}
	v51 = (int)(float)((float)(v44 * 31.0) + 0.5) | (32
		* ((int)(float)((float)(v45 * 63.0) + 0.5) | ((unsigned __int16)(int)(float)((float)(v46 * 31.0) + 0.5) << 6)));
	if (v49 >= 0.0)
	{
		if (v49 > 1.0)
			v49 = 1.0;
	}
	else
	{
		v49 = 0.0;
	}
	if (v48 >= 0.0)
	{
		if (v48 > 1.0)
			v48 = 1.0;
	}
	else
	{
		v48 = 0.0;
	}
	if (v47 >= 0.0)
	{
		if (v47 <= 1.0)
			v50 = v47;
	}
	else
	{
		v50 = 0.0;
	}
	v52 = v113;
	v53 = (__int64)v103;
	result = (unsigned int)(int)(float)((float)(v50 * 31.0) + 0.5);
	v54 = result | (32
		* ((int)(float)((float)(v48 * 63.0) + 0.5) | ((unsigned __int16)(int)(float)((float)(v49 * 31.0) + 0.5) << 6)));
	if (v97 == 4 && v51 == v54)
	{
		*(_WORD*)v103 = v51;
		*(_WORD*)(v53 + 2) = v54;
		*(_DWORD*)(v53 + 4) = 0;
	}
	else
	{
		HIDWORD(v98) = 1065353216;
		HIDWORD(v99) = 1065353216;
		if (v96)
		{
			*((float*)&v98 + 2) = (float)((int)(float)((float)(v44 * 31.0) + 0.5) & 0x1F) * 0.032258064;
			*((float*)&v98 + 1) = (float)((v51 >> 5) & 0x3F) * 0.015873017;
			*(float*)&v98 = (float)(v51 >> 11) * 0.032258064;
			v55 = v98;
			*((float*)&v99 + 2) = (float)(result & 0x1F) * 0.032258064;
			*((float*)&v99 + 1) = (float)((v54 >> 5) & 0x3F) * 0.015873017;
			*(float*)&v99 = (float)(v54 >> 11) * 0.032258064;
			v56 = v99;
		}
		else
		{
			*((float*)&v101 + 1) = (float)((float)((v51 >> 5) & 0x3F) * 0.015873017) * *(float*)&dword_140C4061C;
			*((float*)&v101 + 2) = (float)((float)((int)(float)((float)(v44 * 31.0) + 0.5) & 0x1F) * 0.032258064)
				* *(float*)&dword_140C40620;
			*(float*)&v101 = *(float*)&dword_140C40618 * (float)((float)(v51 >> 11) * 0.032258064);
			v55 = v101;
			*((float*)&v100 + 1) = (float)((float)((v54 >> 5) & 0x3F) * 0.015873017) * *(float*)&dword_140C4061C;
			*((float*)&v100 + 2) = (float)((float)(result & 0x1F) * 0.032258064) * *(float*)&dword_140C40620;
			*(float*)&v100 = (float)((float)(v54 >> 11) * 0.032258064) * *(float*)&dword_140C40618;
			v56 = v100;
		}
		if ((v43 == 3) == v51 <= v54)
		{
			*(_WORD*)v103 = v51;
			*(_WORD*)(v53 + 2) = v54;
			v114 = v55;
			v115 = v56;
		}
		else
		{
			*(_WORD*)v103 = v54;
			*(_WORD*)(v53 + 2) = v51;
			v114 = v56;
			v115 = v55;
		}
		v57 = *(float*)&v114;
		v58 = *((float*)&v114 + 1);
		v59 = *((float*)&v114 + 2);
		v60 = *(float*)&v115 - *(float*)&v114;
		v61 = *((float*)&v115 + 1) - *((float*)&v114 + 1);
		v62 = *((float*)&v115 + 2) - *((float*)&v114 + 2);
		if (v43 == 3)
		{
			v63 = &unk_140B60DF0;
			v116 = (float)(v60 * 0.5) + *(float*)&v114;
			v119 = (float)((float)(*((float*)&v115 + 3) - *((float*)&v114 + 3)) * 0.5) + *((float*)&v114 + 3);
			v117 = (float)(v61 * 0.5) + *((float*)&v114 + 1);
			v118 = (float)(v62 * 0.5) + *((float*)&v114 + 2);
		}
		else
		{
			v63 = &unk_140B60DA0;
			v116 = (float)(v60 * 0.33333334) + *(float*)&v114;
			v117 = (float)(v61 * 0.33333334) + *((float*)&v114 + 1);
			v118 = (float)(v62 * 0.33333334) + *((float*)&v114 + 2);
			v123 = (float)((float)(*((float*)&v115 + 3) - *((float*)&v114 + 3)) * 0.66666669) + *((float*)&v114 + 3);
			v119 = (float)((float)(*((float*)&v115 + 3) - *((float*)&v114 + 3)) * 0.33333334) + *((float*)&v114 + 3);
			v120 = (float)(v60 * 0.66666669) + *(float*)&v114;
			v121 = (float)(v61 * 0.66666669) + *((float*)&v114 + 1);
			v122 = (float)(v62 * 0.66666669) + *((float*)&v114 + 2);
		}
		v64 = (float)(v43 - 1);
		if (v43 - 1 < 0)
			v64 = v64 + 1.8446744e19;
		if (v51 == v54)
			v65 = 0.0;
		else
			v65 = v64 / (float)((float)((float)(v61 * v61) + (float)(v60 * v60)) + (float)(v62 * v62));
		v66 = a5 & 0x10000;
		v67 = 0;
		v68 = v60 * v65;
		v69 = v61 * v65;
		v70 = v62 * v65;
		if (v95)
		{
			sub_1407E4830(&v124, 0i64, 0x100ui64);
			v66 = a5 & 0x10000;
		}
		v71 = &v144[-v52];
		v72 = v130 - v52 + 18;
		v73 = v134 - v52 + 2;
		v74 = v138 - v52 + 2;
		v75 = 0i64;
		v76 = (float*)(v52 + 4);
		v77 = v142 - v52 + 170;
		v78 = v107;
		do
		{
			if (v43 == 3 && a4 > v76[2])
			{
				v67 = (v67 >> 2) | 0xC0000000;
			}
			else
			{
				if (v96)
				{
					v79 = *(v76 - 1);
					v80 = *v76;
					v81 = v76[1];
				}
				else
				{
					v79 = *(float*)&dword_140C40618 * *(v76 - 1);
					v80 = *(float*)&dword_140C4061C * *v76;
					v81 = *(float*)&dword_140C40620 * v76[1];
				}
				if (v66)
				{
					v79 = v79 + *(float*)((char*)v76 + (_QWORD)v78 - 4);
					v80 = v80 + *(float*)((char*)v76 + (_QWORD)v78);
					v81 = v81 + *(float*)((char*)v76 + (_QWORD)v110);
				}
				v82 = (float)((float)((float)(v80 - v58) * v69) + (float)((float)(v79 - v57) * v68))
					+ (float)((float)(v81 - v59) * v70);
				if (v82 > 0.0)
				{
					if (v82 < v64)
					{
						v84 = v82 + 0.5;
						v85 = 0i64;
						if (v84 >= 9.223372e18)
						{
							v84 = v84 - 9.223372e18;
							if (v84 < 9.223372e18)
								v85 = 0x8000000000000000ui64;
						}
						v83 = v63[2 * v85 + 2 * (unsigned int)(int)v84];
					}
					else
					{
						v83 = 1;
					}
				}
				else
				{
					v83 = 0;
				}
				v67 = (v67 >> 2) | (v83 << 30);
				v66 = a5 & 0x10000;
				if (v95)
				{
					v86 = *(float*)((char*)v76 + (_QWORD)v71);
					v87 = v75 & 3;
					v88 = (float)(v79 - *((float*)&v114 + 4 * v83)) * v86;
					v89 = (float)(v80 - *((float*)&v114 + 4 * v83 + 1)) * v86;
					v90 = (float)(v81 - *((float*)&v114 + 4 * v83 + 2)) * v86;
					if (v87 != 3)
					{
						*(float*)((char*)v76 + (_QWORD)v112) = (float)(v88 * 0.4375) + *(float*)((char*)v76 + (_QWORD)v112);
						v91 = (float)(v90 * 0.4375) + *(float*)((char*)v76 + (_QWORD)v72);
						*(float*)((char*)v76 + (_QWORD)v105) = (float)(v89 * 0.4375) + *(float*)((char*)v76 + (_QWORD)v105);
						*(float*)((char*)v76 + (_QWORD)v72) = v91;
					}
					if (v75 >= 0xC)
					{
						v66 = a5 & 0x10000;
					}
					else
					{
						if ((v75 & 3) != 0)
						{
							*(float*)((char*)v76 + (_QWORD)v106) = (float)(v88 * 0.1875) + *(float*)((char*)v76 + (_QWORD)v106);
							v92 = (float)(v90 * 0.1875) + *(float*)((char*)v76 + (_QWORD)v73);
							*(float*)((char*)v76 + (_QWORD)v108) = (float)(v89 * 0.1875) + *(float*)((char*)v76 + (_QWORD)v108);
							*(float*)((char*)v76 + (_QWORD)v73) = v92;
						}
						*(float*)((char*)v76 + (_QWORD)v109) = (float)(v88 * 0.3125) + *(float*)((char*)v76 + (_QWORD)v109);
						v93 = (float)(v90 * 0.3125) + *(float*)((char*)v76 + (_QWORD)v74);
						*(float*)((char*)v76 + (_QWORD)v102) = (float)(v89 * 0.3125) + *(float*)((char*)v76 + (_QWORD)v102);
						*(float*)((char*)v76 + (_QWORD)v74) = v93;
						if (v87 != 3)
						{
							v94 = (float)(v90 * 0.0625) + *(float*)((char*)v76 + (_QWORD)v77);
							*(float*)&v111[(_QWORD)v76] = (float)(v88 * 0.0625) + *(float*)&v111[(_QWORD)v76];
							*(float*)((char*)v76 + (_QWORD)v77) = v94;
							*(float*)&v104[(_QWORD)v76] = (float)(v89 * 0.0625) + *(float*)&v104[(_QWORD)v76];
						}
						v66 = a5 & 0x10000;
					}
				}
			}
			++v75;
			v76 += 4;
		} while (v75 < 0x10);
		result = (__int64)v103;
		*((_DWORD*)v103 + 1) = v67;
	}
	return result;
}
// 140C40618: using guessed type int dword_140C40618;
// 140C4061C: using guessed type int dword_140C4061C;
// 140C40620: using guessed type int dword_140C40620;
// 140C40628: using guessed type int dword_140C40628;
// 140C4062C: using guessed type int dword_140C4062C;
// 140C40630: using guessed type int dword_140C40630;
// 140267380: using guessed type char var_2A8[4];
// 140267380: using guessed type char var_298[4];
// 140267380: using guessed type char var_2A4[4];
// 140267380: using guessed type char var_288[4];
// 140267380: using guessed type char var_2A0[4];
// 140267380: using guessed type char var_1CC[4];
// 140267380: using guessed type char var_294[4];
// 140267380: using guessed type char var_290[4];
// 140267380: using guessed type char var_284[4];
// 140267380: using guessed type char var_280[4];
// 140267380: using guessed type char var_1C8[248];

