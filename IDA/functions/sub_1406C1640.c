#include "../winhttp.h"

//----- (00000001406C1640) ----------------------------------------------------
__int64 __fastcall sub_1406C1640(_QWORD* a1)
{
	__int64 v2; // r13
	__int64* v3; // r12
	__int64 v4; // rdx
	_DWORD* v5; // rdi
	unsigned __int64 v6; // r8
	_DWORD* v7; // rcx
	__int64 v8; // rdx
	char* v9; // rdx
	_DWORD* v10; // rax
	unsigned int v11; // r15d
	int v12; // ecx
	int v13; // eax
	__int64 v14; // rdx
	__int64 v15; // rsi
	__int16* v16; // rax
	int* v17; // rdi
	int* v18; // r14
	__int64 v19; // rax
	__int64 v20; // rbx
	unsigned __int64 v21; // rbx
	__int64 v22; // rbx
	int v23; // edx
	int* v24; // rax
	__int64 v25; // r8
	_WORD* v26; // r14
	int* v27; // rbx
	int* v28; // rax
	__int64 v29; // rdi
	unsigned int v30; // ecx
	unsigned int v31; // ebx
	__int64 v32; // rcx
	__int64 v33; // rcx
	int v34; // eax
	unsigned int v35; // ebx
	__int64 v36; // rsi
	unsigned int v37; // eax
	__int64 v38; // rsi
	__int64 v39; // rbx
	BOOL v40; // ebx
	unsigned __int64 v41; // r13
	__int64 v42; // r12
	unsigned int v43; // r15d
	__int64 v44; // rax
	__int64 v45; // rax
	unsigned int* v46; // rbx
	__m128 v47; // xmm0
	__int64 v48; // rdi
	int* v49; // rax
	__m128* v50; // r14
	int* v51; // rax
	int* v52; // rsi
	__int64 v53; // rbx
	int* v54; // rax
	int* v55; // rdi
	__int64 v56; // rdx
	__int64 v57; // rcx
	int v58; // eax
	__int64 v59; // rcx
	__int64 v61; // r10
	__int64 v62; // rcx
	unsigned int* v63; // r15
	__int64 v64; // r12
	__int64 v65; // rax
	unsigned int* v66; // rbx
	__m128 v67; // xmm0
	__int64 v68; // rdi
	int* v69; // rax
	__m128* v70; // r14
	int* v71; // rax
	__int64 v72; // rbx
	int* v73; // rsi
	int* v74; // rax
	int* v75; // rdi
	__int64 v76; // rdx
	__int64 v77; // rcx
	int v78; // eax
	__int64 v79; // rcx
	__int64 v80; // [rsp+50h] [rbp-B0h]
	__int64* v81; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v82)(); // [rsp+60h] [rbp-A0h] BYREF
	int v83; // [rsp+68h] [rbp-98h]
	_QWORD* v84; // [rsp+70h] [rbp-90h]
	int* v85; // [rsp+78h] [rbp-88h]
	int v86; // [rsp+80h] [rbp-80h]
	int* v87; // [rsp+88h] [rbp-78h] BYREF
	__int64 v88; // [rsp+90h] [rbp-70h]
	__int64 v89; // [rsp+98h] [rbp-68h] BYREF
	int* v90; // [rsp+A0h] [rbp-60h]
	int* v91; // [rsp+A8h] [rbp-58h]
	__int64 v92; // [rsp+B0h] [rbp-50h]
	__int64 v93; // [rsp+B8h] [rbp-48h]
	__int64 v94; // [rsp+C8h] [rbp-38h] BYREF
	unsigned __int64 v95; // [rsp+D0h] [rbp-30h]
	__int64 v96; // [rsp+D8h] [rbp-28h] BYREF
	_WORD* v97; // [rsp+E0h] [rbp-20h]
	__m128 v98; // [rsp+100h] [rbp+0h] BYREF
	__m128 v99; // [rsp+110h] [rbp+10h] BYREF
	unsigned int v100[4]; // [rsp+120h] [rbp+20h] BYREF
	int* v101; // [rsp+130h] [rbp+30h]
	int* v102; // [rsp+138h] [rbp+38h]
	int* v103; // [rsp+140h] [rbp+40h]
	int v104; // [rsp+150h] [rbp+50h]
	int v105; // [rsp+158h] [rbp+58h] BYREF
	__int64 v106; // [rsp+160h] [rbp+60h]
	_QWORD v107[30]; // [rsp+180h] [rbp+80h] BYREF
	unsigned int v108; // [rsp+2B8h] [rbp+1B8h]
	BOOL v109; // [rsp+2C0h] [rbp+1C0h]
	int v110; // [rsp+2C8h] [rbp+1C8h]

	v2 = sub_1406C01C0(a1);
	v80 = v2;
	if (v2)
	{
		v3 = (__int64*)sub_140056AB0(a1, 2u);
		v81 = v3;
		v84 = a1;
		v82 = off_140B56A08;
		v83 = -2;
		sub_1400579E0((__int64)a1, v4, -2);
		v5 = dword_140A12138;
		v6 = a1[2];
		v7 = dword_140A12138;
		if (a1[3] + 16i64 < v6)
			v7 = (_DWORD*)(v84[3] + 16i64);
		*(_QWORD*)v6 = *(_QWORD*)v7;
		*(_DWORD*)(v6 + 8) = v7[2];
		a1[2] += 16i64;
		v83 = sub_1400578C0((__int64)v84);
		if (v3 && *v3)
		{
			v9 = (char*)sub_14018F0E0(&v89, word_1409F70CC)[1];
			v10 = (_DWORD*)(a1[3] + 32i64);
			if ((unsigned __int64)v10 < a1[2] && v10 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
				v9 = (char*)sub_140056BB0(a1, 3u, 0i64);
			sub_14018F2D0(&v96, v9);
			if (v90)
				sub_14018B900((__int64)v90, 0);
			sub_140770490((__int64)v107);
			sub_140770630((__int64)v107, a1, 4);
			v110 = sub_140121AC0(a1, 5u, (__int64)off_140B38AC8, 7ui64);
			if ((unsigned __int64)(a1[3] + 80i64) < a1[2])
				v5 = (_DWORD*)(a1[3] + 80i64);
			v11 = 0;
			v12 = v5[2];
			v109 = v12 && (v12 != 1 || *v5);
			v13 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*v3 + 8));
			v14 = *(_QWORD*)(*v3 + 8);
			v15 = v13;
			if (v14)
				v16 = sub_14034BDD0(*v3, *(_DWORD*)(v14 + 4));
			else
				v16 = (__int16*)dword_1409F28B4;
			v17 = (int*)&unk_1409F710C;
			v18 = 0i64;
			if (v16)
				v17 = (int*)v16;
			v19 = 0i64;
			v85 = 0i64;
			if (*(_WORD*)v17)
			{
				do
					++v19;
				while (*((_WORD*)v17 + v19));
			}
			v20 = (2 * v19) >> 1;
			if ((unsigned __int64)(v20 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v18 = sub_14018B280(2 * (v20 + 1), 0);
				v85 = v18;
			}
			v21 = 2 * v20;
			sub_1407DB590(v18, v17, v21);
			if ((int*)((char*)v18 + v21))
				*(_WORD*)((char*)v18 + v21) = 0;
			v22 = *v3;
			v23 = 0;
			if (*(_QWORD*)(*v3 + 144))
				v23 = **(_DWORD**)(v22 + 136);
			v24 = (int*)sub_1404835C0(qword_140C65918, v23);
			sub_14054F9E0(&v105, *(_DWORD*)(*(_QWORD*)(v22 + 8) + 272i64), v25, 0i64, v24, 0i64);
			v26 = v97;
			v108 = 0;
			v93 = v15;
			while (1)
			{
				v27 = sub_14018B280(2i64, 0);
				v90 = v27;
				v92 = (__int64)v27 + 2;
				sub_1407DB590(v27, dword_1409F7034, 0i64);
				v91 = v27;
				if (v27)
					*(_WORD*)v27 = 0;
				sub_140551D40(*v3, v11, (__int64)&v89, 0);
				v28 = sub_14018B280(16i64, 0);
				v101 = v28;
				v102 = v28;
				v103 = v28 + 4;
				if (v28)
					*(_WORD*)v28 = 0;
				v29 = *v3;
				v30 = *(_DWORD*)(*v3 + 16);
				if (v11 <= v30)
				{
					if (v11 == v30)
					{
						if ((*(_BYTE*)(*(_QWORD*)(v29 + 8) + 12i64) & 2) == 0)
						{
							v31 = 0;
							if (!v30)
								goto LABEL_66;
							while (1)
							{
								v32 = *(_QWORD*)(v29 + 8i64 * v31 + 24);
								if (*(_DWORD*)(v32 + 4))
								{
									if ((*(_BYTE*)(v32 + 8) & 8) == 0 && !(unsigned int)sub_140550F70(v29, v31, 1))
										break;
								}
								if (++v31 >= *(_DWORD*)(v29 + 16))
									goto LABEL_66;
							}
						}
					}
					else
					{
						v33 = *(_QWORD*)(v29 + 8i64 * v11 + 24);
						if (v33)
						{
							if (*(_DWORD*)(v33 + 4))
							{
								v34 = *(_DWORD*)(v33 + 8);
								if ((v34 & 8) == 0)
								{
									if ((v34 & 1) == 0)
										goto LABEL_66;
									v35 = 0;
									if ((v34 & 2) != 0)
									{
										if (!v11)
											goto LABEL_66;
										v36 = v29 + 24;
										while (1)
										{
											v37 = *(_DWORD*)(v29 + 16);
											if (v35 != v37
												&& v35 <= v37
												&& *(_QWORD*)v36
												&& (*(_DWORD*)(*(_QWORD*)v36 + 8i64) & 0x20) == 0
												&& !(unsigned int)sub_1405510D0(v29, v35))
											{
												break;
											}
											++v35;
											v36 += 8i64;
											if (v35 >= v11)
												goto LABEL_66;
										}
									}
									else
									{
										if (!v11)
										{
										LABEL_66:
											sub_1405519F0(v29, v11, v100);
											goto LABEL_67;
										}
										v38 = v29 + 24;
										while (!*(_DWORD*)(*(_QWORD*)v38 + 4i64)
											|| (*(_BYTE*)(*(_QWORD*)v38 + 8i64) & 8) != 0
											|| (unsigned int)sub_140550F70(v29, v35, 1))
										{
											++v35;
											v38 += 8i64;
											if (v35 >= v11)
												goto LABEL_66;
										}
									}
								}
							}
						}
					}
				}
			LABEL_67:
				v39 = *v3;
				v40 = !(unsigned int)sub_1405510D0(*v3, v11) && (unsigned int)sub_140553790(v39, v11);
				sub_140550F70(*v3, v11, 1);
				sub_1405510D0(*v3, v11);
				if (v93 == 2 && v104)
				{
					sub_14054F5E0(*v3, &v94);
					v41 = v95;
					v42 = v94;
					v43 = 0;
					if (v95)
					{
						v44 = 0i64;
						do
						{
							v45 = sub_14024B980(*(_DWORD*)(v42 + 4 * v44));
							v46 = (unsigned int*)v45;
							if (v45
								&& (unsigned int)sub_14043EDC0(
									qword_140C65898,
									*(_DWORD*)(qword_140C65898 + 29008),
									*(_DWORD*)(v45 + 44)))
							{
								v47 = (__m128)v46[5];
								v48 = *(_QWORD*)(*(_QWORD*)(v80 + 696) + 96i64);
								v99 = _mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128)v46[3], v47),
									_mm_unpacklo_ps((__m128)v46[4], (__m128)0i64));
								v49 = sub_14018B280(384i64, 0);
								if (v49)
									v50 = (__m128*)sub_140770B60(
										(__int64)v49,
										3,
										&v99,
										v26,
										v48,
										v90,
										(__int64)v107,
										v110,
										(__int64)&v82);
								else
									v50 = 0i64;
								v50[23].m128_i32[2] = v109;
								v86 = 0;
								v51 = sub_14018DB00(0i64, 1ui64, 8i64);
								v88 = 1i64;
								*(_QWORD*)v51 = v50;
								v52 = v51;
								v87 = v51;
								v53 = *(_QWORD*)(v80 + 1080);
								v54 = sub_14018B280(40i64, 0);
								v55 = v54;
								if (v54 != (int*)-16i64)
								{
									v54[4] = 0;
									sub_1403FE910((__int64*)v54 + 3, (__int64)&v87);
								}
								*(_QWORD*)v55 = v53;
								*((_QWORD*)v55 + 1) = *(_QWORD*)(v53 + 8);
								**(_QWORD**)(v53 + 8) = v55;
								*(_QWORD*)(v53 + 8) = v55;
								(*(void(__fastcall**)(int*))(*((_QWORD*)v52 - 2) + 8i64))(v52 - 4);
								v56 = qword_140C65898;
								v57 = *(_QWORD*)(qword_140C65898 + 25744);
								if (v57)
								{
									v58 = *(_DWORD*)(v80 + 2300);
									if (v58 == 2)
									{
										v59 = *(_QWORD*)(qword_140C65898 + 29096);
										if (!v59)
											v59 = *(_QWORD*)(qword_140C65898 + 29088);
										(*(void(__fastcall**)(__int64))(*(_QWORD*)v59 + 8i64))(v59);
										v56 = qword_140C65898;
									}
									else if (v58 == 1)
									{
										v47.m128_u64[0] = *(unsigned int*)(v57 + 4800);
									}
									else
									{
										v47.m128_u64[0] = 0i64;
									}
									sub_140770FC0(
										v50,
										(__m128*)(*(_QWORD*)(v56 + 25744) + 4576i64),
										*(double*)v47.m128_u64,
										*(float*)(v80 + 1872),
										v80 + 2280);
								}
								v26 = v97;
							}
							v44 = ++v43;
						} while (v43 < v41);
					}
					if (v42)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v42 - 16) + 8i64))(v42 - 16);
					v2 = v80;
				LABEL_96:
					v3 = v81;
					goto LABEL_97;
				}
				if (!(unsigned int)sub_140552F50(*v3))
					goto LABEL_98;
				if (!v40)
					goto LABEL_98;
				if (v11 >= *(_DWORD*)(v61 + 16))
					goto LABEL_98;
				v62 = *(_QWORD*)(v61 + 8i64 * v11 + 24);
				if (!v62)
					goto LABEL_98;
				v63 = (unsigned int*)(v62 + 24);
				if (v62 != -24)
				{
					v64 = 4i64;
					do
					{
						v65 = sub_14024B980(*v63);
						v66 = (unsigned int*)v65;
						if (v65
							&& (unsigned int)sub_14043EDC0(
								qword_140C65898,
								*(_DWORD*)(qword_140C65898 + 29008),
								*(_DWORD*)(v65 + 44)))
						{
							v67 = (__m128)v66[5];
							v68 = *(_QWORD*)(*(_QWORD*)(v2 + 696) + 96i64);
							v98 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v66[3], v67), _mm_unpacklo_ps((__m128)v66[4], (__m128)0i64));
							v69 = sub_14018B280(384i64, 0);
							if (v69)
								v70 = (__m128*)sub_140770B60((__int64)v69, 3, &v98, v26, v68, v90, (__int64)v107, v110, (__int64)&v82);
							else
								v70 = 0i64;
							v70[23].m128_i32[2] = v109;
							v86 = 0;
							v71 = sub_14018DB00(0i64, 1ui64, 8i64);
							v88 = 1i64;
							*(_QWORD*)v71 = v70;
							v72 = *(_QWORD*)(v2 + 1080);
							v73 = v71;
							v87 = v71;
							v74 = sub_14018B280(40i64, 0);
							v75 = v74;
							if (v74 != (int*)-16i64)
							{
								v74[4] = 0;
								sub_1403FE910((__int64*)v74 + 3, (__int64)&v87);
							}
							*(_QWORD*)v75 = v72;
							*((_QWORD*)v75 + 1) = *(_QWORD*)(v72 + 8);
							**(_QWORD**)(v72 + 8) = v75;
							*(_QWORD*)(v72 + 8) = v75;
							(*(void(__fastcall**)(int*))(*((_QWORD*)v73 - 2) + 8i64))(v73 - 4);
							v76 = qword_140C65898;
							v77 = *(_QWORD*)(qword_140C65898 + 25744);
							if (v77)
							{
								v78 = *(_DWORD*)(v2 + 2300);
								if (v78 == 2)
								{
									v79 = *(_QWORD*)(qword_140C65898 + 29096);
									if (!v79)
										v79 = *(_QWORD*)(qword_140C65898 + 29088);
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v79 + 8i64))(v79);
									v76 = qword_140C65898;
								}
								else if (v78 == 1)
								{
									v67.m128_u64[0] = *(unsigned int*)(v77 + 4800);
								}
								else
								{
									v67.m128_u64[0] = 0i64;
								}
								sub_140770FC0(
									v70,
									(__m128*)(*(_QWORD*)(v76 + 25744) + 4576i64),
									*(double*)v67.m128_u64,
									*(float*)(v2 + 1872),
									v2 + 2280);
							}
							v26 = v97;
						}
						++v63;
						--v64;
					} while (v64);
					goto LABEL_96;
				}
			LABEL_97:
				v11 = v108;
			LABEL_98:
				if (v101)
					sub_14018B900((__int64)v101, 0);
				if (v90)
					sub_14018B900((__int64)v90, 0);
				v108 = ++v11;
				if (v11 > *(_DWORD*)(*v3 + 16))
				{
					if (v106)
						sub_14018B900(v106, 0);
					if (v85)
						sub_14018B900((__int64)v85, 0);
					sub_140532D90(v107);
					if (v26)
						sub_14018B900((__int64)v26, 0);
					break;
				}
			}
		}
		v82 = off_140B56A08;
		if (v84)
			sub_1400579E0((__int64)v84, v8, v83);
	}
	return 0i64;
}
// 1406C16BB: variable 'v4' is possibly undefined
// 1406C18EC: variable 'v25' is possibly undefined
// 1406C1DDA: variable 'v8' is possibly undefined
// 1406C1E09: variable 'v61' is possibly undefined
// 1409F28B4: using guessed type int dword_1409F28B4[12];
// 1409F7034: using guessed type int dword_1409F7034[12];
// 1409F70CC: using guessed type unsigned __int16 word_1409F70CC[32];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B38AC8: using guessed type wchar_t *off_140B38AC8[7];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 1406C1640: using guessed type _QWORD var_120[30];
// 1406C1640: using guessed type unsigned int var_180[4];

