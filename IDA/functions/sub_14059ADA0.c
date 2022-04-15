#include "../winhttp.h"

//----- (000000014059ADA0) ----------------------------------------------------
__int64 __fastcall sub_14059ADA0(_QWORD* a1)
{
	unsigned int v2; // r15d
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // r12d
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rbx
	__int64 v9; // r14
	int* v10; // rsi
	int v11; // r14d
	__int64 v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	_QWORD* v15; // rcx
	_DWORD* v16; // rax
	int v17; // xmm0_4
	int* v18; // rdx
	__int64 v20; // [rsp+20h] [rbp-E0h] BYREF
	int v21; // [rsp+28h] [rbp-D8h]
	__int64 v22; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v23; // [rsp+38h] [rbp-C8h]
	__int64 v24; // [rsp+40h] [rbp-C0h]
	int v25; // [rsp+48h] [rbp-B8h]
	__int128 v26; // [rsp+50h] [rbp-B0h]
	__int128 v27; // [rsp+60h] [rbp-A0h]
	__int64 v28; // [rsp+70h] [rbp-90h] BYREF
	int v29; // [rsp+78h] [rbp-88h]
	__int64 v30; // [rsp+80h] [rbp-80h] BYREF
	__int64 v31; // [rsp+88h] [rbp-78h]
	__int64 v32; // [rsp+90h] [rbp-70h]
	int v33; // [rsp+98h] [rbp-68h] BYREF
	char v34; // [rsp+9Ch] [rbp-64h] BYREF
	char v35[12]; // [rsp+B0h] [rbp-50h] BYREF
	int v36; // [rsp+BCh] [rbp-44h]
	__int64 v37; // [rsp+C0h] [rbp-40h] BYREF
	char v38[16]; // [rsp+C8h] [rbp-38h] BYREF
	int* v39; // [rsp+D8h] [rbp-28h]
	__int128 v40; // [rsp+E0h] [rbp-20h]
	__int128 v41; // [rsp+F0h] [rbp-10h]
	__int64* v42; // [rsp+230h] [rbp+130h]
	int v43; // [rsp+238h] [rbp+138h]
	int v44; // [rsp+23Ch] [rbp+13Ch]
	char* v45; // [rsp+240h] [rbp+140h]
	int v46; // [rsp+248h] [rbp+148h]
	__int64 v47; // [rsp+24Ch] [rbp+14Ch]
	int v48; // [rsp+254h] [rbp+154h]
	int v49; // [rsp+258h] [rbp+158h]
	__int64 v50; // [rsp+25Ch] [rbp+15Ch]
	__int64 v51; // [rsp+264h] [rbp+164h]
	__int64 v52; // [rsp+26Ch] [rbp+16Ch]
	int v53; // [rsp+274h] [rbp+174h]
	char v54[432]; // [rsp+290h] [rbp+190h] BYREF
	__int64 v55[96]; // [rsp+440h] [rbp+340h] BYREF
	__int64 v56; // [rsp+740h] [rbp+640h]
	int v57; // [rsp+8E0h] [rbp+7E0h]

	v2 = sub_1405925D0(a1, 1u);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	v5 = sub_1400578C0((__int64)a1);
	v6 = sub_140245C00(v2);
	v8 = v6;
	if (v6)
	{
		v9 = sub_140242D40(*(_DWORD*)(v6 + 8));
		v10 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v8 + 12), 0i64);
	}
	else
	{
		v9 = 0i64;
		v10 = 0i64;
	}
	if (!v10)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_35;
	}
	sub_14040FAE0((__int64)v55);
	if (v57 <= 6)
	{
		v55[1] = (__int64)v10;
		v57 = 6;
	}
	if (!v9 || (*(_BYTE*)(v9 + 12) & 4) == 0)
		goto LABEL_30;
	sub_1407E4830(&v33, 0i64, 0x28ui64);
	sub_14059D660(&v33, a1, 2);
	v29 = 1;
	v21 = 1;
	v30 = 1i64;
	v28 = 0i64;
	v22 = 0i64;
	v23 = 0i64;
	v24 = 0i64;
	v25 = 0;
	v20 = 0i64;
	v31 = 0i64;
	v32 = 0i64;
	v37 = 0i64;
	sub_14041FD30((__int64)v38, 0);
	v47 = 0i64;
	v48 = 1;
	v50 = 0i64;
	v51 = 0i64;
	v52 = 0i64;
	v53 = 0;
	sub_1400B52A0((__int64)v54);
	sub_140591630((__int64)&v37);
	v26 = 1ui64;
	v27 = 0ui64;
	v37 = qword_140C658F0;
	v39 = v10;
	v40 = 1ui64;
	v41 = 0ui64;
	if (v2 == *(_DWORD*)(qword_140C65898 + 6864))
	{
		v20 = *(_QWORD*)(qword_140C65898 + 6876);
		v21 = *(_DWORD*)(qword_140C65898 + 6884);
		v30 = *(_QWORD*)(qword_140C65898 + 6888);
		v31 = *(_QWORD*)(qword_140C65898 + 6896);
		v32 = *(_QWORD*)(qword_140C65898 + 6904);
	}
	if ((*(_BYTE*)(v8 + 32) & 4) == 0 || (v11 = 1, *(_DWORD*)(v8 + 28)))
		v11 = 0;
	v12 = sub_14020AC20(v10[91]);
	sub_1405924B0(v12, &v20, (__int64)v35, (__int64)&v28);
	v46 = v36;
	v43 = v33;
	v49 = v11;
	v45 = &v34;
	v44 = 5;
	v47 = v28;
	v48 = v29;
	v42 = &v30;
	sub_1405E65B0(qword_140C65898 + 5784);
	if (v11)
		sub_140591490((__int64)&v22);
	else
		sub_1405A3E60((__int64)&v22, v13 + 5784, *(_DWORD*)(v8 + 8), v10[81]);
	v14 = 66i64;
	v15 = (_QWORD*)(qword_140C65898 + 6336);
	do
	{
		v16 = (_DWORD*)*v15;
		if (*(_DWORD*)*v15 == 3)
			v17 = 1065353216;
		else
			v17 = 0;
		++v15;
		v16[1] = v17;
		v16[2] = 0;
		*((_QWORD*)v16 + 3) = 0i64;
		--v14;
	} while (v14);
	v50 = v22;
	v51 = v23;
	v52 = v24;
	v53 = v25;
	if ((unsigned int)sub_1405918A0((__int64)&v37))
	{
		v18 = (int*)v54;
		if (!v39)
			v18 = 0i64;
		sub_140412570((__int64)v55, v18, 1, 6);
	LABEL_30:
		sub_140415BB0(a1, (__int64)v55);
		goto LABEL_31;
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
LABEL_31:
	if (v55[0])
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v55[0] + 8i64))(v55[0]);
		v55[0] = 0i64;
	}
	if (v56)
		sub_14018B900(v56, 0);
LABEL_35:
	sub_1400579E0((__int64)a1, v7, v5);
	return 1i64;
}
// 14059B0D3: variable 'v13' is possibly undefined
// 14059B1EE: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14059ADA0: using guessed type char var_868[16];
// 14059ADA0: using guessed type char var_880[12];

