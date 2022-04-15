//----- (0000000140040EA0) ----------------------------------------------------
__int64 __fastcall sub_140040EA0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // r12
	char* v4; // rax
	int* v5; // r15
	_WORD* v6; // rcx
	__int64 v7; // rax
	int v8; // edi
	unsigned __int64 v9; // r14
	_DWORD* v10; // rax
	int v11; // ecx
	_DWORD* v12; // r10
	int v13; // ecx
	int v14; // ecx
	_QWORD* v15; // rdx
	char* v16; // rax
	int* v17; // rax
	int* v18; // rbx
	_QWORD* v19; // rax
	int** v20; // rax
	int v21; // ecx
	double v22; // xmm0_8
	float v23; // xmm6_4
	int* v24; // rax
	int* v25; // rbx
	unsigned __int16* v26; // rdx
	__int64 v27; // rax
	unsigned __int64* v28; // rdi
	__int64 v29; // rbx
	__int64 v30; // rax
	int* v32; // [rsp+20h] [rbp-E0h] BYREF
	int v33; // [rsp+28h] [rbp-D8h]
	__int64(__fastcall * *v34)(); // [rsp+30h] [rbp-D0h] BYREF
	char v35[8]; // [rsp+38h] [rbp-C8h] BYREF
	_WORD* v36; // [rsp+40h] [rbp-C0h]
	_WORD* v37; // [rsp+48h] [rbp-B8h]
	char v38[8]; // [rsp+88h] [rbp-78h] BYREF
	unsigned __int16* v39; // [rsp+90h] [rbp-70h]
	unsigned __int16* v40; // [rsp+98h] [rbp-68h]
	__int128 v41; // [rsp+F0h] [rbp-10h]
	int* v42; // [rsp+100h] [rbp+0h]
	__int64 v43; // [rsp+110h] [rbp+10h] BYREF
	int* v44; // [rsp+118h] [rbp+18h]
	__int64 v45; // [rsp+130h] [rbp+30h] BYREF
	int* v46; // [rsp+138h] [rbp+38h]
	int* v47; // [rsp+190h] [rbp+90h] BYREF

	sub_1400B6F30((__int64)&v34);
	v34 = off_140B69230;
	v41 = 0i64;
	v42 = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v41 = v2;
	*((_QWORD*)&v41 + 1) = v2;
	v42 = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v3 = (__int64)(a1[2] - a1[3]) >> 4;
	v4 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v45, v4);
	v5 = v46;
	if (v46)
	{
		v7 = 0i64;
		if (*(_WORD*)v46)
		{
			do
				++v7;
			while (*((_WORD*)v46 + v7));
		}
		sub_14001C480((__int64)v35, v46, (int*)((char*)v46 + 2 * v7));
		v6 = v36;
	}
	else
	{
		v6 = v36;
		if (v36 != v37)
		{
			*v36 = 0;
			v6 = v36;
			v37 = v36;
		}
	}
	v8 = 2;
	v9 = -1i64;
	if ((unsigned int)v3 >= 2)
	{
		while (1)
		{
			v10 = sub_1400580E0((__int64)a1, v8);
			v11 = -1;
			if (v10 != v12)
				v11 = v10[2];
			v13 = v11 - 3;
			if (!v13)
				break;
			v14 = v13 - 1;
			if (!v14)
			{
				v16 = (char*)sub_140056BB0(a1, v8, 0i64);
				sub_14018F2D0(&v43, v16);
				v17 = sub_14018B280(96i64, 0);
				v18 = v44;
				if (v17)
					v19 = (_QWORD*)sub_1404DDB40((__int64)v17, v44);
				else
					v19 = 0i64;
				sub_1400B7480((__int64)&v34, v19);
				if (v18)
					sub_14018B900((__int64)v18, 0);
				goto LABEL_32;
			}
			if (v14 == 1)
			{
				v15 = sub_1400407F0(a1, v8);
			LABEL_31:
				sub_1400B7480((__int64)&v34, v15);
			}
		LABEL_32:
			if (++v8 > (unsigned int)v3)
			{
				v6 = v36;
				v5 = v46;
				goto LABEL_34;
			}
		}
		v20 = (int**)sub_1400580E0((__int64)a1, v8);
		v21 = *((_DWORD*)v20 + 2);
		if (v21 != 3)
		{
			if (v21 != 4 || !sub_14005AC80((char*)*v20 + 32, (unsigned __int64*)&v47))
			{
				v22 = 0.0;
				goto LABEL_26;
			}
			v33 = 3;
			v20 = &v32;
			v32 = v47;
		}
		v22 = *(double*)v20;
	LABEL_26:
		v23 = v22;
		v24 = sub_14018B280(88i64, 0);
		v25 = v24;
		if (v24)
		{
			sub_1400B6390(v24);
			*(_QWORD*)v25 = off_140B69300;
			*((float*)v25 + 3) = v23;
			v25[2] = (int)v23;
		}
		else
		{
			v25 = 0i64;
		}
		v15 = v25;
		goto LABEL_31;
	}
LABEL_34:
	v26 = v39;
	if (v39 == v40 && qword_140C63648)
	{
		v47 = 0i64;
		(**(void(__fastcall***)(__int64, _WORD*, __int64(__fastcall***)(), int**, int*, int))qword_140C63648)(
			qword_140C63648,
			v6,
			&v34,
			&v47,
			v32,
			v33);
		if (v47)
		{
			v27 = 0i64;
			if (*(_WORD*)v47)
			{
				do
					++v27;
				while (*((_WORD*)v47 + v27));
			}
			sub_14001C480((__int64)v38, v47, (int*)((char*)v47 + 2 * v27));
			v26 = v39;
		}
		else
		{
			v26 = v39;
			if (v39 == v40)
				goto LABEL_44;
			*v39 = 0;
			v26 = v39;
			v40 = v39;
		}
		if (v47)
		{
			(*(void(__fastcall**)(int*, unsigned __int16*))(*((_QWORD*)v47 - 2) + 8i64))(v47 - 4, v26);
			v26 = v39;
		}
	}
LABEL_44:
	sub_14018F0E0(&v43, v26);
	v28 = (unsigned __int64*)v44;
	if (v44)
	{
		do
			++v9;
		while (*((_BYTE*)v44 + v9));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v29 = a1[2];
		v30 = sub_140062650((__int64)a1, v28, v9);
		*(_DWORD*)(v29 + 8) = 4;
		*(_QWORD*)v29 = v30;
		a1[2] += 16i64;
		sub_14018B900((__int64)v28, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if ((_QWORD)v41)
		sub_14018B900(v41, 0);
	sub_1400B7390(&v34);
	return 1i64;
}
// 140040FD0: variable 'v12' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140040EA0: using guessed type char var_148[8];
// 140040EA0: using guessed type char var_F8[8];

