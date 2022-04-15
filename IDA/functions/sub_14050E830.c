#include "../winhttp.h"

//----- (000000014050E830) ----------------------------------------------------
__int64 __fastcall sub_14050E830(__int64 a1)
{
	int v2; // edi
	_QWORD* v3; // rax
	__int64 v4; // r10
	__int64 v5; // rdx
	__int64 v6; // rbx
	unsigned __int64 v7; // rsi
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	_DWORD* v10; // rcx
	__int64* v11; // rax
	int v12; // edi
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	__int64 v16; // rbx
	unsigned __int64* v17; // rdx
	unsigned __int64 v18; // r8
	_DWORD* v19; // rcx
	__int64* v20; // rax
	float v21; // xmm6_4
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int64 v25; // rbx
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	__int64 v28; // rax
	__int64* v29; // rax
	float v30; // xmm6_4
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	__int64 v34; // rbx
	unsigned __int64* v35; // rdx
	unsigned __int64 v36; // r8
	__int64 v37; // rax
	__int64* v38; // rax
	float v39; // xmm6_4
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	__int64 v43; // rbx
	unsigned __int64* v44; // rdx
	unsigned __int64 v45; // r8
	__int64 v46; // rax
	__int64* v47; // rax
	_QWORD* v48; // rdi
	__int64 v49; // rbx
	_QWORD* v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rbx
	__int64 v53; // rax
	__int64 v54; // r9
	__int64 v55; // rax
	int v56; // eax
	_QWORD* v57; // rdi
	__int64 v58; // rbx
	_QWORD* v59; // rax
	__int64 v60; // rcx
	__int64 v61; // rbx
	__int64 v62; // rax
	__int64 v63; // r9
	unsigned int v64; // edi
	_QWORD* v65; // rax
	__int64 v66; // r10
	__int64 v67; // rdx
	__int64 v68; // rbx
	unsigned __int64* v69; // rdx
	unsigned __int64 v70; // r8
	int* v71; // rcx
	__int64* v72; // rax
	_QWORD* v73; // rax
	__int64 v74; // r10
	__int64 v75; // rdx
	__int64 v76; // rbx
	unsigned __int64* v77; // rdx
	unsigned __int64 v78; // r8
	int* v79; // rcx
	__int64* v80; // rax
	_QWORD* v81; // rax
	__int64 v82; // r10
	__int64 v83; // rdx
	__int64 v84; // rbx
	unsigned __int64* v85; // rdx
	unsigned __int64 v86; // r8
	int* v87; // rcx
	__int64* v88; // rax
	_QWORD* v89; // rax
	__int64 v90; // r10
	__int64 v91; // rdx
	__int64 v92; // rbx
	unsigned __int64* v93; // rdx
	unsigned __int64 v94; // r8
	int* v95; // rcx
	__int64* v96; // rax
	_QWORD* v97; // rax
	__int64 v98; // r10
	__int64 v99; // rdx
	__int64 v100; // rbx
	unsigned __int64* v101; // rdx
	int* v102; // rax
	__int64* v103; // rax
	__int64 result; // rax
	__int64 v105; // [rsp+20h] [rbp-30h] BYREF
	__int64 v106; // [rsp+28h] [rbp-28h]
	__int64 v107; // [rsp+30h] [rbp-20h]

	v2 = *(_DWORD*)(qword_140C65898 + 7016);
	v3 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v5 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v5 = *v3;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v3 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	v6 = *(_QWORD*)(a1 + 16);
	v7 = -1i64;
	v8 = (unsigned __int64*)sub_14018F0E0(&v105, L"bIsDead")[1];
	if (v8)
	{
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		sub_140058710(v6, v8, v9);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v6 + 16) + 8i64) = 0;
		*(_QWORD*)(v6 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v10 = *(_DWORD**)(v6 + 16);
	v10[2] = 1;
	*v10 = v2 != 0;
	*(_QWORD*)(v6 + 16) += 16i64;
	v11 = (__int64*)sub_1400580E0(v6, -3);
	sub_14005EA50(v6, v11, (int*)(*(_QWORD*)(v6 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v6 + 16) - 16i64));
	*(_QWORD*)(v6 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v12 = *(_DWORD*)(qword_140C65898 + 7048);
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v15 = *(_QWORD*)(v14 + 16);
	*(_QWORD*)v15 = *v13;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(v14 + 16) += 16i64;
	v16 = *(_QWORD*)(a1 + 16);
	v17 = (unsigned __int64*)sub_14018F0E0(&v105, L"bHasCasterRezRequest")[1];
	if (v17)
	{
		v18 = -1i64;
		do
			++v18;
		while (*((_BYTE*)v17 + v18));
		sub_140058710(v16, v17, v18);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v16 + 16) + 8i64) = 0;
		*(_QWORD*)(v16 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v19 = *(_DWORD**)(v16 + 16);
	v19[2] = 1;
	*v19 = v12 != 0;
	*(_QWORD*)(v16 + 16) += 16i64;
	v20 = (__int64*)sub_1400580E0(v16, -3);
	sub_14005EA50(v16, v20, (int*)(*(_QWORD*)(v16 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v16 + 16) - 16i64));
	*(_QWORD*)(v16 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v21 = (float)(int)sub_1403C9740() * 0.001;
	v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v24 = *(_QWORD*)(v23 + 16);
	*(_QWORD*)v24 = *v22;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v23 + 16) += 16i64;
	v25 = *(_QWORD*)(a1 + 16);
	v26 = (unsigned __int64*)sub_14018F0E0(&v105, L"fDeathPenalty")[1];
	if (v26)
	{
		v27 = -1i64;
		do
			++v27;
		while (*((_BYTE*)v26 + v27));
		sub_140058710(v25, v26, v27);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v25 + 16) + 8i64) = 0;
		*(_QWORD*)(v25 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v28 = *(_QWORD*)(v25 + 16);
	*(_DWORD*)(v28 + 8) = 3;
	*(double*)v28 = v21;
	*(_QWORD*)(v25 + 16) += 16i64;
	v29 = (__int64*)sub_1400580E0(v25, -3);
	sub_14005EA50(v25, v29, (int*)(*(_QWORD*)(v25 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v25 + 16) - 16i64));
	*(_QWORD*)(v25 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v30 = (float)(int)sub_1403C9800() * 0.001;
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v33 = *(_QWORD*)(v32 + 16);
	*(_QWORD*)v33 = *v31;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(v32 + 16) += 16i64;
	v34 = *(_QWORD*)(a1 + 16);
	v35 = (unsigned __int64*)sub_14018F0E0(&v105, L"fWakeHereCooldown")[1];
	if (v35)
	{
		v36 = -1i64;
		do
			++v36;
		while (*((_BYTE*)v35 + v36));
		sub_140058710(v34, v35, v36);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v34 + 16) + 8i64) = 0;
		*(_QWORD*)(v34 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v37 = *(_QWORD*)(v34 + 16);
	*(_DWORD*)(v37 + 8) = 3;
	*(double*)v37 = v30;
	*(_QWORD*)(v34 + 16) += 16i64;
	v38 = (__int64*)sub_1400580E0(v34, -3);
	sub_14005EA50(v34, v38, (int*)(*(_QWORD*)(v34 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v34 + 16) - 16i64));
	*(_QWORD*)(v34 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v39 = (float)(int)sub_1403C98C0() * 0.001;
	v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v42 = *(_QWORD*)(v41 + 16);
	*(_QWORD*)v42 = *v40;
	*(_DWORD*)(v42 + 8) = *((_DWORD*)v40 + 2);
	*(_QWORD*)(v41 + 16) += 16i64;
	v43 = *(_QWORD*)(a1 + 16);
	v44 = (unsigned __int64*)sub_14018F0E0(&v105, L"fForceRezTimer")[1];
	if (v44)
	{
		v45 = -1i64;
		do
			++v45;
		while (*((_BYTE*)v44 + v45));
		sub_140058710(v43, v44, v45);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v43 + 16) + 8i64) = 0;
		*(_QWORD*)(v43 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v46 = *(_QWORD*)(v43 + 16);
	*(_DWORD*)(v46 + 8) = 3;
	*(double*)v46 = v39;
	*(_QWORD*)(v43 + 16) += 16i64;
	v47 = (__int64*)sub_1400580E0(v43, -3);
	sub_14005EA50(v43, v47, (int*)(*(_QWORD*)(v43 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v43 + 16) - 16i64));
	*(_QWORD*)(v43 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v48 = *(_QWORD**)(a1 + 16);
	v49 = *(unsigned int*)(qword_140C65898 + 7024);
	v106 = 1i64;
	v107 = 0i64;
	v50 = (_QWORD*)sub_140059170(v48, 0x18ui64);
	v51 = v106;
	*v50 = v49;
	v50[1] = v51;
	v50[2] = 0i64;
	v52 = v48[4];
	v53 = sub_140062650((__int64)v48, (unsigned __int64*)"Game.Money", 0xAui64);
	v54 = v48[2];
	v105 = v53;
	LODWORD(v106) = 4;
	sub_14005E8E0((__int64)v48, v52 + 160, (int*)&v105, v54);
	v48[2] += 16i64;
	sub_140058BF0((__int64)v48, -2);
	sub_1400FB540(a1);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if ((dword_140DC3298 & 1) == 0)
	{
		dword_140DC3298 |= 1u;
		goto LABEL_39;
	}
	if (!dword_140DC32A4)
	{
	LABEL_39:
		dword_140DC32A4 = 1;
		v55 = sub_140200220(0x523u);
		if (v55)
		{
			v56 = *(_DWORD*)(v55 + 4);
			dword_140DC32A0 = v56;
		}
		else
		{
			v56 = 0;
			dword_140DC32A0 = 0;
		}
		goto LABEL_43;
	}
	v56 = dword_140DC32A0;
LABEL_43:
	v57 = *(_QWORD**)(a1 + 16);
	v58 = v56;
	v106 = 15i64;
	v107 = 0x900000000i64;
	v59 = (_QWORD*)sub_140059170(v57, 0x18ui64);
	v60 = v106;
	*v59 = v58;
	v59[1] = v60;
	v59[2] = v107;
	v61 = v57[4];
	v62 = sub_140062650((__int64)v57, (unsigned __int64*)"Game.Money", 0xAui64);
	v63 = v57[2];
	v105 = v62;
	LODWORD(v106) = 4;
	sub_14005E8E0((__int64)v57, v61 + 160, (int*)&v105, v63);
	v57[2] += 16i64;
	sub_140058BF0((__int64)v57, -2);
	sub_1400FB540(a1);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v64 = *(unsigned __int8*)(qword_140C65898 + 7020);
	v65 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v67 = *(_QWORD*)(v66 + 16);
	*(_QWORD*)v67 = *v65;
	*(_DWORD*)(v67 + 8) = *((_DWORD*)v65 + 2);
	*(_QWORD*)(v66 + 16) += 16i64;
	v68 = *(_QWORD*)(a1 + 16);
	v69 = (unsigned __int64*)sub_14018F0E0(&v105, L"bWakeHere")[1];
	if (v69)
	{
		v70 = -1i64;
		do
			++v70;
		while (*((_BYTE*)v69 + v70));
		sub_140058710(v68, v69, v70);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v68 + 16) + 8i64) = 0;
		*(_QWORD*)(v68 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v71 = *(int**)(v68 + 16);
	v71[2] = 1;
	*v71 = v64 & 1;
	*(_QWORD*)(v68 + 16) += 16i64;
	v72 = (__int64*)sub_1400580E0(v68, -3);
	sub_14005EA50(v68, v72, (int*)(*(_QWORD*)(v68 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v68 + 16) - 16i64));
	*(_QWORD*)(v68 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v73 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v75 = *(_QWORD*)(v74 + 16);
	*(_QWORD*)v75 = *v73;
	*(_DWORD*)(v75 + 8) = *((_DWORD*)v73 + 2);
	*(_QWORD*)(v74 + 16) += 16i64;
	v76 = *(_QWORD*)(a1 + 16);
	v77 = (unsigned __int64*)sub_14018F0E0(&v105, L"bHolocrypt")[1];
	if (v77)
	{
		v78 = -1i64;
		do
			++v78;
		while (*((_BYTE*)v77 + v78));
		sub_140058710(v76, v77, v78);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v76 + 16) + 8i64) = 0;
		*(_QWORD*)(v76 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v79 = *(int**)(v76 + 16);
	v79[2] = 1;
	*v79 = (v64 >> 1) & 1;
	*(_QWORD*)(v76 + 16) += 16i64;
	v80 = (__int64*)sub_1400580E0(v76, -3);
	sub_14005EA50(v76, v80, (int*)(*(_QWORD*)(v76 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v76 + 16) - 16i64));
	*(_QWORD*)(v76 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v81 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v83 = *(_QWORD*)(v82 + 16);
	*(_QWORD*)v83 = *v81;
	*(_DWORD*)(v83 + 8) = *((_DWORD*)v81 + 2);
	*(_QWORD*)(v82 + 16) += 16i64;
	v84 = *(_QWORD*)(a1 + 16);
	v85 = (unsigned __int64*)sub_14018F0E0(&v105, L"bExitInstance")[1];
	if (v85)
	{
		v86 = -1i64;
		do
			++v86;
		while (*((_BYTE*)v85 + v86));
		sub_140058710(v84, v85, v86);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v84 + 16) + 8i64) = 0;
		*(_QWORD*)(v84 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v87 = *(int**)(v84 + 16);
	v87[2] = 1;
	*v87 = (v64 >> 5) & 1;
	*(_QWORD*)(v84 + 16) += 16i64;
	v88 = (__int64*)sub_1400580E0(v84, -3);
	sub_14005EA50(v84, v88, (int*)(*(_QWORD*)(v84 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v84 + 16) - 16i64));
	*(_QWORD*)(v84 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v89 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v91 = *(_QWORD*)(v90 + 16);
	*(_QWORD*)v91 = *v89;
	*(_DWORD*)(v91 + 8) = *((_DWORD*)v89 + 2);
	*(_QWORD*)(v90 + 16) += 16i64;
	v92 = *(_QWORD*)(a1 + 16);
	v93 = (unsigned __int64*)sub_14018F0E0(&v105, L"bAcceptCasterRez")[1];
	if (v93)
	{
		v94 = -1i64;
		do
			++v94;
		while (*((_BYTE*)v93 + v94));
		sub_140058710(v92, v93, v94);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v92 + 16) + 8i64) = 0;
		*(_QWORD*)(v92 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v95 = *(int**)(v92 + 16);
	v95[2] = 1;
	*v95 = (v64 >> 2) & 1;
	*(_QWORD*)(v92 + 16) += 16i64;
	v96 = (__int64*)sub_1400580E0(v92, -3);
	sub_14005EA50(v92, v96, (int*)(*(_QWORD*)(v92 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v92 + 16) - 16i64));
	*(_QWORD*)(v92 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v97 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v99 = *(_QWORD*)(v98 + 16);
	*(_QWORD*)v99 = *v97;
	*(_DWORD*)(v99 + 8) = *((_DWORD*)v97 + 2);
	*(_QWORD*)(v98 + 16) += 16i64;
	v100 = *(_QWORD*)(a1 + 16);
	v101 = (unsigned __int64*)sub_14018F0E0(&v105, L"bWakeHereServiceToken")[1];
	if (v101)
	{
		do
			++v7;
		while (*((_BYTE*)v101 + v7));
		sub_140058710(v100, v101, v7);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v100 + 16) + 8i64) = 0;
		*(_QWORD*)(v100 + 16) += 16i64;
	}
	if (v106)
		sub_14018B900(v106, 0);
	v102 = *(int**)(v100 + 16);
	v102[2] = 1;
	*v102 = (v64 >> 6) & 1;
	*(_QWORD*)(v100 + 16) += 16i64;
	v103 = (__int64*)sub_1400580E0(v100, -3);
	sub_14005EA50(v100, v103, (int*)(*(_QWORD*)(v100 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v100 + 16) - 16i64));
	*(_QWORD*)(v100 + 16) -= 32i64;
	result = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 14050E878: variable 'v4' is possibly undefined
// 14050E955: variable 'v14' is possibly undefined
// 14050EA3C: variable 'v23' is possibly undefined
// 14050EB1D: variable 'v32' is possibly undefined
// 14050EBFE: variable 'v41' is possibly undefined
// 14050EE69: variable 'v66' is possibly undefined
// 14050EF32: variable 'v74' is possibly undefined
// 14050EFFA: variable 'v82' is possibly undefined
// 14050F0C5: variable 'v90' is possibly undefined
// 14050F195: variable 'v98' is possibly undefined
// 140B113A8: using guessed type wchar_t aBisdead[8];
// 140B113D8: using guessed type wchar_t aFdeathpenalty[14];
// 140B113F8: using guessed type wchar_t aBhascasterrezr[21];
// 140B11518: using guessed type wchar_t aBwakehereservi[22];
// 140B11558: using guessed type wchar_t aBholocrypt[11];
// 140B11570: using guessed type wchar_t aBwakehere[10];
// 140B11588: using guessed type wchar_t aBacceptcasterr[17];
// 140B115B0: using guessed type wchar_t aBexitinstance[14];
// 140B115D0: using guessed type wchar_t aFforcereztimer[15];
// 140B115F0: using guessed type wchar_t aFwakeherecoold[18];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3298: using guessed type int dword_140DC3298;
// 140DC32A0: using guessed type int dword_140DC32A0;
// 140DC32A4: using guessed type int dword_140DC32A4;

