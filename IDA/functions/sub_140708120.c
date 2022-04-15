//----- (0000000140708120) ----------------------------------------------------
__int64 __fastcall sub_140708120(_QWORD* a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	int v6; // r14d
	__int64 v7; // rcx
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r11
	__int64 v13; // rdx
	int v14; // r10d
	__int64 v15; // rcx
	unsigned int v16; // r8d
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rax
	unsigned int v22; // r8d
	__int64 v23; // rdx
	__int64 v24; // rcx
	__int64 v25; // rax
	__int64 v26; // rdx
	unsigned int v27; // r8d
	__int64 v28; // rdx
	__int64 v29; // rcx
	__int64 v30; // rax
	__int64 v31; // rdx
	int v32; // edx
	__int64 v33; // rax
	__int64 v34; // rcx
	unsigned __int64 v35; // rax
	__int64 v36; // rdi
	__int64 v37; // rax
	__int64 v38; // rdx
	__int64 v39; // rcx
	unsigned __int64 v40; // rax
	__int64 v41; // rdi
	__int64 v42; // rax
	int v43; // edi
	int v44; // esi
	__int64 v45; // rdx
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	_QWORD* v49; // rax
	__int64 v50; // rdx
	__int64(__fastcall * *v52)(); // [rsp+20h] [rbp-60h] BYREF
	int v53; // [rsp+28h] [rbp-58h]
	_QWORD* v54; // [rsp+30h] [rbp-50h]
	int v55; // [rsp+38h] [rbp-48h]
	__int64(__fastcall * *v56)(); // [rsp+40h] [rbp-40h] BYREF
	int v57; // [rsp+48h] [rbp-38h]
	_QWORD* v58; // [rsp+50h] [rbp-30h]
	int v59; // [rsp+58h] [rbp-28h]
	char v60[8]; // [rsp+60h] [rbp-20h] BYREF
	int v61; // [rsp+68h] [rbp-18h]
	__int64 v62; // [rsp+70h] [rbp-10h]
	__int64 v63; // [rsp+A0h] [rbp+20h]
	__int64 v64; // [rsp+A0h] [rbp+20h]
	__int64 v65; // [rsp+A0h] [rbp+20h]

	v54 = a1;
	v2 = a1[4];
	v3 = *(_QWORD*)(v2 + 112);
	v55 = 1;
	v52 = off_140B569F0;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	v7 = a1[4];
	v53 = v6;
	v8 = sub_14005C3C0(*(_QWORD*)(v7 + 160), v6);
	v9 = a1[2];
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v9, L"eHintArrowType", v10);
	a1[2] -= 16i64;
	v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v13, L"nExtraData", v14);
	a1[2] -= 16i64;
	switch (*(_DWORD*)(qword_140C65898 + 32544))
	{
	case 0:
		v21 = sub_140491C60(qword_140C65968, *(_DWORD*)(qword_140C65898 + 32548));
		if ((unsigned int)sub_140432AC0(a1, v21))
			goto LABEL_50;
		break;
	case 1:
		v32 = *(_DWORD*)(qword_140C65898 + 32548);
		if (v32)
		{
			v33 = sub_1405A8A40(v15, v32);
			if (v33)
			{
				if ((unsigned int)sub_140663030(a1, v33))
					goto LABEL_50;
			}
		}
		break;
	case 3:
		v22 = *(_DWORD*)(qword_140C65898 + 32548);
		v23 = *(_QWORD*)(qword_140C65988 + 16);
		v24 = v23;
		v25 = *(_QWORD*)(v23 + 8);
		while (v25)
		{
			if (*(_DWORD*)(v25 + 32) < v22)
			{
				v25 = *(_QWORD*)(v25 + 24);
			}
			else
			{
				v24 = v25;
				v25 = *(_QWORD*)(v25 + 16);
			}
		}
		if (v24 == v23 || (v64 = v24, v22 < *(_DWORD*)(v24 + 32)))
			v64 = *(_QWORD*)(qword_140C65988 + 16);
		if (v64 == v23)
			v26 = 0i64;
		else
			v26 = *(_QWORD*)(v64 + 40);
		if ((unsigned int)sub_140432C80(a1, v26))
			goto LABEL_50;
		break;
	case 4:
		v27 = *(_DWORD*)(qword_140C65898 + 32548);
		v28 = *(_QWORD*)(qword_140C65988 + 48);
		v29 = v28;
		v30 = *(_QWORD*)(v28 + 8);
		while (v30)
		{
			if (*(_DWORD*)(v30 + 32) < v27)
			{
				v30 = *(_QWORD*)(v30 + 24);
			}
			else
			{
				v29 = v30;
				v30 = *(_QWORD*)(v30 + 16);
			}
		}
		if (v29 == v28 || (v65 = v29, v27 < *(_DWORD*)(v29 + 32)))
			v65 = *(_QWORD*)(qword_140C65988 + 48);
		if (v65 == v28)
			v31 = 0i64;
		else
			v31 = *(_QWORD*)(v65 + 40);
		if ((unsigned int)sub_140432D60(a1, v31))
			goto LABEL_50;
		break;
	case 6:
		if ((unsigned int)sub_140649870(a1, *(_DWORD*)(qword_140C65898 + 32548)))
			goto LABEL_50;
		break;
	case 7:
		v16 = *(_DWORD*)(qword_140C65898 + 32548);
		v17 = *(_QWORD*)(qword_140C65948 + 16);
		v18 = v17;
		v19 = *(_QWORD*)(v17 + 8);
		while (v19)
		{
			if (*(_DWORD*)(v19 + 32) < v16)
			{
				v19 = *(_QWORD*)(v19 + 24);
			}
			else
			{
				v18 = v19;
				v19 = *(_QWORD*)(v19 + 16);
			}
		}
		if (v18 == v17 || (v63 = v18, v16 < *(_DWORD*)(v18 + 32)))
			v63 = *(_QWORD*)(qword_140C65948 + 16);
		if (v63 == v17)
			v20 = 0i64;
		else
			v20 = *(_QWORD*)(v63 + 40);
		if ((unsigned int)sub_1404330E0(a1, v20))
		{
		LABEL_50:
			sub_1400FB540((__int64)&v52);
			goto LABEL_60;
		}
		break;
	case 8:
		v34 = a1[4];
		v56 = off_140B569F0;
		v58 = a1;
		v35 = *(_QWORD*)(v34 + 112);
		v59 = 1;
		if (*(_QWORD*)(v34 + 120) >= v35)
			sub_14005E2C0((__int64)a1);
		v36 = a1[2];
		v37 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v36 + 8) = 5;
		*(_QWORD*)v36 = v37;
		a1[2] += 16i64;
		LODWORD(v36) = sub_1400578C0((__int64)a1);
		v57 = v36;
		sub_140705250((__int64)&v56);
		sub_1400FB2A0((__int64)&v52, (__int64)L"objTarget", v36);
		sub_1400579E0((__int64)a1, v38, v36);
		break;
	case 9:
		v39 = a1[4];
		v56 = off_140B569F0;
		v58 = a1;
		v40 = *(_QWORD*)(v39 + 112);
		v59 = 1;
		if (*(_QWORD*)(v39 + 120) >= v40)
			sub_14005E2C0((__int64)a1);
		v41 = a1[2];
		v42 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v41 + 8) = 5;
		*(_QWORD*)v41 = v42;
		a1[2] += 16i64;
		v43 = sub_1400578C0((__int64)a1);
		v57 = v43;
		sub_1400FA3C0((__int64)v60, (__int64)a1, (float*)(qword_140C65898 + 32512));
		v44 = v61;
		sub_1400FB2A0((__int64)&v56, (__int64)L"tPosition", v61);
		sub_1400FB2A0((__int64)&v52, (__int64)L"objTarget", v43);
		if (v62)
			sub_1400579E0(v62, v45, v44);
		sub_1400579E0((__int64)a1, v45, v43);
		break;
	default:
		v46 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		*(_QWORD*)v47 = *v46;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v48, L"objTarget", 0);
	LABEL_60:
		a1[2] -= 16i64;
		break;
	}
	v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
	v50 = a1[2];
	*(_QWORD*)v50 = *v49;
	*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v50, v6);
	return 1i64;
}
// 1407081D7: variable 'v10' is possibly undefined
// 140708213: variable 'v12' is possibly undefined
// 140708225: variable 'v13' is possibly undefined
// 140708225: variable 'v14' is possibly undefined
// 140708434: variable 'v15' is possibly undefined
// 140708509: variable 'v38' is possibly undefined
// 1407085B4: variable 'v45' is possibly undefined
// 1407085E6: variable 'v47' is possibly undefined
// 1407085F8: variable 'v48' is possibly undefined
// 140B42108: using guessed type wchar_t aNextradata_0[11];
// 140B42120: using guessed type wchar_t aEhintarrowtype[15];
// 140B42348: using guessed type wchar_t aObjtarget_7[10];
// 140B42360: using guessed type wchar_t aObjtarget_6[10];
// 140B42378: using guessed type wchar_t aTposition_3[10];
// 140B42390: using guessed type wchar_t aObjtarget_5[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65988: using guessed type __int64 qword_140C65988;
// 140708120: using guessed type char var_20[8];

