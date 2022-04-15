//----- (0000000140704E90) ----------------------------------------------------
__int64 __fastcall sub_140704E90(_QWORD* a1)
{
	_DWORD* v1; // rax
	bool v2; // cf
	_DWORD* v3; // rbx
	__int64 v5; // rax
	__int64 v6; // r9
	double v7; // xmm6_8
	__int64 v8; // rcx
	int v9; // eax
	__int64 v10; // rax
	int v11; // ecx
	__int64* v12; // rax
	double v13; // xmm0_8
	float v14; // xmm0_4
	_DWORD* v15; // rax
	_DWORD* v16; // rbx
	__int64 v17; // rax
	__int64 v18; // r9
	__int64 v19; // rcx
	int v20; // eax
	__int64 v21; // rax
	int v22; // ecx
	__int64* v23; // rax
	double v24; // xmm0_8
	float v25; // xmm0_4
	_DWORD* v26; // rax
	_DWORD* v27; // rbx
	__int64 v28; // rax
	__int64 v29; // r9
	__int64 v30; // rcx
	int v31; // eax
	__int64 v32; // rax
	int v33; // ecx
	__int64* v34; // rax
	__int64 v35; // rax
	__int64 v36; // rbx
	_DWORD* v37; // rax
	int v38; // edi
	__int64 v39; // rcx
	__int64 v40; // rax
	__int64 v41; // rax
	float* v42; // r8
	__int64 v43; // rbx
	int v44; // edi
	__int64 v45; // rdx
	__int128 v47; // [rsp+20h] [rbp-50h] BYREF
	__int64 v48; // [rsp+30h] [rbp-40h] BYREF
	int v49; // [rsp+38h] [rbp-38h]
	__int64 v50; // [rsp+40h] [rbp-30h] BYREF
	unsigned int v51; // [rsp+48h] [rbp-28h]
	__int64 v52; // [rsp+50h] [rbp-20h]
	__int64 v53; // [rsp+80h] [rbp+10h] BYREF

	v1 = (_DWORD*)a1[3];
	v2 = (unsigned __int64)v1 < a1[2];
	v3 = dword_140A12138;
	v47 = 0i64;
	if (v2)
		v3 = v1;
	v5 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_1409F869C, 1ui64);
	v6 = a1[2];
	v48 = v5;
	v49 = 4;
	sub_14005E8E0((__int64)a1, (__int64)v3, (int*)&v48, v6);
	a1[2] += 16i64;
	v7 = 0.0;
	v8 = a1[2];
	v9 = *(_DWORD*)(v8 - 8);
	if (v9 == 3 || v9 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v8 - 16) + 32i64), (unsigned __int64*)&v53))
	{
		v10 = a1[2];
		v11 = *(_DWORD*)(v10 - 8);
		v12 = (__int64*)(v10 - 16);
		if (v11 != 3)
		{
			if (v11 != 4 || !sub_14005AC80((char*)(*v12 + 32), (unsigned __int64*)&v53))
			{
				v13 = 0.0;
				goto LABEL_11;
			}
			v49 = 3;
			v12 = &v48;
			v48 = v53;
		}
		v13 = *(double*)v12;
	LABEL_11:
		v14 = v13;
		*(float*)&v47 = v14;
	}
	v15 = (_DWORD*)a1[3];
	a1[2] -= 16i64;
	v16 = dword_140A12138;
	if ((unsigned __int64)v15 < a1[2])
		v16 = v15;
	v17 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_1409F8674, 1ui64);
	v18 = a1[2];
	v48 = v17;
	v49 = 4;
	sub_14005E8E0((__int64)a1, (__int64)v16, (int*)&v48, v18);
	a1[2] += 16i64;
	v19 = a1[2];
	v20 = *(_DWORD*)(v19 - 8);
	if (v20 == 3 || v20 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v19 - 16) + 32i64), (unsigned __int64*)&v53))
	{
		v21 = a1[2];
		v22 = *(_DWORD*)(v21 - 8);
		v23 = (__int64*)(v21 - 16);
		if (v22 != 3)
		{
			if (v22 != 4 || !sub_14005AC80((char*)(*v23 + 32), (unsigned __int64*)&v53))
			{
				v24 = 0.0;
				goto LABEL_22;
			}
			v49 = 3;
			v23 = &v48;
			v48 = v53;
		}
		v24 = *(double*)v23;
	LABEL_22:
		v25 = v24;
		*((float*)&v47 + 1) = v25;
	}
	v26 = (_DWORD*)a1[3];
	a1[2] -= 16i64;
	v27 = dword_140A12138;
	if ((unsigned __int64)v26 < a1[2])
		v27 = v26;
	v28 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_1409F863C, 1ui64);
	v29 = a1[2];
	v48 = v28;
	v49 = 4;
	sub_14005E8E0((__int64)a1, (__int64)v27, (int*)&v48, v29);
	a1[2] += 16i64;
	v30 = a1[2];
	v31 = *(_DWORD*)(v30 - 8);
	if (v31 == 3 || v31 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v30 - 16) + 32i64), (unsigned __int64*)&v53))
	{
		v32 = a1[2];
		v33 = *(_DWORD*)(v32 - 8);
		v34 = (__int64*)(v32 - 16);
		if (v33 != 3)
		{
			if (v33 != 4 || !sub_14005AC80((char*)(*v34 + 32), (unsigned __int64*)&v53))
				goto LABEL_33;
			v51 = 3;
			v34 = &v50;
			v50 = v53;
		}
		v7 = *(double*)v34;
	LABEL_33:
		*((float*)&v47 + 2) = v7;
	}
	v35 = a1[3];
	a1[2] -= 16i64;
	v36 = 0i64;
	v37 = (_DWORD*)(v35 + 16);
	if ((unsigned __int64)v37 >= a1[2] || v37 == dword_140A12138 || (int)v37[2] <= 0)
		v38 = 0;
	else
		v38 = sub_140056D60(a1, 2u);
	v39 = qword_140C65898;
	v40 = *(_QWORD*)(qword_140C65898 + 120);
	if (v40)
		v36 = *(_QWORD*)(v40 + 5872);
	if (!v36)
		goto LABEL_48;
	if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v36 + 120i64))(v36))
	{
		v39 = qword_140C65898;
	LABEL_48:
		sub_14042FBC0(*(_QWORD*)(v39 + 29504), (float*)&v47, v38);
		return 0i64;
	}
	v41 = qword_140C65898;
	v42 = (float*)(qword_140C65898 + 32480);
	*(_OWORD*)(qword_140C65898 + 32480) = v47;
	v43 = *(_QWORD*)(v41 + 29504);
	*(_DWORD*)(v41 + 32496) = v38;
	*(_DWORD*)(v41 + 32500) = 1;
	sub_1400FA3C0((__int64)&v50, *(_QWORD*)(v43 + 400), v42);
	v44 = v51;
	sub_1400EA3E0(v43, "NavPointSet", L"T", v51);
	if (v52)
		sub_1400579E0(v52, v45, v44);
	return 0i64;
}
// 1407051D1: variable 'v45' is possibly undefined
// 1409EE944: using guessed type wchar_t aT_6[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

