//----- (0000000140299EB0) ----------------------------------------------------
__int64 __fastcall sub_140299EB0(__int64 a1)
{
	_QWORD* Value; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	signed int v5; // ebx
	__int64 v7; // r14
	__int64 v8; // rax
	__int64 v9; // r8
	int v10; // edx
	__int64 v11; // r9
	__int64 v12; // rbx
	int v13; // r10d
	int v14; // ecx
	int v15; // eax
	__int64 v16; // r15
	bool v17; // zf
	unsigned int v18; // r13d
	int v19; // eax
	__int64 v20; // rax
	float v21; // xmm5_4
	__int64 v22; // rax
	float v23; // xmm5_4
	__int64 v24; // rax
	float v25; // xmm5_4
	__int64 v26; // rax
	float v27; // xmm4_4
	__int64 v28; // rax
	float v29; // xmm5_4
	__int64 v30; // rax
	float v31; // xmm5_4
	__int64 v32; // rax
	float v33; // xmm5_4
	__int64 v34; // rax
	float v35; // xmm4_4
	int* v36; // rax
	int* v37; // rdx
	int* v38; // rsi
	__int64 v39; // rcx
	unsigned int v40; // r8d
	__int64 v41; // rsi
	_DWORD* v42; // r9
	unsigned int v43; // r10d
	unsigned int v44; // r11d
	int v45; // r10d
	int v46; // r11d
	__int64 v47; // r12
	__int64 v48; // rdx
	int v49; // eax
	__int64 v50; // r8
	__int64 v51; // r9
	signed int v52; // ebx
	__int64 v53; // rax
	__int64 v54; // r8
	__int64 v55; // r9
	__int64 v56; // r8
	__int64 v57; // r9
	__int64 v58; // rbx
	__int64 v59; // r13
	int* v60; // rax
	int* v61; // rdx
	int* v62; // r15
	__int64 v63; // rcx
	signed int v64; // ebx
	__int64 v65; // [rsp+40h] [rbp-C0h] BYREF
	int* v66; // [rsp+48h] [rbp-B8h] BYREF
	unsigned int v67; // [rsp+50h] [rbp-B0h] BYREF
	int v68; // [rsp+54h] [rbp-ACh]
	unsigned int v69; // [rsp+58h] [rbp-A8h]
	__int64 v70; // [rsp+60h] [rbp-A0h] BYREF
	unsigned int v71; // [rsp+68h] [rbp-98h]
	__int64 v72; // [rsp+70h] [rbp-90h]
	int v73[2]; // [rsp+78h] [rbp-88h] BYREF
	__int64 v74; // [rsp+80h] [rbp-80h]
	__int64(__fastcall * v75)(__int64); // [rsp+88h] [rbp-78h]
	__int64 v76; // [rsp+90h] [rbp-70h]
	int v77; // [rsp+98h] [rbp-68h]
	char v79[1024]; // [rsp+A0h] [rbp-60h] BYREF

	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v3 = Value[1]) != 0)
		v4 = *(_QWORD*)(v3 + 96);
	else
		v4 = 0i64;
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 40i64))(v4, 0i64);
	if (v5 < 0)
	{
		v70 = 0x141DE51E8i64;
		sub_1401A3130(14, 2, &v70, (unsigned int)v5);
		return sub_14029B080(a1, v5);
	}
	v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 32i64))(*(_QWORD*)(a1 + 104));
	v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 104) + 32i64))(*(_QWORD*)(a1 + 104));
	v9 = *(int*)(v7 + 104);
	v10 = *(_DWORD*)qword_140C63750;
	v11 = *(int*)(a1 + 80);
	v12 = v8;
	v72 = v8;
	v13 = 15;
	if (!*(_DWORD*)(v7 + 32))
	{
		v14 = dword_140C405D0;
		if (v10 < dword_140C405D0)
			v14 = v10;
		if (*((_DWORD*)&xmmword_140C405E0 + v14))
			v13 = 0;
		v68 = v13;
		goto LABEL_27;
	}
	v15 = dword_140C405D0;
	if (v10 < dword_140C405D0)
		v15 = v10;
	if (*((_DWORD*)&xmmword_140C405E0 + v15))
		v13 = 0;
	v68 = v13;
	if ((_DWORD)v11)
	{
		v13 = dword_140AE6390[v11];
	LABEL_22:
		v68 = v13;
		goto LABEL_23;
	}
	if ((_DWORD)v9)
	{
		v13 = dword_140AE6390[v9];
		goto LABEL_22;
	}
LABEL_23:
	if ((unsigned int)(v13 - 13) <= 2 && ((*(_BYTE*)(v7 + 8) & 3) != 0 || (*(_BYTE*)(v7 + 12) & 3) != 0))
	{
		v13 = 0;
		v68 = 0;
	}
LABEL_27:
	v16 = v13;
	v65 = v13;
	v17 = (*(_DWORD*)(a1 + 76) & 0x100) == 0;
	v70 = (__int64)&unk_140AE5200 + 44 * v13;
	if (v17)
	{
		v18 = *(_DWORD*)(v7 + 24);
		v69 = v18;
		if (v18 > 0xC)
			return sub_14029B080(a1, 0x80070057);
	}
	else
	{
		v18 = 1;
		v69 = 1;
	}
	v19 = *(_DWORD*)(v7 + 36);
	if ((v19 & 0xFFFFFFFD) != 0)
	{
		if (v19 != 1)
			return 2147942487i64;
		v20 = 0i64;
		v21 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 40) * 2.0)) * 0.0099999998;
		do
		{
			v20 += 4i64;
			*(float*)&v79[v20 - 4] = fmaxf(1.0, fminf(v21 * *(float*)((char*)&unk_140AED24C + v20), 255.0));
		} while (v20 < 256);
		v22 = 0i64;
		v23 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 43) * 2.0)) * 0.0099999998;
		do
		{
			v22 += 4i64;
			*(float*)&v79[v22 + 252] = fmaxf(1.0, fminf(v23 * *(float*)((char*)&unk_140AED24C + v22), 255.0));
		} while (v22 < 256);
		v24 = 0i64;
		v25 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 46) * 2.0)) * 0.0099999998;
		do
		{
			v24 += 4i64;
			*(float*)&v79[v24 + 508] = fmaxf(1.0, fminf(v25 * *(float*)((char*)&unk_140AED14C + v24), 255.0));
		} while (v24 < 256);
		v26 = 0i64;
		v27 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 49) * 2.0)) * 0.0099999998;
		do
		{
			v26 += 4i64;
			*(float*)&v79[v26 + 764] = fmaxf(1.0, fminf(v27 * *(float*)((char*)&unk_140AED14C + v26), 255.0));
		} while (v26 < 256);
	}
	else
	{
		v28 = 0i64;
		v29 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 40) * 2.0)) * 0.0099999998;
		do
		{
			v28 += 4i64;
			*(float*)&v79[v28 - 4] = fmaxf(1.0, fminf(v29 * *(float*)((char*)&unk_140AED34C + v28), 255.0));
		} while (v28 < 256);
		v30 = 0i64;
		v31 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 43) * 2.0)) * 0.0099999998;
		do
		{
			v30 += 4i64;
			*(float*)&v79[v30 + 252] = fmaxf(1.0, fminf(v31 * *(float*)((char*)&unk_140AED04C + v30), 255.0));
		} while (v30 < 256);
		v32 = 0i64;
		v33 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 46) * 2.0)) * 0.0099999998;
		do
		{
			v32 += 4i64;
			*(float*)&v79[v32 + 508] = fmaxf(1.0, fminf(v33 * *(float*)((char*)&unk_140AED04C + v32), 255.0));
		} while (v32 < 256);
		v34 = 0i64;
		v35 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v7 + 49) * 2.0)) * 0.0099999998;
		do
		{
			v34 += 4i64;
			*(float*)&v79[v34 + 764] = fmaxf(1.0, fminf(v35 * *(float*)((char*)&unk_140AED14C + v34), 255.0));
		} while (v34 < 256);
	}
	if (*(_QWORD*)(a1 + 176) > (unsigned __int64)v18)
		*(_QWORD*)(a1 + 176) = v18;
	v36 = sub_14018DBC0(*(_QWORD*)(a1 + 168), v18, 8i64);
	v37 = *(int**)(a1 + 168);
	v38 = v36;
	if (v37 != v36)
	{
		sub_1407DB590(v36, v37, 8i64 * *(_QWORD*)(a1 + 176));
		v39 = *(_QWORD*)(a1 + 168);
		if (v39)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v39 - 16) + 8i64))(v39 - 16);
		*(_QWORD*)(a1 + 168) = v38;
	}
	v40 = *(_DWORD*)(v7 + 24);
	v41 = 112i64;
	if (v40)
	{
		v42 = (_DWORD*)v70;
		while (1)
		{
			v43 = *(_DWORD*)(v7 + 8);
			v44 = *(_DWORD*)(v7 + 12);
			v71 = --v40;
			v45 = (v43 >> v40 == 0) + (v43 >> v40);
			v46 = (v44 >> v40 == 0) + (v44 >> v40);
			v47 = *(unsigned int*)(v7 + 4i64 * (*(_DWORD*)(v7 + 24) - v40 - 1) + 56);
			v48 = (unsigned int)(*v42 + v45 - 1) % *v42;
			v17 = *(_DWORD*)(a1 + 64) == 0;
			v67 = (v42[9] * ((unsigned int)(*v42 + v45 - 1) / *v42) + 3) & 0xFFFFFFFC;
			if (!v17)
				return sub_14029B080(a1, 0x80004005);
			if (v40 < v18)
			{
				v49 = *(_DWORD*)(v7 + 36);
				v66 = 0i64;
				if (v49)
				{
					if (v49 == 2)
					{
						v54 = v41 + v12;
						v55 = v12 + v47 + v41;
						if (v16)
						{
							v52 = sub_1402BEC70((__int64)v79, v7, v54, v55, v45, v46, (__int64*)&v66, &v67);
							if (v52 < 0)
							{
								v53 = 0x141DE48D8i64;
								goto LABEL_87;
							}
						}
						else
						{
							v52 = sub_1402BEA10((__int64)v79, v7, v54, v55, v45, v46, &v66, &v67);
							if (v52 < 0)
							{
								v53 = 0x141DE4A08i64;
								goto LABEL_87;
							}
						}
					}
					else if (v49 == 1)
					{
						v56 = v41 + v12;
						v57 = v12 + v47 + v41;
						if (v16)
						{
							v52 = sub_1402BFA80((__int64)v79, (_BYTE*)v7, v56, v57, v45, v46, (__int64*)&v66, &v67);
							if (v52 < 0)
							{
								v53 = 0x141DE5310i64;
								goto LABEL_87;
							}
						}
						else
						{
							v52 = sub_1402BF7D0((__int64)v79, (_BYTE*)v7, v56, v57, v45, v46, &v66, &v67);
							if (v52 < 0)
							{
								v53 = 0x141DE5320i64;
								goto LABEL_87;
							}
						}
					}
				}
				else
				{
					v50 = v41 + v12;
					v51 = v12 + v47 + v41;
					if (v16)
					{
						v52 = sub_1402BDEB0((__int64)v79, v48, v50, v51, v45, v46, (__int64*)&v66, &v67);
						if (v52 < 0)
						{
							v53 = 0x141DE4B68i64;
							goto LABEL_87;
						}
					}
					else
					{
						v52 = sub_1402BDC20((__int64)v79, v48, v50, v51, v45, v46, &v66, &v67);
						if (v52 < 0)
						{
							v53 = 0x141DE4F28i64;
						LABEL_87:
							v65 = v53;
							sub_1401A3130(14, 2, &v65, (unsigned int)v52);
							sub_14018B900((__int64)v66, 0);
							return sub_14029B080(a1, v52);
						}
					}
				}
				v58 = *(_QWORD*)(a1 + 176);
				v59 = v58 + 1;
				v60 = sub_14018DB00(*(_QWORD*)(a1 + 168), v58 + 1, 8i64);
				*(_QWORD*)&v60[2 * v58] = v66;
				v61 = *(int**)(a1 + 168);
				v62 = v60;
				if (v61 != v60)
				{
					sub_1407DB590(v60, v61, 8i64 * *(_QWORD*)(a1 + 176));
					v63 = *(_QWORD*)(a1 + 168);
					if (v63)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v63 - 16) + 8i64))(v63 - 16);
					*(_QWORD*)(a1 + 168) = v62;
				}
				v12 = v72;
				v40 = v71;
				v16 = v65;
				v42 = (_DWORD*)v70;
				*(_QWORD*)(a1 + 176) = v59;
				v18 = v69;
			}
			v41 += v47;
			if (!v40)
				goto LABEL_84;
		}
	}
	else
	{
	LABEL_84:
		*(_DWORD*)(a1 + 184) = *(_DWORD*)(v7 + 24);
		*(_DWORD*)(a1 + 188) = *(_DWORD*)(v7 + 8);
		*(_DWORD*)(a1 + 192) = *(_DWORD*)(v7 + 12);
		v73[0] = 10;
		*(_DWORD*)(a1 + 196) = v68;
		v73[1] = 2;
		v74 = a1;
		v76 = 0i64;
		v77 = 1;
		v75 = sub_14029A780;
		v64 = sub_14019DCA0((__int64)v73, 0, 0i64, (int**)(a1 + 152));
		if (v64 >= 0)
		{
			return 0i64;
		}
		else
		{
			v65 = 0x141DE5300i64;
			sub_1401A3130(14, 2, &v65, (unsigned int)v64);
			return sub_14029B080(a1, v64);
		}
	}
}
// 140AE6390: using guessed type int dword_140AE6390[];
// 140C405D0: using guessed type int dword_140C405D0;
// 140C405E0: using guessed type __int128 xmmword_140C405E0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63758: using guessed type __int64 qword_140C63758;

