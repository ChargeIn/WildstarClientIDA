//----- (000000014050D3A0) ----------------------------------------------------
_DWORD* __fastcall sub_14050D3A0(_QWORD* a1, int a2)
{
	_DWORD* v4; // rax
	__int64 v5; // rdx
	_DWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int* v9; // rax
	int* v10; // r12
	__int64 v11; // rbx
	__int64 v12; // rax
	char* v13; // rdx
	__int64 v14; // rcx
	int* v15; // r12
	int* v16; // rax
	__int64 v17; // rdx
	_DWORD* v18; // r14
	int* v19; // rax
	__int64* v20; // rax
	int* v21; // rax
	__int64 v22; // r8
	_DWORD* v23; // rax
	__int64 v24; // rcx
	__int64 v25; // rbx
	char* v26; // rax
	int* v27; // rbx
	__int64 v28; // rdx
	int* v29; // rcx
	float v30; // xmm6_4
	int* v31; // rax
	char* v32; // r8
	_DWORD* v33; // rax
	int v34; // ecx
	int v35; // ecx
	_QWORD* v36; // rax
	char* v37; // rdx
	char* v38; // rdx
	__int64 v39; // rdx
	int v40; // eax
	__int64 v41; // rcx
	int* v42; // rdi
	__int64 v43; // rax
	int* v44; // r15
	unsigned __int64 v45; // r8
	unsigned __int64 v46; // rbx
	unsigned __int64 v47; // rbx
	char* v48; // rdi
	int* v49; // rbx
	__int64 v51; // [rsp+28h] [rbp-59h] BYREF
	char* v52; // [rsp+30h] [rbp-51h]
	char* v53; // [rsp+38h] [rbp-49h]
	int* v54; // [rsp+40h] [rbp-41h]
	char v55[8]; // [rsp+48h] [rbp-39h] BYREF
	int* v56; // [rsp+50h] [rbp-31h]
	int* v57; // [rsp+58h] [rbp-29h]
	int* v58; // [rsp+60h] [rbp-21h]
	__int64(__fastcall * *v59)(); // [rsp+68h] [rbp-19h] BYREF
	int v60; // [rsp+70h] [rbp-11h]
	_QWORD* v61; // [rsp+78h] [rbp-9h]
	int v62; // [rsp+80h] [rbp-1h]
	__int64 v63; // [rsp+88h] [rbp+7h] BYREF
	int* v64; // [rsp+90h] [rbp+Fh]
	int* v65; // [rsp+98h] [rbp+17h]
	__int128 v66; // [rsp+A0h] [rbp+1Fh]
	int* v67; // [rsp+E8h] [rbp+67h]

	v61 = a1;
	v62 = 1;
	v59 = off_140B569F0;
	v60 = -2;
	v4 = sub_1400580E0((__int64)a1, a2);
	if (v4 != dword_140A12138 && v4[2] == 5)
	{
		sub_1400579E0((__int64)v61, v5, v60);
		v6 = sub_1400580E0((__int64)v61, a2);
		v8 = *(_QWORD*)(v7 + 16);
		*(_QWORD*)v8 = *(_QWORD*)v6;
		*(_DWORD*)(v8 + 8) = v6[2];
		*(_QWORD*)(v7 + 16) += 16i64;
		v60 = sub_1400578C0((__int64)v61);
	}
	v9 = sub_14018B280(16i64, 0);
	v10 = v9;
	v67 = v9;
	if (v9)
		*(_WORD*)v9 = 0;
	if ((int)sub_1400FB720((__int64)&v59, (unsigned __int16*)qword_140C7D5C0, 4) < 0)
	{
		v19 = sub_14018B280(88i64, 0);
		if (v19)
			v18 = sub_1400B6390(v19);
		else
			v18 = 0i64;
		*(_DWORD*)(a1[2] + 8i64) = 0;
		for (a1[2] += 16i64; ; a1[2] -= 16i64)
		{
			while (1)
			{
				v20 = (__int64*)sub_1400580E0((__int64)a1, a2);
				if (!(unsigned int)sub_14005BA70((__int64)a1, *v20, a1[2] - 16i64))
				{
					a1[2] -= 16i64;
					v15 = v67;
					goto LABEL_79;
				}
				a1[2] += 16i64;
				v56 = 0i64;
				v57 = 0i64;
				v58 = 0i64;
				v21 = sub_14018B280(16i64, 0);
				v22 = (__int64)v21;
				v56 = v21;
				v57 = v21;
				v58 = v21 + 4;
				if (v21)
				{
					*(_WORD*)v21 = 0;
					v22 = (__int64)v56;
				}
				v23 = (_DWORD*)(a1[2] - 32i64);
				if (v23 != dword_140A12138 && v23[2] == 4)
					break;
				if (v22)
					sub_14018B900(v22, 0);
			LABEL_77:
				a1[2] -= 16i64;
			}
			sub_14018F2D0(&v63, (char*)(*(_QWORD*)v23 + 32i64));
			v24 = (__int64)v56;
			v25 = (__int64)v64;
			v57 = v65;
			v58 = (int*)v66;
			v56 = v64;
			if (v24)
			{
				sub_14018B900(v24, 0);
				v25 = (__int64)v56;
			}
			if (!(unsigned int)sub_14018E2C0(v25, L"sex"))
			{
				v26 = (char*)sub_140056BB0(a1, 0xFFFFFFFF, 0i64);
				if (v26)
				{
					sub_14018F2D0(&v63, v26);
					v27 = v64;
				}
				else
				{
					v27 = sub_14018B280(2i64, 0);
					sub_1407DB590(v27, dword_1409F12B4, 0i64);
					if (v27)
						*(_WORD*)v27 = 0;
				}
				if (!(unsigned int)sub_14018E2C0((__int64)v27, L"male"))
				{
					v28 = 0i64;
					goto LABEL_39;
				}
				if (!(unsigned int)sub_14018E2C0((__int64)v27, L"female"))
				{
					v28 = 1i64;
				LABEL_39:
					(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v18 + 120i64))(v18, v28);
				}
				if (!v27)
					goto LABEL_43;
				v29 = v27;
				goto LABEL_42;
			}
			if (!(unsigned int)sub_14018E2C0(v25, L"name"))
			{
				sub_14050D300(&v63, a1, 0xFFFFFFFF);
				(*(void(__fastcall**)(_DWORD*, __int64*))(*(_QWORD*)v18 + 88i64))(v18, &v63);
				v29 = v64;
				if (v64)
					goto LABEL_42;
				goto LABEL_43;
			}
			if (!(unsigned int)sub_14018E2C0(v25, L"key"))
			{
				sub_14050D300(&v63, a1, 0xFFFFFFFF);
				(*(void(__fastcall**)(_DWORD*, __int64*))(*(_QWORD*)v18 + 72i64))(v18, &v63);
				v29 = v64;
				if (v64)
					goto LABEL_42;
				goto LABEL_43;
			}
			if (!(unsigned int)sub_14018E2C0(v25, L"count"))
			{
				v30 = sub_140056C40(a1, 0xFFFFFFFF);
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v18 + 112i64))(v18);
				(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v18 + 104i64))(v18, (unsigned int)(int)v30);
				goto LABEL_43;
			}
			v52 = 0i64;
			v53 = 0i64;
			v54 = 0i64;
			v31 = sub_14018B280(16i64, 0);
			v32 = (char*)v31;
			v52 = (char*)v31;
			v53 = (char*)v31;
			v54 = v31 + 4;
			if (v31)
			{
				*(_WORD*)v31 = 0;
				v32 = v52;
			}
			v33 = (_DWORD*)(a1[2] - 16i64);
			v34 = v33 == dword_140A12138 ? -1 : v33[2];
			v35 = v34 - 3;
			if (!v35)
				break;
			if (v35 == 1)
			{
				v36 = sub_14050D300(&v63, a1, 0xFFFFFFFF);
				v37 = v52;
				v52 = (char*)v36[1];
				v36[1] = v37;
				v38 = v53;
				v53 = (char*)v36[2];
				v36[2] = v38;
				v39 = (__int64)v54;
				v54 = (int*)v36[3];
				v36[3] = v39;
				if (v64)
					sub_14018B900((__int64)v64, 0);
			LABEL_73:
				(*(void(__fastcall**)(_DWORD*, char*, __int64*))(*(_QWORD*)v18 + 152i64))(v18, v55, &v51);
				v29 = (int*)v52;
				if (v52)
					goto LABEL_42;
				goto LABEL_43;
			}
			if (v32)
			{
				v29 = (int*)v32;
			LABEL_42:
				sub_14018B900((__int64)v29, 0);
			}
		LABEL_43:
			if (!v56)
				goto LABEL_77;
			sub_14018B900((__int64)v56, 0);
		}
		v40 = sub_1400584E0((__int64)a1, -1);
		v42 = (int*)sub_14034BDD0(v41, v40);
		if (!v42)
		{
			v29 = (int*)v52;
			if (v52)
				goto LABEL_42;
			goto LABEL_43;
		}
		v43 = 0i64;
		if (*(_WORD*)v42)
		{
			do
				++v43;
			while (*((_WORD*)v42 + v43));
		}
		v44 = (int*)((char*)v42 + 2 * v43);
		v45 = (v53 - v52) >> 1;
		v46 = (2 * v43) >> 1;
		if (v46 > v45)
		{
			sub_1407DB590((int*)v52, v42, 2 * v45);
			sub_14001C310(&v51, (int*)((char*)v42 + 2 * ((v53 - v52) >> 1)), v44);
		}
		else
		{
			v47 = 2 * v46;
			sub_1407DB590((int*)v52, v42, v47);
			v48 = v53;
			v49 = (int*)&v52[v47];
			if (v49 != (int*)v53)
			{
				sub_1407DB590(v49, (int*)v53, 2ui64);
				v53 -= 2 * ((v48 - (char*)v49) >> 1);
			}
		}
		goto LABEL_73;
	}
	v11 = (__int64)v61;
	v12 = v61[2] - 16i64;
	if (*(_DWORD*)(v12 + 8) == 4)
	{
	LABEL_13:
		v13 = (char*)(*(_QWORD*)v12 + 32i64);
		goto LABEL_14;
	}
	if ((unsigned int)sub_14005E620((__int64)v61, v61[2] - 16i64))
	{
		if (*(_QWORD*)(*(_QWORD*)(v11 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v11 + 32) + 112i64))
			sub_14005E2C0(v11);
		v12 = *(_QWORD*)(v11 + 16) - 16i64;
		goto LABEL_13;
	}
	v13 = 0i64;
LABEL_14:
	sub_14018F2D0(&v63, v13);
	v14 = (__int64)v10;
	v15 = v64;
	if (v14)
		sub_14018B900(v14, 0);
	v61[2] -= 32i64;
	v16 = sub_14018B280(96i64, 0);
	if (v16)
	{
		v18 = (_DWORD*)sub_1404DDB40((__int64)v16, v15);
		v18[22] = 0;
	}
	else
	{
		v18 = 0i64;
		MEMORY[0x58] = 0;
	}
LABEL_79:
	if (v15)
		sub_14018B900((__int64)v15, 0);
	v59 = off_140B56A08;
	if (v61)
		sub_1400579E0((__int64)v61, v17, v60);
	return v18;
}
// 14050D401: variable 'v5' is possibly undefined
// 14050D415: variable 'v7' is possibly undefined
// 14050D87A: variable 'v41' is possibly undefined
// 14050D9DC: variable 'v17' is possibly undefined
// 1409F12B4: using guessed type int dword_1409F12B4[14];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B11470: using guessed type wchar_t aName_26[5];
// 140B11480: using guessed type wchar_t aFemale_2[7];
// 140B11490: using guessed type wchar_t aCount_4[6];
// 140B114A0: using guessed type wchar_t aKey_1[4];
// 140B114B0: using guessed type wchar_t aMale_2[5];
// 140B114C0: using guessed type wchar_t aSex_4[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C7D5C0: using guessed type __int64 qword_140C7D5C0;
// 14050D3A0: using guessed type char var_90[8];

