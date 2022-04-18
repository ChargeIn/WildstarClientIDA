#include "../winhttp.h"

//----- (0000000140456960) ----------------------------------------------------
__int64 __fastcall sub_140456960(__m128* a1, __int64 a2, double a3, double a4)
{
	__int64 result; // rax
	int v7; // esi
	int v8; // eax
	unsigned int v9; // r12d
	unsigned int v10; // r15d
	int v11; // ebx
	__int32 v12; // eax
	__int32 v13; // eax
	__int64 v14; // rcx
	int v15; // edx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rcx
	__int16* v20; // rax
	int v21; // edx
	__int64 v22; // rcx
	__int64 v23; // rax
	unsigned __int64 i; // r13
	int v25; // edx
	__int32 v26; // eax
	__int64 v27; // rcx
	int v28; // eax
	int v29; // eax
	void* v30; // rdx
	int v31; // r13d
	int v32; // ebx
	int v33; // eax
	__int64 v34; // rcx
	__int64 v35; // r8
	int* v36; // rdx
	_QWORD** v37; // rcx
	_QWORD* v38; // rax
	unsigned __int64 v39; // rdx
	unsigned __int64 j; // r13
	int* v41; // rdx
	int* v42; // r8
	__int8 v43; // cl
	int v44; // eax
	int v45; // ebx
	int v46; // eax
	__int64 v47; // rcx
	__int64 v48; // r8
	int* v49; // rdx
	_QWORD** v50; // rcx
	_QWORD* v51; // rax
	unsigned __int64 v52; // rdx
	unsigned __int64 k; // r13
	int* v54; // rdx
	int* v55; // r8
	__int64 v56; // rcx
	__int64 v57; // rax
	_DWORD* v58; // r14
	__int64 v59; // rcx
	__int64 v60; // rcx
	__int64 v61; // rax
	_DWORD* v62; // r14
	__int64 v63; // rcx
	__int64 v64; // rcx
	__int64 v65; // rax
	_DWORD* v66; // r14
	__int64 v67; // rcx
	int v68; // eax
	__int16* v69; // r14
	__int64 v70; // rax
	int v71; // edx
	__int64 v72; // rax
	__int64 v73; // rax
	__int64 v74; // rax
	__int64 v75; // r15
	int* v76; // r13
	__int64 v77; // rax
	unsigned int v78; // ecx
	__int64 v79; // rax
	__int64 v80; // rax
	__int64 v81; // rcx
	__int64 v82; // rax
	int* v83; // rax
	int v84; // ecx
	__int32 v85; // eax
	unsigned int v86; // edx
	unsigned int v87; // r8d
	int v88; // r9d
	unsigned __int16 v89; // ax
	unsigned __int64 v90; // r14
	int* v91; // rax
	__int64 v92; // r13
	int* v93; // r15
	__int64 v94; // rax
	int v95; // edx
	unsigned __int64 v96; // rax
	__int32 v97; // eax
	__int32 v98; // eax
	__int64 v99; // rcx
	char v100; // al
	int* v101; // rax
	__int64 v102; // r8
	unsigned __int64 v103; // rax
	__int64 v104; // rcx
	BOOL v105; // eax
	__int32 v106; // eax
	__int64 v107; // rdx
	__int64 v108; // rcx
	int v109; // r14d
	int v110; // ebx
	__int64 v111; // r14
	unsigned __int64 v112; // rax
	__int64 v113; // r12
	unsigned __int64 v114; // r15
	int* v115; // rax
	__int64 v116; // rcx
	bool v117; // zf
	__int64 v118; // rcx
	unsigned int v119; // edx
	__int64 v120; // rax
	__int64 v121; // r8
	int v122; // eax
	__int64 v123; // rax
	unsigned __int64 v124; // rax
	unsigned __int64 v125; // rcx
	unsigned __int64 v126; // rax
	unsigned __int64 v127; // rax
	unsigned int v128; // edx
	__int32 v129; // eax
	int v130; // eax
	int v131; // eax
	char v132; // al
	char v133; // al
	__int64 v134; // rcx
	int v135; // eax
	int v136; // edx
	__int64 v137; // rax
	int v138; // ebx
	__int64(__fastcall * *v139)(); // [rsp+40h] [rbp-C0h] BYREF
	__int128 v140; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v141)(); // [rsp+60h] [rbp-A0h] BYREF
	__int128 v142; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *TlsValue)(); // [rsp+78h] [rbp-88h] BYREF
	__int128 v144; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * *v145)(); // [rsp+90h] [rbp-70h] BYREF
	__int128 v146; // [rsp+98h] [rbp-68h]
	__int64(__fastcall * *v147)(); // [rsp+B0h] [rbp-50h] BYREF
	__int128 v148; // [rsp+B8h] [rbp-48h]
	__int64(__fastcall * *v149)(); // [rsp+C8h] [rbp-38h] BYREF
	__int128 v150; // [rsp+D0h] [rbp-30h]
	__int64(__fastcall * *v151)(); // [rsp+E0h] [rbp-20h] BYREF
	__int128 v152; // [rsp+E8h] [rbp-18h]
	__int64(__fastcall * *v153)(); // [rsp+F8h] [rbp-8h] BYREF
	__int128 v154; // [rsp+100h] [rbp+0h]
	__m256 v155; // [rsp+110h] [rbp+10h] BYREF
	__int128 v156; // [rsp+130h] [rbp+30h]
	__int128 v157; // [rsp+140h] [rbp+40h]
	__int64 v158; // [rsp+150h] [rbp+50h]
	__int64 v159; // [rsp+1A8h] [rbp+A8h] BYREF
	unsigned __int64 v160; // [rsp+1B0h] [rbp+B0h]

	if (sub_1403D90D0(qword_140C65898, *(_DWORD*)a2))
		return 2147500037i64;
	v7 = 0;
	a1->m128_i32[2] = *(_DWORD*)a2;
	v8 = *(_DWORD*)(a2 + 4);
	v9 = 0;
	v10 = 0;
	if (v8 >= 37)
	{
		*(_QWORD*)&v144 = 0i64;
		TlsValue = &off_140B5E648;
		*((_QWORD*)&v144 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v145 = TlsValue;
		v159 = 0x141E020D0i64;
		v146 = v144;
		v11 = sub_1401971E0(&dword_140C8ACA4, 5, &v159, &v145);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v144 + 1));
		if (v11)
			DebugBreak();
		return 2147500037i64;
	}
	a1[8].m128_i32[0] = v8;
	a1[13].m128_i32[2] = 1;
	a1[3].m128_i32[1] = 0;
	sub_14047C210((__int64)a1, *(_DWORD*)(a2 + 280));
	sub_14047C320((__int64)a1, *(_DWORD*)(a2 + 284));
	a1[394].m128_u64[0] = 0i64;
	if (*(_DWORD*)(a2 + 240) == 1)
		v12 = *(_DWORD*)(a2 + 256);
	else
		v12 = 0;
	a1[370].m128_i32[3] = v12;
	v13 = a1[8].m128_i32[0];
	a1[874].m128_i32[2] = 0;
	switch (v13)
	{
	case 0:
	case 5:
	case 13:
	case 24:
	case 27:
	case 33:
		a1[8].m128_i32[1] = 1;
		break;
	default:
		break;
	}
	sub_1401E4300((__int64)&a1[210].m128_i64[1]);
	switch (*(_DWORD*)(a2 + 4))
	{
	case 0:
	case 8:
	case 0xB:
	case 0xD:
	case 0x20:
		v9 = *(_DWORD*)(a2 + 8);
		a1[863].m128_i32[2] = *(char*)(a2 + 12);
		goto LABEL_147;
	case 1:
	case 2:
	case 4:
	case 5:
	case 6:
	case 0xC:
	case 0x13:
	case 0x1E:
	case 0x21:
		v9 = *(_DWORD*)(a2 + 8);
		goto LABEL_147;
	case 3:
		v9 = *(_DWORD*)(a2 + 8);
		a1[11].m128_u64[1] = sub_140248240(*(_DWORD*)(a2 + 12));
		if (*(_BYTE*)(a2 + 16))
		{
			do
			{
				sub_140480D00((__int64*)&a1[25], (int*)(*(_QWORD*)(a2 + 24) + 12i64 * v10));
				v56 = qword_140C65898;
				a1[208].m128_i32[0] = 1;
				v57 = sub_1403D90D0(v56, *(_DWORD*)(*(_QWORD*)(a2 + 24) + 12i64 * v10 + 8));
				v58 = (_DWORD*)v57;
				if (v57)
				{
					sub_140470650(v57, 1, 0);
					v58[48] = a1->m128_i32[2];
					v58[49] = *(_DWORD*)(*(_QWORD*)(a2 + 24) + 12i64 * v10);
					v59 = *(_QWORD*)(a2 + 24);
					v58[50] = *(unsigned __int8*)(v59 + 12i64 * v10 + 4);
					sub_14039E4D0(v59, (__int64)v58, a3, a4);
					sub_14046C2C0((__int64)v58);
				}
				++v10;
			} while (v10 < *(unsigned __int8*)(a2 + 16));
		}
		goto LABEL_83;
	case 7:
		a1[43].m128_i32[0] = *(_DWORD*)(a2 + 16);
		v9 = *(_DWORD*)(a2 + 8);
		a1[11].m128_u64[1] = sub_140248240(*(_DWORD*)(a2 + 12));
		if (*(_BYTE*)(a2 + 20))
		{
			do
			{
				sub_140480D00((__int64*)&a1[25], (int*)(*(_QWORD*)(a2 + 24) + 12i64 * v10));
				v60 = qword_140C65898;
				a1[208].m128_i32[0] = 1;
				v61 = sub_1403D90D0(v60, *(_DWORD*)(*(_QWORD*)(a2 + 24) + 12i64 * v10 + 8));
				v62 = (_DWORD*)v61;
				if (v61)
				{
					sub_140470650(v61, 1, 0);
					v62[48] = a1->m128_i32[2];
					v62[49] = *(_DWORD*)(*(_QWORD*)(a2 + 24) + 12i64 * v10);
					v63 = *(_QWORD*)(a2 + 24);
					v62[50] = *(unsigned __int8*)(v63 + 12i64 * v10 + 4);
					sub_14039E4D0(v63, (__int64)v62, a3, a4);
					sub_14046C2C0((__int64)v62);
					v62[1222] = 0;
				}
				++v10;
			} while (v10 < *(unsigned __int8*)(a2 + 20));
		}
		v10 = 1;
		a1[309].m128_i32[0] = 1;
		goto LABEL_148;
	case 9:
		v9 = *(_DWORD*)(a2 + 8);
		a1[11].m128_u64[1] = sub_140248240(*(_DWORD*)(a2 + 12));
		if (*(_BYTE*)(a2 + 16))
		{
			do
			{
				sub_140480D00((__int64*)&a1[25], (int*)(*(_QWORD*)(a2 + 24) + 12i64 * v10));
				v64 = qword_140C65898;
				a1[208].m128_i32[0] = 1;
				v65 = sub_1403D90D0(v64, *(_DWORD*)(*(_QWORD*)(a2 + 24) + 12i64 * v10 + 8));
				v66 = (_DWORD*)v65;
				if (v65)
				{
					sub_140470650(v65, 1, 0);
					v66[48] = a1->m128_i32[2];
					v66[49] = *(_DWORD*)(*(_QWORD*)(a2 + 24) + 12i64 * v10);
					v67 = *(_QWORD*)(a2 + 24);
					v66[50] = *(unsigned __int8*)(v67 + 12i64 * v10 + 4);
					sub_14039E4D0(v67, (__int64)v66, a3, a4);
					sub_14046C2C0((__int64)v66);
				}
				++v10;
			} while (v10 < *(unsigned __int8*)(a2 + 16));
			v10 = 1;
			a1[309].m128_i32[0] = 1;
		}
		else
		{
		LABEL_83:
			v10 = 1;
			a1[309].m128_i32[0] = 1;
		}
		goto LABEL_148;
	case 0xA:
		v9 = *(_DWORD*)(a2 + 8);
		a1[863].m128_i32[2] = *(char*)(a2 + 12);
		goto LABEL_148;
	case 0xE:
		v84 = *(_DWORD*)(a2 + 12);
		v9 = *(_DWORD*)(a2 + 8);
		if (v84)
			a1[27].m128_i32[1] = dword_140C636A8 + v84;
		else
			a1[27].m128_i32[1] = 0;
		goto LABEL_147;
	case 0xF:
		v86 = *(_DWORD*)(a2 + 8);
		a1[370].m128_i32[3] = v86;
		v87 = *(_DWORD*)(a2 + 12);
		a1[371].m128_i32[0] = v87;
		v88 = *(unsigned __int8*)(a2 + 16);
		a1[371].m128_i32[1] = v88;
		result = sub_1403DC9F0(v14, v86, v87, v88);
		if ((int)result < 0)
			return result;
		goto LABEL_148;
	case 0x10:
		v9 = *(_DWORD*)(a2 + 8);
		goto LABEL_148;
	case 0x11:
		v9 = *(_DWORD*)(a2 + 8);
		a1[346].m128_i32[3] = *(_DWORD*)(a2 + 12);
		a1[347].m128_i32[0] = *(_DWORD*)(a2 + 16);
		goto LABEL_147;
	case 0x12:
		v68 = *(_DWORD*)(a2 + 20);
		v9 = *(_DWORD*)(a2 + 8);
		v69 = 0i64;
		if (v68 == 6)
		{
			v70 = sub_140248AC0(*(_DWORD*)(a2 + 12));
			if (!v70)
				goto LABEL_118;
			v71 = *(_DWORD*)(v70 + 20);
		}
		else if (v68 == 7)
		{
			v72 = sub_140211B00(*(_DWORD*)(a2 + 12));
			if (!v72)
				goto LABEL_118;
			v71 = *(_DWORD*)(v72 + 24);
		}
		else if (v68)
		{
			switch (v68)
			{
			case 2:
				v71 = 134463;
				break;
			case 8:
				v74 = sub_1401E8C20(*(_DWORD*)(a2 + 12));
				v75 = v74;
				if (!v74)
					goto LABEL_118;
				v76 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v74 + 8), 0i64);
				v77 = sub_1401FE020(*(_DWORD*)(v75 + 12));
				if (v76)
				{
					v71 = v76[119];
				}
				else if (v77)
				{
					v71 = *(_DWORD*)(v77 + 20);
				}
				else
				{
					v78 = *(_DWORD*)(v75 + 28);
					if (!v78)
						goto LABEL_118;
					v71 = sub_1405057D0(v78);
				}
				break;
			case 9:
				v79 = sub_1401E87E0(*(_DWORD*)(a2 + 12));
				if (!v79)
					goto LABEL_118;
				v71 = *(_DWORD*)(v79 + 4);
				break;
			default:
				goto LABEL_118;
			}
		}
		else
		{
			v73 = sub_1402096E0(*(_DWORD*)(a2 + 12));
			if (!v73)
				goto LABEL_118;
			v71 = *(_DWORD*)(v73 + 176);
		}
		v69 = sub_14034BDD0(v14, v71);
		if (v69)
			goto LABEL_120;
	LABEL_118:
		v80 = sub_1404835C0(qword_140C65918, v9);
		if (v80)
			v69 = sub_14034BDD0(v81, *(_DWORD*)(v80 + 8));
	LABEL_120:
		sub_14045B030((__int64)a1, (int*)v69);
		v10 = 1;
		a1[868].m128_i32[2] = 1;
		goto LABEL_148;
	case 0x14:
		sub_14045B030((__int64)a1, *(int**)(a2 + 24));
		for (i = 0i64; i < *(unsigned __int8*)(a2 + 56); ++i)
		{
			v25 = *(_DWORD*)(*(_QWORD*)(a2 + 64) + 4 * i);
			if (v25)
				sub_14047C1A0((__int64)a1, v25);
		}
		a1[26].m128_u64[1] = *(_QWORD*)(a2 + 8);
		v26 = *(_DWORD*)(a2 + 16);
		a1[26].m128_i32[0] = v26;
		if (!v26 || !a1[26].m128_u64[1])
			return 2147500037i64;
		sub_1403F8590((_QWORD*)qword_140C65898, *(int**)(a2 + 24), (__int64*)&a1[26]);
		a1[394].m128_u64[0] = *(_QWORD*)(a2 + 48);
		sub_1403D9340(v27, (__int64)a1);
		v28 = *(_DWORD*)(a2 + 32);
		if (v28 > 17)
		{
			*(_QWORD*)&v144 = 0i64;
			TlsValue = &off_140B5E648;
			*((_QWORD*)&v144 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v139 = TlsValue;
			v159 = 0x141E020B0i64;
			v140 = v144;
			v29 = sub_1401971E0(&dword_140C8ACAC, 5, &v159, &v139);
			v30 = (void*)*((_QWORD*)&v144 + 1);
			TlsValue = &off_140B5E648;
			goto LABEL_230;
		}
		a1[14].m128_i32[2] = v28;
		a1[13].m128_i32[2] = v28;
		v31 = sub_14045A8B0((__int64)a1, *(_DWORD*)(a2 + 36));
		if (v31 < 0)
		{
			*(_QWORD*)&v152 = 0i64;
			v151 = &off_140B5E648;
			*((_QWORD*)&v152 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v151);
			v139 = v151;
			v159 = 0x141E02090i64;
			v140 = v152;
			v32 = sub_1401971E0(&dword_140C8ACA8, 5, &v159, &v139);
			v151 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v152 + 1));
			if (!v32)
				return (unsigned int)v31;
			DebugBreak();
			return (unsigned int)v31;
		}
		v33 = *(_DWORD*)(a2 + 40);
		if (v33 > 3)
		{
			*(_QWORD*)&v154 = 0i64;
			v153 = &off_140B5E648;
			*((_QWORD*)&v154 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v153);
			v139 = v153;
			v159 = 0x141E02078i64;
			v140 = v154;
			v29 = sub_1401971E0(&dword_140C8ACA0, 5, &v159, &v139);
			v30 = (void*)*((_QWORD*)&v154 + 1);
			v153 = &off_140B5E648;
			goto LABEL_230;
		}
		a1[14].m128_i32[3] = v33;
		a1[3].m128_i32[1] = v33;
		sub_14045B940((__int64)a1, *(int**)(a2 + 72));
		a1[9].m128_i32[2] = *(_DWORD*)(a2 + 80);
		v35 = *(unsigned __int8*)(a2 + 84);
		v36 = *(int**)(a2 + 88);
		a1[10].m128_u64[1] = 0i64;
		if (v35 && v36)
			sub_1403705B0((__int64*)&a1[10], v36, v35);
		v37 = *(_QWORD***)(sub_1400323E0(v34, a1[13].m128_u32[2], a1[3].m128_u32[1]) + 8);
		v38 = *v37;
		if (*v37 != v37)
		{
			v39 = 0i64;
			do
			{
				v38 = (_QWORD*)*v38;
				++v39;
			} while (v38 != v37);
			if ((__int64)(a1[212].m128_u64[0] - a1[211].m128_u64[0]) >> 2 < v39)
				sub_1403D6270(&a1[210].m128_u64[1], v39);
			for (j = 0i64; j < *(unsigned __int16*)(a2 + 96); ++j)
			{
				v41 = (int*)a1[211].m128_u64[1];
				v42 = (int*)(*(_QWORD*)(a2 + 104) + 4 * j);
				if (v41 == (int*)a1[212].m128_u64[0])
				{
					sub_1401E4420(&a1[210].m128_u64[1], v41, v42);
				}
				else
				{
					if (v41)
						*v41 = *v42;
					a1[211].m128_u64[1] += 4i64;
				}
			}
		}
		a1[346].m128_i32[2] = *(_DWORD*)(a2 + 112);
		v43 = *(_BYTE*)(a2 + 116);
		if (v43 == -1)
			v43 = 0;
		a1[27].m128_i8[2] = v43;
		sub_14045B6F0((__int64)a1, *(_DWORD*)(a2 + 120));
		goto LABEL_148;
	case 0x16:
		v82 = 32i64 * *(unsigned __int8*)(a2 + 16);
		if (!is_mul_ok(*(unsigned __int8*)(a2 + 16), 0x20ui64))
			v82 = -1i64;
		v83 = sub_14018B280(v82, 0);
		a1[879].m128_u64[0] = (unsigned __int64)v83;
		sub_1407DB590(v83, *(int**)(a2 + 24), 32i64 * *(unsigned __int8*)(a2 + 16));
		a1[878].m128_u64[1] = *(unsigned __int8*)(a2 + 16);
		sub_14045B030((__int64)a1, *(int**)(a2 + 8));
		goto LABEL_148;
	case 0x17:
		sub_14045B030((__int64)a1, *(int**)(a2 + 24));
		v44 = *(_DWORD*)(a2 + 32);
		if (v44 > 17)
		{
			*(_QWORD*)&v150 = 0i64;
			v149 = &off_140B5E648;
			*((_QWORD*)&v150 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v149);
			v139 = v149;
			v159 = 0x141E02198i64;
			v140 = v150;
			v29 = sub_1401971E0(&dword_140C8AC88, 5, &v159, &v139);
			v30 = (void*)*((_QWORD*)&v150 + 1);
			v149 = &off_140B5E648;
			goto LABEL_230;
		}
		a1[14].m128_i32[2] = v44;
		a1[13].m128_i32[2] = v44;
		a1[394].m128_u64[0] = *(_QWORD*)(a2 + 48);
		v31 = sub_14045A8B0((__int64)a1, *(_DWORD*)(a2 + 36));
		if (v31 < 0)
		{
			*(_QWORD*)&v148 = 0i64;
			v147 = &off_140B5E648;
			*((_QWORD*)&v148 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v147);
			v139 = v147;
			v159 = 0x141E02178i64;
			v140 = v148;
			v45 = sub_1401971E0(&dword_140C8AC90, 5, &v159, &v139);
			v147 = &off_140B5E648;
			TlsSetValue(dwTlsIndex, *((LPVOID*)&v148 + 1));
			if (v45)
				DebugBreak();
			return (unsigned int)v31;
		}
		v46 = *(_DWORD*)(a2 + 40);
		if (v46 > 3)
		{
			*(_QWORD*)&v142 = 0i64;
			v141 = &off_140B5E648;
			*((_QWORD*)&v142 + 1) = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &v141);
			v139 = v141;
			v159 = 0x141E02160i64;
			v140 = v142;
			v29 = sub_1401971E0(&dword_140C8AC8C, 5, &v159, &v139);
			v30 = (void*)*((_QWORD*)&v142 + 1);
			v141 = &off_140B5E648;
			goto LABEL_230;
		}
		a1[14].m128_i32[3] = v46;
		a1[3].m128_i32[1] = v46;
		sub_14045B940((__int64)a1, *(int**)(a2 + 56));
		a1[9].m128_i32[2] = *(_DWORD*)(a2 + 64);
		v48 = *(unsigned __int8*)(a2 + 68);
		v49 = *(int**)(a2 + 72);
		a1[10].m128_u64[1] = 0i64;
		if (v48 && v49)
			sub_1403705B0((__int64*)&a1[10], v49, v48);
		v50 = *(_QWORD***)(sub_1400323E0(v47, a1[13].m128_u32[2], a1[3].m128_u32[1]) + 8);
		v51 = *v50;
		if (*v50 != v50)
		{
			v52 = 0i64;
			do
			{
				v51 = (_QWORD*)*v51;
				++v52;
			} while (v51 != v50);
			if ((__int64)(a1[212].m128_u64[0] - a1[211].m128_u64[0]) >> 2 < v52)
				sub_1403D6270(&a1[210].m128_u64[1], v52);
			for (k = 0i64; k < *(unsigned __int16*)(a2 + 80); ++k)
			{
				v54 = (int*)a1[211].m128_u64[1];
				v55 = (int*)(*(_QWORD*)(a2 + 88) + 4 * k);
				if (v54 == (int*)a1[212].m128_u64[0])
				{
					sub_1401E4420(&a1[210].m128_u64[1], v54, v55);
				}
				else
				{
					if (v54)
						*v54 = *v55;
					a1[211].m128_u64[1] += 4i64;
				}
			}
		}
		sub_14045B6F0((__int64)a1, *(_DWORD*)(a2 + 96));
		goto LABEL_148;
	case 0x18:
		v15 = *(_DWORD*)(a2 + 12);
		v9 = *(_DWORD*)(a2 + 8);
		v16 = qword_140C65898;
		a1[43].m128_i32[0] = v15;
		v10 = 1;
		v17 = sub_1403D90D0(v16, v15);
		if (v17)
			sub_14047C1A0(v17, a1->m128_i32[2]);
		v18 = sub_1404835C0(qword_140C65918, v9);
		if (!v18 || (v20 = sub_14034BDD0(v19, *(_DWORD*)(v18 + 8))) == 0i64)
			v20 = *(__int16**)(a2 + 24);
		sub_14045B030((__int64)a1, (int*)v20);
		goto LABEL_148;
	case 0x19:
		v21 = *(_DWORD*)(a2 + 12);
		v9 = *(_DWORD*)(a2 + 8);
		v22 = qword_140C65898;
		a1[43].m128_i32[0] = v21;
		v10 = 1;
		v23 = sub_1403D90D0(v22, v21);
		if (v23)
			sub_14047C1A0(v23, a1->m128_i32[2]);
		goto LABEL_148;
	case 0x1B:
		v85 = *(_DWORD*)(a2 + 12);
		v9 = *(_DWORD*)(a2 + 8);
		a1[309].m128_i32[0] = 1;
		a1[43].m128_i32[0] = v85;
		v10 = 1;
		sub_14045B030((__int64)a1, *(int**)(a2 + 16));
		goto LABEL_148;
	case 0x1D:
		goto LABEL_22;
	case 0x1F:
		a1[212].m128_i32[2] = *(_DWORD*)(a2 + 16);
	LABEL_22:
		v9 = *(_DWORD*)(a2 + 8);
		a1[43].m128_i32[0] = *(_DWORD*)(a2 + 12);
		goto LABEL_147;
	case 0x22:
	case 0x23:
		v9 = *(_DWORD*)(a2 + 8);
		a1[370].m128_i32[3] = *(_DWORD*)(a2 + 12);
		goto LABEL_147;
	case 0x24:
		v89 = *(_WORD*)(a2 + 12);
		v9 = *(_DWORD*)(a2 + 8);
		if (!v89 || !*(_QWORD*)(qword_140C65898 + 120))
			goto LABEL_147;
		v90 = v89;
		v159 = *(_QWORD*)(a2 + 16);
		v91 = sub_14018B280(4i64 * v89 + 16, 0);
		if (v91)
		{
			*((_QWORD*)v91 + 1) = v90;
			*(_QWORD*)v91 = off_140B55060;
		}
		else
		{
			v91 = 0i64;
		}
		v92 = qword_140C65898;
		v93 = v91 + 4;
		sub_1407DB590(v93, (int*)v159, 4 * v90);
		v94 = 0i64;
		break;
	default:
		*(_QWORD*)&v146 = 0i64;
		v145 = &off_140B5E648;
		*((_QWORD*)&v146 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &v145);
		v139 = v145;
		v159 = 0x141E02100i64;
		v140 = v146;
		v29 = sub_1401971E0(&dword_140C8AC98, 5, &v159, &v139);
		v30 = (void*)*((_QWORD*)&v146 + 1);
		v145 = &off_140B5E648;
		goto LABEL_230;
	}
	while (v93[v94] != *(_DWORD*)(*(_QWORD*)(v92 + 120) + 8i64))
	{
		if (++v94 >= v90)
		{
			v95 = 0;
			goto LABEL_145;
		}
	}
	v95 = 1;
LABEL_145:
	sub_1403DFFA0(a1, v95);
	if (v93)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v93 - 2) + 8i64))(v93 - 4);
LABEL_147:
	v10 = 1;
LABEL_148:
	if (*(_DWORD*)(a2 + 240) == 1)
		v96 = *(_QWORD*)(a2 + 248);
	else
		v96 = 0i64;
	a1[368].m128_u64[1] = v96;
	if (*(_DWORD*)(a2 + 240) == 1)
		v97 = *(_DWORD*)(a2 + 256);
	else
		v97 = 0;
	a1[369].m128_i32[0] = v97;
	a1[369].m128_u64[1] = 0i64;
	a1[370].m128_u64[0] = 0i64;
	a1[877].m128_i32[1] = *(_BYTE*)(a2 + 128) & 4;
	if (*(_DWORD*)(a2 + 232) == 1)
		v98 = *(_DWORD*)(a2 + 236);
	else
		v98 = 0;
	a1[877].m128_i32[0] = v98;
	a1[877].m128_i32[2] = 1;
	a1[864].m128_i32[3] = *(_DWORD*)(a2 + 276);
	sub_140458140((__int64)a1, *(_QWORD*)(a2 + 136), *(unsigned __int8*)(a2 + 129));
	sub_1404584B0((__int64)a1, v9, *(int**)(a2 + 168), *(unsigned __int8*)(a2 + 160));
	a1[18].m128_i32[0] = *(_DWORD*)(a2 + 212);
	sub_14045AC60((__int64)a1, *(_DWORD*)(a2 + 216));
	sub_14045AB70((__int64)a1, *(_DWORD*)(a2 + 212));
	sub_14045BCD0((__int64)a1, *(_DWORD*)(a2 + 220), *(_QWORD*)(a2 + 224));
	(*(void(__fastcall**)(__int64, _QWORD))(a1->m128_u64[0] + 176))(v99, *(_BYTE*)(a2 + 128) & 0x10);
	v100 = *(_BYTE*)(a2 + 128);
	LODWORD(v159) = 0;
	a1[33].m128_i32[1] = v100 & 0x20;
	if (!v9)
	{
		if (!a1[368].m128_u64[1])
		{
			v106 = a1[8].m128_i32[0];
			if (v106 != 22 && v106 != 15)
			{
				result = sub_1404674C0((__int64)a1);
				if ((int)result < 0)
					return result;
				v107 = a1->m128_u32[2];
				v158 = 0i64;
				v155 = ymmword_140C78390;
				v108 = *(_QWORD*)(qword_140C65898 + 29256);
				v156 = xmmword_140C783B0;
				v157 = xmmword_140C783C0;
				v109 = (*(__int64(__fastcall**)(__int64, __int64, __m256*, _QWORD, _DWORD, int, __m128*, _DWORD))(*(_QWORD*)v108 + 184i64))(
					v108,
					v107,
					&v155,
					0i64,
					0,
					3,
					a1 + 367,
					0);
				if (v109 < 0)
				{
					*(_QWORD*)&v142 = 0i64;
					v141 = &off_140B5E648;
					*((_QWORD*)&v142 + 1) = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v141);
					v139 = v141;
					v159 = 0x141E02530i64;
					v140 = v142;
					v110 = sub_1401971E0(&dword_140C8AC9C, 5, &v159, &v139);
					v141 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, *((LPVOID*)&v142 + 1));
					if (v110)
						DebugBreak();
					return (unsigned int)v109;
				}
			}
		}
	LABEL_163:
		result = sub_1404586E0(
			(__int64)a1,
			*(_DWORD*)(a2 + 144),
			*(_QWORD*)(a2 + 152),
			*(_WORD*)(a2 + 148),
			*(_BYTE*)(a2 + 128) & 2);
		if ((int)result >= 0)
		{
			a1[400].m128_u64[1] = (unsigned __int64)&a1[855].m128_u64[1];
			v103 = a1[8].m128_i32[0];
			v105 = ((unsigned int)v103 > 0x24 || (v104 = 0x1042CE5D12i64, !_bittest64(&v104, v103))) && a1[4].m128_i32[0] == 0;
			a1[37].m128_i32[0] = v105;
			if (v105)
				a1[868].m128_i32[3] = 1;
			sub_140482640(a1, (__m128**)(qword_140C65898 + 28464), v102, (__m128*)(qword_140C65898 + 29280));
			v111 = qword_140C65898 + 28424;
			if (*(_QWORD*)(qword_140C65898 + 28424) == *(_QWORD*)(qword_140C65898 + 28432))
				sub_1400290D0(qword_140C65898 + 28424);
			v112 = (*(__int64(__fastcall**)(__int64))(v111 + 24))(a2);
			v113 = *(_QWORD*)(v111 + 16);
			v160 = v112;
			v114 = v112 % *(_QWORD*)(v111 + 8);
			v115 = sub_14018B280(32i64, 0);
			if (v115)
			{
				v116 = *(_QWORD*)(v113 + 8 * v114);
				*(_QWORD*)v115 = v160;
				*((_QWORD*)v115 + 1) = v116;
				v115[4] = *(_DWORD*)a2;
				*((_QWORD*)v115 + 3) = a1;
			}
			else
			{
				v115 = 0i64;
			}
			*(_QWORD*)(v113 + 8 * v114) = v115;
			++* (_QWORD*)v111;
			sub_140458DB0((__int64)a1, *(_QWORD*)(a2 + 184), *(unsigned __int8*)(a2 + 176));
			sub_14046C300(a1, 1, 1);
			v117 = (a1[2].m128_i32[2] & 0x100) == 0;
			a1[308].m128_i32[2] = a1[37].m128_i32[0] != 0;
			if (!v117)
			{
				a1[308].m128_i32[2] = 1;
				a1[4].m128_i32[0] = 0;
				sub_1407E4830(&a1[33].m128_i32[3], 0i64, 0x2Cui64);
			}
			sub_140458EC0((__int64)a1, a2);
			sub_140458FE0((__int64)a1, *(_QWORD*)(a2 + 200), *(unsigned __int16*)(a2 + 192));
			sub_1404697A0((__int64)a1, *(_DWORD*)(a2 + 208));
			v117 = (_DWORD)v159 == 0;
			a1[42].m128_i32[2] = *(_BYTE*)(a2 + 128) & 1;
			if (v117
				&& (*(int(__fastcall**)(__int64, __int64*, _QWORD))(*(_QWORD*)qword_140C65848 + 40i64))(
					qword_140C65848,
					&v159,
					0i64) >= 0)
			{
				sub_1400035C0(&a1[344].m128_u64[1], (void(__fastcall***)(_QWORD))v159);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v159 + 8i64))(v159);
				if ((a1[2].m128_i32[2] & 0x10000) != 0)
				{
					v118 = *(_QWORD*)(qword_140C63628 + 24);
					if (v118)
						(*(void(__fastcall**)(__int64, unsigned __int64, __int64))(*(_QWORD*)v118 + 120i64))(
							v118,
							a1[344].m128_u64[1],
							1i64);
				}
			}
			sub_14045AEC0((__int64)a1);
			sub_140472D80((__int64)a1);
			sub_140472E10((__int64)a1);
			v119 = a1[28].m128_u32[3];
			if (v119)
				sub_140474400(a1, v119, 0);
			if (a1[368].m128_u64[1])
			{
				v120 = qword_140C65898;
				v121 = a1[369].m128_u32[0];
				a1[369].m128_u64[1] = 0i64;
				v122 = (*(__int64(__fastcall**)(_QWORD, __int64*, __int64))(**(_QWORD**)(v120 + 29256) + 312i64))(
					*(_QWORD*)(v120 + 29256),
					&a1[368].m128_i64[1],
					v121);
				v123 = sub_1403D90D0(qword_140C65898, v122);
				v117 = (a1->m128_i32[2] & 0xC0000000) == 0;
				a1[370].m128_u64[0] = v123;
				if (v117 && v123)
				{
					do
					{
						v124 = a1[370].m128_u64[0];
						if ((*(_DWORD*)(v124 + 8) & 0xC0000000) == 0)
							break;
						a1[369].m128_u64[1] = v124;
						v125 = *(_QWORD*)(v124 + 5920);
						a1[370].m128_u64[0] = v125;
					} while (v125);
				}
				v126 = a1[369].m128_u64[1];
				if (v126)
					*(_QWORD*)(v126 + 5920) = a1;
				v127 = a1[370].m128_u64[0];
				if (v127)
					*(_QWORD*)(v127 + 5912) = a1;
				if (!a1[369].m128_u64[1])
					(*(void(__fastcall**)(_QWORD, __int64*, _QWORD, _QWORD))(**(_QWORD**)(qword_140C65898 + 29256) + 320i64))(
						*(_QWORD*)(qword_140C65898 + 29256),
						&a1[368].m128_i64[1],
						a1[369].m128_u32[0],
						a1->m128_u32[2]);
			}
			if (*(_DWORD*)(a2 + 264) == 1)
				v128 = *(_DWORD*)(a2 + 268);
			else
				v128 = 0;
			sub_14045AD90((__int64)a1, v128);
			if (*(_DWORD*)(a2 + 264) == 1)
				v129 = *(_DWORD*)(a2 + 272);
			else
				v129 = 0;
			a1[20].m128_i32[0] = v129;
			if ((*(_BYTE*)(a2 + 128) & 0x40) != 0
				|| a1[8].m128_i32[0] == 18
				|| (LOBYTE(v130) = sub_14047C060(a1), v130)
				|| (LOBYTE(v131) = sub_14047C0A0(a1), v117 = v131 == 0, v132 = 0, !v117))
			{
				v132 = 1;
			}
			a1[27].m128_i8[0] = v132;
			if (*(char*)(a2 + 128) < 0 || (v133 = 0, a1[8].m128_i32[0] == 18))
				v133 = 1;
			v134 = qword_140C65898;
			a1[27].m128_i8[1] = v133;
			if (*(_QWORD*)(v134 + 25744))
			{
				v135 = sub_14045A950(*(_QWORD*)(v134 + 25744), a1->m128_i32[2]);
				v134 = qword_140C65898;
				v136 = v135;
			}
			else
			{
				v136 = 1;
			}
			if (a1[5].m128_i32[1] <= 1)
				goto LABEL_225;
			v137 = *(_QWORD*)(v134 + 25744);
			if (v137)
				v7 = *(_DWORD*)(v137 + 264);
			if (a1->m128_i32[2] == v7 || v136)
				LABEL_225:
			Apollo_LUAEvent(*(_QWORD*)(v134 + 29504), "UnitCreated", L"U", a1->m128_u32[2]);
			if (a1[37].m128_i32[0])
				sub_14045E740((__int64)a1, 1u, a3, a4);
			return 0i64;
		}
		return result;
	}
	v101 = (int*)sub_1404835C0(qword_140C65918, v9);
	if (v101)
	{
		LODWORD(v159) = v101[37] & 0x80000;
		sub_140458A40((__int64)a1, v101);
		goto LABEL_163;
	}
	if (!v10)
		goto LABEL_163;
	*(_QWORD*)&v142 = 0i64;
	v141 = &off_140B5E648;
	*((_QWORD*)&v142 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &v141);
	v139 = v141;
	v159 = 0x141E02568i64;
	v140 = v142;
	v29 = sub_140196F30(&dword_140C8AC94, 22, &v159, v9, &v139);
	v30 = (void*)*((_QWORD*)&v142 + 1);
	v141 = &off_140B5E648;
LABEL_230:
	v138 = v29;
	TlsSetValue(dwTlsIndex, v30);
	if (v138)
		DebugBreak();
	return 2147500037i64;
}
// 14045776F: conditional instruction was optimized away because ax.2!=0
// 1404577CA: conditional instruction was optimized away because r14.8 is in (1..FFFF)
// 140456B74: variable 'v19' is possibly undefined
// 140456C68: variable 'v27' is possibly undefined
// 140456EB0: variable 'v34' is possibly undefined
// 1404571BE: variable 'v47' is possibly undefined
// 1404575C7: variable 'v14' is possibly undefined
// 1404575EB: variable 'v81' is possibly undefined
// 140457902: variable 'v99' is possibly undefined
// 140457BFA: variable 'v102' is possibly undefined
// 140457EE3: variable 'v130' is possibly undefined
// 140457EED: variable 'v131' is possibly undefined
// 1409EDE34: using guessed type wchar_t aU_10[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65848: using guessed type __int64 qword_140C65848;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C78390: using guessed type __m256 ymmword_140C78390;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 140C8AC88: using guessed type _DWORD dword_140C8AC88;
// 140C8AC8C: using guessed type _DWORD dword_140C8AC8C;
// 140C8AC90: using guessed type _DWORD dword_140C8AC90;
// 140C8AC94: using guessed type _DWORD dword_140C8AC94;
// 140C8AC98: using guessed type _DWORD dword_140C8AC98;
// 140C8AC9C: using guessed type _DWORD dword_140C8AC9C;
// 140C8ACA0: using guessed type _DWORD dword_140C8ACA0;
// 140C8ACA4: using guessed type _DWORD dword_140C8ACA4;
// 140C8ACA8: using guessed type _DWORD dword_140C8ACA8;
// 140C8ACAC: using guessed type _DWORD dword_140C8ACAC;

