#include "../winhttp.h"

//----- (0000000140053550) ----------------------------------------------------
__int64 __fastcall sub_140053550(__int64* a1, unsigned int a2)
{
	unsigned int v4; // eax
	__int64 v5; // rdx
	int v6; // ecx
	int v7; // eax
	float v8; // xmm1_4
	float v9; // xmm0_4
	int v10; // eax
	float v11; // xmm0_4
	int v12; // eax
	float v13; // xmm0_4
	int v14; // eax
	float v15; // xmm0_4
	int v16; // eax
	float v17; // xmm0_4
	int v18; // eax
	__int64 v19; // rax
	int* v20; // rdx
	__int64 v21; // rdi
	__int64 v22; // rcx
	__int128 v23; // xmm0
	__int128 v24; // xmm1
	__int128 v25; // xmm0
	__int128 v26; // xmm1
	__int128 v27; // xmm0
	__int128 v28; // xmm1
	__int128 v29; // xmm0
	__int128 v30; // xmm1
	__int128 v31; // xmm1
	__int128 v32; // xmm0
	_QWORD* v33; // rax
	__int128 v34; // xmm0
	__int128 v35; // xmm1
	__int64 v36; // rcx
	__int128 v37; // xmm0
	__int128 v38; // xmm1
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rax
	__int64 v42; // r15
	__int64 v43; // rcx
	__int64 v44; // r12
	__int64 v45; // r14
	float* v46; // r13
	int v47; // esi
	__int64 v48; // rax
	unsigned int v49; // ecx
	__int64 v50; // rdx
	__int16 v51; // ax
	__int64 v52; // rcx
	float v53; // xmm5_4
	float v54; // xmm6_4
	float v55; // xmm4_4
	float v56; // xmm2_4
	float v57; // xmm3_4
	float v58; // xmm5_4
	float v59; // xmm2_4
	float v60; // xmm3_4
	float v61; // xmm2_4
	float v62; // xmm5_4
	float v63; // xmm3_4
	float v64; // xmm5_4
	__int64 v65; // r9
	__int64 v66; // rdx
	int v67; // ecx
	int v68; // eax
	int v69; // edx
	int v70; // ecx
	int v71; // edx
	int v72; // edx
	int v73; // ecx
	int v74; // ecx
	int v75; // edx
	int v76; // edx
	int v77; // ecx
	int v78; // ecx
	int v79; // edx
	int v80; // edx
	__int64 v81; // rax
	_OWORD* v82; // r9
	__int64 v83; // rcx
	__int128 v84; // xmm0
	_OWORD* v85; // rax
	__int128 v86; // xmm1
	__int128 v87; // xmm2
	__int128 v88; // xmm3
	__int64 result; // rax
	int v90[4]; // [rsp+40h] [rbp-C0h] BYREF
	float v91; // [rsp+50h] [rbp-B0h]
	float v92; // [rsp+54h] [rbp-ACh]
	__m128 v93; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v94; // [rsp+70h] [rbp-90h]
	__int64 v95; // [rsp+78h] [rbp-88h]
	__int64 v96; // [rsp+80h] [rbp-80h]
	__int64 v97; // [rsp+88h] [rbp-78h]
	__int64 v98; // [rsp+90h] [rbp-70h]
	__int64 v99; // [rsp+98h] [rbp-68h]
	__int64 v100; // [rsp+A0h] [rbp-60h]
	__int64 v101; // [rsp+A8h] [rbp-58h]
	__int128 v102; // [rsp+B0h] [rbp-50h]
	__int128 v103; // [rsp+C0h] [rbp-40h]
	__int128 v104; // [rsp+D0h] [rbp-30h]
	__int128 v105; // [rsp+E0h] [rbp-20h]
	__int64 v106[8]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v107[8]; // [rsp+130h] [rbp+30h] BYREF
	int v108[236]; // [rsp+170h] [rbp+70h] BYREF
	char v109[2048]; // [rsp+520h] [rbp+420h] BYREF

	v4 = sub_14018CDF0();
	v5 = v4;
	v6 = v4 - *((_DWORD*)a1 + 6);
	if ((unsigned int)v6 > 0x3E8)
	{
		v7 = *((_DWORD*)a1 + 7);
		*((_DWORD*)a1 + 7) = 0;
		*((_DWORD*)a1 + 6) = v5;
		v8 = 1000.0 / (float)v6;
		v9 = (float)v7;
		v10 = *((_DWORD*)a1 + 9);
		*((_DWORD*)a1 + 9) = 0;
		*((float*)a1 + 8) = v9 * v8;
		v11 = (float)v10;
		v12 = *((_DWORD*)a1 + 11);
		*((_DWORD*)a1 + 11) = 0;
		*((float*)a1 + 10) = v11 * v8;
		v13 = (float)v12;
		v14 = *((_DWORD*)a1 + 13);
		*((_DWORD*)a1 + 13) = 0;
		*((float*)a1 + 12) = v13 * v8;
		v15 = (float)v14;
		v16 = *((_DWORD*)a1 + 15);
		*((_DWORD*)a1 + 15) = 0;
		*((float*)a1 + 14) = v15 * v8;
		v17 = (float)v16;
		v18 = *((_DWORD*)a1 + 17);
		*((_DWORD*)a1 + 17) = 0;
		*((float*)a1 + 16) = v17 * v8;
		*((float*)a1 + 18) = (float)v18 * v8;
	}
	v19 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 720i64))(
		qword_140C65670,
		v5,
		0i64);
	v20 = v108;
	v21 = 7i64;
	if ((((unsigned __int8)v108 | (unsigned __int8)v19) & 0xF) != 0)
	{
		sub_1407DB590(v108, (int*)v19, 0x3B0ui64);
	}
	else
	{
		v22 = 7i64;
		do
		{
			v23 = *(_OWORD*)v19;
			v24 = *(_OWORD*)(v19 + 16);
			v20 += 32;
			v19 += 128i64;
			*((_OWORD*)v20 - 8) = v23;
			v25 = *(_OWORD*)(v19 - 96);
			*((_OWORD*)v20 - 7) = v24;
			v26 = *(_OWORD*)(v19 - 80);
			*((_OWORD*)v20 - 6) = v25;
			v27 = *(_OWORD*)(v19 - 64);
			*((_OWORD*)v20 - 5) = v26;
			v28 = *(_OWORD*)(v19 - 48);
			*((_OWORD*)v20 - 4) = v27;
			v29 = *(_OWORD*)(v19 - 32);
			*((_OWORD*)v20 - 3) = v28;
			v30 = *(_OWORD*)(v19 - 16);
			*((_OWORD*)v20 - 2) = v29;
			*((_OWORD*)v20 - 1) = v30;
			--v22;
		} while (v22);
		v31 = *(_OWORD*)(v19 + 16);
		*(_OWORD*)v20 = *(_OWORD*)v19;
		v32 = *(_OWORD*)(v19 + 32);
		*((_OWORD*)v20 + 1) = v31;
		*((_OWORD*)v20 + 2) = v32;
	}
	v33 = sub_1401B73C0(v22, v107);
	v94 = *v33;
	v34 = *(_OWORD*)v33;
	v35 = *((_OWORD*)v33 + 1);
	v95 = v33[1];
	v36 = v33[2];
	v102 = v34;
	v103 = v35;
	v37 = *((_OWORD*)v33 + 2);
	v38 = *((_OWORD*)v33 + 3);
	v96 = v36;
	v97 = v33[3];
	v39 = v33[4];
	v104 = v37;
	v105 = v38;
	v98 = v39;
	v40 = v33[5];
	v100 = v33[6];
	v41 = v33[7];
	v99 = v40;
	v101 = v41;
	v42 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65808 + 192i64))(qword_140C65808);
	v44 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65808 + 200i64))(qword_140C65808);
	if (qword_140C63760)
		sub_14019EDC0(v43, (a2 >> 1) & 1);
	if ((a2 & 3) != 0)
	{
		v45 = (*(__int64 (**)(void))(*(_QWORD*)qword_140C65670 + 584i64))();
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
		v46 = (float*)qword_140C635F0;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
		v47 = a2 & 1;
		if (v47)
		{
			if (v46[58] > 0.0)
			{
				v48 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 240i64))(
					qword_140C65670,
					48i64);
				if (v48)
				{
					v49 = 1;
					v50 = v48 + 4;
					do
					{
						v50 += 12i64;
						*(_WORD*)(v50 - 16) = v49 - 1;
						*(_WORD*)(v50 - 14) = v49;
						*(_WORD*)(v50 - 12) = v49 + 1;
						*(_WORD*)(v50 - 10) = v49 + 1;
						*(_WORD*)(v50 - 8) = v49;
						v51 = v49 + 2;
						v49 += 4;
						*(_WORD*)(v50 - 6) = v51;
					} while (v49 < 0x11);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 248i64))(qword_140C65670);
					v52 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 224i64))(
						qword_140C65670,
						448i64,
						0i64,
						0i64);
					if (v52)
					{
						v53 = 1.0 / v46[58];
						v54 = (float)(*(_DWORD*)(v45 + 12) - 5);
						v55 = (float)(*(_DWORD*)(v45 + 8) - 5);
						v56 = v53 * v46[59];
						v57 = v53 * v46[60];
						v58 = v53 * v46[61];
						v59 = (float)(v56 * 120.0) - 120.0;
						*(float*)v52 = v55 - 120.0;
						*(float*)(v52 + 4) = v54 - 5.0;
						*(_DWORD*)(v52 + 8) = 0;
						v60 = (float)(v57 * 120.0) + v59;
						*(_DWORD*)(v52 + 12) = 1065353216;
						*(_DWORD*)(v52 + 16) = -1;
						*(_QWORD*)(v52 + 20) = qword_140C67480;
						v61 = v59 + v55;
						v62 = (float)(v58 * 120.0) + v60;
						v63 = v60 + v55;
						*(float*)(v52 + 28) = v55 - 120.0;
						*(float*)(v52 + 32) = v54;
						*(_DWORD*)(v52 + 36) = 0;
						*(_DWORD*)(v52 + 40) = 1065353216;
						*(_DWORD*)(v52 + 44) = -1;
						*(_QWORD*)(v52 + 48) = qword_140C67480;
						*(float*)(v52 + 56) = v61;
						*(float*)(v52 + 60) = v54 - 5.0;
						*(_DWORD*)(v52 + 64) = 0;
						*(_DWORD*)(v52 + 68) = 1065353216;
						*(_DWORD*)(v52 + 72) = -1;
						*(_QWORD*)(v52 + 76) = qword_140C67480;
						*(float*)(v52 + 84) = v61;
						*(float*)(v52 + 88) = v54;
						*(_DWORD*)(v52 + 92) = 0;
						*(_DWORD*)(v52 + 96) = 1065353216;
						*(_DWORD*)(v52 + 100) = -1;
						*(_QWORD*)(v52 + 104) = qword_140C67480;
						*(float*)(v52 + 112) = v61;
						*(float*)(v52 + 116) = v54 - 5.0;
						*(_DWORD*)(v52 + 120) = 0;
						*(_DWORD*)(v52 + 124) = 1065353216;
						*(_DWORD*)(v52 + 128) = -4210753;
						*(_QWORD*)(v52 + 132) = qword_140C67480;
						*(float*)(v52 + 140) = v61;
						*(float*)(v52 + 144) = v54;
						*(_DWORD*)(v52 + 148) = 0;
						*(_DWORD*)(v52 + 152) = 1065353216;
						*(_DWORD*)(v52 + 156) = -4210753;
						*(_QWORD*)(v52 + 160) = qword_140C67480;
						*(float*)(v52 + 168) = v63;
						*(float*)(v52 + 172) = v54 - 5.0;
						*(_DWORD*)(v52 + 176) = 0;
						*(_DWORD*)(v52 + 180) = 1065353216;
						*(_DWORD*)(v52 + 184) = -4210753;
						*(_QWORD*)(v52 + 188) = qword_140C67480;
						*(float*)(v52 + 196) = v63;
						*(float*)(v52 + 200) = v54;
						*(_DWORD*)(v52 + 204) = 0;
						*(_DWORD*)(v52 + 208) = 1065353216;
						*(_DWORD*)(v52 + 212) = -4210753;
						v64 = v62 + v55;
						*(_QWORD*)(v52 + 216) = qword_140C67480;
						*(float*)(v52 + 224) = v63;
						*(float*)(v52 + 228) = v54 - 5.0;
						*(_DWORD*)(v52 + 232) = 0;
						*(_DWORD*)(v52 + 236) = 1065353216;
						*(_DWORD*)(v52 + 240) = -8421505;
						*(_QWORD*)(v52 + 244) = qword_140C67480;
						*(float*)(v52 + 252) = v63;
						*(float*)(v52 + 256) = v54;
						*(_DWORD*)(v52 + 260) = 0;
						*(_DWORD*)(v52 + 264) = 1065353216;
						*(_DWORD*)(v52 + 268) = -8421505;
						*(_QWORD*)(v52 + 272) = qword_140C67480;
						*(float*)(v52 + 280) = v64;
						*(float*)(v52 + 284) = v54 - 5.0;
						*(_DWORD*)(v52 + 288) = 0;
						*(_DWORD*)(v52 + 292) = 1065353216;
						*(_DWORD*)(v52 + 296) = -8421505;
						*(_QWORD*)(v52 + 300) = qword_140C67480;
						*(float*)(v52 + 308) = v64;
						*(float*)(v52 + 312) = v54;
						*(_DWORD*)(v52 + 316) = 0;
						*(_DWORD*)(v52 + 320) = 1065353216;
						*(_DWORD*)(v52 + 324) = -8421505;
						*(_QWORD*)(v52 + 328) = qword_140C67480;
						*(float*)(v52 + 336) = v64;
						*(float*)(v52 + 340) = v54 - 5.0;
						*(_DWORD*)(v52 + 344) = 0;
						*(_DWORD*)(v52 + 348) = 1065353216;
						*(_DWORD*)(v52 + 352) = -12632257;
						*(_QWORD*)(v52 + 356) = qword_140C67480;
						*(float*)(v52 + 364) = v64;
						*(float*)(v52 + 368) = v54;
						*(_DWORD*)(v52 + 372) = 0;
						*(_DWORD*)(v52 + 376) = 1065353216;
						*(_DWORD*)(v52 + 380) = -12632257;
						*(_QWORD*)(v52 + 384) = qword_140C67480;
						*(float*)(v52 + 392) = v55;
						*(float*)(v52 + 396) = v54 - 5.0;
						*(_DWORD*)(v52 + 400) = 0;
						*(_DWORD*)(v52 + 404) = 1065353216;
						*(_DWORD*)(v52 + 408) = -12632257;
						*(_QWORD*)(v52 + 412) = qword_140C67480;
						*(float*)(v52 + 420) = v55;
						*(float*)(v52 + 424) = v54;
						*(_DWORD*)(v52 + 428) = 0;
						*(_DWORD*)(v52 + 432) = 1065353216;
						*(_DWORD*)(v52 + 436) = -12632257;
						*(_QWORD*)(v52 + 440) = qword_140C67480;
						(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 232i64))(qword_140C65670);
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
							qword_140C65670,
							a1[2],
							0i64);
						(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)qword_140C65670 + 656i64))(
							qword_140C65670,
							3i64,
							0i64);
					}
				}
			}
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 56i64))(qword_140C65680);
		if (v47)
		{
			v92 = (float)*(int*)(v45 + 12) - 12.0;
			*(float*)&v90[1] = v92;
			v65 = (unsigned int)(int)(float)(*((float*)a1 + 8) + 0.5);
			v91 = (float)*(int*)(v45 + 8) - 130.0;
			*(float*)v90 = v91;
			sub_14001B370(v109, 1024i64, L"%d fps", v65);
			v66 = *a1;
			v93 = _mm_mul_ps(
				_mm_cvtepi32_ps(
					_mm_shuffle_epi32(
						_mm_unpacklo_epi16(
							_mm_unpacklo_epi8(_mm_load_si128((const __m128i*) & xmmword_140B7B6F0), (__m128i)0i64),
							(__m128i)0i64),
						198)),
				(__m128)xmmword_140B7AB70);
			(*(void(__fastcall**)(__int64, __int64, char*, __int64, int*, int, __m128*, int))(*(_QWORD*)qword_140C65680
				+ 264i64))(
					qword_140C65680,
					v66,
					v109,
					-1i64,
					v90,
					258,
					&v93,
					1);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 296i64))(qword_140C65680);
	}
	v67 = v108[72];
	*((_DWORD*)a1 + 9) += v108[46] - *((_DWORD*)a1 + 65);
	v68 = v108[178];
	v69 = v108[58] + *((_DWORD*)a1 + 9) - *((_DWORD*)a1 + 77);
	*((_DWORD*)a1 + 9) = v69;
	v70 = v69 + v67 - *((_DWORD*)a1 + 91);
	v71 = v108[94];
	*((_DWORD*)a1 + 9) = v70;
	v72 = v70 + v71 - *((_DWORD*)a1 + 113);
	v73 = v108[106];
	*((_DWORD*)a1 + 9) = v72;
	v74 = v72 + v73 - *((_DWORD*)a1 + 125);
	v75 = v108[120];
	*((_DWORD*)a1 + 9) = v74;
	v76 = v74 + v75 - *((_DWORD*)a1 + 139);
	v77 = v108[142];
	*((_DWORD*)a1 + 9) = v76;
	v78 = v76 + v77 - *((_DWORD*)a1 + 161);
	v79 = v108[154];
	*((_DWORD*)a1 + 9) = v78;
	v80 = v78 + v79 - *((_DWORD*)a1 + 173);
	*((_DWORD*)a1 + 9) = v80;
	*((_DWORD*)a1 + 9) = v80 + v68 - *((_DWORD*)a1 + 197);
	*((_DWORD*)a1 + 11) += DWORD2(v103) - *((_DWORD*)a1 + 262);
	*((_DWORD*)a1 + 13) += DWORD2(v105) - *((_DWORD*)a1 + 270);
	*((_DWORD*)a1 + 15) += v42 - *((_DWORD*)a1 + 272);
	*((_DWORD*)a1 + 17) += v44 - *((_DWORD*)a1 + 274);
	v81 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 720i64))(qword_140C65670);
	v82 = (_OWORD*)((char*)a1 + 76);
	v83 = ((unsigned __int8)((_BYTE)a1 + 76) | (unsigned __int8)v81) & 0xF;
	if ((((unsigned __int8)((_BYTE)a1 + 76) | (unsigned __int8)v81) & 0xF) != 0)
	{
		sub_1407DB590((int*)a1 + 19, (int*)v81, 0x3B0ui64);
	}
	else
	{
		do
		{
			v84 = *(_OWORD*)v81;
			v82 += 8;
			v81 += 128i64;
			*(v82 - 8) = v84;
			*(v82 - 7) = *(_OWORD*)(v81 - 112);
			*(v82 - 6) = *(_OWORD*)(v81 - 96);
			*(v82 - 5) = *(_OWORD*)(v81 - 80);
			*(v82 - 4) = *(_OWORD*)(v81 - 64);
			*(v82 - 3) = *(_OWORD*)(v81 - 48);
			*(v82 - 2) = *(_OWORD*)(v81 - 32);
			*(v82 - 1) = *(_OWORD*)(v81 - 16);
			--v21;
		} while (v21);
		*v82 = *(_OWORD*)v81;
		v82[1] = *(_OWORD*)(v81 + 16);
		v82[2] = *(_OWORD*)(v81 + 32);
	}
	v85 = sub_1401B73C0(v83, v106);
	v86 = v85[1];
	v87 = v85[2];
	v88 = v85[3];
	*((_OWORD*)a1 + 64) = *v85;
	*((_OWORD*)a1 + 65) = v86;
	++* ((_DWORD*)a1 + 7);
	a1[136] = v42;
	a1[137] = v44;
	result = 0i64;
	*((_OWORD*)a1 + 66) = v87;
	*((_OWORD*)a1 + 67) = v88;
	return result;
}
// 1400536F0: variable 'v22' is possibly undefined
// 14005378F: variable 'v43' is possibly undefined
// 140053F7A: variable 'v83' is possibly undefined
// 140A11620: using guessed type wchar_t aDFps[7];
// 140B7AB70: using guessed type __int128 xmmword_140B7AB70;
// 140B7B6F0: using guessed type __int128 xmmword_140B7B6F0;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63760: using guessed type __int64 qword_140C63760;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65808: using guessed type __int64 qword_140C65808;
// 140C67480: using guessed type __int64 qword_140C67480;
// 140053550: using guessed type __int64 var_C40[8];
// 140053550: using guessed type __int64 var_C80[8];

