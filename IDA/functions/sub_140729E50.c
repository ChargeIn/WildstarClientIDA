//----- (0000000140729E50) ----------------------------------------------------
void __fastcall sub_140729E50(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // r15
	int v5; // eax
	int* v6; // r8
	int v7; // edx
	int v8; // ecx
	unsigned int v9; // edx
	unsigned int v10; // eax
	int v11; // ecx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	int v15; // edi
	__int64 v16; // rbx
	__int64 v17; // rcx
	__int64 v18; // rbx
	__int64 v19; // rcx
	__int64 v20; // rbx
	int* v21; // rax
	int v22; // edx
	int v23; // eax
	unsigned int v24; // edx
	unsigned int v25; // eax
	int v26; // eax
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	float v31; // xmm2_4
	float v32; // xmm1_4
	float v33; // xmm4_4
	float v34; // xmm2_4
	__int64 v35; // rcx
	__int64 v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // rbx
	__int64 v39; // r14
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int64 v43; // rcx
	int* v44; // r8
	int v45; // ecx
	int v46; // edx
	int v47; // ecx
	unsigned int v48; // eax
	unsigned int v49; // ecx
	int v50; // edx
	unsigned __int64 v51; // rdi
	__int64 v52; // rax
	int v53; // ecx
	_DWORD* i; // rax
	unsigned int v55; // ebx
	__int64 v56; // r15
	int v57; // r12d
	_DWORD* v58; // r14
	__int64 v59; // r8
	__int64 v60; // [rsp+28h] [rbp-49h] BYREF
	float v61; // [rsp+30h] [rbp-41h]
	__int64 v62; // [rsp+34h] [rbp-3Dh]
	__int64 v63; // [rsp+3Ch] [rbp-35h]
	int v64; // [rsp+44h] [rbp-2Dh]
	__int64 v65; // [rsp+48h] [rbp-29h] BYREF
	__int64 v66; // [rsp+50h] [rbp-21h]
	__int128 v67; // [rsp+58h] [rbp-19h]
	__int64 v68[4]; // [rsp+68h] [rbp-9h] BYREF
	__int64 v69; // [rsp+88h] [rbp+17h] BYREF
	int v70; // [rsp+90h] [rbp+1Fh]
	__int64 v71; // [rsp+94h] [rbp+23h]
	__int64 v72; // [rsp+9Ch] [rbp+2Bh]
	int v73; // [rsp+A4h] [rbp+33h]
	__int64 v74; // [rsp+A8h] [rbp+37h]
	unsigned int v75; // [rsp+E8h] [rbp+77h] BYREF

	v75 = a3;
	v5 = *(_DWORD*)(a1 + 20) - 2;
	v74 = v3;
	switch (v5)
	{
	case 0:
	case 1:
		sub_14078AD30(*(_QWORD*)(a1 + 1176));
		sub_140789950(*(_QWORD*)(a1 + 1368));
		v6 = (int*)qword_140C63750;
		v7 = dword_140C636A8;
		*(_DWORD*)(a1 + 20) = 4;
		v8 = dword_140C54730;
		if (*v6 < dword_140C54730)
			v8 = *v6;
		v9 = dword_140C54740[v8] + v7;
		v10 = *(_DWORD*)(a1 + 1192);
		if (v10 == -1)
		{
			*(_DWORD*)(a1 + 1192) = v9;
		}
		else
		{
			if (v10 < v9)
				v10 = v9;
			*(_DWORD*)(a1 + 1192) = v10;
		}
		v11 = dword_140C547F0;
		if (*v6 < dword_140C547F0)
			v11 = *v6;
		if (!*((_BYTE*)&off_140C547E0 + v11 + 32))
		{
			if (*(_QWORD*)(a1 + 72))
				v12 = *(_QWORD*)(a1 + 1400);
			else
				v12 = *(_QWORD*)(a1 + 1416);
			if (!*(_DWORD*)(v12 + 48))
			{
				*(_DWORD*)(v12 + 48) = 1;
				v13 = *(_QWORD*)(v12 + 56);
				v60 = 1109i64;
				v63 = 2i64;
				v61 = 1.0;
				v62 = 0i64;
				v64 = 0;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v13 + 584i64))(v13, 0i64, &v60);
			}
		}
		break;
	case 2:
		v14 = *(_QWORD*)(a1 + 1368);
		v15 = 0;
		if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 1424i64) + 2896i64)
			|| *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1224i64) != v14)
		{
			v35 = *(_QWORD*)(a1 + 1184);
			v36 = *(_QWORD*)(v35 + 24);
			if (!*(_QWORD*)(*(_QWORD*)(v36 + 1424) + 2896i64))
			{
				LOBYTE(v15) = *(_QWORD*)(v36 + 1224) == v35;
				if (v15)
				{
					if (dword_140C4B2A8)
						sub_14072AFA0(a1, &dword_140C4B2A8);
				}
			}
		}
		else if (qword_140C65898 && (unsigned int)sub_1403D2140(qword_140C65898, 0x31u))
		{
			sub_1400EA3E0(*(_QWORD*)(a1 + 1424), "ShowFraudReminder", &unk_1409D15A9);
		}
		else if (*(_QWORD*)(a1 + 72))
		{
			v16 = *(_QWORD*)(a1 + 1176);
			v65 = 1113i64;
			v66 = 1065353216i64;
			v17 = *(_QWORD*)(v16 + 96);
			v67 = 0ui64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v17 + 584i64))(v17, 0i64, &v65);
			*(_DWORD*)(v16 + 104) = 3;
			v18 = *(_QWORD*)(a1 + 1368);
			if ((unsigned int)(*(_DWORD*)(v18 + 80) - 6) > 1)
			{
				v19 = *(_QWORD*)(v18 + 88);
				v65 = 1113i64;
				v66 = 1065353216i64;
				v67 = 0ui64;
				(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v19 + 584i64))(v19, 0i64, &v65);
				*(_DWORD*)(v18 + 80) = 6;
			}
			v20 = *(_QWORD*)(a1 + 1472);
			*(_DWORD*)(a1 + 1360) = 1;
			v21 = sub_14018B280(24i64, 0);
			if (v21 != (int*)-16i64)
				*((_QWORD*)v21 + 2) = 0i64;
			v22 = dword_140C636A8;
			*(_QWORD*)v21 = v20;
			*((_QWORD*)v21 + 1) = *(_QWORD*)(v20 + 8);
			**(_QWORD**)(v20 + 8) = v21;
			*(_QWORD*)(v20 + 8) = v21;
			v23 = dword_140C54730;
			if (*(_DWORD*)qword_140C63750 < dword_140C54730)
				v23 = *(_DWORD*)qword_140C63750;
			v24 = dword_140C54740[v23] + v22;
			v25 = *(_DWORD*)(a1 + 1192);
			if (v25 == -1)
			{
				*(_DWORD*)(a1 + 1192) = v24;
			}
			else
			{
				if (v25 < v24)
					v25 = v24;
				*(_DWORD*)(a1 + 1192) = v25;
			}
			sub_140712A40(*(_QWORD**)(a1 + 1448), 0x10A9Fu, (__int64)sub_140472EB0, a1);
			v26 = dword_140C547F0;
			if (*(_DWORD*)qword_140C63750 < dword_140C547F0)
				v26 = *(_DWORD*)qword_140C63750;
			if (!*((_BYTE*)&off_140C547E0 + v26 + 32))
			{
				v27 = *(_QWORD*)(a1 + 1400);
				if (*(_DWORD*)(v27 + 48) == 1)
				{
					*(_DWORD*)(v27 + 48) = 0;
					v28 = *(_QWORD*)(v27 + 56);
					v65 = 1112i64;
					v66 = 1065353216i64;
					LODWORD(v67) = 0;
					*(_QWORD*)((char*)&v67 + 4) = 2i64;
					HIDWORD(v67) = 0;
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v28 + 584i64))(v28, 0i64, &v65);
				}
				v29 = *(_QWORD*)(a1 + 1408);
				if (!*(_DWORD*)(v29 + 48))
				{
					*(_DWORD*)(v29 + 48) = 1;
					v30 = *(_QWORD*)(v29 + 56);
					v65 = 1109i64;
					v66 = 1065353216i64;
					LODWORD(v67) = 0;
					*(_QWORD*)((char*)&v67 + 4) = 2i64;
					HIDWORD(v67) = 0;
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v30 + 584i64))(v30, 0i64, &v65);
				}
			}
			(*(void(__fastcall**)(_QWORD, __int64, __int64*))(**(_QWORD**)(a1 + 1160) + 872i64))(
				*(_QWORD*)(a1 + 1160),
				23i64,
				&v60);
			v31 = *(float*)(a1 + 1304);
			v32 = *(float*)(a1 + 1320) - v31;
			if (fabs(v32) >= 0.0000099999997)
				v33 = (float)(v61 - v31) / v32;
			else
				v33 = 0.0;
			v34 = (float)((float)(*(float*)(a1 + 1316) - *(float*)(a1 + 1300)) * v33) + *(float*)(a1 + 1300);
			*(float*)(a1 + 1344) = *(float*)&v60
				- (float)((float)((float)(*(float*)(a1 + 1312) - *(float*)(a1 + 1296)) * v33)
					+ *(float*)(a1 + 1296));
			*(float*)(a1 + 1348) = *((float*)&v60 + 1) - v34;
		}
		else
		{
			if (dword_140C4B248)
				sub_14072AFA0(a1, &dword_140C4B248);
			sub_1400EA3E0(*(_QWORD*)(a1 + 1424), "ShowPurchaseReminder", byte_1409D158B);
		}
		break;
	case 5:
		*(_DWORD*)(a1 + 20) = 8;
		v37 = *(_QWORD*)(a1 + 1160);
		v68[0] = 1120i64;
		v68[1] = 1065353216i64;
		v68[2] = 0i64;
		v68[3] = 0i64;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v37 + 584i64))(v37, 0i64, v68);
		v38 = 0i64;
		v39 = 3i64;
		do
		{
			sub_14078A080(v38 + *(_QWORD*)(a1 + 1272));
			v38 += 152i64;
			--v39;
		} while (v39);
		sub_14072B050(a1);
		v40 = *(_QWORD*)(a1 + 1176);
		v65 = 1118i64;
		*(_DWORD*)(v40 + 104) = 0;
		v41 = *(_QWORD*)(v40 + 96);
		v66 = 1065353216i64;
		LODWORD(v67) = 0;
		*(_QWORD*)((char*)&v67 + 4) = 2i64;
		HIDWORD(v67) = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v41 + 584i64))(v41, 0i64, &v65);
		sub_14078A840(*(_QWORD*)(a1 + 1184), *(_DWORD*)(a1 + 80));
		break;
	case 6:
		v51 = 0i64;
		if (*(_DWORD*)(a1 + 1256) == 3)
		{
			v52 = *(_QWORD*)(a1 + 1272);
			v53 = 0;
			for (i = (_DWORD*)(v52 + 92); *i != 4; i += 38)
			{
				if ((unsigned int)++v53 >= 3)
				{
					sub_140729770(a1);
					return;
				}
			}
		}
		v55 = 0;
		v56 = 0i64;
		v57 = 0;
		v58 = (_DWORD*)(a1 + 56);
		do
		{
			v59 = *(_QWORD*)(a1 + 1272);
			if (!*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v56 + v59 + 24) + 1424i64) + 2896i64)
				&& *(_QWORD*)(*(_QWORD*)(v56 + v59 + 24) + 1224i64) == v56 + v59)
			{
				if (*v58)
				{
					sub_14078A080(v59 + 152i64 * v55);
				}
				else
				{
					v75 = v55;
					sub_1400161D0(qword_140C635F0, 0x3CDu, (__int64)&v75);
				}
				++v57;
			}
			++v55;
			++v58;
			v56 += 152i64;
		} while (v55 < 3);
		if (!v57)
		{
			do
			{
				sub_14078A080(v51 + *(_QWORD*)(a1 + 1272));
				v51 += 152i64;
			} while (v51 < 0x1C8);
		}
		break;
	case 7:
		sub_14072C110(a1);
		sub_140729890(a1);
		v42 = *(_QWORD*)(a1 + 1176);
		*(_DWORD*)(a1 + 20) = 3;
		sub_14078AD30(v42);
		v43 = *(_QWORD*)(a1 + 1160);
		v70 = 1065353216;
		v69 = 1118i64;
		v71 = 0i64;
		v72 = 0i64;
		v73 = 0;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v43 + 584i64))(v43, 0i64, &v69);
		v44 = (int*)qword_140C63750;
		v45 = dword_140C54790;
		if (*(_DWORD*)qword_140C63750 < dword_140C54790)
			v45 = *(_DWORD*)qword_140C63750;
		v46 = dword_140C636A8 + dword_140C547A0[v45];
		*(_DWORD*)(a1 + 1480) = v46;
		v47 = dword_140C54730;
		if (*v44 < dword_140C54730)
			v47 = *v44;
		v48 = *(_DWORD*)(a1 + 1192);
		v49 = v46 + dword_140C54740[v47];
		if (v48 == -1)
		{
			*(_DWORD*)(a1 + 1192) = v49;
		}
		else
		{
			if (v48 < v49)
				v48 = v49;
			*(_DWORD*)(a1 + 1192) = v48;
		}
		v50 = dword_140C547F0;
		if (*v44 < dword_140C547F0)
			v50 = *v44;
		sub_14001A6C0((__int64)&off_140C547E0, v50, 1);
		break;
	default:
		return;
	}
}
// 140729E82: variable 'v3' is possibly undefined
// 1409D158B: using guessed type _BYTE byte_1409D158B[30];
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C4B248: using guessed type int dword_140C4B248;
// 140C4B2A8: using guessed type int dword_140C4B2A8;
// 140C54730: using guessed type int dword_140C54730;
// 140C54740: using guessed type int dword_140C54740[16];
// 140C54790: using guessed type int dword_140C54790;
// 140C547A0: using guessed type int dword_140C547A0[14];
// 140C547E0: using guessed type __int64 (__fastcall *off_140C547E0)();
// 140C547F0: using guessed type int dword_140C547F0;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

