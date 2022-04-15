//----- (00000001402AFFC0) ----------------------------------------------------
__int64 __fastcall sub_1402AFFC0(__int64 a1)
{
	int v1; // r13d
	_QWORD* Value; // rax
	__int64 v4; // rcx
	__int64 v5; // rcx
	signed int v6; // ebx
	__int64 v8; // r15
	__int64 v9; // rax
	__int64 v10; // r8
	int v11; // edx
	__int64 v12; // r9
	__int64 v13; // rbx
	int v14; // r10d
	int v15; // ecx
	int v16; // eax
	__int64 v17; // r12
	unsigned int* v18; // rdx
	bool v19; // zf
	int v20; // eax
	__int64 v21; // rax
	float v22; // xmm5_4
	__int64 v23; // rax
	float v24; // xmm5_4
	__int64 v25; // rax
	float v26; // xmm5_4
	__int64 v27; // rax
	float v28; // xmm4_4
	__int64 v29; // rax
	float v30; // xmm5_4
	__int64 v31; // rax
	float v32; // xmm5_4
	__int64 v33; // rax
	float v34; // xmm5_4
	__int64 v35; // rax
	float v36; // xmm4_4
	unsigned int v37; // r9d
	__int64 v38; // rsi
	unsigned int v39; // r10d
	unsigned int v40; // r11d
	unsigned int v41; // ecx
	int v42; // r10d
	int v43; // r11d
	__int64 v44; // r8
	int v45; // eax
	__int64 v46; // r9
	__int64 v47; // r8
	signed int v48; // ebx
	__int64 v49; // rax
	__int64 v50; // r9
	__int64 v51; // r8
	__int64 v52; // r9
	__int64 v53; // r8
	__int64 v54; // rbx
	int* v55; // rax
	int* v56; // rdx
	int* v57; // r12
	__int64 v58; // rcx
	__int64 v59; // rcx
	__int64 v60; // rax
	__int64 v61; // rdx
	int v62; // eax
	int v63; // eax
	int v64; // eax
	__int64 v65; // rcx
	__int64 v66; // r9
	int v67; // r10d
	__int64 v68; // r8
	signed int v69; // ebx
	unsigned int v70; // [rsp+40h] [rbp-C0h] BYREF
	int* v71; // [rsp+48h] [rbp-B8h] BYREF
	int v72; // [rsp+50h] [rbp-B0h]
	__int64 v73[2]; // [rsp+58h] [rbp-A8h] BYREF
	unsigned int v74; // [rsp+68h] [rbp-98h]
	__int64 v75; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v76; // [rsp+78h] [rbp-88h]
	__int64 v77; // [rsp+80h] [rbp-80h]
	__int64 v78; // [rsp+88h] [rbp-78h]
	__int64 v79; // [rsp+90h] [rbp-70h]
	char v81[1024]; // [rsp+A0h] [rbp-60h] BYREF

	v1 = 0;
	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v4 = Value[1]) != 0)
		v5 = *(_QWORD*)(v4 + 96);
	else
		v5 = 0i64;
	v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v5 + 40i64))(v5, 0i64);
	if (v6 < 0)
	{
		LOBYTE(v1) = v6 == -1610416127;
		v75 = 0x141DE71B8i64;
		sub_1401A3130(14, 2, &v75, (unsigned int)v6, v1);
		return sub_1402B1940(a1, v6);
	}
	v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 352) + 32i64))(*(_QWORD*)(a1 + 352));
	v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 352) + 32i64))(*(_QWORD*)(a1 + 352));
	v10 = *(int*)(v8 + 104);
	v11 = *(_DWORD*)qword_140C63750;
	v12 = *(int*)(a1 + 92);
	v13 = v9;
	v77 = v9;
	v14 = 15;
	if (!*(_DWORD*)(v8 + 32))
	{
		v15 = dword_140C405D0;
		if (v11 < dword_140C405D0)
			v15 = v11;
		if (*((_DWORD*)&xmmword_140C405E0 + v15))
			v14 = 0;
		v72 = v14;
		goto LABEL_27;
	}
	v16 = dword_140C405D0;
	if (v11 < dword_140C405D0)
		v16 = v11;
	if (*((_DWORD*)&xmmword_140C405E0 + v16))
		v14 = 0;
	v72 = v14;
	if ((_DWORD)v12)
	{
		v14 = dword_140AE6390[v12];
	LABEL_22:
		v72 = v14;
		goto LABEL_23;
	}
	if ((_DWORD)v10)
	{
		v14 = dword_140AE6390[v10];
		goto LABEL_22;
	}
LABEL_23:
	if ((unsigned int)(v14 - 13) <= 2 && ((*(_BYTE*)(v8 + 8) & 3) != 0 || (*(_BYTE*)(v8 + 12) & 3) != 0))
	{
		v14 = 0;
		v72 = 0;
	}
LABEL_27:
	v17 = v14;
	v73[0] = v14;
	v18 = (unsigned int*)((char*)&unk_140AE5200 + 44 * v14);
	v19 = (*(_DWORD*)(a1 + 84) & 0x100) == 0;
	v75 = (__int64)v18;
	if (v19)
	{
		v74 = *(_DWORD*)(v8 + 24);
		if (v74 > 0xC)
			return 2147942487i64;
	}
	else
	{
		v74 = 1;
	}
	v20 = *(_DWORD*)(v8 + 36);
	if ((v20 & 0xFFFFFFFD) != 0)
	{
		if (v20 != 1)
			return 2147942487i64;
		v21 = 0i64;
		v22 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 40) * 2.0)) * 0.0099999998;
		do
		{
			v21 += 4i64;
			*(float*)&v81[v21 - 4] = fmaxf(1.0, fminf(v22 * *(float*)((char*)&unk_140AED24C + v21), 255.0));
		} while (v21 < 256);
		v23 = 0i64;
		v24 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 43) * 2.0)) * 0.0099999998;
		do
		{
			v23 += 4i64;
			*(float*)&v81[v23 + 252] = fmaxf(1.0, fminf(v24 * *(float*)((char*)&unk_140AED24C + v23), 255.0));
		} while (v23 < 256);
		v25 = 0i64;
		v26 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 46) * 2.0)) * 0.0099999998;
		do
		{
			v25 += 4i64;
			*(float*)&v81[v25 + 508] = fmaxf(1.0, fminf(v26 * *(float*)((char*)&unk_140AED14C + v25), 255.0));
		} while (v25 < 256);
		v27 = 0i64;
		v28 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 49) * 2.0)) * 0.0099999998;
		do
		{
			v27 += 4i64;
			*(float*)&v81[v27 + 764] = fmaxf(1.0, fminf(v28 * *(float*)((char*)&unk_140AED14C + v27), 255.0));
		} while (v27 < 256);
	}
	else
	{
		v29 = 0i64;
		v30 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 40) * 2.0)) * 0.0099999998;
		do
		{
			v29 += 4i64;
			*(float*)&v81[v29 - 4] = fmaxf(1.0, fminf(v30 * *(float*)((char*)&unk_140AED34C + v29), 255.0));
		} while (v29 < 256);
		v31 = 0i64;
		v32 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 43) * 2.0)) * 0.0099999998;
		do
		{
			v31 += 4i64;
			*(float*)&v81[v31 + 252] = fmaxf(1.0, fminf(v32 * *(float*)((char*)&unk_140AED04C + v31), 255.0));
		} while (v31 < 256);
		v33 = 0i64;
		v34 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 46) * 2.0)) * 0.0099999998;
		do
		{
			v33 += 4i64;
			*(float*)&v81[v33 + 508] = fmaxf(1.0, fminf(v34 * *(float*)((char*)&unk_140AED04C + v33), 255.0));
		} while (v33 < 256);
		v35 = 0i64;
		v36 = (float)(200.0 - (float)((float)*(unsigned __int8*)(v8 + 49) * 2.0)) * 0.0099999998;
		do
		{
			v35 += 4i64;
			*(float*)&v81[v35 + 764] = fmaxf(1.0, fminf(v36 * *(float*)((char*)&unk_140AED14C + v35), 255.0));
		} while (v35 < 256);
	}
	v37 = *(_DWORD*)(v8 + 24);
	v38 = 112i64;
	if (v37)
	{
		while (1)
		{
			v39 = *(_DWORD*)(v8 + 8);
			v40 = *(_DWORD*)(v8 + 12);
			v76 = --v37;
			v41 = *v18;
			v42 = (v39 >> v37 == 0) + (v39 >> v37);
			v43 = (v40 >> v37 == 0) + (v40 >> v37);
			v44 = *(unsigned int*)(v8 + 4i64 * (*(_DWORD*)(v8 + 24) - v37 - 1) + 56);
			v78 = v44;
			v18 = (unsigned int*)v75;
			v70 = (*(_DWORD*)(v75 + 36) * ((v41 + v42 - 1) / v41) + 3) & 0xFFFFFFFC;
			if (*(_DWORD*)(a1 + 72))
				return sub_1402B1940(a1, 0x80004005);
			if (v37 < v74)
			{
				v71 = 0i64;
				v79 = 16i64 * v37;
				v45 = *(_DWORD*)(v8 + 36);
				if (v45)
				{
					if (v45 == 2)
					{
						v50 = v13 + v44 + v38;
						v51 = v38 + v13;
						if (v17)
						{
							v48 = sub_1402BEC70((__int64)v81, v8, v51, v50, v42, v43, (__int64*)&v71, &v70);
							if (v48 < 0)
							{
								v49 = 0x141DE7300i64;
								goto LABEL_81;
							}
						}
						else
						{
							v48 = sub_1402BEA10((__int64)v81, v8, v51, v50, v42, v43, &v71, &v70);
							if (v48 < 0)
							{
								v49 = 0x141DE7188i64;
								goto LABEL_81;
							}
						}
					}
					else if (v45 == 1)
					{
						v52 = v13 + v44 + v38;
						v53 = v38 + v13;
						if (v17)
						{
							v48 = sub_1402BFA80((__int64)v81, (_BYTE*)v8, v53, v52, v42, v43, (__int64*)&v71, &v70);
							if (v48 < 0)
							{
								v49 = 0x141DE72E0i64;
								goto LABEL_81;
							}
						}
						else
						{
							v48 = sub_1402BF7D0((__int64)v81, (_BYTE*)v8, v53, v52, v42, v43, &v71, &v70);
							if (v48 < 0)
							{
								v49 = 0x141DE72F0i64;
								goto LABEL_81;
							}
						}
					}
				}
				else
				{
					v46 = v13 + v44 + v38;
					v47 = v38 + v13;
					if (v17)
					{
						v48 = sub_1402BDEB0((__int64)v81, v75, v47, v46, v42, v43, (__int64*)&v71, &v70);
						if (v48 < 0)
						{
							v49 = 0x141DE7198i64;
							goto LABEL_81;
						}
					}
					else
					{
						v48 = sub_1402BDC20((__int64)v81, v75, v47, v46, v42, v43, &v71, &v70);
						if (v48 < 0)
						{
							v49 = 0x141DE71A8i64;
						LABEL_81:
							v73[0] = v49;
							sub_1401A3130(14, 2, v73, (unsigned int)v48);
							sub_14018B900((__int64)v71, 0);
							return sub_1402B1940(a1, v48);
						}
					}
				}
				v54 = *(_QWORD*)(a1 + 416);
				v55 = sub_14018DB00(*(_QWORD*)(a1 + 408), v54 + 1, 8i64);
				*(_QWORD*)&v55[2 * v54] = v71;
				v56 = *(int**)(a1 + 408);
				v57 = v55;
				if (v56 != v55)
				{
					sub_1407DB590(v55, v56, 8i64 * *(_QWORD*)(a1 + 416));
					v58 = *(_QWORD*)(a1 + 408);
					if (v58)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v58 - 16) + 8i64))(v58 - 16);
					*(_QWORD*)(a1 + 408) = v57;
				}
				v59 = v79;
				v44 = v78;
				v37 = v76;
				v17 = v73[0];
				v18 = (unsigned int*)v75;
				v60 = v54 + 1;
				v13 = v77;
				*(_QWORD*)(a1 + 416) = v60;
				*(_QWORD*)(v59 + a1 + 152) = v71;
				*(_QWORD*)(v59 + a1 + 160) = v70;
			}
			v38 += v44;
			if (!v37)
			{
				v14 = v72;
				break;
			}
		}
	}
	if (*(_DWORD*)(a1 + 72))
		return sub_1402B1940(a1, 0x80004005);
	v61 = *(int*)(a1 + 80);
	*(_DWORD*)(a1 + 108) = *(_DWORD*)(v8 + 8);
	v62 = *(_DWORD*)(v8 + 12);
	*(_DWORD*)(a1 + 120) = 1;
	*(_DWORD*)(a1 + 112) = v62;
	*(_DWORD*)(a1 + 116) = v74;
	v63 = dword_140AE8120[v17];
	*(_QWORD*)(a1 + 128) = 1i64;
	*(_DWORD*)(a1 + 124) = v63;
	*(_DWORD*)(a1 + 136) = dword_140AE7EC8[v61];
	v64 = sub_14027A160(v14, v61);
	v65 = *(_QWORD*)(a1 + 56);
	*(_DWORD*)(a1 + 140) = v64;
	*(_DWORD*)(a1 + 144) = dword_140AE7EE0[v66];
	v73[1] = (__int64)sub_1402B08B0;
	*(_DWORD*)(a1 + 148) = 0;
	*(_DWORD*)(a1 + 88) = v67;
	v73[0] = a1;
	v69 = sub_140279D70(v65, v73, v68, 0i64, (int**)(a1 + 400));
	if (v69 >= 0)
		return 0i64;
	v73[0] = 0x141DE72D0i64;
	sub_1401A3130(14, 2, v73, (unsigned int)v69);
	return sub_1402B1940(a1, v69);
}
// 1402B07DD: variable 'v66' is possibly undefined
// 1402B080D: variable 'v67' is possibly undefined
// 1402B081B: variable 'v68' is possibly undefined
// 140AE6390: using guessed type int dword_140AE6390[];
// 140AE7EC8: using guessed type int dword_140AE7EC8[6];
// 140AE7EE0: using guessed type int dword_140AE7EE0[6];
// 140AE8120: using guessed type int dword_140AE8120[28];
// 140C405D0: using guessed type int dword_140C405D0;
// 140C405E0: using guessed type __int128 xmmword_140C405E0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C63758: using guessed type __int64 qword_140C63758;

