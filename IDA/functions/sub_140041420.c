//----- (0000000140041420) ----------------------------------------------------
__int64 __fastcall sub_140041420(__int64 a1)
{
	__int64 v1; // r13
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // esi
	unsigned __int64 v5; // r9
	unsigned int v6; // edx
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rbx
	int v11; // r12d
	int v12; // edi
	int v13; // eax
	int v14; // edx
	int v15; // r15d
	int v16; // r8d
	int v17; // ebp
	int v18; // r14d
	unsigned int v19; // ebx
	_DWORD* v20; // rax
	int v21; // ecx
	int v22; // eax
	__int64 v23; // rdx
	int v24; // r9d
	int v25; // ecx
	_DWORD* v26; // rbp
	_DWORD* v27; // r14
	_DWORD* v28; // r15
	unsigned int v29; // ebx
	_DWORD* v30; // rsi
	int v31; // r12d
	int v32; // r13d
	_DWORD* v33; // rax
	int v34; // ecx
	unsigned __int64 v35; // rcx
	int* v36; // rdi
	int* v37; // rsi
	__int64 v38; // rax
	__int64 v39; // rbx
	unsigned __int64 v40; // rbx
	unsigned __int64 v41; // rcx
	int* v42; // rdi
	int* v43; // r12
	__int64 v44; // rax
	__int64 v45; // rbx
	signed __int64 v46; // rbx
	int* v47; // rdi
	unsigned __int64 v48; // rbx
	__int64 v49; // rbx
	int* v50; // rax
	unsigned __int64 v51; // rcx
	int* v52; // rdi
	int* v53; // r14
	__int64 v54; // rax
	__int64 v55; // rbx
	unsigned __int64 v56; // rbx
	int* v57; // rbp
	unsigned __int64 v58; // rcx
	int* v59; // rdi
	int* v60; // rsi
	__int64 v61; // rax
	__int64 v62; // rbx
	signed __int64 v63; // rbx
	int* v64; // rdi
	unsigned __int64 v65; // rbx
	__int64 v66; // rbx
	int* v67; // rax
	int v68; // ebp
	_QWORD* v69; // rax
	__int64 v70; // rdx
	__int64 v71; // rbx
	unsigned __int16* v72; // r9
	_QWORD* v73; // rax
	__int64 v74; // rdi
	unsigned __int16* v75; // r9
	__int64 v76; // r10
	__int64 v77; // rdx
	__int64* v78; // rax
	__int64 v79; // r10
	int v81; // [rsp+20h] [rbp-C8h]
	int v82; // [rsp+24h] [rbp-C4h]
	__int64 v83; // [rsp+28h] [rbp-C0h]
	int v84; // [rsp+30h] [rbp-B8h]
	__int64 v85; // [rsp+38h] [rbp-B0h] BYREF
	int* v86; // [rsp+40h] [rbp-A8h]
	int* v87; // [rsp+48h] [rbp-A0h]
	__int64 v88; // [rsp+50h] [rbp-98h]
	__int64 v89; // [rsp+58h] [rbp-90h] BYREF
	int* v90; // [rsp+60h] [rbp-88h]
	int* v91; // [rsp+68h] [rbp-80h]
	__int64 v92; // [rsp+70h] [rbp-78h]
	__int64 v93; // [rsp+78h] [rbp-70h]
	__int64 v95; // [rsp+F0h] [rbp+8h]
	int v96; // [rsp+F8h] [rbp+10h]
	int* v97; // [rsp+F8h] [rbp+10h]
	int v98; // [rsp+100h] [rbp+18h]
	int v99; // [rsp+108h] [rbp+20h]

	v1 = a1;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(v1 + 16);
	v3 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(v1 + 16) += 16i64;
	v4 = 0;
	v98 = sub_1400578C0(v1);
	v5 = *(_QWORD*)(qword_140C63650 + 768);
	v6 = 0;
	if (v5)
	{
		v7 = *(_QWORD*)(qword_140C63650 + 760);
		v8 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v7 + 8 * v8) + 400i64) != v1)
		{
			v8 = ++v6;
			if (v6 >= v5)
				goto LABEL_7;
		}
		v9 = *(_QWORD*)(v7 + 8i64 * v6);
	}
	else
	{
	LABEL_7:
		v9 = 0i64;
	}
	v10 = v9 + 384;
	v11 = sub_1400F26A0(v10, 1);
	v82 = v11;
	v12 = sub_1400F26A0(v10, 2);
	v81 = sub_1400F26A0(v10, 3);
	if (qword_140C63838)
	{
		v13 = qword_140C63838(off_140A6BB38, qword_140C63858);
	}
	else
	{
		if (dword_140C65518)
		{
			v14 = 0;
			goto LABEL_17;
		}
		if ((int)sub_14021C2A0() < 0)
		{
			v14 = 0;
			goto LABEL_17;
		}
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65138 + 40i64))(qword_140C65138);
	}
	v14 = v13;
LABEL_17:
	v96 = v14;
	v15 = 0;
	v16 = __ROL4__(1, *(_DWORD*)(qword_140C7AAC0 + 8));
	v17 = 0;
	v18 = 0;
	v99 = v16;
	v19 = 0;
	if (v14 <= 0)
		goto LABEL_41;
	do
	{
		if (qword_140C63848)
		{
			v20 = (_DWORD*)qword_140C63848(off_140A6BB38, v19, qword_140C63858);
		LABEL_25:
			v14 = v96;
			v16 = v99;
			goto LABEL_26;
		}
		if (!dword_140C65518)
		{
			if ((int)sub_14021C2A0() >= 0)
				v20 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65138 + 32i64))(
					qword_140C65138,
					v19);
			else
				v20 = 0i64;
			goto LABEL_25;
		}
		v20 = 0i64;
	LABEL_26:
		if (v20[5] == v11 && v20[7] == v81 && (v16 & v20[8]) != 0)
		{
			v21 = v20[4];
			if (!v21 && v20[6] == v12)
				++v15;
			if (v21 == 1 && v20[6] == v12)
				++v17;
			if (v21 == 2)
				++v18;
			if (v21 == 3)
				++v4;
		}
		++v19;
	} while ((int)v19 < v14);
	v1 = a1;
LABEL_41:
	v84 = (int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
		* 2.328306436538696e-10
		* ((double)(v15 - 1) + 1.0));
	v93 = (unsigned int)(int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
		* 2.328306436538696e-10
		* ((double)(v17 - 1) + 1.0));
	v83 = (unsigned int)(int)((double)(*(int(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890)
		* 2.328306436538696e-10
		* ((double)(v18 - 1) + 1.0));
	v22 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
	v24 = v96;
	v25 = v4 - 1;
	v26 = 0i64;
	v27 = 0i64;
	v28 = 0i64;
	v29 = 0;
	v30 = 0i64;
	v31 = (int)((double)v22 * 2.328306436538696e-10 * ((double)v25 + 1.0));
	if (v96 <= 0)
	{
	LABEL_145:
		v68 = v98;
		goto LABEL_146;
	}
	v32 = v93;
	while (2)
	{
		if (qword_140C63848)
		{
			v33 = (_DWORD*)qword_140C63848(off_140A6BB38, v29, qword_140C63858);
			goto LABEL_50;
		}
		if (dword_140C65518)
		{
			v33 = 0i64;
		}
		else
		{
			if ((int)sub_14021C2A0() >= 0)
				v33 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65138 + 32i64))(
					qword_140C65138,
					v29);
			else
				v33 = 0i64;
		LABEL_50:
			v24 = v96;
		}
		if (v33[5] == v82 && v33[7] == v81 && (v99 & v33[8]) != 0)
		{
			if (!v84 && !v33[4] && v33[6] == v12)
				v30 = v33;
			if (!v32 && v33[4] == 1 && v33[6] == v12)
				v26 = v33;
			v23 = v83;
			if (!(_DWORD)v83 && v33[4] == 2)
				v27 = v33;
			if (!v31 && v33[4] == 3)
				v28 = v33;
			v34 = v33[4];
			if (!v34 && v33[6] == v12)
				--v84;
			if (v34 == 1 && v33[6] == v12)
				--v32;
			if (v34 == 2)
			{
				v23 = (unsigned int)(v83 - 1);
				v83 = (unsigned int)v23;
			}
			if (v34 == 3)
				--v31;
		}
		if ((int)++v29 < v24)
			continue;
		break;
	}
	v1 = a1;
	if (!v30 || !v26 || !v27 || !v28)
		goto LABEL_145;
	v35 = *((_QWORD*)v30 + 1);
	if (v35)
	{
		if (v35 <= qword_140C3FE70)
			v36 = (int*)(v35 + qword_140C3FE68);
		else
			v36 = 0i64;
	}
	else
	{
		v36 = 0i64;
	}
	v37 = 0i64;
	v95 = 0i64;
	v38 = 0i64;
	if (*(_WORD*)v36)
	{
		do
			++v38;
		while (*((_WORD*)v36 + v38));
	}
	v39 = (2 * v38) >> 1;
	if ((unsigned __int64)(v39 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v37 = sub_14018B280(2 * (v39 + 1), 0);
		v95 = (__int64)v37;
	}
	v40 = 2 * v39;
	sub_1407DB590(v37, v36, v40);
	v97 = (int*)((char*)v37 + v40);
	if ((int*)((char*)v37 + v40))
		*(_WORD*)((char*)v37 + v40) = 0;
	v41 = *((_QWORD*)v26 + 1);
	if (v41)
	{
		if (v41 <= qword_140C3FE70)
			v42 = (int*)(v41 + qword_140C3FE68);
		else
			v42 = 0i64;
	}
	else
	{
		v42 = 0i64;
	}
	v43 = 0i64;
	v44 = 0i64;
	if (*(_WORD*)v42)
	{
		do
			++v44;
		while (*((_WORD*)v42 + v44));
	}
	v45 = (2 * v44) >> 1;
	if ((unsigned __int64)(v45 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v43 = sub_14018B280(2 * (v45 + 1), 0);
	v46 = 2 * v45;
	sub_1407DB590(v43, v42, v46);
	v47 = (int*)((char*)v43 + v46);
	if ((int*)((char*)v43 + v46))
		*(_WORD*)v47 = 0;
	v90 = 0i64;
	v91 = 0i64;
	v92 = 0i64;
	v48 = (v46 >> 1) + (((char*)v97 - (char*)v37) >> 1) + 1;
	if (v48 <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v49 = 2 * v48;
		v50 = sub_14018B280(v49, 0);
		v90 = v50;
		v91 = v50;
		v92 = (__int64)v50 + v49;
		if (v50)
			*(_WORD*)v50 = 0;
	}
	sub_14001C310(&v89, v37, v97);
	sub_14001C310(&v89, v43, v47);
	v51 = *((_QWORD*)v27 + 1);
	if (v51)
	{
		if (v51 <= qword_140C3FE70)
			v52 = (int*)(v51 + qword_140C3FE68);
		else
			v52 = 0i64;
	}
	else
	{
		v52 = 0i64;
	}
	v53 = 0i64;
	v54 = 0i64;
	if (*(_WORD*)v52)
	{
		do
			++v54;
		while (*((_WORD*)v52 + v54));
	}
	v55 = (2 * v54) >> 1;
	if ((unsigned __int64)(v55 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v53 = sub_14018B280(2 * (v55 + 1), 0);
	v56 = 2 * v55;
	sub_1407DB590(v53, v52, v56);
	v57 = (int*)((char*)v53 + v56);
	if ((int*)((char*)v53 + v56))
		*(_WORD*)v57 = 0;
	v58 = *((_QWORD*)v28 + 1);
	if (v58)
	{
		if (v58 <= qword_140C3FE70)
			v59 = (int*)(v58 + qword_140C3FE68);
		else
			v59 = 0i64;
	}
	else
	{
		v59 = 0i64;
	}
	v60 = 0i64;
	v61 = 0i64;
	if (*(_WORD*)v59)
	{
		do
			++v61;
		while (*((_WORD*)v59 + v61));
	}
	v62 = (2 * v61) >> 1;
	if ((unsigned __int64)(v62 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v60 = sub_14018B280(2 * (v62 + 1), 0);
	v63 = 2 * v62;
	sub_1407DB590(v60, v59, v63);
	v64 = (int*)((char*)v60 + v63);
	if ((int*)((char*)v60 + v63))
		*(_WORD*)v64 = 0;
	v86 = 0i64;
	v87 = 0i64;
	v88 = 0i64;
	v65 = (v63 >> 1) + (((char*)v57 - (char*)v53) >> 1) + 1;
	if (v65 <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v66 = 2 * v65;
		v67 = sub_14018B280(v66, 0);
		v86 = v67;
		v87 = v67;
		v88 = (__int64)v67 + v66;
		if (v67)
			*(_WORD*)v67 = 0;
	}
	sub_14001C310(&v85, v53, v57);
	sub_14001C310(&v85, v60, v64);
	v68 = v98;
	v69 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v98);
	v70 = *(_QWORD*)(v1 + 16);
	v71 = (__int64)v90;
	v72 = (unsigned __int16*)v90;
	*(_QWORD*)v70 = *v69;
	*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400F0870(v1, v70, L"strFirstName", v72);
	*(_QWORD*)(v1 + 16) -= 16i64;
	v73 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v98);
	v74 = (__int64)v86;
	v75 = (unsigned __int16*)v86;
	*(_QWORD*)v76 = *v73;
	*(_DWORD*)(v76 + 8) = *((_DWORD*)v73 + 2);
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400F0870(v1, v77, L"strLastName", v75);
	*(_QWORD*)(v1 + 16) -= 16i64;
	v78 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v98);
	v23 = *v78;
	*(_QWORD*)v79 = *v78;
	*(_DWORD*)(v79 + 8) = *((_DWORD*)v78 + 2);
	*(_QWORD*)(v1 + 16) += 16i64;
	if (v74)
		sub_14018B900(v74, 0);
	if (v60)
		sub_14018B900((__int64)v60, 0);
	if (v53)
		sub_14018B900((__int64)v53, 0);
	if (v71)
		sub_14018B900(v71, 0);
	if (v43)
		sub_14018B900((__int64)v43, 0);
	if (v95)
		sub_14018B900(v95, 0);
LABEL_146:
	sub_1400579E0(v1, v23, v68);
	return 1i64;
}
// 140041C58: variable 'v76' is possibly undefined
// 140041C6A: variable 'v77' is possibly undefined
// 140041C8D: variable 'v79' is possibly undefined
// 140041D0A: variable 'v23' is possibly undefined
// 1409F7DC0: using guessed type wchar_t aStrlastname[12];
// 1409F7DD8: using guessed type wchar_t aStrfirstname[13];
// 140A6BB38: using guessed type wchar_t *off_140A6BB38[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C65138: using guessed type __int64 qword_140C65138;
// 140C65518: using guessed type int dword_140C65518;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

