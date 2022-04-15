//----- (0000000140734A10) ----------------------------------------------------
__int64 __fastcall sub_140734A10(__int64 a1)
{
	__int64 v1; // rdi
	__int64 result; // rax
	__int64 v3; // r15
	__int64 v4; // rcx
	__int64 v5; // rbp
	unsigned __int64 v6; // rax
	unsigned int v7; // r13d
	__int64 v8; // rbp
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // r12d
	int v12; // r14d
	unsigned __int64 v13; // r9
	unsigned int v14; // edx
	__int64 v15; // r8
	__int64 v16; // rcx
	__int64 v17; // rcx
	_QWORD* v18; // rbx
	char* v19; // rdx
	_DWORD* v20; // rax
	int* v21; // rsi
	unsigned __int64 v22; // rdi
	int* v23; // rax
	unsigned __int16* v24; // rbx
	unsigned __int64 v25; // rdi
	__int64 v26; // rax
	__int64 v27; // rdx
	__int64 v28; // rcx
	int v29; // esi
	__int64 v30; // rdx
	__int64 v31; // rax
	__int64 v32; // rcx
	_DWORD* v33; // r13
	__int16* v34; // rax
	__int64 v35; // rdx
	__int64 v36; // r8
	int* v37; // rbp
	__int64 v38; // rsi
	int* v39; // rax
	int* v40; // rdi
	unsigned __int64 v41; // rsi
	int v42; // eax
	unsigned __int64 v43; // r15
	unsigned __int64 v44; // r14
	unsigned __int64 v45; // r15
	unsigned __int64 v46; // rsi
	__int64 v47; // rbp
	_QWORD* v48; // rax
	_QWORD* v49; // rax
	__int64 v51; // [rsp+28h] [rbp-A0h]
	__int64(__fastcall * *v52)(); // [rsp+30h] [rbp-98h] BYREF
	int v53; // [rsp+38h] [rbp-90h]
	__int64 v54; // [rsp+40h] [rbp-88h]
	int v55; // [rsp+48h] [rbp-80h]
	__int64 v56; // [rsp+50h] [rbp-78h] BYREF
	__int64 v57; // [rsp+58h] [rbp-70h]
	__int64 v58; // [rsp+70h] [rbp-58h] BYREF
	int* v59; // [rsp+78h] [rbp-50h]
	int v60; // [rsp+D8h] [rbp+10h]
	unsigned int v61; // [rsp+E0h] [rbp+18h]

	v1 = a1;
	result = sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	v3 = result;
	v51 = result;
	if (!result)
		return result;
	v4 = *(_QWORD*)(v1 + 32);
	v5 = *(_QWORD*)(result + 216) - *(_QWORD*)(result + 208);
	v52 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v7 = 1;
	v8 = v5 >> 2;
	v54 = v1;
	v55 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0(v1);
	v9 = *(_QWORD*)(v1 + 16);
	v10 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(v1 + 16) += 16i64;
	v11 = 0;
	v12 = sub_1400578C0(v1);
	v13 = *(_QWORD*)(qword_140C63650 + 768);
	v53 = v12;
	v14 = 0;
	if (v13)
	{
		v15 = *(_QWORD*)(qword_140C63650 + 760);
		v16 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v15 + 8 * v16) + 400i64) != v1)
		{
			v16 = ++v14;
			if (v14 >= v13)
				goto LABEL_8;
		}
		v17 = *(_QWORD*)(v15 + 8i64 * v14);
	}
	else
	{
	LABEL_8:
		v17 = 0i64;
	}
	v18 = *(_QWORD**)(v17 + 400);
	v19 = (char*)sub_14018F0E0(&v56, 0i64)[1];
	v20 = (_DWORD*)v18[3];
	if ((unsigned __int64)v20 < v18[2] && v20 != dword_140A12138 && (int)v20[2] > 0)
		v19 = (char*)sub_140056BB0(v18, 1u, 0i64);
	sub_14018F2D0(&v58, v19);
	if (v57)
		sub_14018B900(v57, 0);
	v21 = v59;
	if (v59)
	{
		v22 = 0i64;
		if (*(_WORD*)v59)
		{
			do
				++v22;
			while (*((_WORD*)v59 + v22));
		}
		v23 = sub_14018B280(2 * v22 + 18, 0);
		if (v23)
		{
			*(_QWORD*)v23 = off_140B55060;
			*((_QWORD*)v23 + 1) = v22;
		}
		else
		{
			v23 = 0i64;
		}
		v24 = (unsigned __int16*)(v23 + 4);
		v25 = v22;
		sub_1407DB590(v23 + 4, v21, v25 * 2);
		v24[v25] = 0;
		sub_14018B900((__int64)v21, 0);
		v1 = a1;
	}
	else
	{
		v24 = 0i64;
	}
	v26 = sub_1402074E0(*(_DWORD*)(v3 + 68));
	if (!v26)
	{
	LABEL_60:
		v7 = v11;
		goto LABEL_61;
	}
	if (!v8 || !*(_DWORD*)(v26 + 16))
	{
		v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
		v27 = *(_QWORD*)(v1 + 16);
		v11 = 1;
		*(_QWORD*)v27 = *v49;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v49 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		goto LABEL_60;
	}
	v28 = *(_QWORD*)(v3 + 208);
	v29 = 1;
	v60 = 1;
	v61 = 0;
	if (!((*(_QWORD*)(v3 + 216) - v28) >> 2))
		goto LABEL_58;
	v30 = 0i64;
	do
	{
		v31 = sub_140207D60(*(_DWORD*)(v28 + 4 * v30));
		v33 = (_DWORD*)v31;
		if (!v31 || (*(_BYTE*)(v31 + 24) & 2) == 0)
			goto LABEL_56;
		v34 = sub_14034BDD0(v32, *(_DWORD*)(v31 + 4));
		v37 = (int*)v34;
		if (v34)
		{
			v38 = 0i64;
			if (*v34)
			{
				do
					++v38;
				while (v34[v38]);
			}
			v39 = sub_14018B280(2 * v38 + 18, 0);
			if (v39)
			{
				*((_QWORD*)v39 + 1) = v38;
				*(_QWORD*)v39 = off_140B55060;
			}
			else
			{
				v39 = 0i64;
			}
			v40 = v39 + 4;
			v41 = 2 * v38;
			sub_1407DB590(v39 + 4, v37, v41);
			*(_WORD*)((char*)v40 + v41) = 0;
			v29 = v60;
		}
		else
		{
			v40 = 0i64;
		}
		if (v24 == word_1409F917C)
			goto LABEL_51;
		if (v24)
		{
			v35 = *v24;
			v36 = 0i64;
			if (!*v24)
			{
				while ((_WORD)v35)
				{
					v35 = v24[v36 + 1];
					v42 = word_1409F917C[++v36];
					if ((_DWORD)v35 != v42)
						goto LABEL_44;
				}
				goto LABEL_51;
			}
		}
	LABEL_44:
		v43 = *((_QWORD*)v40 - 1);
		v44 = *((_QWORD*)v24 - 1);
		if (v43 >= v44)
		{
			v45 = v43 - v44;
			v46 = 0i64;
			v47 = (__int64)v40;
			while ((unsigned int)sub_14018E3E0(v47, v24, v44) || v24[v44])
			{
				++v46;
				v47 += 2i64;
				if (v46 > v45)
				{
					v29 = v60;
					goto LABEL_53;
				}
			}
			v29 = v60;
		LABEL_51:
			if ((unsigned int)sub_1406AD9F0(a1, v29, v33, (__int64)&v52))
				v60 = ++v29;
		}
	LABEL_53:
		if (v40)
			(*(void(__fastcall**)(int*, __int64, __int64))(*((_QWORD*)v40 - 2) + 8i64))(v40 - 4, v35, v36);
		v3 = v51;
	LABEL_56:
		v28 = *(_QWORD*)(v3 + 208);
		v30 = ++v61;
	} while (v61 < (unsigned __int64)((*(_QWORD*)(v3 + 216) - v28) >> 2));
	v1 = v54;
	v12 = v53;
	v7 = 1;
LABEL_58:
	v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
	v27 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v27 = *v48;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v48 + 2);
	*(_QWORD*)(v1 + 16) += 16i64;
LABEL_61:
	if (v24)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v24 - 2) + 8i64))(v24 - 8);
	sub_1400579E0(v1, v27, v12);
	return v7;
}
// 140734C89: variable 'v32' is possibly undefined
// 140734DA7: variable 'v35' is possibly undefined
// 140734DA7: variable 'v36' is possibly undefined
// 140734E7C: variable 'v27' is possibly undefined
// 1409F917C: using guessed type unsigned __int16 word_1409F917C[20];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C659F0: using guessed type __int64 qword_140C659F0;

