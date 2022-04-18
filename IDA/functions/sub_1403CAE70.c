#include "../winhttp.h"

//----- (00000001403CAE70) ----------------------------------------------------
__int64 __fastcall sub_1403CAE70(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rsi
	__int64 v4; // rcx
	char v5; // r12
	__int64 v7; // rcx
	int v8; // eax
	unsigned int v9; // edx
	float v10; // xmm6_4
	__int64 v11; // r8
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rbx
	float v15; // xmm7_4
	float v16; // xmm6_4
	double v17; // xmm0_8
	unsigned int v18; // eax
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rcx
	int v22; // edx
	float v23; // xmm8_4
	__int16* v24; // rdi
	__int64 v25; // rcx
	int* v26; // rdx
	__int64 v27; // rax
	int* v28; // rax
	_QWORD* v29; // r15
	int* v30; // rsi
	__int64 v31; // rax
	bool v32; // zf
	__int64 v33; // r14
	int* v34; // rax
	int* v35; // rdi
	_QWORD* v36; // rax
	_QWORD* v37; // r15
	int* v38; // rsi
	__int64 v39; // rax
	__int64 v40; // r14
	int* v41; // rax
	int* v42; // rdi
	_QWORD* v43; // rax
	_QWORD* v44; // r15
	int* v45; // rsi
	__int64 v46; // rax
	__int64 v47; // r14
	int* v48; // rax
	__int64 v49; // rax
	__int64 v50; // rdi
	_QWORD* v51; // rax
	_QWORD* v52; // r15
	int* v53; // rsi
	__int64 v54; // r14
	int* v55; // rax
	__int64 v56; // rax
	__int64 v57; // r14
	int v58; // eax
	unsigned int v59; // r8d
	__int64 v60; // rdi
	__int16* v61; // rax
	int v62; // r8d
	double v63; // xmm0_8
	__int64 v64; // rdi
	__int16* v65; // rax
	__int64* v66; // rcx
	unsigned int v67; // ebx
	__int64 v68; // rcx
	__int64 v69; // [rsp+20h] [rbp-E0h]
	__int64(__fastcall * *v70)(); // [rsp+40h] [rbp-C0h] BYREF
	int* v71; // [rsp+48h] [rbp-B8h]
	int* v72; // [rsp+50h] [rbp-B0h]
	__int64 v73; // [rsp+58h] [rbp-A8h]
	__int64 v74; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v75; // [rsp+68h] [rbp-98h]
	__int64 v76; // [rsp+80h] [rbp-80h] BYREF
	char v77[8]; // [rsp+88h] [rbp-78h] BYREF
	_WORD* v78; // [rsp+90h] [rbp-70h]
	_WORD* v79; // [rsp+98h] [rbp-68h]
	__int64 v80; // [rsp+140h] [rbp+40h]
	__int64 v82; // [rsp+1F0h] [rbp+F0h] BYREF

	v2 = a1;
	LODWORD(v82) = 0;
	v4 = *(_QWORD*)(a1 + 120);
	v5 = 0;
	if (!v4)
		return 2147500037i64;
	v7 = *(_QWORD*)(v4 + 272);
	if (v7)
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 24i64))(v7);
	else
		v8 = 0;
	v9 = *a2;
	if (*a2 != v8)
	{
		v10 = *((float*)a2 + 1);
		if (v10 != 0.0)
		{
			v11 = *(_QWORD*)(v2 + 7064);
			v12 = *(_QWORD*)(v11 + 8);
			v13 = v11;
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < v9)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v13 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v13 == v11 || (v82 = v13, v9 < *(_DWORD*)(v13 + 32)))
				v82 = v11;
			v14 = v82;
			if (v82 == v11)
			{
				v17 = (*(double(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(v2 + 120) + 272i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(v2 + 120) + 272i64));
				v18 = *a2;
				v15 = *(float*)&v17;
				v16 = *(float*)&v17 + *((float*)a2 + 1);
				*((float*)&v82 + 1) = v16;
				LODWORD(v82) = v18;
				sub_140032F50(v2 + 7056, (__int64)&v70, &v82);
			}
			else
			{
				v15 = *(float*)(v82 + 36);
				v16 = v10 + v15;
				*(float*)(v82 + 36) = v16;
			}
			v19 = sub_1401FF120(*a2);
			if (v19 && (*(_DWORD*)(v19 + 8) & 1) != 0)
				goto LABEL_93;
			if (SLODWORD(v16) == SLODWORD(v15))
				goto LABEL_93;
			v20 = sub_1401FF120(*a2);
			if (!v20)
				goto LABEL_93;
			v22 = *(_DWORD*)(v20 + 12);
			if (!v22)
				goto LABEL_93;
			v23 = *((float*)a2 + 1);
			v24 = sub_14034BDD0(v21, v22);
			v82 = (__int64)v24;
			sub_1404DDE90(&v76);
			v26 = (int*)sub_14034BDD0(v25, 196592);
			if (v26)
			{
				v27 = 0i64;
				if (*(_WORD*)v26)
				{
					do
						++v27;
					while (*((_WORD*)v26 + v27));
				}
				sub_14001C480((__int64)v77, v26, (int*)((char*)v26 + 2 * v27));
			}
			else if (v78 != v79)
			{
				*v78 = 0;
				v79 = v78;
			}
			v28 = sub_14018B280(96i64, 0);
			if (v28)
				v29 = (_QWORD*)sub_1404DDB40((__int64)v28, (int*)v24);
			else
				v29 = 0i64;
			v30 = 0i64;
			v71 = 0i64;
			v72 = 0i64;
			v73 = 0i64;
			v31 = 0i64;
			do
				v32 = aFaction_0[++v31] == 0;
			while (!v32);
			v33 = (2 * v31) >> 1;
			if ((unsigned __int64)(v33 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v30 = sub_14018B280(2 * (v33 + 1), 0);
				v71 = v30;
				v72 = v30;
				v73 = (__int64)v30 + 2 * v33 + 2;
			}
			sub_1407DB590(v30, (int*)L"faction", 2 * v33);
			v34 = (int*)((char*)v30 + 2 * v33);
			v72 = v34;
			if (v34)
				*(_WORD*)v34 = 0;
			sub_1400B7480((__int64)&v76, v29);
			(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(*v29 + 72i64))(v29, &v70);
			if (v71)
				sub_14018B900((__int64)v71, 0);
			if (fabs(v23) < 1.0)
			{
				v42 = sub_14018B280(96i64, 0);
				if (v42)
				{
					v5 = 2;
					v43 = sub_14018EFA0(&v74, (__int64)L"%.1g", v23);
					v44 = (_QWORD*)sub_1404DDB40((__int64)v42, (int*)v43[1]);
				}
				else
				{
					v44 = 0i64;
				}
				v45 = 0i64;
				v71 = 0i64;
				v72 = 0i64;
				v73 = 0i64;
				v46 = 0i64;
				do
					v32 = aDelta_0[++v46] == 0;
				while (!v32);
				v47 = (2 * v46) >> 1;
				if ((unsigned __int64)(v47 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v45 = sub_14018B280(2 * (v47 + 1), 0);
					v71 = v45;
					v72 = v45;
					v73 = (__int64)v45 + 2 * v47 + 2;
				}
				sub_1407DB590(v45, (int*)L"delta", 2 * v47);
				v48 = (int*)((char*)v45 + 2 * v47);
				v72 = v48;
				if (v48)
					*(_WORD*)v48 = 0;
				sub_1400B7480((__int64)&v76, v44);
				(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(*v44 + 72i64))(v44, &v70);
				if (v71)
					sub_14018B900((__int64)v71, 0);
				if ((v5 & 2) == 0)
					goto LABEL_70;
				v5 &= ~2u;
			}
			else
			{
				v35 = sub_14018B280(96i64, 0);
				if (v35)
				{
					v5 = 1;
					v36 = sub_14018EFA0(&v74, (__int64)L"%.0f", v23);
					v37 = (_QWORD*)sub_1404DDB40((__int64)v35, (int*)v36[1]);
				}
				else
				{
					v37 = 0i64;
				}
				v38 = 0i64;
				v71 = 0i64;
				v72 = 0i64;
				v73 = 0i64;
				v39 = 0i64;
				do
					v32 = aDelta[++v39] == 0;
				while (!v32);
				v40 = (2 * v39) >> 1;
				if ((unsigned __int64)(v40 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v38 = sub_14018B280(2 * (v40 + 1), 0);
					v71 = v38;
					v72 = v38;
					v73 = (__int64)v38 + 2 * v40 + 2;
				}
				sub_1407DB590(v38, (int*)L"delta", 2 * v40);
				v41 = (int*)((char*)v38 + 2 * v40);
				v72 = v41;
				if (v41)
					*(_WORD*)v41 = 0;
				sub_1400B7480((__int64)&v76, v37);
				(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(*v37 + 72i64))(v37, &v70);
				if (v71)
					sub_14018B900((__int64)v71, 0);
				if ((v5 & 1) == 0)
					goto LABEL_70;
				v5 &= ~1u;
			}
			if (v75)
				sub_14018B900(v75, 0);
		LABEL_70:
			v49 = (__int64)sub_14018B280(96i64, 0);
			v50 = v49;
			if (v49)
			{
				v5 |= 4u;
				v51 = sub_14018EFA0(&v74, (__int64)L"%d", (unsigned int)(int)v16);
				v52 = (_QWORD*)sub_1404DDB40(v50, (int*)v51[1]);
				v49 = 0i64;
			}
			else
			{
				v52 = 0i64;
			}
			v53 = 0i64;
			v71 = 0i64;
			v72 = 0i64;
			v73 = 0i64;
			do
				v32 = aTotal_0[++v49] == 0;
			while (!v32);
			v54 = (2 * v49) >> 1;
			if ((unsigned __int64)(v54 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v53 = sub_14018B280(2 * (v54 + 1), 0);
				v71 = v53;
				v72 = v53;
				v73 = (__int64)v53 + 2 * v54 + 2;
			}
			sub_1407DB590(v53, (int*)L"total", 2 * v54);
			v55 = (int*)((char*)v53 + 2 * v54);
			v72 = v55;
			if (v55)
				*(_WORD*)v55 = 0;
			sub_1400B7480((__int64)&v76, v52);
			(*(void(__fastcall**)(_QWORD*, __int64(__fastcall***)()))(*v52 + 72i64))(v52, &v70);
			if (v71)
				sub_14018B900((__int64)v71, 0);
			if ((v5 & 4) != 0 && v75)
				sub_14018B900(v75, 0);
			v56 = sub_1400B7660(&v76);
			v2 = a1;
			v57 = v82;
			Apollo_LUAEvent(
				*(_QWORD*)(a1 + 29504),
				"FactionFloater",
				"USiSi",
				*(unsigned int*)(*(_QWORD*)(a1 + 120) + 8i64),
				*(_QWORD*)(v56 + 8),
				(int)v23,
				v82,
				*a2);
			sub_1407A2A00(v16);
			v58 = sub_1407A2A00(v15);
			if (v59 == v58)
			{
				if (v23 > 0.0)
				{
					v63 = sub_1407A2AA0(v59);
					if (v15 < *(float*)&v63 && v16 >= *(float*)&v63)
					{
						v64 = *(_QWORD*)(qword_140C65898 + 29504);
						v65 = sub_140616130((unsigned int)(v62 + 1));
						Apollo_LUAEvent(v64, "ReputationBoundryWarning", byte_1409EA15C, v65, v57);
					}
				}
			}
			else
			{
				v60 = *(_QWORD*)(qword_140C65898 + 29504);
				v61 = sub_140616130(v59);
				Apollo_LUAEvent(v60, "ReputationLevel", byte_1409EA18C, v61, v57);
			}
			sub_1403CADA0(a1, *a2);
			LODWORD(v69) = (int)*(float*)(v14 + 36);
			Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "ReputationChanged", byte_1409EA1CC, v57, v69, v23);
			sub_140437A10((_QWORD*)qword_140C658D8, 0xC4u, 0, 0i64, 0, 0, 1);
			if (v80)
				sub_14018B900(v80, 0);
			sub_1400B7390(&v76);
		LABEL_93:
			v66 = (__int64*)qword_140C65B80;
			*(_DWORD*)(v2 + 28568) = 1;
			v67 = *a2;
			sub_1405FCCB0(*v66);
			*(float*)&v71 = v15;
			v70 = &off_140B66F78;
			sub_14043B4E0(v68, v67, (__int64)&unk_140C7CCF0, (unsigned int(__fastcall***)(_QWORD, __int64)) & v70);
		}
	}
	return 0i64;
}
// 1403CB023: variable 'v21' is possibly undefined
// 1403CB040: variable 'v25' is possibly undefined
// 1403CB560: variable 'v59' is possibly undefined
// 1403CB5A7: variable 'v62' is possibly undefined
// 1403CB611: variable 'v69' is possibly undefined
// 1403CB69E: variable 'v68' is possibly undefined
// 1409EA15C: using guessed type _BYTE byte_1409EA15C[40];
// 1409EA18C: using guessed type _BYTE byte_1409EA18C[64];
// 1409EA1CC: using guessed type _BYTE byte_1409EA1CC[32];
// 140AEC4D4: using guessed type wchar_t aD_26[3];
// 140AF6438: using guessed type wchar_t aDelta_0[6];
// 140AF6448: using guessed type wchar_t aDelta[6];
// 140AF6458: using guessed type wchar_t a1g[5];
// 140AF6490: using guessed type wchar_t aTotal_0[6];
// 140AF6570: using guessed type wchar_t aFaction_0[8];
// 140AF6580: using guessed type wchar_t a0f_2[5];
// 140B66F78: using guessed type __int64 (__fastcall *off_140B66F78)();
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 1403CAE70: using guessed type char var_148[8];

