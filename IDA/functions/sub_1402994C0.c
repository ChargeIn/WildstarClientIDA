//----- (00000001402994C0) ----------------------------------------------------
__int64 __fastcall sub_1402994C0(__int64 a1)
{
	_QWORD* Value; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	signed int v5; // ebx
	_DWORD* v7; // rax
	unsigned int v8; // r13d
	_DWORD* v9; // rbx
	int v10; // ecx
	int v11; // ecx
	signed int v12; // esi
	signed int v13; // esi
	int v14; // ecx
	signed int v15; // esi
	__int64 v16; // rax
	int v17; // edx
	__int64 v18; // rsi
	_DWORD* v19; // r11
	int v20; // r14d
	unsigned int v21; // r12d
	int v22; // r8d
	int v23; // r9d
	int v24; // r10d
	int v25; // r15d
	unsigned int v26; // eax
	unsigned int v27; // ecx
	int v28; // edx
	int v29; // edx
	__int64 v30; // r14
	__int64 v31; // rcx
	signed int v32; // r15d
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // r9
	__int64 v36; // r8
	int v37; // ecx
	int v38; // eax
	int v39; // r14d
	__int64 v40; // rcx
	__int64 v41; // rcx
	signed int v42; // r14d
	__int64 v43; // rcx
	signed int v44; // r14d
	unsigned int v45; // eax
	__int64 v46; // rcx
	__int64 v47; // rax
	unsigned int v48; // edx
	unsigned int v49; // ebx
	__int64 v50; // [rsp+20h] [rbp-99h]
	__int64 v51; // [rsp+20h] [rbp-99h]
	__int64 v52; // [rsp+28h] [rbp-91h]
	__int64 v53; // [rsp+28h] [rbp-91h]
	__int64 v54; // [rsp+30h] [rbp-89h]
	__int64 v55; // [rsp+30h] [rbp-89h]
	__int64 v56; // [rsp+38h] [rbp-81h]
	int v57; // [rsp+38h] [rbp-81h]
	__int64 v58; // [rsp+38h] [rbp-81h]
	__int64 v59; // [rsp+40h] [rbp-79h]
	int v60; // [rsp+40h] [rbp-79h]
	__int64 v61; // [rsp+40h] [rbp-79h]
	__int64 v62; // [rsp+48h] [rbp-71h]
	int v63; // [rsp+48h] [rbp-71h]
	__int64 v64; // [rsp+60h] [rbp-59h] BYREF
	unsigned int v65; // [rsp+68h] [rbp-51h]
	int v66; // [rsp+6Ch] [rbp-4Dh]
	__int64 v67; // [rsp+70h] [rbp-49h] BYREF
	__int64 v68; // [rsp+78h] [rbp-41h] BYREF
	unsigned int v69; // [rsp+80h] [rbp-39h]
	__int64 v70; // [rsp+88h] [rbp-31h] BYREF
	unsigned int v71; // [rsp+90h] [rbp-29h]
	__int64 v72; // [rsp+98h] [rbp-21h] BYREF
	__int64 v73; // [rsp+A0h] [rbp-19h] BYREF
	__int64 v74; // [rsp+A8h] [rbp-11h] BYREF
	int v75; // [rsp+B0h] [rbp-9h]
	int v76; // [rsp+B4h] [rbp-5h]
	int v77; // [rsp+B8h] [rbp-1h]
	int v78; // [rsp+BCh] [rbp+3h]
	__int64 v79; // [rsp+C0h] [rbp+7h] BYREF
	int v80; // [rsp+C8h] [rbp+Fh]
	int i; // [rsp+CCh] [rbp+13h]
	__int64 v82; // [rsp+D0h] [rbp+17h] BYREF
	int v83; // [rsp+D8h] [rbp+1Fh]
	int v84; // [rsp+DCh] [rbp+23h]

	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v3 = Value[1]) != 0)
		v4 = *(_QWORD*)(v3 + 96);
	else
		v4 = 0i64;
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 40i64))(v4, 0i64);
	if (v5 < 0)
	{
		v64 = 0x141DE47D8i64;
		sub_1401A3130(14, 2, &v64, (unsigned int)v5);
		return sub_14029B080(a1, v5);
	}
	v7 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 32i64))(*(_QWORD*)(a1 + 104));
	v8 = 1;
	v9 = v7;
	if ((*(_DWORD*)(a1 + 76) & 0x100) == 0)
		v8 = v7[6];
	v10 = *(_DWORD*)(a1 + 64);
	if (v10)
	{
		v11 = v10 - 1;
		if (v11)
		{
			if (v11 == 1)
			{
				v12 = D3DXCreateCubeTexture(
					*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6608i64),
					(unsigned int)v7[2],
					v8,
					*(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7032i64) + 4i64 * *(int*)(a1 + 72)),
					dword_140AE7B30[v7[7]],
					*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7040i64) + 4i64 * *(int*)(a1 + 72)),
					a1 + 56);
				if (v12 < 0)
				{
					v57 = *(_DWORD*)(a1 + 72);
					LODWORD(v54) = v9[7];
					LODWORD(v52) = v8;
					LODWORD(v50) = v9[2];
					v64 = 0x141DE5178i64;
					sub_1401A3130(14, 2, &v64, (unsigned int)v12, v50, v52, v54, v57);
					return sub_14029B080(a1, v12);
				}
			}
		}
		else
		{
			v13 = D3DXCreateVolumeTexture(
				*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6608i64),
				(unsigned int)v7[2],
				(unsigned int)v7[3],
				(unsigned int)v7[4],
				v8,
				*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7032i64) + 4i64 * *(int*)(a1 + 72)),
				dword_140AE7B30[v7[7]],
				*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7040i64) + 4i64 * *(int*)(a1 + 72)),
				a1 + 56);
			if (v13 < 0)
			{
				v63 = *(_DWORD*)(a1 + 72);
				v14 = v9[7];
				v64 = 0x141DE51A8i64;
				LODWORD(v59) = v14;
				LODWORD(v56) = v9[4];
				LODWORD(v54) = v8;
				LODWORD(v52) = v9[3];
				LODWORD(v50) = v9[2];
				sub_1401A3130(14, 2, &v64, (unsigned int)v13, v50, v52, v54, v56, v59, v63);
				return sub_14029B080(a1, v13);
			}
		}
	}
	else
	{
		v15 = D3DXCreateTexture(
			*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6608i64),
			(unsigned int)v7[2],
			(unsigned int)v7[3],
			v8,
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7032i64) + 4i64 * *(int*)(a1 + 72)),
			dword_140AE7B30[v7[7]],
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 7040i64) + 4i64 * *(int*)(a1 + 72)),
			a1 + 56);
		if (v15 < 0)
		{
			v60 = *(_DWORD*)(a1 + 72);
			LODWORD(v56) = v9[7];
			LODWORD(v54) = v8;
			LODWORD(v52) = v9[3];
			LODWORD(v50) = v9[2];
			v64 = 0x141DE43F8i64;
			sub_1401A3130(14, 2, &v64, (unsigned int)v15, v50, v52, v54, v56, v60);
			return sub_14029B080(a1, v15);
		}
	}
	v16 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 32i64))(*(_QWORD*)(a1 + 104));
	v17 = *(_DWORD*)(a1 + 76);
	v18 = v16 + 112;
	v19 = (_DWORD*)((char*)&unk_140AE5200 + 44 * v9[7]);
	v20 = 4;
	v67 = (__int64)v19;
	if ((v17 & 3) != 1)
		v20 = 65540;
	v66 = v20;
	if ((v17 & 0xC) != 4)
	{
		v20 |= 0x20000u;
		v66 = v20;
	}
	if ((v17 & 0x30) != 16)
	{
		v20 |= 0x40000u;
		v66 = v20;
	}
	v21 = v9[6];
	if (!v21)
		return sub_14029B080(a1, 0);
	while (1)
	{
		--v21;
		v22 = (v9[2] >> v21 == 0) + (v9[2] >> v21);
		v23 = (v9[3] >> v21 == 0) + (v9[3] >> v21);
		v24 = (v9[4] >> v21 == 0) + (v9[4] >> v21);
		LODWORD(v68) = v19[9] * ((unsigned int)(*v19 + v22 - 1) / *v19);
		v25 = (v68 + 3) & 0xFFFFFFFC;
		v26 = (unsigned int)(v19[3] + v23 - 1) / v19[3];
		v65 = v25;
		v27 = *(_DWORD*)(v67 + 24);
		v71 = v25 * v26;
		v28 = *(_DWORD*)(a1 + 64);
		v69 = v25 * v26 * ((v24 + v27 - 1) / v27);
		if (!v28)
		{
			v83 = v22;
			v84 = v23;
			v82 = 0i64;
			if (v21 < v8)
			{
				v43 = *(_QWORD*)(a1 + 56);
				v72 = 0i64;
				v44 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v43 + 144i64))(v43, v21, &v72);
				if (v44 < 0
					|| (v44 = sub_14029B200(a1, v72, v18, dword_140AE7B30[v9[7]], (_DWORD*)v67, v68, v25, (__int64)&v82, v66),
						v44 < 0))
				{
					v64 = 0x141DE5138i64;
					LODWORD(v59) = v9[7];
					LODWORD(v56) = v25;
					LODWORD(v54) = v9[3];
					LODWORD(v52) = v9[2];
					LODWORD(v50) = v21;
					sub_1401A3130(14, 2, &v64, (unsigned int)v44, v50, v52, v54, v56, v59, v72);
					v45 = sub_14029B080(a1, v44);
					v46 = v72;
					goto LABEL_71;
				}
				v40 = v72;
			LABEL_54:
				if (v40)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 16i64))(v40);
			}
		LABEL_56:
			v18 += v69 * v9[5];
			goto LABEL_57;
		}
		v29 = v28 - 1;
		if (!v29)
			break;
		if (v29 == 1)
		{
			v30 = 0i64;
			v79 = 0i64;
			v80 = v22;
			for (i = v23; (unsigned int)v30 < v9[5]; v18 += v69)
			{
				if (v21 < v8)
				{
					v31 = *(_QWORD*)(a1 + 56);
					v73 = 0i64;
					v32 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64*))(*(_QWORD*)v31 + 144i64))(
						v31,
						(unsigned int)dword_140AE7B00[v30],
						v21,
						&v73);
					if (v32 < 0
						|| (v32 = sub_14029B200(a1, v73, v18, dword_140AE7B30[v9[7]], (_DWORD*)v67, v68, v65, (__int64)&v79, v66),
							v32 < 0))
					{
						v64 = 0x141DE51F8i64;
						LODWORD(v59) = v9[7];
						LODWORD(v56) = v65;
						LODWORD(v54) = v9[3];
						LODWORD(v52) = v9[2];
						LODWORD(v50) = v21;
						sub_1401A3130(14, 2, &v64, (unsigned int)v32, v50, v52, v54, v56, v59, v73);
						v45 = sub_14029B080(a1, v32);
						v46 = v73;
					LABEL_71:
						v49 = v45;
						if (v46)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 16i64))(v46);
						return v49;
					}
					if (v73)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v73 + 16i64))(v73);
				}
				v30 = (unsigned int)(v30 + 1);
			}
		}
	LABEL_57:
		if (!v21)
			return sub_14029B080(a1, 0);
		v20 = v66;
		v19 = (_DWORD*)v67;
	}
	v75 = v22;
	v76 = v23;
	v78 = v24;
	v74 = 0i64;
	v77 = 0;
	if (v21 >= v8)
		goto LABEL_56;
	if (v8 >= 2 || *(_DWORD*)(a1 + 72) != 1)
	{
		v41 = *(_QWORD*)(a1 + 56);
		v70 = 0i64;
		v42 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v41 + 144i64))(v41, v21, &v70);
		if (v42 < 0
			|| (v42 = D3DXLoadVolumeFromMemory(v70, 0i64, 0i64, v18, dword_140AE7B30[v9[7]], v25, v71, 0i64, &v74, v66, 0),
				v42 < 0))
		{
			v64 = 0x141DE5260i64;
			LODWORD(v62) = v9[7];
			LODWORD(v59) = v25;
			LODWORD(v56) = v9[4];
			LODWORD(v54) = v9[3];
			LODWORD(v52) = v9[2];
			LODWORD(v50) = v21;
			sub_1401A3130(14, 2, &v64, (unsigned int)v42, v50, v52, v54, v56, v59, v62, v70);
			v45 = sub_14029B080(a1, v42);
			v46 = v70;
			goto LABEL_71;
		}
		v40 = v70;
		goto LABEL_54;
	}
	v33 = (int)v9[7];
	v34 = *(_QWORD*)(a1 + 48);
	v35 = (unsigned int)v9[4];
	v36 = (unsigned int)v9[3];
	v68 = 0i64;
	v37 = D3DXCreateVolumeTexture(
		*(_QWORD*)(v34 + 6608),
		(unsigned int)v9[2],
		v36,
		v35,
		v8,
		0,
		dword_140AE7B30[v33],
		2,
		&v68);
	v65 = v37;
	if (v37 < 0)
	{
		v67 = 0x141DE50F8i64;
		LODWORD(v62) = *(_DWORD*)(a1 + 72);
		LODWORD(v61) = v9[7];
		LODWORD(v58) = v9[4];
		LODWORD(v55) = v8;
		LODWORD(v53) = v9[3];
		LODWORD(v51) = v9[2];
		sub_1401A3130(14, 2, &v67, (unsigned int)v37, v51, v53, v55, v58, v61, v62);
		v49 = sub_14029B080(a1, v65);
		goto LABEL_67;
	}
	v64 = 0i64;
	v38 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v68 + 144i64))(v68, 0i64, &v64);
	v65 = v38;
	if (v38 >= 0)
	{
		v39 = D3DXLoadVolumeFromMemory(v64, 0i64, 0i64, v18, dword_140AE7B30[v9[7]], v25, v71, 0i64, &v74, v20, 0);
		if (v39 < 0)
		{
			v47 = 0x141DE4568i64;
		}
		else
		{
			v39 = (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 48) + 6616i64) + 248i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 48) + 6616i64),
				v68,
				*(_QWORD*)(a1 + 56));
			if (v39 >= 0)
			{
				if (v64)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v64 + 16i64))(v64);
				v40 = v68;
				goto LABEL_54;
			}
			v47 = 0x141DE5238i64;
		}
		v67 = v47;
		sub_1401A3130(14, 2, &v67, (unsigned int)v39);
		v48 = v39;
		goto LABEL_64;
	}
	v67 = 0x141DE4618i64;
	sub_1401A3130(14, 2, &v67, (unsigned int)v38);
	v48 = v65;
LABEL_64:
	v49 = sub_14029B080(a1, v48);
	if (v64)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v64 + 16i64))(v64);
LABEL_67:
	if (!v68)
		return v49;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v68 + 16i64))(v68);
	return v49;
}
// 140C65758: invalid function type has been ignored
// 14029962E: variable 'v50' is possibly undefined
// 14029962E: variable 'v52' is possibly undefined
// 14029962E: variable 'v54' is possibly undefined
// 1402996F2: variable 'v56' is possibly undefined
// 1402996F2: variable 'v59' is possibly undefined
// 140299D67: variable 'v51' is possibly undefined
// 140299D67: variable 'v53' is possibly undefined
// 140299D67: variable 'v55' is possibly undefined
// 140299D67: variable 'v58' is possibly undefined
// 140299D67: variable 'v61' is possibly undefined
// 140299D67: variable 'v62' is possibly undefined
// 140AE7B00: using guessed type int dword_140AE7B00[6];
// 140AE7B30: using guessed type int dword_140AE7B30[28];
// 140C63758: using guessed type __int64 qword_140C63758;
// 140C65718: using guessed type __int64 (__fastcall *D3DXLoadVolumeFromMemory)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD);
// 140C65748: using guessed type __int64 (__fastcall *D3DXCreateTexture)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140C65758: using guessed type __int64 (__fastcall *D3DXCreateCubeTexture)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD);
// 140C65768: using guessed type __int64 (__fastcall *D3DXCreateVolumeTexture)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);

