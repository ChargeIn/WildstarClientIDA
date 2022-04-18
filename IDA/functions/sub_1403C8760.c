#include "../winhttp.h"

//----- (00000001403C8760) ----------------------------------------------------
__int64 __fastcall sub_1403C8760(__int64 a1, _DWORD* a2)
{
	_DWORD* v2; // rbx
	unsigned int v3; // edi
	int* v4; // rax
	__int64 v5; // rcx
	unsigned int v6; // r14d
	int* v7; // rdx
	__int64 v8; // rax
	unsigned int v9; // r13d
	__int64 v10; // rcx
	int** v11; // rax
	int* v12; // r15
	int* v13; // rsi
	__int64 v14; // rax
	__int64 v15; // rbx
	unsigned __int64 v16; // rbx
	int* v17; // rax
	_QWORD* v18; // r12
	int* v19; // rsi
	__int64 v20; // rax
	bool v21; // zf
	__int64 v22; // r15
	int* v23; // rax
	__int64 v24; // rax
	__int64 v25; // r13
	unsigned int v26; // eax
	int v27; // eax
	__int64 v28; // rcx
	int* v29; // rax
	int* v30; // rdx
	__int64 v31; // rax
	int* v32; // r14
	int* v33; // rsi
	__int64 v34; // rax
	__int64 v35; // rbx
	unsigned __int64 v36; // rbx
	int* v37; // rax
	_QWORD* v38; // r12
	int* v39; // rsi
	__int64 v40; // rax
	__int64 v41; // r15
	int* v42; // rax
	int v43; // eax
	__int64 v44; // rcx
	__int64 v45; // rax
	_DWORD* v46; // rax
	__int64 v48; // [rsp+20h] [rbp-E0h]
	__int64 v49; // [rsp+30h] [rbp-D0h]
	__int64 v50; // [rsp+38h] [rbp-C8h]
	unsigned int v51; // [rsp+38h] [rbp-C8h]
	unsigned int v52; // [rsp+40h] [rbp-C0h] BYREF
	unsigned int v53; // [rsp+44h] [rbp-BCh]
	int v54; // [rsp+48h] [rbp-B8h]
	char v55[8]; // [rsp+50h] [rbp-B0h] BYREF
	int* v56; // [rsp+58h] [rbp-A8h]
	int* v57; // [rsp+60h] [rbp-A0h]
	__int64 v58; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v59)(); // [rsp+70h] [rbp-90h] BYREF
	char v60[8]; // [rsp+78h] [rbp-88h] BYREF
	_WORD* v61; // [rsp+80h] [rbp-80h]
	_WORD* v62; // [rsp+88h] [rbp-78h]
	__int128 v63; // [rsp+130h] [rbp+30h]
	int* v64; // [rsp+140h] [rbp+40h]
	__int64(__fastcall * *v65)(); // [rsp+150h] [rbp+50h] BYREF
	char v66[8]; // [rsp+158h] [rbp+58h] BYREF
	_WORD* v67; // [rsp+160h] [rbp+60h]
	_WORD* v68; // [rsp+168h] [rbp+68h]
	__int128 v69; // [rsp+210h] [rbp+110h]
	int* v70; // [rsp+220h] [rbp+120h]
	int* v73; // [rsp+290h] [rbp+190h] BYREF
	__int64 v74; // [rsp+298h] [rbp+198h] BYREF

	v2 = a2;
	if (*a2 || a2[1])
	{
		*(_DWORD*)(a1 + 5752) += *a2;
		*(_DWORD*)(a1 + 5768) -= a2[1];
		sub_1403C6D80(a1, (__int64)a2);
		if (*v2)
		{
			sub_1400B6F30((__int64)&v59);
			v3 = 0;
			v63 = 0i64;
			v59 = off_140B69230;
			v64 = 0i64;
			v4 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v63 = v4;
			*((_QWORD*)&v63 + 1) = v4;
			v5 = (__int64)(v4 + 4);
			v64 = v4 + 4;
			if (v4)
				*(_WORD*)v4 = 0;
			switch (v2[3])
			{
			case 2:
				v6 = 37701;
				v7 = (int*)sub_14034BDD0(v5, 37701);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			case 3:
				v6 = 37702;
				v7 = (int*)sub_14034BDD0(v5, 37702);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			case 4:
				v6 = 37703;
				v7 = (int*)sub_14034BDD0(v5, 37703);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			case 6:
				v6 = 41338;
				v7 = (int*)sub_14034BDD0(v5, 41338);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			case 7:
				v6 = 52884;
				v7 = (int*)sub_14034BDD0(v5, 52884);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			case 8:
				v6 = 37704;
				v7 = (int*)sub_14034BDD0(v5, 37704);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			case 9:
				v6 = 37704;
				v7 = (int*)sub_14034BDD0(v5, 37704);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			case 0x10:
				v6 = 262091;
				v7 = (int*)sub_14034BDD0(v5, 262091);
				if (!v7)
					goto LABEL_40;
				v8 = 0i64;
				if (*(_WORD*)v7)
				{
					do
						++v8;
					while (*((_WORD*)v7 + v8));
				}
				goto LABEL_44;
			default:
				v6 = 37704;
				v7 = (int*)sub_14034BDD0(v5, 37704);
				if (v7)
				{
					v8 = 0i64;
					if (*(_WORD*)v7)
					{
						do
							++v8;
						while (*((_WORD*)v7 + v8));
					}
				LABEL_44:
					sub_14001C480((__int64)v60, v7, (int*)((char*)v7 + 2 * v8));
				}
				else
				{
				LABEL_40:
					if (v61 != v62)
					{
						*v61 = 0;
						v62 = v61;
					}
				}
				v9 = *v2 - v2[2] - v2[1];
				if (v9)
				{
					v52 = 2;
					v10 = *(_QWORD*)(qword_140C65898 + 29504);
					v53 = v9;
					v54 = 0;
					sub_1404283D0(v10, &v52);
					v11 = (int**)sub_14034C700(&v74, (__int64)L"%d", v9);
					v12 = 0i64;
					v73 = 0i64;
					v13 = *v11;
					v14 = 0i64;
					if (*(_WORD*)v13)
					{
						do
							++v14;
						while (*((_WORD*)v13 + v14));
					}
					v15 = (2 * v14) >> 1;
					if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v12 = sub_14018B280(2 * (v15 + 1), 0);
						v73 = v12;
					}
					v16 = 2 * v15;
					sub_1407DB590(v12, v13, v16);
					if ((int*)((char*)v12 + v16))
						*(_WORD*)((char*)v12 + v16) = 0;
					if (v74)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v74 - 16) + 8i64))(v74 - 16);
					v17 = sub_14018B280(96i64, 0);
					if (v17)
						v18 = (_QWORD*)sub_1404DDB40((__int64)v17, v12);
					else
						v18 = 0i64;
					v19 = 0i64;
					v56 = 0i64;
					v57 = 0i64;
					v58 = 0i64;
					v20 = 0i64;
					do
						v21 = aXp_0[++v20] == 0;
					while (!v21);
					v22 = (2 * v20) >> 1;
					if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v19 = sub_14018B280(2 * (v22 + 1), 0);
						v56 = v19;
						v57 = v19;
						v58 = (__int64)v19 + 2 * v22 + 2;
					}
					sub_1407DB590(v19, (int*)L"xp", 2 * v22);
					v23 = (int*)((char*)v19 + 2 * v22);
					v57 = v23;
					if (v23)
						*(_WORD*)v23 = 0;
					sub_1400B7480((__int64)&v59, v18);
					(*(void(__fastcall**)(_QWORD*, char*))(*v18 + 72i64))(v18, v55);
					if (v56)
						sub_14018B900((__int64)v56, 0);
					v24 = sub_1400B7660(&v59);
					v2 = a2;
					v51 = v9;
					v25 = a1;
					Apollo_LUAEvent(
						*(_QWORD*)(a1 + 29504),
						"ExperienceGained",
						"iUSii",
						(unsigned int)a2[3],
						a2[4],
						*(_QWORD*)(v24 + 8),
						0,
						v51);
					v26 = sub_1406132E0(v6);
					sub_140051B70(0, v26);
					if (v73)
						sub_14018B900((__int64)v73, 0);
				}
				else
				{
					v25 = a1;
				}
				v27 = v2[2];
				if (v27)
				{
					v52 = 6;
					v28 = *(_QWORD*)(qword_140C65898 + 29504);
					v53 = v27;
					v54 = 0;
					sub_1404283D0(v28, &v52);
				}
				if (!v2[1])
					goto LABEL_113;
				sub_1400B6F30((__int64)&v65);
				v65 = off_140B69230;
				v70 = 0i64;
				v69 = 0i64;
				v29 = sub_14018B280(16i64, 0);
				*(_QWORD*)&v69 = v29;
				*((_QWORD*)&v69 + 1) = v29;
				v70 = v29 + 4;
				if (v29)
					*(_WORD*)v29 = 0;
				v30 = (int*)sub_14034BDD0((__int64)(v29 + 4), 262091);
				if (v30)
				{
					v31 = 0i64;
					if (*(_WORD*)v30)
					{
						do
							++v31;
						while (*((_WORD*)v30 + v31));
					}
					sub_14001C480((__int64)v66, v30, (int*)((char*)v30 + 2 * v31));
				}
				else if (v67 != v68)
				{
					*v67 = 0;
					v68 = v67;
				}
				v32 = 0i64;
				v33 = (int*)*sub_14034C700(&v73, (__int64)L"%d", (unsigned int)v2[1]);
				v34 = 0i64;
				if (*(_WORD*)v33)
				{
					do
						++v34;
					while (*((_WORD*)v33 + v34));
				}
				v35 = (2 * v34) >> 1;
				if ((unsigned __int64)(v35 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v32 = sub_14018B280(2 * (v35 + 1), 0);
				v36 = 2 * v35;
				sub_1407DB590(v32, v33, v36);
				if ((int*)((char*)v32 + v36))
					*(_WORD*)((char*)v32 + v36) = 0;
				if (v73)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v73 - 2) + 8i64))(v73 - 4);
				v37 = sub_14018B280(96i64, 0);
				if (v37)
					v38 = (_QWORD*)sub_1404DDB40((__int64)v37, v32);
				else
					v38 = 0i64;
				v39 = 0i64;
				v56 = 0i64;
				v57 = 0i64;
				v58 = 0i64;
				v40 = 0i64;
				do
					v21 = aXp_1[++v40] == 0;
				while (!v21);
				v41 = (2 * v40) >> 1;
				if ((unsigned __int64)(v41 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v39 = sub_14018B280(2 * (v41 + 1), 0);
					v56 = v39;
					v57 = v39;
					v58 = (__int64)v39 + 2 * v41 + 2;
				}
				sub_1407DB590(v39, (int*)L"xp", 2 * v41);
				v42 = (int*)((char*)v39 + 2 * v41);
				v57 = v42;
				if (v42)
					*(_WORD*)v42 = 0;
				sub_1400B7480((__int64)&v65, v38);
				(*(void(__fastcall**)(_QWORD*, char*))(*v38 + 72i64))(v38, v55);
				if (v56)
					sub_14018B900((__int64)v56, 0);
				v43 = a2[1];
				v44 = *(_QWORD*)(qword_140C65898 + 29504);
				v52 = 3;
				v53 = v43;
				v54 = 0;
				sub_1404283D0(v44, &v52);
				v45 = sub_1400B7660(&v65);
				LODWORD(v50) = a2[1];
				LODWORD(v49) = 0;
				LODWORD(v48) = a2[4];
				Apollo_LUAEvent(
					*(_QWORD*)(v25 + 29504),
					"ExperienceGained",
					"iUSii",
					16i64,
					v48,
					*(_QWORD*)(v45 + 8),
					v49,
					v50);
				if (qword_140C63840)
				{
					v46 = (_DWORD*)qword_140C63840(off_140A6B208, 262091i64, qword_140C63858);
				}
				else
				{
					if (dword_140C64AF4 || (int)sub_140211020() < 0)
						goto LABEL_108;
					v46 = (_DWORD*)(*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64188 + 24i64))(
						qword_140C64188,
						262091i64);
				}
				if (v46)
				{
					if ((v46[6] & *(_DWORD*)(qword_140C63628 + 1524)) == 0
						|| *(_DWORD*)(qword_140C635F0 + 5784) != 1
						|| (v3 = v46[2]) == 0)
					{
						v3 = v46[1];
					}
				}
			LABEL_108:
				sub_140051B70(0, v3);
				if (v32)
					sub_14018B900((__int64)v32, 0);
				if ((_QWORD)v69)
					sub_14018B900(v69, 0);
				sub_1400B7390(&v65);
			LABEL_113:
				if ((_QWORD)v63)
					sub_14018B900(v63, 0);
				sub_1400B7390(&v59);
				break;
			}
		}
	}
	return 0i64;
}
// 1403C8C36: conditional instruction was optimized away because r14d.4 is in (9345..9348|==A17A|==CE94|==3FFCB)
// 1403C8F22: variable 'v48' is possibly undefined
// 1403C8F22: variable 'v49' is possibly undefined
// 1403C8F22: variable 'v50' is possibly undefined
// 140A6B208: using guessed type wchar_t *off_140A6B208[2];
// 140AEBDD4: using guessed type wchar_t aD_24[3];
// 140AEC544: using guessed type wchar_t aXp_1[3];
// 140AEC664: using guessed type wchar_t aXp_0[3];
// 140AEC804: using guessed type wchar_t aD_25[3];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64188: using guessed type __int64 qword_140C64188;
// 140C64AF4: using guessed type int dword_140C64AF4;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403C8760: using guessed type char var_1F8[8];
// 1403C8760: using guessed type char var_220[8];
// 1403C8760: using guessed type char var_118[8];

