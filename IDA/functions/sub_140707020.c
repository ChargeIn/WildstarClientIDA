#include "../winhttp.h"

//----- (0000000140707020) ----------------------------------------------------
__int64 __fastcall sub_140707020(_QWORD* a1)
{
	unsigned int v2; // esi
	int v3; // edx
	_QWORD* v4; // r11
	_DWORD* v5; // rax
	_QWORD* v6; // r8
	_DWORD* v7; // rcx
	unsigned __int64 v8; // rdx
	int v9; // eax
	_QWORD* v10; // rax
	__int64 v11; // r11
	__int64 v12; // rcx
	unsigned __int64 v13; // rbx
	int v14; // eax
	_DWORD* v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // r11
	__int64 v18; // rcx
	_QWORD* v19; // rdi
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	_QWORD* v22; // rcx
	__int64 v23; // rdx
	__int64(__fastcall * **v24)(); // rax
	int v25; // ecx
	double v26; // xmm6_8
	double v27; // xmm0_8
	float v28; // xmm9_4
	_QWORD* v29; // rax
	__int64 v30; // r11
	__int64 v31; // rcx
	_QWORD* v32; // rdi
	unsigned __int64* v33; // rdx
	__int64(__fastcall * **v34)(); // rax
	__int64 v35; // rcx
	float v36; // xmm8_4
	__int64 v37; // rax
	__int64 v38; // rdx
	__int64 v39; // r15
	_QWORD* v40; // rax
	_QWORD* v41; // rbx
	float v42; // xmm6_4
	unsigned int** v43; // rsi
	unsigned int** v44; // rdi
	__int64 v45; // rcx
	int v46; // ecx
	unsigned int v47; // eax
	__int64 v48; // rax
	__int64 v49; // rcx
	float v50; // xmm2_4
	float v51; // xmm0_4
	unsigned int v52; // eax
	unsigned int v53; // eax
	float v54; // xmm0_4
	float i; // xmm1_4
	float v56; // xmm0_4
	__int64 v57; // rcx
	unsigned __int64 v58; // rax
	__int64 v59; // rbx
	__int64 v60; // rax
	_QWORD* v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rdx
	__int64(__fastcall * *v65)(); // [rsp+28h] [rbp-69h] BYREF
	int v66; // [rsp+30h] [rbp-61h]
	_QWORD* v67; // [rsp+38h] [rbp-59h]
	int v68; // [rsp+40h] [rbp-51h]
	__int64(__fastcall * *v69)(); // [rsp+48h] [rbp-49h] BYREF
	int v70; // [rsp+50h] [rbp-41h]
	_QWORD* v71; // [rsp+58h] [rbp-39h]
	int v72; // [rsp+60h] [rbp-31h]
	__int64 v73; // [rsp+68h] [rbp-29h] BYREF
	__int64 v74; // [rsp+70h] [rbp-21h]
	__int64(__fastcall * *v75)(); // [rsp+F8h] [rbp+67h] BYREF

	v71 = a1;
	v72 = 1;
	v2 = sub_140056D60(a1, 1u);
	v69 = off_140B569F0;
	v3 = -2;
	v4 = v71;
	v70 = -2;
	v5 = (_DWORD*)(v71[3] + 16i64);
	if ((unsigned __int64)v5 < v71[2] && v5 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
	{
		sub_1400579E0((__int64)a1, 4294967294i64, -2);
		v6 = v71;
		v7 = dword_140A12138;
		v8 = v71[2];
		if (v71[3] + 16i64 < v8)
			v7 = (_DWORD*)(v71[3] + 16i64);
		*(_QWORD*)v8 = *(_QWORD*)v7;
		*(_DWORD*)(v8 + 8) = v7[2];
		v6[2] += 16i64;
		v9 = sub_1400578C0((__int64)v71);
		v4 = v71;
		v3 = v9;
		v70 = v9;
	}
	if (!v4 || v3 == -2)
		goto LABEL_77;
	v10 = sub_14005C3C0(*(_QWORD*)(v4[4] + 160i64), v3);
	v12 = *(_QWORD*)(v11 + 16);
	v13 = -1i64;
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v11 + 16) += 16i64;
	v14 = -1;
	v15 = (_DWORD*)(v71[2] - 16i64);
	if (v15 != dword_140A12138)
		v14 = v15[2];
	v71[2] = v15;
	if (v14 != 5 || !((unsigned int(__fastcall*)(__int64(__fastcall***)()))v69[1])(&v69))
		LABEL_77:
	sub_140056570(a1, 2u, "Invalid position table");
	v16 = sub_14005C3C0(*(_QWORD*)(v71[4] + 160i64), v70);
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	v19 = v71;
	v20 = (unsigned __int64*)sub_14018F0E0(&v73, word_1409F86C4)[1];
	if (v20)
	{
		v21 = -1i64;
		do
			++v21;
		while (*((_BYTE*)v20 + v21));
		sub_140058710((__int64)v19, v20, v21);
	}
	else
	{
		*(_DWORD*)(v19[2] + 8i64) = 0;
		v19[2] += 16i64;
	}
	if (v74)
		sub_14018B900(v74, 0);
	sub_14005E8E0((__int64)v71, v71[2] - 32i64, (int*)(v71[2] - 16i64), v71[2] - 16i64);
	v22 = v71;
	v23 = v71[2];
	v24 = (__int64(__fastcall***)())(v23 - 16);
	if ((_DWORD*)(v23 - 16) == dword_140A12138 || *((_DWORD*)v24 + 2) != 3)
	{
	LABEL_76:
		v22[2] = v23 - 32;
		goto LABEL_77;
	}
	v25 = *((_DWORD*)v24 + 2);
	v26 = 0.0;
	if (v25 == 3)
		goto LABEL_26;
	if (v25 == 4 && sub_14005AC80((char*)*v24 + 32, (unsigned __int64*)&v75))
	{
		v66 = 3;
		v24 = &v65;
		v65 = v75;
	LABEL_26:
		v27 = *(double*)v24;
		goto LABEL_27;
	}
	v27 = 0.0;
LABEL_27:
	v71[2] -= 32i64;
	v28 = v27;
	if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))v69[1])(&v69))
		goto LABEL_77;
	v29 = sub_14005C3C0(*(_QWORD*)(v71[4] + 160i64), v70);
	v31 = *(_QWORD*)(v30 + 16);
	*(_QWORD*)v31 = *v29;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
	*(_QWORD*)(v30 + 16) += 16i64;
	v32 = v71;
	v33 = (unsigned __int64*)sub_14018F0E0(&v73, word_1409F881C)[1];
	if (v33)
	{
		do
			++v13;
		while (*((_BYTE*)v33 + v13));
		sub_140058710((__int64)v32, v33, v13);
	}
	else
	{
		*(_DWORD*)(v32[2] + 8i64) = 0;
		v32[2] += 16i64;
	}
	if (v74)
		sub_14018B900(v74, 0);
	sub_14005E8E0((__int64)v71, v71[2] - 32i64, (int*)(v71[2] - 16i64), v71[2] - 16i64);
	v22 = v71;
	v23 = v71[2];
	v34 = (__int64(__fastcall***)())(v23 - 16);
	if ((_DWORD*)(v23 - 16) == dword_140A12138 || *((_DWORD*)v34 + 2) != 3)
		goto LABEL_76;
	v35 = *((unsigned int*)v34 + 2);
	if ((_DWORD)v35 != 3)
	{
		if ((_DWORD)v35 != 4 || !sub_14005AC80((char*)*v34 + 32, (unsigned __int64*)&v75))
			goto LABEL_42;
		v66 = 3;
		v34 = &v65;
		v65 = v75;
	}
	v26 = *(double*)v34;
LABEL_42:
	v71[2] -= 32i64;
	v36 = v26;
	v37 = sub_1404ACB30(v35, v2);
	v39 = v37;
	if (!v37)
		goto LABEL_75;
	v40 = *(_QWORD**)(v37 + 8);
	v41 = (_QWORD*)*v40;
	if ((_QWORD*)*v40 == v40)
		goto LABEL_75;
	v42 = 0.0;
	v43 = 0i64;
	do
	{
		v44 = (unsigned int**)v41[2];
		if (v44 && (~((*v44)[3] >> 1) & 1) != 0)
		{
			v45 = *(_QWORD*)(qword_140C65898 + 7152);
			v46 = v45 ? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v45 + 24i64))(v45) : 0;
			if ((v38 = (__int64)*v44, (v47 = (*v44)[5]) == 0) || v47 == 1 && v46 == 167 || v47 == 2 && v46 == 166)
			{
				if ((*(_BYTE*)(v38 + 12) & 4) == 0)
				{
					v48 = sub_14024B980(*(_DWORD*)(v38 + 24));
					v49 = v48;
					if (v48)
					{
						v50 = 1.0;
						v51 = v28 - *(float*)(v48 + 12);
						v52 = 2;
						while (1)
						{
							if ((v52 & 1) != 0)
								v50 = v50 * v51;
							v52 >>= 1;
							if (!v52)
								break;
							v51 = v51 * v51;
						}
						v53 = 2;
						v54 = 1.0;
						for (i = v36 - *(float*)(v49 + 20); ; i = i * i)
						{
							if ((v53 & 1) != 0)
								v54 = v54 * i;
							v53 >>= 1;
							if (!v53)
								break;
						}
						v56 = v54 + v50;
						if (!v43 || v42 > v56)
						{
							v43 = v44;
							v42 = v56;
						}
					}
				}
			}
		}
		v41 = (_QWORD*)*v41;
	} while (v41 != *(_QWORD**)(v39 + 8));
	if (v43)
	{
		v57 = a1[4];
		v65 = off_140B569F0;
		v67 = a1;
		v58 = *(_QWORD*)(v57 + 112);
		v68 = 1;
		if (*(_QWORD*)(v57 + 120) >= v58)
			sub_14005E2C0((__int64)a1);
		v59 = a1[2];
		v60 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v59 + 8) = 5;
		*(_QWORD*)v59 = v60;
		a1[2] += 16i64;
		LODWORD(v59) = sub_1400578C0((__int64)a1);
		v66 = v59;
		sub_140706140((__int64)a1, (__int64)&v65, v43, 0);
		v61 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v59);
		v62 = a1[2];
		*(_QWORD*)v62 = *v61;
		*(_DWORD*)(v62 + 8) = *((_DWORD*)v61 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v63, v59);
	}
	else
	{
	LABEL_75:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	v69 = off_140B56A08;
	if (v71)
		sub_1400579E0((__int64)v71, v38, v70);
	return 1i64;
}
// 14070712A: variable 'v11' is possibly undefined
// 140707194: variable 'v17' is possibly undefined
// 1407072B9: variable 'v30' is possibly undefined
// 1407073AF: variable 'v35' is possibly undefined
// 14070757C: variable 'v63' is possibly undefined
// 140707620: variable 'v38' is possibly undefined
// 1409F86C4: using guessed type unsigned __int16 word_1409F86C4[2];
// 1409F881C: using guessed type unsigned __int16 word_1409F881C[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

