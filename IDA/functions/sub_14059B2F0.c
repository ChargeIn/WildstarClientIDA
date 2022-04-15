#include "../winhttp.h"

//----- (000000014059B2F0) ----------------------------------------------------
__int64 __fastcall sub_14059B2F0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64* v5; // rsi
	__int64 v6; // rax
	int v7; // r15d
	__int64 v8; // rax
	__int64 v9; // rbx
	_DWORD* v10; // r13
	int* v11; // r14
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	_QWORD* v15; // rax
	__int64 v16; // r11
	__int64 v17; // rdx
	int v18; // r10d
	int v19; // eax
	int v20; // eax
	bool v21; // zf
	int v22; // edi
	__int64 v23; // rax
	__int64 v24; // r10
	_QWORD* v25; // rax
	__int64 v26; // rdx
	__int64 v28; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v29; // [rsp+30h] [rbp-D8h]
	__int64 v30; // [rsp+38h] [rbp-D0h]
	int v31; // [rsp+40h] [rbp-C8h]
	int v32[4]; // [rsp+48h] [rbp-C0h] BYREF
	_BYTE v33[24]; // [rsp+58h] [rbp-B0h]
	__int64 v34; // [rsp+70h] [rbp-98h]
	__int64(__fastcall * *v35)(); // [rsp+78h] [rbp-90h] BYREF
	int v36; // [rsp+80h] [rbp-88h]
	_QWORD* v37; // [rsp+88h] [rbp-80h]
	int v38; // [rsp+90h] [rbp-78h]
	__int64 v39; // [rsp+98h] [rbp-70h] BYREF
	int v40; // [rsp+A0h] [rbp-68h]
	__int64 v41; // [rsp+A8h] [rbp-60h] BYREF
	__int64 v42; // [rsp+B0h] [rbp-58h]
	__int64 v43; // [rsp+B8h] [rbp-50h]
	int v44; // [rsp+C0h] [rbp-48h] BYREF
	char v45; // [rsp+C4h] [rbp-44h] BYREF
	char v46[12]; // [rsp+D8h] [rbp-30h] BYREF
	int v47; // [rsp+E4h] [rbp-24h]
	__int64 v48; // [rsp+E8h] [rbp-20h] BYREF
	char v49[16]; // [rsp+F0h] [rbp-18h] BYREF
	int* v50; // [rsp+100h] [rbp-8h]
	__int128 v51; // [rsp+108h] [rbp+0h]
	__int128 v52; // [rsp+118h] [rbp+10h]
	__int64* v53; // [rsp+258h] [rbp+150h]
	int v54; // [rsp+260h] [rbp+158h]
	int v55; // [rsp+264h] [rbp+15Ch]
	char* v56; // [rsp+268h] [rbp+160h]
	int v57; // [rsp+270h] [rbp+168h]
	__int64 v58; // [rsp+274h] [rbp+16Ch]
	int v59; // [rsp+27Ch] [rbp+174h]
	int v60; // [rsp+280h] [rbp+178h]
	__int64 v61; // [rsp+284h] [rbp+17Ch]
	__int64 v62; // [rsp+28Ch] [rbp+184h]
	__int64 v63; // [rsp+294h] [rbp+18Ch]
	int v64; // [rsp+29Ch] [rbp+194h]
	char v65[432]; // [rsp+2B8h] [rbp+1B0h] BYREF

	v1 = (_QWORD*)a1;
	v37 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v35 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v38 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = v1 + 2;
	v6 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v6;
	v1[2] += 16i64;
	v7 = sub_1400578C0((__int64)v1);
	v36 = v7;
	v8 = sub_140245C00(*(_DWORD*)(qword_140C65898 + 6864));
	v9 = v8;
	if (v8)
	{
		v10 = (_DWORD*)sub_140242D40(*(_DWORD*)(v8 + 8));
		v11 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v9 + 12), 0i64);
	}
	else
	{
		v10 = 0i64;
		v11 = 0i64;
	}
	if (!v10)
		goto LABEL_22;
	v12 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v7);
	v13 = *v5;
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	*v5 += 16i64;
	sub_1400F06F0((__int64)v1, v13, L"nSchematicId", v14);
	*v5 -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v7);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*v5 += 16i64;
	sub_1400F06F0((__int64)v1, v17, L"nSchematicCount", v18);
	*v5 -= 16i64;
	if (*v10 == 22)
	{
		v19 = sub_1405A1790((__int64)&v35);
	}
	else
	{
		v20 = v10[3];
		if ((v20 & 8) != 0)
		{
			v19 = sub_1405A0050((__int64)&v35);
		}
		else
		{
			if ((v20 & 4) == 0 || !v11)
				goto LABEL_22;
			sub_1407E4830(&v44, 0i64, 0x28ui64);
			sub_14059D660(&v44, v1, 1);
			v40 = 1;
			v41 = 1i64;
			v39 = 0i64;
			v28 = 0i64;
			v29 = 0i64;
			v30 = 0i64;
			v31 = 0;
			v42 = 0i64;
			v43 = 0i64;
			v48 = 0i64;
			sub_14041FD30((__int64)v49, 0);
			v58 = 0i64;
			v59 = 1;
			v61 = 0i64;
			v62 = 0i64;
			v63 = 0i64;
			v64 = 0;
			sub_1400B52A0((__int64)v65);
			sub_140591630((__int64)&v48);
			v21 = (*(_BYTE*)(v9 + 32) & 4) == 0;
			v50 = v11;
			*(_QWORD*)v33 = 1i64;
			v48 = qword_140C658F0;
			*(_OWORD*)&v33[8] = 0ui64;
			v34 = 0i64;
			v51 = *(_OWORD*)v33;
			v52 = 0ui64;
			v32[0] = *(_DWORD*)(qword_140C65898 + 6876);
			v32[1] = *(_DWORD*)(qword_140C65898 + 6880);
			v32[2] = *(_DWORD*)(qword_140C65898 + 6884);
			v41 = *(_QWORD*)(qword_140C65898 + 6888);
			v42 = *(_QWORD*)(qword_140C65898 + 6896);
			v43 = *(_QWORD*)(qword_140C65898 + 6904);
			if (v21 || (v22 = 1, *(_DWORD*)(v9 + 28)))
				v22 = 0;
			v23 = sub_14020AC20(v11[91]);
			sub_1405924B0(v23, v32, (__int64)v46, (__int64)&v39);
			v57 = v47;
			v54 = v44;
			v60 = v22;
			v56 = &v45;
			v55 = 5;
			v58 = v39;
			v59 = v40;
			v53 = &v41;
			sub_1405E65B0(qword_140C65898 + 5784);
			if (v22)
				sub_140591490((__int64)&v28);
			else
				sub_1405A3E60((__int64)&v28, v24 + 5784, *(_DWORD*)(v9 + 8), v11[81]);
			sub_1405E65B0(qword_140C65898 + 5784);
			v61 = v28;
			v62 = v29;
			v63 = v30;
			v64 = v31;
			sub_1405918A0((__int64)&v48);
			v19 = sub_1405A0660((__int64)&v35, (__int64)&v48);
			v1 = v37;
			v7 = v36;
		}
	}
	if (v19)
	{
		v25 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v7);
		v26 = v1[2];
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		v1[2] += 16i64;
		goto LABEL_23;
	}
LABEL_22:
	v26 = *v5;
	*(_DWORD*)(*v5 + 8) = 0;
	*v5 += 16i64;
LABEL_23:
	if (v1)
		sub_1400579E0((__int64)v1, v26, v7);
	return 1i64;
}
// 14059B41F: variable 'v14' is possibly undefined
// 14059B459: variable 'v16' is possibly undefined
// 14059B46A: variable 'v17' is possibly undefined
// 14059B46A: variable 'v18' is possibly undefined
// 14059B6AA: variable 'v24' is possibly undefined
// 140B1FCD0: using guessed type wchar_t aNschematiccoun[16];
// 140B1FCF0: using guessed type wchar_t aNschematicid_0[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14059B2F0: using guessed type char var_3A8[16];
// 14059B2F0: using guessed type char var_1E0[432];
// 14059B2F0: using guessed type char var_3C0[12];

