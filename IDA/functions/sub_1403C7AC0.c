#include "../winhttp.h"

//----- (00000001403C7AC0) ----------------------------------------------------
void __fastcall sub_1403C7AC0(__int64 a1, unsigned int* a2)
{
	__int64 v3; // r12
	int v4; // edx
	int v5; // ecx
	_QWORD* v6; // rax
	int* v7; // rax
	unsigned int i; // ebx
	unsigned int v9; // eax
	__int64 v10; // rax
	_DWORD* v11; // r8
	int v12; // eax
	__int64 v13; // rdx
	int v14; // eax
	int* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rcx
	int* v18; // rax
	__int64 v19; // rcx
	int* v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rbx
	unsigned int v23; // edx
	int* v24; // rax
	int v25; // edi
	int* v26; // rax
	__int64 v27; // rcx
	int v28; // r13d
	unsigned __int64 j; // rbx
	unsigned __int64 v30; // rax
	int* v31; // rax
	__int64 v32; // rcx
	int* v33; // rax
	int* v34; // rdx
	__int64 v35; // rax
	int* v36; // r15
	int* v37; // rdi
	__int64 v38; // rax
	__int64 v39; // rbx
	unsigned __int64 v40; // rbx
	int* v41; // rax
	_QWORD* v42; // r12
	int* v43; // rdi
	__int64 v44; // rax
	bool v45; // zf
	__int64 v46; // r14
	int* v47; // rax
	__int64 v48; // rax
	int* v49; // rax
	int* v50; // rdx
	__int64 v51; // rax
	int** v52; // rax
	int* v53; // rsi
	int* v54; // rdi
	__int64 v55; // rax
	__int64 v56; // rbx
	unsigned __int64 v57; // rbx
	int* v58; // rax
	_QWORD* v59; // r15
	int* v60; // rdi
	__int64 v61; // rax
	__int64 v62; // r14
	int* v63; // rax
	__int64 v64; // rax
	__int64 v65; // rbx
	unsigned int v66; // edi
	__int64 v67; // rax
	__int64 v68; // r9
	__int64 v69; // rcx
	int v70; // ecx
	bool v71; // cf
	__int64 v72; // rax
	int* v73; // rax
	int* v74; // rdi
	int* v75; // rax
	__int64 v76; // rcx
	__int64 v77; // rbx
	__int64 v78; // rax
	__int64 v79; // [rsp+28h] [rbp-E0h]
	__int128 v80; // [rsp+68h] [rbp-A0h] BYREF
	int* v81; // [rsp+78h] [rbp-90h]
	__int64 v82; // [rsp+80h] [rbp-88h]
	__int64(__fastcall * *v83)(); // [rsp+88h] [rbp-80h] BYREF
	char v84[8]; // [rsp+90h] [rbp-78h] BYREF
	_WORD* v85; // [rsp+98h] [rbp-70h]
	_WORD* v86; // [rsp+A0h] [rbp-68h]
	__int128 v87; // [rsp+148h] [rbp+40h]
	int* v88; // [rsp+158h] [rbp+50h]
	__int64(__fastcall * *v89)(); // [rsp+168h] [rbp+60h] BYREF
	char v90[8]; // [rsp+170h] [rbp+68h] BYREF
	_WORD* v91; // [rsp+178h] [rbp+70h]
	_WORD* v92; // [rsp+180h] [rbp+78h]
	__int128 v93; // [rsp+228h] [rbp+120h]
	int* v94; // [rsp+238h] [rbp+130h]
	__int64 v96; // [rsp+2A0h] [rbp+198h] BYREF
	int* v97; // [rsp+2A8h] [rbp+1A0h] BYREF
	int* v98; // [rsp+2B0h] [rbp+1A8h] BYREF

	v3 = a1;
	if (*a2 - 23 <= 5)
	{
		sub_140437A10((_QWORD*)qword_140C658D8, 0x84u, 0, 0i64, 0, 0, 1);
		v4 = dword_140DC2290;
		if ((dword_140DC2290 & 1) == 0)
		{
			v4 = dword_140DC2290 | 1;
			v5 = 3;
			v6 = &unk_140DC22A8;
			dword_140DC2290 |= 1u;
			do
			{
				--v5;
				*(v6 - 1) = 0i64;
				*v6 = 0i64;
				v6 += 2;
			} while (v5 >= 0);
		}
		if ((v4 & 2) == 0)
		{
			dword_140DC2290 = v4 | 2;
			v7 = sub_14018B280(40i64, 0);
			qword_140DC22F0 = 0i64;
			qword_140DC22E8 = (__int64)v7;
			*(_BYTE*)v7 = 0;
			*(_QWORD*)(qword_140DC22E8 + 8) = 0i64;
			*(_QWORD*)(qword_140DC22E8 + 16) = qword_140DC22E8;
			*(_QWORD*)(qword_140DC22E8 + 24) = qword_140DC22E8;
			sub_1407DD89C(sub_14094FCD0);
		}
		if (!dword_140C8A6A0)
		{
			for (i = 0; ; ++i)
			{
				if (qword_140C63838)
				{
					v9 = qword_140C63838(off_140A69AA0, qword_140C63858);
				}
				else
				{
					if (dword_140C64B6C || (int)sub_1401F4900() < 0)
					{
					LABEL_19:
						v15 = (int*)qword_140DC22E8;
						v16 = *(_QWORD*)(qword_140DC22E8 + 8);
						while (v16)
						{
							if (*(int*)(v16 + 32) < 26)
							{
								v16 = *(_QWORD*)(v16 + 24);
							}
							else
							{
								v15 = (int*)v16;
								v16 = *(_QWORD*)(v16 + 16);
							}
						}
						if (v15 == (int*)qword_140DC22E8 || v15[8] > 26)
						{
							v96 = 26i64;
							v97 = v15;
							sub_1403D3E70((__int64)&unk_140DC22E0, &v98, (__int64*)&v97, &v96);
							v15 = v98;
						}
						v15[9] = 4;
						v17 = *(_QWORD*)(qword_140DC22E8 + 8);
						v18 = (int*)qword_140DC22E8;
						while (v17)
						{
							if (*(int*)(v17 + 32) < 27)
							{
								v17 = *(_QWORD*)(v17 + 24);
							}
							else
							{
								v18 = (int*)v17;
								v17 = *(_QWORD*)(v17 + 16);
							}
						}
						if (v18 == (int*)qword_140DC22E8 || v18[8] > 27)
						{
							v96 = 27i64;
							v97 = v18;
							sub_1403D3E70((__int64)&unk_140DC22E0, &v98, (__int64*)&v97, &v96);
							v18 = v98;
						}
						v18[9] = 5;
						v19 = *(_QWORD*)(qword_140DC22E8 + 8);
						v20 = (int*)qword_140DC22E8;
						while (v19)
						{
							if (*(int*)(v19 + 32) < 28)
							{
								v19 = *(_QWORD*)(v19 + 24);
							}
							else
							{
								v20 = (int*)v19;
								v19 = *(_QWORD*)(v19 + 16);
							}
						}
						if (v20 == (int*)qword_140DC22E8 || v20[8] > 28)
						{
							v96 = 28i64;
							v97 = v20;
							sub_1403D3E70((__int64)&unk_140DC22E0, &v98, (__int64*)&v97, &v96);
							v20 = v98;
						}
						v20[9] = 6;
						break;
					}
					v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64A90 + 40i64))(qword_140C64A90);
				}
				if (i >= v9)
					goto LABEL_19;
				v10 = sub_1401F4BC0(i);
				v11 = (_DWORD*)v10;
				if (v10)
				{
					v12 = *(_DWORD*)(v10 + 4);
					if ((unsigned int)(v12 - 4) <= 3)
					{
						v13 = (unsigned int)(v12 - 4);
						v14 = v11[2];
						dword_140C8A6A0 = 1;
						*((_DWORD*)&unk_140DC22A0 + 4 * v13) = v14;
						*((_DWORD*)&unk_140DC22A0 + 4 * (unsigned int)(v11[1] - 4) + 1) = v11[3];
						*((_DWORD*)&unk_140DC22A0 + 4 * (unsigned int)(v11[1] - 4) + 2) = v11[4];
						*((_DWORD*)&unk_140DC22A0 + 4 * (unsigned int)(v11[1] - 4) + 3) = v11[5];
					}
				}
			}
		}
		v22 = sub_1401F4B60(a2[4]);
		if (v22)
		{
			v23 = *a2;
			v97 = 0i64;
			if (v23 != 23)
			{
				if (v23 == 24)
				{
					LODWORD(v96) = 24;
					v31 = sub_1403D2710(v21, &v96);
					v28 = dword_140DC22D4;
					v32 = *v31;
					v97 = *(int**)(v22 + 16);
					v25 = *((_DWORD*)&unk_140DC22A0 + 4 * v32 - 16);
					goto LABEL_53;
				}
				if (v23 != 25)
				{
					if (v23 - 26 > 2)
					{
					LABEL_119:
						v65 = 0i64;
						while (1)
						{
							v66 = *((_DWORD*)&v97 + v65);
							if (v66)
							{
								if (qword_140C63840)
								{
									v67 = qword_140C63840(off_140A6DFF8, v66, qword_140C63858);
									goto LABEL_126;
								}
								if (!dword_140C64C04 && (int)sub_140248CA0() >= 0)
								{
									v67 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(
										qword_140C63B40,
										v66);
								LABEL_126:
									if (v67)
									{
										v69 = *(_QWORD*)(qword_140C65898 + 25744);
										v80 = 0i64;
										sub_1405787D0(v69, 0, *(_DWORD*)(v69 + 8), v68, v67, 0i64, 0i64, 0, 0i64, &v80, 0);
									}
								}
							}
							if ((unsigned __int64)++v65 >= 2)
								return;
						}
					}
					v24 = sub_1403D2710(v21, a2);
					v25 = *((_DWORD*)&unk_140DC22A0 + 4 * *v24 - 16);
					v26 = sub_1403D2710(2 * (*v24 - 4i64), a2);
					v27 = 2 * (*v26 - 4i64);
					v28 = *((_DWORD*)&unk_140DC22A0 + 4 * *v26 - 15);
					for (j = 0i64; j < 2; *((_DWORD*)&v96 + j + 1) = *((_DWORD*)&unk_140DC22A0 + v30 - 14))
					{
						v27 = *sub_1403D2710(v27, a2);
						v30 = j + 4 * v27;
						++j;
					}
				LABEL_53:
					if (v25)
					{
						sub_1400B6F30((__int64)&v83);
						v83 = off_140B69230;
						v88 = 0i64;
						v87 = 0i64;
						v33 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v87 = v33;
						*((_QWORD*)&v87 + 1) = v33;
						v88 = v33 + 4;
						if (v33)
							*(_WORD*)v33 = 0;
						v34 = (int*)sub_14034BDD0((__int64)(v33 + 4), v25);
						if (v34)
						{
							v35 = 0i64;
							if (*(_WORD*)v34)
							{
								do
									++v35;
								while (*((_WORD*)v34 + v35));
							}
							sub_14001C480((__int64)v84, v34, (int*)((char*)v34 + 2 * v35));
						}
						else if (v85 != v86)
						{
							*v85 = 0;
							v86 = v85;
						}
						v36 = 0i64;
						v37 = (int*)*sub_14034C700(&v96, (__int64)L"%d", *((_QWORD*)a2 + 1));
						v38 = 0i64;
						if (*(_WORD*)v37)
						{
							do
								++v38;
							while (*((_WORD*)v37 + v38));
						}
						v39 = (2 * v38) >> 1;
						if ((unsigned __int64)(v39 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							v36 = sub_14018B280(2 * (v39 + 1), 0);
						v40 = 2 * v39;
						sub_1407DB590(v36, v37, v40);
						if ((int*)((char*)v36 + v40))
							*(_WORD*)((char*)v36 + v40) = 0;
						if (v96)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v96 - 16) + 8i64))(v96 - 16);
						v41 = sub_14018B280(96i64, 0);
						if (v41)
							v42 = (_QWORD*)sub_1404DDB40((__int64)v41, v36);
						else
							v42 = 0i64;
						v43 = 0i64;
						*((_QWORD*)&v80 + 1) = 0i64;
						v81 = 0i64;
						v82 = 0i64;
						v44 = 0i64;
						do
							v45 = aCombatbuff_0[++v44] == 0;
						while (!v45);
						v46 = (2 * v44) >> 1;
						if ((unsigned __int64)(v46 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v43 = sub_14018B280(2 * (v46 + 1), 0);
							*((_QWORD*)&v80 + 1) = v43;
							v81 = v43;
							v82 = (__int64)v43 + 2 * v46 + 2;
						}
						sub_1407DB590(v43, (int*)L"combatbuff", 2 * v46);
						v47 = (int*)((char*)v43 + 2 * v46);
						v81 = v47;
						if (v47)
							*(_WORD*)v47 = 0;
						sub_1400B7480((__int64)&v83, v42);
						(*(void(__fastcall**)(_QWORD*, __int128*))(*v42 + 72i64))(v42, &v80);
						if (*((_QWORD*)&v80 + 1))
							sub_14018B900(*((__int64*)&v80 + 1), 0);
						v48 = sub_1400B7660(&v83);
						v3 = a1;
						LODWORD(v79) = a2[2];
						sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "CombatMomentum", "iiS", *a2, v79, *(_QWORD*)(v48 + 8));
						if (v36)
							sub_14018B900((__int64)v36, 0);
						if ((_QWORD)v87)
							sub_14018B900(v87, 0);
						sub_1400B7390(&v83);
					}
					if (v28)
					{
						sub_1400B6F30((__int64)&v89);
						v89 = off_140B69230;
						v94 = 0i64;
						v93 = 0i64;
						v49 = sub_14018B280(16i64, 0);
						*(_QWORD*)&v93 = v49;
						*((_QWORD*)&v93 + 1) = v49;
						v94 = v49 + 4;
						if (v49)
							*(_WORD*)v49 = 0;
						v50 = (int*)sub_14034BDD0((__int64)(v49 + 4), v28);
						if (v50)
						{
							v51 = 0i64;
							if (*(_WORD*)v50)
							{
								do
									++v51;
								while (*((_WORD*)v50 + v51));
							}
							sub_14001C480((__int64)v90, v50, (int*)((char*)v50 + 2 * v51));
						}
						else if (v91 != v92)
						{
							*v91 = 0;
							v92 = v91;
						}
						v52 = (int**)sub_14034C700(&v96, (__int64)L"%d", *((_QWORD*)a2 + 1));
						v53 = 0i64;
						v54 = *v52;
						v55 = 0i64;
						if (*(_WORD*)v54)
						{
							do
								++v55;
							while (*((_WORD*)v54 + v55));
						}
						v56 = (2 * v55) >> 1;
						if ((unsigned __int64)(v56 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
							v53 = sub_14018B280(2 * (v56 + 1), 0);
						v57 = 2 * v56;
						sub_1407DB590(v53, v54, v57);
						if ((int*)((char*)v53 + v57))
							*(_WORD*)((char*)v53 + v57) = 0;
						if (v96)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v96 - 16) + 8i64))(v96 - 16);
						v58 = sub_14018B280(96i64, 0);
						if (v58)
							v59 = (_QWORD*)sub_1404DDB40((__int64)v58, v53);
						else
							v59 = 0i64;
						v60 = 0i64;
						*((_QWORD*)&v80 + 1) = 0i64;
						v81 = 0i64;
						v82 = 0i64;
						v61 = 0i64;
						do
							v45 = aCombatbuff_1[++v61] == 0;
						while (!v45);
						v62 = (2 * v61) >> 1;
						if ((unsigned __int64)(v62 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v60 = sub_14018B280(2 * (v62 + 1), 0);
							*((_QWORD*)&v80 + 1) = v60;
							v81 = v60;
							v82 = (__int64)v60 + 2 * v62 + 2;
						}
						sub_1407DB590(v60, (int*)L"combatbuff", 2 * v62);
						v63 = (int*)((char*)v60 + 2 * v62);
						v81 = v63;
						if (v63)
							*(_WORD*)v63 = 0;
						sub_1400B7480((__int64)&v89, v59);
						(*(void(__fastcall**)(_QWORD*, __int128*))(*v59 + 72i64))(v59, &v80);
						if (*((_QWORD*)&v80 + 1))
							sub_14018B900(*((__int64*)&v80 + 1), 0);
						v64 = sub_1400B7660(&v89);
						sub_1400EA3E0(*(_QWORD*)(v3 + 29504), "CombatLogString", "S", *(_QWORD*)(v64 + 8));
						if (v53)
							sub_14018B900((__int64)v53, 0);
						if ((_QWORD)v93)
							sub_14018B900(v93, 0);
						sub_1400B7390(&v89);
					}
					goto LABEL_119;
				}
			}
			*((_QWORD*)&v80 + 1) = *(unsigned int*)(*(_QWORD*)(v3 + 120) + 8i64) | 0x1400000000i64;
			v70 = -1;
			*(_QWORD*)&v80 = off_140B6F700;
			v71 = a2[2] != -1;
			LODWORD(v81) = v23;
			if (v71)
				v70 = a2[2];
			HIDWORD(v81) = v70;
			if (sub_14060AF20((__int64)&v80))
			{
				v72 = sub_1403D90D0(qword_140C65898, SDWORD2(v80));
				if (v72)
				{
					if (sub_14047DCA0(v72))
						sub_14060AFE0((int*)&v80, SDWORD2(v80));
				}
			}
			v73 = sub_14018B280(24i64, 0);
			v74 = v73;
			if (v73)
			{
				*(_QWORD*)v73 = *(_QWORD*)a2;
				*((_QWORD*)v73 + 1) = *((_QWORD*)a2 + 1);
				*((_QWORD*)v73 + 2) = *((_QWORD*)a2 + 2);
			}
			else
			{
				v74 = 0i64;
			}
			v75 = sub_14018B280(56i64, 0);
			v77 = (__int64)v75;
			if (v75)
			{
				*(_QWORD*)v75 = 0i64;
				*((_QWORD*)v75 + 2) = 0i64;
				v75[6] = 0;
				v75[10] = 0;
				*((_QWORD*)v75 + 4) = sub_1403C76D0;
				*((_QWORD*)v75 + 6) = v74;
				v78 = sub_140225140(3u);
				if (v78)
					*(_QWORD*)(v77 + 16) = v78;
			}
			else
			{
				v77 = 0i64;
			}
			sub_1404CFA80(v76, v77);
		}
	}
}
// 1403C7E49: variable 'v21' is possibly undefined
// 1403C812D: variable 'v79' is possibly undefined
// 1403C847C: variable 'v68' is possibly undefined
// 1403C857C: variable 'v76' is possibly undefined
// 140A69AA0: using guessed type wchar_t *off_140A69AA0[2];
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140AEB814: using guessed type wchar_t aD_22[3];
// 140AEBEF4: using guessed type wchar_t aD_23[3];
// 140AF6290: using guessed type wchar_t aCombatbuff_1[11];
// 140AF62A8: using guessed type wchar_t aCombatbuff_0[11];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6F700: using guessed type __int64 (__fastcall *off_140B6F700[141])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64A90: using guessed type __int64 qword_140C64A90;
// 140C64B6C: using guessed type int dword_140C64B6C;
// 140C64C04: using guessed type int dword_140C64C04;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C8A6A0: using guessed type int dword_140C8A6A0;
// 140DC2290: using guessed type int dword_140DC2290;
// 140DC22D4: using guessed type int dword_140DC22D4;
// 140DC22E8: using guessed type __int64 qword_140DC22E8;
// 140DC22F0: using guessed type __int64 qword_140DC22F0;
// 1403C7AC0: using guessed type char var_1F8[8];
// 1403C7AC0: using guessed type char var_118[8];

