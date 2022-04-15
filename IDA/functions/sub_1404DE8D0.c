#include "../winhttp.h"

//----- (00000001404DE8D0) ----------------------------------------------------
__int64 __fastcall sub_1404DE8D0(_QWORD* a1, int* a2, unsigned int a3, int** a4)
{
	__int64 result; // rax
	__int64 v7; // rdi
	__int64 v8; // rcx
	unsigned int v9; // ebx
	__int64 v10; // rax
	float v11; // xmm0_4
	__int64 v12; // rax
	int* v13; // r12
	__int64 v14; // rbx
	signed __int64 v15; // rbx
	char* v16; // r14
	__int64 v17; // r15
	char* v18; // rax
	unsigned __int64 v19; // rbx
	char* v20; // rax
	unsigned __int64 v21; // r13
	__int64* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	_WORD* v25; // r15
	int* v26; // r14
	unsigned __int64 v27; // rax
	int* v28; // rax
	int* v29; // rdx
	char* v30; // r8
	unsigned int v31; // ebx
	BOOL v32; // r15d
	bool v33; // zf
	_WORD* v34; // rax
	__int64 v35; // r15
	int v36; // eax
	__int64 v37; // rcx
	__int16* v38; // r9
	int v39; // r8d
	__int64 v40; // rbx
	int* v41; // rdx
	__int64 v42; // rax
	int* v43; // rdx
	__int64 v44; // rax
	__int64 v45; // rdx
	unsigned int v46; // eax
	int* v47; // rdx
	__int64 v48; // rax
	__int64 v49; // rcx
	unsigned int v50; // r15d
	float v51; // xmm0_4
	float v52; // xmm0_4
	unsigned int v53; // eax
	int* v54; // rdx
	__int64 v55; // rax
	__int64 v56; // r15
	__int64 v57; // rdx
	float v58; // xmm1_4
	float v59; // xmm1_4
	unsigned int v60; // r8d
	__int64 v61; // rcx
	unsigned int v62; // edx
	unsigned int v63; // eax
	int* v64; // rdx
	__int64 v65; // rax
	__int64 v66; // rdx
	float v67; // xmm0_4
	int* v68; // rsi
	int* v69; // r15
	int* v70; // rax
	int* v71; // rdi
	unsigned __int64 v72; // rbx
	int** v73; // r9
	BOOL v74; // [rsp+30h] [rbp-50h]
	unsigned __int64 v75; // [rsp+38h] [rbp-48h] BYREF
	__int64 v76[2]; // [rsp+40h] [rbp-40h] BYREF
	unsigned int v77; // [rsp+B0h] [rbp+30h] BYREF
	int** v78; // [rsp+B8h] [rbp+38h]

	v78 = a4;
	if (!a3)
		return 0i64;
	result = sub_1404E1C50((__int64)a1, a3, *(_QWORD*)(qword_140C65898 + 120));
	v7 = result;
	if (result)
	{
		v8 = *(_QWORD*)(qword_140C65898 + 120);
		if (v8)
		{
			v9 = *(_DWORD*)(v8 + 60);
			if (!v9)
				v9 = *(_DWORD*)(v8 + 56);
		}
		else
		{
			v9 = 0;
		}
		v10 = (*(__int64(__fastcall**)(_QWORD*, const wchar_t*))(*a1 + 8i64))(a1, L"CasterItemLevel");
		if (v10)
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
		LODWORD(v11) = sub_1404DE840(v9, v7).m128_u32[0];
		v12 = 0i64;
		v13 = 0i64;
		if (*(_WORD*)a2)
		{
			do
				++v12;
			while (*((_WORD*)a2 + v12));
		}
		v14 = (2 * v12) >> 1;
		if ((unsigned __int64)(v14 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			v13 = sub_14018B280(2 * (v14 + 1), 0);
		v15 = 2 * v14;
		sub_1407DB590(v13, a2, v15);
		v16 = (char*)v13 + v15;
		if ((int*)((char*)v13 + v15))
			*(_WORD*)v16 = 0;
		v17 = v15 >> 1;
		if (!(v15 >> 1)
			|| (HIWORD(v77) = 46, v18 = (char*)sub_14002C8A0(v13, (__int64)v13 + v15, v77), v18 == v16)
			|| (v19 = (v18 - (char*)v13) >> 1, v19 == -1i64)
			|| (HIWORD(v77) = 41, v20 = (char*)sub_14002C8A0(v13, (__int64)v16, v77), v20 == v16)
			|| (v21 = (v20 - (char*)v13) >> 1, v21 == -1i64)
			|| v19 >= v21)
		{
			v21 = 0i64;
		LABEL_124:
			if (v13)
				sub_14018B900((__int64)v13, 0);
			return v21;
		}
		v22 = v76;
		v76[0] = v17 - (v19 + 1);
		v75 = v21 - v19 - 1;
		v23 = (__int64)v13 + 2 * v19 + 2;
		if (v76[0] >= v75)
			v22 = (__int64*)&v75;
		v24 = *v22;
		v76[0] = (__int64)v13 + 2 * v19 + 2;
		v25 = (_WORD*)v13 + v19 + v24 + 1;
		v26 = 0i64;
		v27 = (((__int64)v25 - v23) >> 1) + 1;
		if (v27 <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v28 = sub_14018B280(2 * v27, 0);
			v23 = v76[0];
			v26 = v28;
		}
		v29 = v26;
		if ((_WORD*)v23 != v25)
		{
			v30 = (char*)v13 + 2 * v19 + 2 - (_QWORD)v26;
			do
			{
				if (v29)
					*(_WORD*)v29 = *(_WORD*)((char*)v29 + (_QWORD)v30);
				v29 = (int*)((char*)v29 + 2);
			} while ((_WORD*)((char*)v29 + (_QWORD)v30) != v25);
		}
		v31 = 0;
		if (v29)
			*(_WORD*)v29 = 0;
		v74 = sub_14018E5E0(v26, L"pctAdd") != 0;
		v32 = sub_14018E5E0(v26, L"pctSub") != 0;
		LODWORD(v75) = v32;
		LODWORD(v76[0]) = sub_14018E5E0(v26, L"pct") != 0;
		v33 = sub_14018E5E0(v26, L"abs") == 0;
		v34 = (_WORD*)a1[24];
		LOBYTE(v31) = !v33;
		if (v34 != (_WORD*)a1[25])
		{
			*v34 = 0;
			a1[25] = a1[24];
		}
		if (sub_14018E5E0(v26, L"input"))
		{
			v77 = 0;
			(*(void(__fastcall**)(_QWORD*, int*, const wchar_t*, unsigned int*))(*a1 + 184i64))(a1, v26, L"input", &v77);
			v35 = v77;
			if (v77 >= 4)
			{
			LABEL_111:
				v40 = 0i64;
				goto LABEL_112;
			}
			v36 = dword_140C49F40;
			if (*(_DWORD*)qword_140C63750 < dword_140C49F40)
				v36 = *(_DWORD*)qword_140C63750;
			if (!byte_140C49F50[v36] && !sub_14018E5E0(v26, L"actual"))
			{
				if (LODWORD(v76[0]))
				{
					v37 = *(unsigned int*)(v7 + 4 * v35 + 136);
					v38 = sub_14034BDD0(v37, dword_140B0B580[v37]);
					v39 = (int)(float)((float)(*(float*)(v7 + 4i64 * v77 + 152) * 1000.0) + 0.5);
					if (v74)
					{
						v39 -= 1000;
					}
					else if ((_DWORD)v75)
					{
						v39 = 1000 - v39;
					}
					if (v31)
						v39 = abs32(v39);
					v40 = 0i64;
					if (*(_DWORD*)(v7 + 4i64 * v77 + 136))
					{
						v41 = (int*)*sub_14034C700(
							v76,
							(__int64)L"[%.*f%% %s]",
							v39 != 10 * (v39 / 10),
							(float)((float)v39 * 0.1),
							v38);
						v42 = 0i64;
						if (*(_WORD*)v41)
						{
							do
								++v42;
							while (*((_WORD*)v41 + v42));
						}
						sub_14001C480((__int64)(a1 + 23), v41, (int*)((char*)v41 + 2 * v42));
						if (!v76[0])
							goto LABEL_112;
					}
					else
					{
						v43 = (int*)*sub_14034C700(v76, (__int64)L"[%s]", v38);
						v44 = 0i64;
						if (*(_WORD*)v43)
						{
							do
								++v44;
							while (*((_WORD*)v43 + v44));
						}
						sub_14001C480((__int64)(a1 + 23), v43, (int*)((char*)v43 + 2 * v44));
						if (!v76[0])
							goto LABEL_112;
					}
					goto LABEL_96;
				}
				if (sub_14018E5E0(v26, L"rawInt"))
				{
					v46 = (int)(float)(*(float*)(v7 + 4 * v35 + 152) + 0.5);
					if (v31)
						v46 = abs32(v46);
					v40 = 0i64;
					v47 = (int*)*sub_14034C700(v76, (__int64)L"%d", v46);
					v48 = 0i64;
					if (*(_WORD*)v47)
					{
						do
							++v48;
						while (*((_WORD*)v47 + v48));
					}
					sub_14001C480((__int64)(a1 + 23), v47, (int*)((char*)v47 + 2 * v48));
					if (!v76[0])
						goto LABEL_112;
					goto LABEL_96;
				}
				goto LABEL_64;
			}
			v49 = a1[9];
			v50 = 0;
			if (v49 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v49 + 24i64))(v49))
				v50 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)a1[9] + 24i64))(a1[9]);
			v51 = sub_1405654A0(v49, v50, v7, v11).m128_f32[0];
			if (v51 >= 0.0)
				v52 = v51 + 0.5;
			else
				v52 = v51 - 0.5;
			v53 = (int)v52;
			if (v31)
				v53 = abs32(v53);
			v40 = 0i64;
			v54 = (int*)*sub_14034C700(v76, (__int64)L"%d", v53);
			v55 = 0i64;
			if (*(_WORD*)v54)
			{
				do
					++v55;
				while (*((_WORD*)v54 + v55));
			}
			sub_14001C480((__int64)(a1 + 23), v54, (int*)((char*)v54 + 2 * v55));
			if (!v76[0])
				goto LABEL_112;
			goto LABEL_96;
		}
		if (sub_14018E5E0(v26, L"data"))
		{
			v77 = 0;
			(*(void(__fastcall**)(_QWORD*, int*, const wchar_t*, unsigned int*))(*a1 + 184i64))(a1, v26, L"data", &v77);
			v56 = v77;
			if (v77 >= 0xA)
				goto LABEL_111;
			if (sub_14018E5E0(v26, L"msf") || sub_14018E5E0(v26, L"ms"))
			{
				sub_1404DE760((__int64)a1, v57, v31);
				goto LABEL_111;
			}
			if (!v74)
			{
				if (!(_DWORD)v75)
				{
					if (!LODWORD(v76[0]))
					{
						if (!sub_14018E5E0(v26, L"rawInt"))
						{
						LABEL_64:
							sub_1404DE6F0((__int64)a1, v45, v31);
							goto LABEL_111;
						}
						v63 = *(_DWORD*)(v7 + 4 * v56 + 64);
						if (v31)
							v63 = abs32(v63);
						v40 = 0i64;
						v64 = (int*)*sub_14034C700(v76, (__int64)L"%d", v63);
						v65 = 0i64;
						if (*(_WORD*)v64)
						{
							do
								++v65;
							while (*((_WORD*)v64 + v65));
						}
						sub_14001C480((__int64)(a1 + 23), v64, (int*)((char*)v64 + 2 * v65));
						if (!v76[0])
							goto LABEL_112;
					LABEL_96:
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v76[0] - 16) + 8i64))(v76[0] - 16);
					LABEL_112:
						v68 = (int*)a1[24];
						v69 = *v78;
						if (v68)
						{
							if (*(_WORD*)v68)
							{
								do
									++v40;
								while (*((_WORD*)v68 + v40));
							}
							v70 = sub_14018B280(2 * v40 + 18, 0);
							if (v70)
							{
								*((_QWORD*)v70 + 1) = v40;
								*(_QWORD*)v70 = off_140B55060;
							}
							v71 = v70 + 4;
							v72 = 2 * v40;
							sub_1407DB590(v70 + 4, v68, v72);
							v73 = v78;
							*(_WORD*)((char*)v71 + v72) = 0;
							*v73 = v71;
						}
						else
						{
							*v78 = 0i64;
						}
						if (v69)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v69 - 2) + 8i64))(v69 - 4);
						if (v26)
							sub_14018B900((__int64)v26, 0);
						goto LABEL_124;
					}
					v60 = v31;
					v61 = (__int64)a1;
					v62 = (int)(float)(*(float*)(v7 + 4 * v56 + 64) * 1000.0);
				LABEL_110:
					sub_1404DE7D0(v61, v62, v60);
					goto LABEL_111;
				}
				v59 = 1000.0 - (float)(*(float*)(v7 + 4 * v56 + 64) * 1000.0);
			LABEL_85:
				v60 = v31;
				v61 = (__int64)a1;
				v62 = (int)(float)(v59 + 0.5);
				goto LABEL_110;
			}
			v58 = *(float*)(v7 + 4 * v56 + 64);
		}
		else
		{
			if (sub_14018E5E0(v26, L"tickTimeMS")
				|| sub_14018E5E0(v26, L"durationMS")
				|| sub_14018E5E0(v26, L"durationM")
				|| sub_14018E5E0(v26, L"durationH")
				|| sub_14018E5E0(v26, L"delayMS"))
			{
				sub_1404DE760((__int64)a1, v66, 0i64);
				goto LABEL_111;
			}
			if (!sub_14018E5E0(v26, L"threat"))
				goto LABEL_111;
			if (!v74)
			{
				v67 = *(float*)(v7 + 112);
				v60 = v31;
				v61 = (__int64)a1;
				if (v32)
					v62 = (int)(float)((float)(1000.0 - (float)(v67 * 1000.0)) + 0.5);
				else
					v62 = (int)(float)(v67 * 1000.0);
				goto LABEL_110;
			}
			v58 = *(float*)(v7 + 112);
		}
		v59 = (float)(v58 * 1000.0) - 1000.0;
		goto LABEL_85;
	}
	return result;
}
// 1404DEE46: variable 'v45' is possibly undefined
// 1404DEE7E: variable 'v49' is possibly undefined
// 1404DEF74: variable 'v57' is possibly undefined
// 1404DF161: variable 'v66' is possibly undefined
// 140B07D14: using guessed type wchar_t aMs[3];
// 140B07FB4: using guessed type wchar_t aD_28[3];
// 140B08214: using guessed type wchar_t aD_29[3];
// 140B08804: using guessed type wchar_t aD_30[3];
// 140B0ACF8: using guessed type wchar_t aCasteritemleve[16];
// 140B0AD98: using guessed type wchar_t aPctadd[7];
// 140B0AED8: using guessed type wchar_t aData_2[5];
// 140B0AEE8: using guessed type wchar_t aMsf[4];
// 140B0AEF0: using guessed type wchar_t aRawint_0[7];
// 140B0AF00: using guessed type wchar_t aS_37[5];
// 140B0AF10: using guessed type wchar_t aRawint[7];
// 140B0AF20: using guessed type wchar_t aData_1[5];
// 140B0AF30: using guessed type wchar_t aInput_0[6];
// 140B0AF40: using guessed type wchar_t aActual[7];
// 140B0AF50: using guessed type wchar_t aFS[12];
// 140B0AF68: using guessed type wchar_t aPctsub[7];
// 140B0AF78: using guessed type wchar_t aPct[4];
// 140B0AF80: using guessed type wchar_t aAbs[4];
// 140B0AF88: using guessed type wchar_t aInput[6];
// 140B0AFF0: using guessed type wchar_t aDurationh[10];
// 140B0B008: using guessed type wchar_t aDelayms[8];
// 140B0B018: using guessed type wchar_t aThreat[7];
// 140B0B038: using guessed type wchar_t aTicktimems[11];
// 140B0B050: using guessed type wchar_t aDurationms[11];
// 140B0B068: using guessed type wchar_t aDurationm[10];
// 140B0B580: using guessed type int dword_140B0B580[40];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C49F40: using guessed type int dword_140C49F40;
// 140C49F50: using guessed type _BYTE[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

