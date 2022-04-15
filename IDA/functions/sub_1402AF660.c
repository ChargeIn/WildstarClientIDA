//----- (00000001402AF660) ----------------------------------------------------
__int64 __fastcall sub_1402AF660(__int64 a1, __int64 a2)
{
	signed int v3; // ebx
	__int64 v5; // rax
	__int64* v6; // rcx
	__int64 v7; // r8
	_DWORD* v8; // r13
	int* v9; // rbx
	int v10; // r11d
	_DWORD* v11; // r9
	__int64 v12; // rdi
	unsigned int v13; // r12d
	bool v14; // zf
	unsigned int v15; // eax
	int* v16; // rax
	__int64 v17; // r10
	unsigned int v18; // r8d
	unsigned int v19; // edx
	unsigned int v20; // edi
	unsigned int v21; // r14d
	unsigned int v22; // eax
	unsigned int v23; // ecx
	int v24; // esi
	unsigned int v25; // eax
	unsigned int v26; // r9d
	unsigned int v27; // ecx
	unsigned int v28; // esi
	int v29; // edx
	__int64 v30; // rax
	int v31; // edx
	unsigned int v32; // esi
	unsigned int v33; // r14d
	__int64 v34; // rdi
	int* v35; // rax
	__int64 v36; // rdi
	int* v37; // rax
	int v38; // ecx
	int v39; // ecx
	__int64 v40; // rdx
	int v41; // eax
	int v42; // eax
	int v43; // eax
	__int64 v44; // rbx
	__int64 v45; // rax
	int v46; // edi
	__int64 v47; // rax
	int v48; // ecx
	unsigned int v49; // edx
	__int64 v50; // rdx
	int v51; // eax
	int v52; // eax
	__int64 v53; // rax
	__int64 v54; // rdx
	int v55; // eax
	int v56; // eax
	int v57; // eax
	__int64 v58; // rax
	unsigned int v59; // edi
	__int64 v60; // [rsp+20h] [rbp-E0h]
	__int64 v61; // [rsp+28h] [rbp-D8h]
	__int64 v62; // [rsp+30h] [rbp-D0h]
	__int64 v63; // [rsp+38h] [rbp-C8h]
	__int64 v64; // [rsp+40h] [rbp-C0h]
	int v65; // [rsp+60h] [rbp-A0h]
	int v66; // [rsp+64h] [rbp-9Ch]
	unsigned int v67; // [rsp+68h] [rbp-98h]
	unsigned int v68; // [rsp+6Ch] [rbp-94h]
	__int64 v69; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v70; // [rsp+78h] [rbp-88h]
	unsigned int v71; // [rsp+7Ch] [rbp-84h]
	__int64 v72; // [rsp+80h] [rbp-80h]
	int v73; // [rsp+88h] [rbp-78h]
	unsigned int* v74; // [rsp+90h] [rbp-70h] BYREF
	unsigned int v75; // [rsp+98h] [rbp-68h]
	_DWORD* v76; // [rsp+A0h] [rbp-60h]
	__int64 v77; // [rsp+A8h] [rbp-58h]
	unsigned int v78; // [rsp+B0h] [rbp-50h]
	unsigned int v79; // [rsp+B4h] [rbp-4Ch]
	int v80; // [rsp+B8h] [rbp-48h] BYREF
	int v81; // [rsp+BCh] [rbp-44h]
	int v82; // [rsp+C0h] [rbp-40h]
	int v83; // [rsp+C4h] [rbp-3Ch]
	int v84; // [rsp+C8h] [rbp-38h]
	__int64 v85; // [rsp+CCh] [rbp-34h]
	int v86; // [rsp+D4h] [rbp-2Ch]
	int v87; // [rsp+D8h] [rbp-28h]
	int v88; // [rsp+DCh] [rbp-24h]
	int v89; // [rsp+E0h] [rbp-20h]

	v3 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 40i64))(a2, 0i64);
	if (v3 < 0)
	{
		v74 = (unsigned int*)0x141DE7280i64;
		sub_1401A3130(14, 2, &v74, (unsigned int)v3);
		return sub_1402B1940(a1, v3);
	}
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 352) + 32i64))(*(_QWORD*)(a1 + 352));
	v6 = *(__int64**)(a1 + 56);
	v7 = *v6;
	v8 = (_DWORD*)v5;
	v9 = (int*)(v5 + 112);
	v71 = *(_DWORD*)(v5 + 28);
	v10 = (*(__int64(__fastcall**)(__int64*, _QWORD))(v7 + 728))(v6, v71);
	v11 = (_DWORD*)((char*)&unk_140AE5200 + 44 * (int)v71);
	v65 = v10;
	v76 = v11;
	v12 = v10;
	v69 = v10;
	v13 = 1;
	v14 = (*(_DWORD*)(a1 + 84) & 0x100) == 0;
	v74 = (unsigned int*)((char*)&unk_140AE5200 + 44 * v10);
	if (v14)
		v13 = v8[6];
	v15 = v13 * v8[5];
	if (v15)
	{
		v16 = sub_14018B280(16 * (v15 + 1i64), 0);
		v11 = v76;
		if (v16)
		{
			v17 = (__int64)(v16 + 4);
			*(_QWORD*)v16 = &off_140B5F110;
		}
		else
		{
			v17 = 16i64;
		}
		v10 = v12;
	}
	else
	{
		v17 = 0i64;
	}
	v18 = v8[6];
	v72 = v17;
	if (v18)
	{
		while (1)
		{
			v19 = v8[4];
			v20 = v8[3];
			v68 = --v18;
			v21 = (v8[2] >> v18 == 0) + (v8[2] >> v18);
			v79 = v21;
			v66 = (v20 >> v18 == 0) + (v20 >> v18);
			v22 = *v11 + v21 - 1;
			v73 = (v19 >> v18 == 0) + (v19 >> v18);
			v23 = *v74;
			v24 = v11[9] * (v22 / *v11) + 3;
			v25 = v21 + *v74 - 1;
			v70 = v24 & 0xFFFFFFFC;
			v26 = (v74[9] * (v25 / v23) + 3) & 0xFFFFFFFC;
			v67 = v26;
			v75 = (v24 & 0xFFFFFFFC) * ((unsigned int)(v66 + v76[3] - 1) / v76[3]);
			v27 = v76[6];
			v28 = v26 * ((v66 + v74[3] - 1) / v74[3]);
			v78 = v28;
			v29 = *(_DWORD*)(a1 + 72);
			v30 = v75 * ((v27 + v73 - 1) / v27);
			LODWORD(v77) = v75 * ((v27 + v73 - 1) / v27);
			if (v29)
			{
				v31 = v29 - 1;
				if (v31)
				{
					if (v31 == 1)
					{
						v32 = 0;
						if (v8[5])
						{
							v77 = v75 * ((v27 + v73 - 1) / v27);
							v33 = v18;
							do
							{
								if (v18 < v13)
								{
									v34 = v17 + 16i64 * v33;
									v35 = sub_1402AFD30(a1, v9, v79, v66, v71, v70, v10, v26);
									v26 = v67;
									v18 = v68;
									*(_QWORD*)v34 = v35;
									*(_DWORD*)(v34 + 12) = v78;
									v30 = v77;
									*(_DWORD*)(v34 + 8) = v67;
								}
								v17 = v72;
								v10 = v65;
								++v32;
								v9 = (int*)((char*)v9 + v30);
								v33 += v13;
							} while (v32 < v8[5]);
						}
					}
					goto LABEL_27;
				}
				if (v18 < v13)
				{
					v36 = v17 + 16i64 * v18;
					v37 = sub_1402AFE20(a1, (__int64)v9, v21, v66, v73, v71, v70, v75, v10, v26, v28);
				LABEL_25:
					v18 = v68;
					*(_QWORD*)v36 = v37;
					*(_DWORD*)(v36 + 8) = v67;
					*(_DWORD*)(v36 + 12) = v28;
				}
			}
			else if (v18 < v13)
			{
				v36 = v17 + 16i64 * v18;
				v37 = sub_1402AFD30(a1, v9, v21, v66, v71, v70, v10, v26);
				goto LABEL_25;
			}
			v9 = (int*)((char*)v9 + (unsigned int)(v77 * v8[5]));
		LABEL_27:
			v17 = v72;
			v10 = v65;
			v11 = v76;
			if (!v18)
			{
				v12 = v69;
				break;
			}
		}
	}
	v38 = *(_DWORD*)(a1 + 72);
	if (!v38)
	{
		v54 = *(int*)(a1 + 80);
		v80 = v8[2];
		v81 = v8[3];
		v55 = dword_140AE8120[v12];
		v82 = v13;
		v84 = v55;
		v56 = dword_140AE7EC8[v54];
		v83 = 1;
		v85 = 1i64;
		v86 = v56;
		if ((int)v54 > 0)
		{
			if ((int)v54 <= 2)
				goto LABEL_66;
			switch ((_DWORD)v54)
			{
			case 3:
				goto LABEL_63;
			case 4:
			LABEL_66:
				v57 = 8;
				goto LABEL_68;
			case 5:
			LABEL_63:
				v57 = 40;
				if (dword_140AE64C0[v12])
					v57 = 72;
			LABEL_68:
				v44 = v72;
				v87 = v57;
				v88 = dword_140AE7EE0[v54];
				v58 = *(_QWORD*)(a1 + 56);
				v89 = 0;
				v46 = (*(__int64(__fastcall**)(_QWORD, int*, __int64, __int64))(**(_QWORD**)(v58 + 6336) + 40i64))(
					*(_QWORD*)(v58 + 6336),
					&v80,
					v72,
					a1 + 64);
				if (v46 < 0)
				{
					v47 = 0x141DE7248i64;
					goto LABEL_44;
				}
			LABEL_71:
				v49 = 0;
				*(_DWORD*)(a1 + 88) = v65;
				goto LABEL_72;
			}
		}
		v57 = 0;
		goto LABEL_68;
	}
	v39 = v38 - 1;
	if (!v39)
	{
		v50 = *(int*)(a1 + 80);
		v80 = v8[2];
		v81 = v8[3];
		v51 = v8[4];
		v83 = v13;
		v82 = v51;
		v84 = dword_140AE8120[v12];
		LODWORD(v85) = dword_140AE7EC8[v50];
		if ((int)v50 > 0)
		{
			if ((int)v50 <= 2)
				goto LABEL_54;
			switch ((_DWORD)v50)
			{
			case 3:
				goto LABEL_51;
			case 4:
			LABEL_54:
				v52 = 8;
				goto LABEL_56;
			case 5:
			LABEL_51:
				v52 = 40;
				if (dword_140AE64C0[v12])
					v52 = 72;
			LABEL_56:
				v44 = v72;
				HIDWORD(v85) = v52;
				v86 = dword_140AE7EE0[v50];
				v53 = *(_QWORD*)(a1 + 56);
				v87 = 0;
				v46 = (*(__int64(__fastcall**)(_QWORD, int*, __int64, __int64))(**(_QWORD**)(v53 + 6336) + 48i64))(
					*(_QWORD*)(v53 + 6336),
					&v80,
					v72,
					a1 + 64);
				if (v46 < 0)
				{
					v47 = 0x141DE7210i64;
					LODWORD(v64) = *(_DWORD*)(a1 + 80);
					v48 = v83;
					goto LABEL_45;
				}
				goto LABEL_71;
			}
		}
		v52 = 0;
		goto LABEL_56;
	}
	if (v39 != 1)
	{
		v44 = v72;
		goto LABEL_71;
	}
	v40 = *(int*)(a1 + 80);
	v80 = v8[2];
	v81 = v8[3];
	v41 = v8[5];
	v82 = v13;
	v83 = v41;
	v42 = dword_140AE8120[v12];
	v85 = 1i64;
	v84 = v42;
	v86 = dword_140AE7EC8[v40];
	if ((int)v40 <= 0)
		goto LABEL_41;
	if ((int)v40 <= 2)
		goto LABEL_40;
	if ((_DWORD)v40 == 3)
		goto LABEL_37;
	if ((_DWORD)v40 == 4)
	{
	LABEL_40:
		v43 = 8;
		goto LABEL_42;
	}
	if ((_DWORD)v40 != 5)
	{
	LABEL_41:
		v43 = 0;
		goto LABEL_42;
	}
LABEL_37:
	v43 = 40;
	if (dword_140AE64C0[v12])
		v43 = 72;
LABEL_42:
	v44 = v72;
	v87 = v43;
	v88 = dword_140AE7EE0[v40];
	v45 = *(_QWORD*)(a1 + 56);
	v89 = 4;
	v46 = (*(__int64(__fastcall**)(_QWORD, int*, __int64, __int64))(**(_QWORD**)(v45 + 6336) + 40i64))(
		*(_QWORD*)(v45 + 6336),
		&v80,
		v72,
		a1 + 64);
	if (v46 >= 0)
		goto LABEL_71;
	v47 = 0x141DE71D8i64;
LABEL_44:
	LODWORD(v64) = *(_DWORD*)(a1 + 80);
	v48 = v82;
LABEL_45:
	v69 = v47;
	LODWORD(v63) = v65;
	LODWORD(v62) = v48;
	LODWORD(v61) = v81;
	LODWORD(v60) = v80;
	sub_1401A3130(14, 2, &v69, (unsigned int)v46, v60, v61, v62, v63, v64);
	v49 = v46;
LABEL_72:
	v59 = sub_1402B1940(a1, v49);
	if (v44)
		(**(void(__fastcall***)(__int64))(v44 - 16))(v44 - 16);
	return v59;
}
// 1402AFB2C: variable 'v60' is possibly undefined
// 1402AFB2C: variable 'v61' is possibly undefined
// 1402AFB2C: variable 'v62' is possibly undefined
// 1402AFB2C: variable 'v63' is possibly undefined
// 1402AFB2C: variable 'v64' is possibly undefined
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140AE7EC8: using guessed type int dword_140AE7EC8[6];
// 140AE7EE0: using guessed type int dword_140AE7EE0[6];
// 140AE8120: using guessed type int dword_140AE8120[28];
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();

