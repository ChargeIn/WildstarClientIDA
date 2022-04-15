//----- (00000001406008C0) ----------------------------------------------------
__int64 __fastcall sub_1406008C0(
	__int64 a1,
	__int64 a2,
	int a3,
	int a4,
	int a5,
	int a6,
	unsigned int* a7,
	__int64 a8,
	int a9,
	__int128* a10,
	float a11,
	__int64 a12,
	__int64 a13,
	_QWORD* a14,
	_QWORD* a15,
	int a16)
{
	unsigned int v19; // r14d
	__int64 v20; // rdi
	int v21; // ecx
	__m128 v22; // xmm3
	__int128 v23; // xmm1
	__int128 v24; // xmm0
	__m128 v25; // xmm1
	int v26; // ecx
	__int128 v27; // xmm0
	int v28; // eax
	int v29; // eax
	__int64 v30; // rax
	unsigned __int64 v31; // rax
	unsigned __int64 v32; // rax
	__int64 v33; // rax
	unsigned __int64 v34; // rax
	__int64 v35; // rax
	unsigned __int64 v36; // rax
	__int64 v37; // rax
	unsigned __int64 v38; // rax
	__int64 v39; // rax
	unsigned __int64 v40; // rax
	__int64 v41; // rax
	float v42; // xmm0_4
	float v43; // xmm6_4
	float v44; // xmm7_4
	double v45; // xmm0_8
	double v46; // xmm1_8
	float v47; // xmm6_4
	float v48; // xmm2_4
	float v49; // xmm2_4
	float v50; // xmm7_4
	double v51; // xmm0_8
	__m128 v52; // xmm5
	int v53; // ecx
	int v54; // eax
	float v55; // xmm2_4
	unsigned __int64 v56; // rcx
	int v57; // eax
	float v58; // xmm0_4
	bool v59; // zf
	int v60; // xmm0_4
	__m128 v61; // xmm3
	__m128 v62; // xmm2
	float v63; // xmm1_4
	__m128 v64; // xmm3
	float v65; // xmm2_4
	int v67; // [rsp+28h] [rbp-E0h] BYREF
	__int128 v68; // [rsp+38h] [rbp-D0h]
	__int128 v69; // [rsp+48h] [rbp-C0h]
	__int128 v70; // [rsp+58h] [rbp-B0h]
	_OWORD v71[3]; // [rsp+68h] [rbp-A0h]
	__int64 v72; // [rsp+98h] [rbp-70h]
	__int64 v73; // [rsp+A0h] [rbp-68h]
	__int64 v74; // [rsp+A8h] [rbp-60h]
	__int64 v75; // [rsp+B0h] [rbp-58h]
	__int64 v76; // [rsp+B8h] [rbp-50h]
	__int64 v77; // [rsp+C0h] [rbp-48h]
	__int64 v78; // [rsp+C8h] [rbp-40h]
	__int64 v79; // [rsp+D0h] [rbp-38h]
	int v80; // [rsp+D8h] [rbp-30h]
	int v81; // [rsp+DCh] [rbp-2Ch]
	int v82; // [rsp+E0h] [rbp-28h]
	int v83; // [rsp+E4h] [rbp-24h]
	int v84; // [rsp+E8h] [rbp-20h]
	float v85; // [rsp+ECh] [rbp-1Ch]
	float v86; // [rsp+F0h] [rbp-18h]
	float v87; // [rsp+F4h] [rbp-14h]
	BOOL v88; // [rsp+F8h] [rbp-10h]
	int v89; // [rsp+FCh] [rbp-Ch]
	int v90; // [rsp+100h] [rbp-8h]
	int v91; // [rsp+104h] [rbp-4h]
	int v92; // [rsp+108h] [rbp+0h]
	int v93; // [rsp+10Ch] [rbp+4h]
	int v94; // [rsp+110h] [rbp+8h]
	int v95; // [rsp+114h] [rbp+Ch]
	int v96; // [rsp+118h] [rbp+10h]
	int v97; // [rsp+120h] [rbp+18h]
	int v98; // [rsp+124h] [rbp+1Ch]
	int v99; // [rsp+128h] [rbp+20h]
	int v100; // [rsp+12Ch] [rbp+24h]
	int v101; // [rsp+134h] [rbp+2Ch]
	int v102; // [rsp+138h] [rbp+30h]
	int v103; // [rsp+13Ch] [rbp+34h]
	int v104; // [rsp+140h] [rbp+38h]
	int v105; // [rsp+144h] [rbp+3Ch]
	int v106; // [rsp+148h] [rbp+40h]
	float v107; // [rsp+14Ch] [rbp+44h]
	int v108; // [rsp+150h] [rbp+48h]
	int v109; // [rsp+154h] [rbp+4Ch]
	float v110; // [rsp+158h] [rbp+50h]
	float v111; // [rsp+15Ch] [rbp+54h]
	int v112; // [rsp+164h] [rbp+5Ch]
	int v113; // [rsp+168h] [rbp+60h]
	int v114; // [rsp+16Ch] [rbp+64h]
	int v115; // [rsp+170h] [rbp+68h]
	int v116; // [rsp+174h] [rbp+6Ch]
	int v117; // [rsp+178h] [rbp+70h]
	__int128 v118; // [rsp+188h] [rbp+80h]
	__int128 v119; // [rsp+198h] [rbp+90h]
	__int128 v120; // [rsp+1A8h] [rbp+A0h]
	__m128 v121; // [rsp+1B8h] [rbp+B0h]

	sub_1407E4830(&v67, 0i64, 0x160ui64);
	v19 = *(_DWORD*)(a2 + 80);
	v67 = *(_DWORD*)a2;
	v20 = 0i64;
	v98 = 1;
	v80 |= (v19 >> 2) & 2 | ((v19 & 0x7E0 | (((v19 >> 2) & 0xF000 | v19 & 0x10) >> 1)) >> 3);
	v21 = *(_DWORD*)(a2 + 4);
	if (v21 == 2)
	{
		v97 = 2;
	}
	else if (v21 == 3)
	{
		v97 = 3;
	}
	else
	{
		v97 = v21 == 1;
	}
	v81 = a6;
	if ((unsigned int)sub_1407E6AF0((unsigned __int64*)a8, (__int64)&ymmword_140C78390, 0x40ui64))
	{
		v23 = *(_OWORD*)(a8 + 16);
		v118 = *(_OWORD*)a8;
		v24 = *(_OWORD*)(a8 + 32);
		v119 = v23;
		v25 = *(__m128*)(a8 + 48);
		v120 = v24;
		v121 = v25;
	}
	else
	{
		v22 = (__m128) * a7;
		v118 = xmmword_140C78410;
		v120 = xmmword_140C78430;
		v119 = xmmword_140C78420;
		v121 = _mm_unpacklo_ps(_mm_unpacklo_ps(v22, (__m128)a7[2]), _mm_unpacklo_ps((__m128)a7[1], (__m128)0x3F800000u));
	}
	v26 = *(_DWORD*)(a2 + 176);
	v84 = a3;
	v105 = v26;
	v68 = v118;
	v69 = v119;
	v70 = v120;
	v82 = a9;
	v71[0] = v121;
	v27 = *a10;
	v83 = a16;
	v28 = *(_DWORD*)(a2 + 84);
	v71[1] = v27;
	LODWORD(v27) = *(_DWORD*)(a2 + 96);
	v96 = v28;
	v29 = *(_DWORD*)(a2 + 92);
	v100 = v27;
	v99 = v29;
	v106 = *(_DWORD*)(a2 + 180);
	if (!v26)
	{
		v30 = a12;
		if (!a12)
		{
			v31 = *(_QWORD*)(a2 + 24);
			if (v31)
			{
				if (v31 <= qword_140C3FE70)
					v30 = qword_140C3FE68 + v31;
				else
					v30 = 0i64;
			}
			else
			{
				v30 = 0i64;
			}
		}
		v72 = v30;
	}
	v32 = *(_QWORD*)(a2 + 40);
	if (v32)
	{
		if (v32 <= qword_140C3FE70)
			v33 = qword_140C3FE68 + v32;
		else
			v33 = 0i64;
	}
	else
	{
		v33 = 0i64;
	}
	v78 = v33;
	v89 = *(_DWORD*)(a2 + 48);
	v90 = *(_DWORD*)(a2 + 52);
	v34 = *(_QWORD*)(a2 + 32);
	if (v34)
	{
		if (v34 <= qword_140C3FE70)
			v35 = qword_140C3FE68 + v34;
		else
			v35 = 0i64;
	}
	else
	{
		v35 = 0i64;
	}
	v73 = v35;
	v36 = *(_QWORD*)(a2 + 128);
	if (v36)
	{
		if (v36 <= qword_140C3FE70)
			v37 = qword_140C3FE68 + v36;
		else
			v37 = 0i64;
	}
	else
	{
		v37 = 0i64;
	}
	v74 = v37;
	v38 = *(_QWORD*)(a2 + 136);
	if (v38)
	{
		if (v38 <= qword_140C3FE70)
			v39 = qword_140C3FE68 + v38;
		else
			v39 = 0i64;
	}
	else
	{
		v39 = 0i64;
	}
	v75 = v39;
	v40 = *(_QWORD*)(a2 + 144);
	if (v40)
	{
		if (v40 <= qword_140C3FE70)
			v41 = qword_140C3FE68 + v40;
		else
			v41 = 0i64;
	}
	else
	{
		v41 = 0i64;
	}
	v76 = v41;
	v77 = a13;
	if ((v19 & 0x2000) != 0)
		v42 = (float)a4;
	else
		v42 = *(float*)(a2 + 152);
	v43 = *(float*)(a2 + 160);
	v44 = *(float*)(a2 + 156);
	v87 = v42;
	v45 = (*(double(__fastcall**)(__int64*, __int64, __int64))(qword_140C77890 + 40))(
		&qword_140C77890,
		qword_140C3FE70,
		qword_140C3FE68);
	v46 = (float)(v43 - v44);
	v47 = *(float*)(a2 + 168);
	v48 = v45 * v46;
	v49 = v48 + v44;
	v50 = *(float*)(a2 + 164);
	v85 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * v49;
	v51 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 40))(&qword_140C77890);
	v52 = (__m128)(unsigned int)dword_140C3B438;
	v52.m128_f32[0] = *(float*)&dword_140C3B438 * 0.0055555557;
	v53 = a5 + *(_DWORD*)(a2 + 72);
	v88 = *(_DWORD*)(a2 + 172) == 1;
	v54 = *(_DWORD*)(a2 + 64);
	v95 = v53;
	v55 = v51 * (float)(v47 - v50);
	v56 = *(_QWORD*)(a2 + 112);
	v91 = v54;
	v92 = *(_DWORD*)(a2 + 68);
	v57 = *(_DWORD*)(a2 + 56);
	v86 = (float)(v55 + v50) * (float)(*(float*)&dword_140C3B438 * 0.0055555557);
	v93 = v57;
	v94 = *(_DWORD*)(a2 + 60);
	v101 = *(_DWORD*)(a2 + 100);
	v102 = *(_DWORD*)(a2 + 104);
	v103 = *(_DWORD*)(a2 + 108);
	if (v56 && v56 <= qword_140C3FE70)
		v20 = v56 + qword_140C3FE68;
	v58 = *(float*)(a2 + 184);
	v104 = *(_DWORD*)(a2 + 120);
	v79 = v20;
	if (v58 == 0.0)
		v107 = 0.0;
	else
		v107 = 1.0 / (float)(v58 * v58);
	v59 = (*(_DWORD*)(a2 + 80) & 0x20000) == 0;
	v60 = *(_DWORD*)(a2 + 188);
	v61 = v52;
	v62 = v52;
	v52.m128_f32[0] = v52.m128_f32[0] * *(float*)(a2 + 204);
	v61.m128_f32[0] = v61.m128_f32[0] * *(float*)(a2 + 196);
	v62.m128_f32[0] = v62.m128_f32[0] * *(float*)(a2 + 200);
	v109 = *(_DWORD*)(a2 + 192);
	v108 = v60;
	v63 = *(float*)(a2 + 212);
	v111 = v63;
	v64 = _mm_unpacklo_ps(_mm_unpacklo_ps(v61, v52), _mm_unpacklo_ps(v62, (__m128)0i64));
	v65 = *(float*)(a2 + 208);
	v110 = v65;
	v71[2] = v64;
	if (!v59)
	{
		if (v65 == 0.0)
			v110 = a11;
		else
			v110 = v65 * a11;
		if (v63 == 0.0)
			v111 = a11;
		else
			v111 = v63 * a11;
	}
	v112 = *(_DWORD*)(a2 + 228);
	v113 = *(_DWORD*)(a2 + 232);
	v114 = *(_DWORD*)(a2 + 236);
	v115 = *(_DWORD*)(a2 + 224);
	v116 = *(_DWORD*)(a2 + 240);
	v117 = *(_DWORD*)(a2 + 244);
	return sub_1406007C0(qword_140C65BB0, (__int64)&v67, a14, a15);
}
// 140C3B438: using guessed type int dword_140C3B438;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65BB0: using guessed type __int64 qword_140C65BB0;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C78410: using guessed type __int128 xmmword_140C78410;
// 140C78420: using guessed type __int128 xmmword_140C78420;
// 140C78430: using guessed type __int128 xmmword_140C78430;

