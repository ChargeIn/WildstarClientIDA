#include "../winhttp.h"

//----- (00000001405E4CD0) ----------------------------------------------------
__int64 __fastcall sub_1405E4CD0(__int64 a1, unsigned int* a2)
{
	unsigned int v4; // ebp
	int* v5; // rax
	int* v6; // rbx
	__int64 v7; // r10
	__int64 v8; // r14
	__int64 v9; // r8
	__int64 v10; // rdx
	_DWORD* v11; // rcx
	__int64 v12; // r9
	__int64 v13; // r11
	__int64 v14; // rax
	unsigned int v15; // edx
	__int64 v16; // rcx
	__int64* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	unsigned int v20; // ecx
	unsigned int v21; // edx
	unsigned int v22; // r8d
	unsigned int* v23; // rax
	unsigned int v24; // edi
	unsigned int v25; // eax
	__int64 v26; // rax
	__int64 v27; // rbx
	__int64 v28; // rcx
	unsigned __int64 v29; // r8
	__int64* v30; // rcx
	unsigned __int64 v31; // rdx
	_DWORD* v32; // rax
	int v33; // edx
	int* v34; // rax
	unsigned int v35; // r12d
	unsigned int v36; // ebx
	__int64 v37; // rax
	__int64 v38; // rbx
	int* v39; // rax
	int v40; // edx
	int v41; // edi
	int* v42; // rax
	__int64 v43; // rbx
	int* v44; // rbp
	int* v45; // rax
	int* v46; // r15
	int* v47; // rdx
	__int64 v48; // rcx
	int v49; // eax
	_QWORD* v50; // r14
	unsigned __int64 v51; // rbx
	unsigned __int64 v52; // r15
	unsigned __int64 v53; // rbp
	unsigned __int64 v54; // rdi
	unsigned int v55; // ebx
	unsigned int v56; // ebp
	__int64 v57; // rax
	int* v58; // rax
	__int64 v59; // rdx
	int v60; // xmm0_4
	int v61; // xmm1_4
	unsigned int v62; // eax
	int v63; // eax
	__int64 v64; // rcx
	int v66[4]; // [rsp+20h] [rbp-48h] BYREF
	int* v67; // [rsp+70h] [rbp+8h] BYREF
	__int64 v68; // [rsp+78h] [rbp+10h] BYREF
	__int64 v69; // [rsp+80h] [rbp+18h] BYREF

	sub_1405E4AA0((_QWORD*)a1);
	sub_14004EED0((__int64*)a1, *a2);
	v4 = 0;
	if (*a2)
	{
		while (1)
		{
			v5 = sub_14018B280(136i64, 0);
			v6 = v5;
			if (v5)
			{
				*((_QWORD*)v5 + 9) = 0i64;
				*((_QWORD*)v5 + 8) = 0i64;
				sub_1407E4830(v5, 0i64, 0x58ui64);
				*((_QWORD*)v6 + 12) = 0i64;
				*((_QWORD*)v6 + 11) = 0i64;
				*((_QWORD*)v6 + 14) = 0i64;
				*((_QWORD*)v6 + 13) = 0i64;
				*((_QWORD*)v6 + 16) = 0i64;
				*((_QWORD*)v6 + 15) = 0i64;
			}
			else
			{
				v6 = 0i64;
			}
			v7 = qword_140C65B90;
			v8 = 8i64 * v4;
			v9 = 60i64 * v4;
			*(_QWORD*)(v8 + *(_QWORD*)a1) = v6;
			*(_DWORD*)(*(_QWORD*)(v8 + *(_QWORD*)a1) + 8i64) = *(_DWORD*)(v9 + *((_QWORD*)a2 + 1));
			*(_DWORD*)(*(_QWORD*)(v8 + *(_QWORD*)a1) + 80i64) = *(_DWORD*)(v9 + *((_QWORD*)a2 + 1) + 4);
			*(_DWORD*)(*(_QWORD*)(v8 + *(_QWORD*)a1) + 12i64) = *(_DWORD*)(v9 + *((_QWORD*)a2 + 1) + 8) & 1;
			*(_DWORD*)(*(_QWORD*)(v8 + *(_QWORD*)a1) + 16i64) = *(_DWORD*)(v9 + *((_QWORD*)a2 + 1) + 12);
			*(_DWORD*)(*(_QWORD*)(v8 + *(_QWORD*)a1) + 20i64) = *(_DWORD*)(v9 + *((_QWORD*)a2 + 1) + 16);
			v10 = *((_QWORD*)a2 + 1);
			v11 = *(_DWORD**)(v8 + *(_QWORD*)a1);
			v11[6] = *(_DWORD*)(v9 + v10 + 20);
			v11[7] = *(_DWORD*)(v9 + v10 + 24);
			v11[8] = *(_DWORD*)(v9 + v10 + 28);
			v11[9] = *(_DWORD*)(v9 + v10 + 32);
			v11[10] = *(_DWORD*)(v9 + v10 + 36);
			v11[11] = *(_DWORD*)(v9 + v10 + 40);
			v11[12] = *(_DWORD*)(v9 + v10 + 44);
			v11[13] = *(_DWORD*)(v9 + v10 + 48);
			v11[14] = *(_DWORD*)(v9 + v10 + 52);
			v11[15] = *(_DWORD*)(v9 + v10 + 56);
			v12 = *(_QWORD*)(v7 + 16);
			v13 = *((_QWORD*)a2 + 1);
			v14 = *(_QWORD*)(v12 + 8);
			v15 = *(_DWORD*)(v9 + v13);
			v16 = v12;
			while (v14)
			{
				if (*(_DWORD*)(v14 + 32) < v15)
				{
					v14 = *(_QWORD*)(v14 + 24);
				}
				else
				{
					v16 = v14;
					v14 = *(_QWORD*)(v14 + 16);
				}
			}
			if (v16 == v12 || v15 < *(_DWORD*)(v16 + 32))
			{
				v69 = *(_QWORD*)(v7 + 16);
				v17 = &v69;
			}
			else
			{
				v68 = v16;
				v17 = &v68;
			}
			v18 = *v17;
			if (v18 != v12)
			{
				v19 = *(_QWORD*)(v18 + 40);
				if (v19)
					break;
			}
		LABEL_46:
			if (++v4 >= *a2)
				goto LABEL_47;
		}
		v20 = *(_DWORD*)(v19 + 12);
		v21 = 0;
		if (v20)
		{
			v22 = *(_DWORD*)(v9 + v13 + 4);
			v23 = (unsigned int*)(v19 + 32);
			while (v22 >= *v23)
			{
				++v21;
				v23 += 12;
				if (v21 >= v20)
					goto LABEL_20;
			}
		}
		else
		{
		LABEL_20:
			v21 = v20;
		}
		v24 = 0;
		*(_DWORD*)(*(_QWORD*)(v8 + *(_QWORD*)a1) + 84i64) = v21;
		while (1)
		{
			if (qword_140C63838)
			{
				v25 = qword_140C63838(off_140A6DD58, qword_140C63858);
			}
			else
			{
				if (dword_140C654F8 || (int)sub_1402459A0() < 0)
					goto LABEL_46;
				v25 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63868 + 40i64))(qword_140C63868);
			}
			if (v24 >= v25)
				goto LABEL_46;
			if (qword_140C63848)
			{
				v26 = qword_140C63848(off_140A6DD58, v24, qword_140C63858);
			}
			else
			{
				if (dword_140C654F8)
				{
					v27 = 0i64;
					goto LABEL_36;
				}
				if ((int)sub_1402459A0() < 0)
				{
					v27 = 0i64;
					goto LABEL_36;
				}
				v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 32i64))(qword_140C63868, v24);
			}
			v27 = v26;
		LABEL_36:
			v28 = *(_QWORD*)(v8 + *(_QWORD*)a1);
			if (*(_DWORD*)(v27 + 8) == *(_DWORD*)(v28 + 8))
			{
				v29 = *(_QWORD*)(v28 + 112);
				v30 = (__int64*)(v28 + 104);
				v31 = 0i64;
				if (v29)
				{
					v32 = (_DWORD*)*v30;
					while (*v32 != *(_DWORD*)v27)
					{
						++v31;
						++v32;
						if (v31 >= v29)
							goto LABEL_41;
					}
				}
				else
				{
				LABEL_41:
					sub_140003460(v30, (int*)v27);
				}
				if ((*(_BYTE*)(v27 + 32) & 1) != 0
					&& *(_DWORD*)(v27 + 28) <= *(_DWORD*)(*(_QWORD*)(v8 + *(_QWORD*)a1) + 84i64))
				{
					v33 = *(_DWORD*)(v27 + 8);
					LODWORD(v67) = *(_DWORD*)v27;
					v34 = sub_1405E6000((__int64*)a1, v33, 1);
					sub_140003460((__int64*)v34 + 8, (int*)&v67);
				}
			}
			++v24;
		}
	}
LABEL_47:
	v35 = 0;
	if (a2[4])
	{
		while (1)
		{
			v36 = *(_DWORD*)(*((_QWORD*)a2 + 3) + 4i64 * v35);
			if (qword_140C63840)
				break;
			if (!dword_140C654F8 && (int)sub_1402459A0() >= 0)
			{
				v37 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 24i64))(qword_140C63868, v36);
			LABEL_53:
				v38 = v37;
				if (v37)
				{
					v39 = sub_1405E6000((__int64*)a1, *(_DWORD*)(v37 + 8), 1);
					v40 = *(_DWORD*)(v38 + 8);
					v41 = *(_DWORD*)(*((_QWORD*)a2 + 3) + 4i64 * v35);
					v67 = v39;
					v42 = sub_1405E6000((__int64*)a1, v40, 1);
					v43 = *((_QWORD*)v42 + 9);
					v44 = v42;
					v45 = sub_14018DB00(*((_QWORD*)v42 + 8), v43 + 1, 4i64);
					v46 = v45;
					v45[v43] = v41;
					v47 = (int*)*((_QWORD*)v44 + 8);
					if (v47 != v45)
					{
						sub_1407DB590(v45, v47, 4i64 * *((_QWORD*)v44 + 9));
						v48 = *((_QWORD*)v44 + 8);
						if (v48)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v48 - 16) + 8i64))(v48 - 16);
						*((_QWORD*)v44 + 8) = v46;
					}
					*((_QWORD*)v44 + 9) = v43 + 1;
					v49 = *(_DWORD*)(*((_QWORD*)a2 + 7) + 4 * ((unsigned __int64)v35 >> 5));
					if (_bittest(&v49, v35 & 0x1F))
					{
						v50 = v67 + 30;
						v51 = *((_QWORD*)v67 + 16);
						v52 = *((_QWORD*)v67 + 9) - 1i64;
						v53 = v52 >> 3;
						if (v52 >> 3 >= v51)
						{
							v54 = v53 + 1;
							if (v53 + 1 > v51)
							{
								sub_140033620((__int64)(v67 + 30), v53 + 1);
								for (; v51 < v54; *(_BYTE*)(v51 + *v50 - 1) = 0)
									++v51;
							}
						}
						*(_BYTE*)(*v50 + v53) |= 1 << (v52 & 7);
					}
				}
			}
			if (++v35 >= a2[4])
				goto LABEL_65;
		}
		v37 = qword_140C63840(off_140A6DD58, v36, qword_140C63858);
		goto LABEL_53;
	}
LABEL_65:
	v55 = 0;
	if (a2[8])
	{
		while (1)
		{
			v56 = *(_DWORD*)(*((_QWORD*)a2 + 5) + 12i64 * v55);
			if (qword_140C63840)
				break;
			if (!dword_140C654F8 && (int)sub_1402459A0() >= 0)
			{
				v57 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63868 + 24i64))(qword_140C63868, v56);
			LABEL_71:
				if (v57)
				{
					v58 = sub_1405E6000((__int64*)a1, *(_DWORD*)(v57 + 8), 1);
					v59 = *((_QWORD*)a2 + 5);
					v60 = *(_DWORD*)(v59 + 12i64 * v55 + 4);
					v61 = *(_DWORD*)(v59 + 12i64 * v55 + 8);
					v66[0] = *(_DWORD*)(v59 + 12i64 * v55);
					v66[1] = v60;
					v66[2] = v61;
					sub_1405E7080((__int64*)v58 + 11, v66);
				}
			}
			if (++v55 >= a2[8])
				goto LABEL_74;
		}
		v57 = qword_140C63840(off_140A6DD58, v56, qword_140C63858);
		goto LABEL_71;
	}
LABEL_74:
	v62 = a2[16];
	if (v62)
	{
		*(_DWORD*)(a1 + 1180) = 1;
		v63 = dword_140C636A8 + 1000 * v62;
	}
	else
	{
		v63 = dword_140C636A8;
		*(_DWORD*)(a1 + 1180) = 0;
	}
	v64 = qword_140C65898;
	*(_DWORD*)(a1 + 1184) = v63;
	sub_1400EA3E0(*(_QWORD*)(v64 + 29504), "ProfessionsLoaded", byte_1409D135F);
	return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ProfessionUpdated", &unk_1409D135E);
}
// 1409D135F: using guessed type _BYTE byte_1409D135F[12];
// 140A6DD58: using guessed type wchar_t *off_140A6DD58[2];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63868: using guessed type __int64 qword_140C63868;
// 140C654F8: using guessed type int dword_140C654F8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B90: using guessed type __int64 qword_140C65B90;

