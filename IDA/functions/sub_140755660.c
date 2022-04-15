//----- (0000000140755660) ----------------------------------------------------
__int64 __fastcall sub_140755660(__int64 a1, unsigned int** a2)
{
	__int64 result; // rax
	int* v5; // rdi
	unsigned int v6; // ebx
	int v7; // r14d
	__int64 v8; // rdx
	int v9; // r13d
	__int64 v10; // r12
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rcx
	__int16* v15; // rax
	__int64 v16; // rdx
	int** v17; // rax
	__int64 v18; // rdx
	unsigned __int16* v19; // rdi
	int v20; // r9d
	__int64 v21; // rcx
	int* v22; // rax
	__int64 v23; // rcx
	int v24; // r14d
	__int64 v25; // rbx
	int* v26; // rax
	__int64 v27; // rcx
	int* v28; // rax
	int* v29; // rax
	_QWORD* v30; // r13
	__int64 v31; // rax
	int* v32; // r14
	__int64 v33; // r12
	int* v34; // rax
	int* v35; // r14
	__int64 v36; // rax
	__int64 v37; // rdx
	_DWORD* v38; // rax
	__int64* v39; // rax
	unsigned int v40; // ebx
	_DWORD* v41; // rcx
	__int64* v42; // rax
	__int64 v43; // rcx
	int* v44; // rax
	int* v45; // rax
	_QWORD* v46; // r13
	__int16* v47; // rax
	__int64 v48; // rdx
	_DWORD* v49; // rax
	__int64* v50; // rax
	_DWORD* v51; // rax
	__int64* v52; // rax
	__int64 v53; // rcx
	__int16* v54; // rax
	__int64 v55; // rdx
	__int64 v56; // rdx
	__int64 v57; // rax
	int* v58; // r14
	__int64 v59; // r12
	int* v60; // rax
	__int64 v61; // rcx
	int* v62; // rdx
	__int64 v63; // rax
	__int64 v64; // rax
	__int64 v65; // rdx
	__int64 v66; // rdx
	__int64 v67; // rdx
	unsigned __int64 v68; // rcx
	char v69[8]; // [rsp+20h] [rbp-E0h] BYREF
	int* v70; // [rsp+28h] [rbp-D8h]
	int* v71; // [rsp+30h] [rbp-D0h]
	__int64 v72; // [rsp+38h] [rbp-C8h]
	__int64 v73; // [rsp+40h] [rbp-C0h] BYREF
	int* v74; // [rsp+48h] [rbp-B8h]
	int* v75; // [rsp+50h] [rbp-B0h]
	int* v76; // [rsp+58h] [rbp-A8h]
	__int64(__fastcall * *v77)(); // [rsp+60h] [rbp-A0h] BYREF
	char v78[8]; // [rsp+68h] [rbp-98h] BYREF
	_WORD* v79; // [rsp+70h] [rbp-90h]
	_WORD* v80; // [rsp+78h] [rbp-88h]
	__int128 v81; // [rsp+120h] [rbp+20h]
	int* v82; // [rsp+130h] [rbp+30h]
	int v83; // [rsp+188h] [rbp+88h]
	int v84; // [rsp+190h] [rbp+90h]
	__int64 v85; // [rsp+198h] [rbp+98h]

	if (!a2)
		return 0i64;
	result = sub_14024DB80((*a2)[10]);
	v5 = (int*)result;
	if (result)
	{
		v6 = **a2;
		v7 = sub_1404A7F50(qword_140C659B0, v6);
		v83 = v7;
		result = sub_1404A8310(qword_140C659B0, v6, 0);
		v9 = result;
		v84 = result;
		if (v7 || (_DWORD)result)
		{
			v10 = *(_QWORD*)(qword_140C65898 + 120);
			v85 = v10;
			if (!v10)
				return 0i64;
			sub_140058900(a1, v8, 0);
			sub_1400EFF50(a1, v11, (unsigned __int64*)"nDatacubeId", v6);
			sub_1400EFF50(a1, v12, (unsigned __int64*)"eDatacubeType", (*a2)[1]);
			sub_1400EFF50(a1, v13, (unsigned __int64*)"nWorldZoneId", *v5);
			v15 = sub_14034BDD0(v14, v5[1]);
			sub_1400F0090(a1, v16, (unsigned __int64*)"strZoneName", (unsigned __int16*)v15);
			v17 = (int**)sub_1404A86A0(qword_140C659B0, v6);
			v19 = 0i64;
			if (v17)
				v20 = **v17;
			else
				v20 = 0;
			sub_1400EFF50(a1, v18, (unsigned __int64*)"nVolumeId", v20);
			if (v7)
			{
				v22 = sub_14018B280(16i64, 0);
				v74 = v22;
				v75 = v22;
				v23 = (__int64)(v22 + 4);
				v76 = v22 + 4;
				if (v22)
					*(_WORD*)v22 = 0;
				v24 = 0;
				v25 = 3i64;
				do
				{
					v26 = (int*)sub_14034BDD0(v23, (*a2)[v25]);
					if (!v26)
						break;
					v27 = 0i64;
					if (*(_WORD*)v26)
					{
						do
							++v27;
						while (*((_WORD*)v26 + v27));
					}
					sub_14001C310(&v73, v26, (int*)((char*)v26 + 2 * v27));
					++v24;
					++v25;
				} while ((unsigned __int64)v24 < 6);
				sub_1400B6F30((__int64)&v77);
				v77 = off_140B69230;
				v82 = 0i64;
				v81 = 0i64;
				v28 = sub_14018B280(16i64, 0);
				*(_QWORD*)&v81 = v28;
				*((_QWORD*)&v81 + 1) = v28;
				v82 = v28 + 4;
				if (v28)
					*(_WORD*)v28 = 0;
				v29 = sub_14018B280(96i64, 0);
				if (v29)
					v30 = (_QWORD*)sub_1404DB7E0((__int64)v29, v10);
				else
					v30 = 0i64;
				v31 = 0i64;
				v32 = 0i64;
				v70 = 0i64;
				v71 = 0i64;
				v72 = 0i64;
				do
					++v31;
				while (word_140B0A7C8[v31]);
				v33 = (2 * v31) >> 1;
				if ((unsigned __int64)(v33 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v32 = sub_14018B280(2 * (v33 + 1), 0);
					v70 = v32;
					v71 = v32;
					v72 = (__int64)v32 + 2 * v33 + 2;
				}
				sub_1407DB590(v32, (int*)word_140B0A7C8, 2 * v33);
				v34 = (int*)((char*)v32 + 2 * v33);
				v71 = v34;
				if (v34)
					*(_WORD*)v34 = 0;
				sub_1400B7480((__int64)&v77, v30);
				(*(void(__fastcall**)(_QWORD*, char*))(*v30 + 72i64))(v30, v69);
				if (v70)
					sub_14018B900((__int64)v70, 0);
				v35 = v74;
				sub_14001C480((__int64)v78, v74, v75);
				v36 = sub_1400B7660(&v77);
				sub_1400F0090(a1, v37, (unsigned __int64*)"strText", *(unsigned __int16**)(v36 + 8));
				sub_140058710(a1, (unsigned __int64*)"bIsComplete", 0xBui64);
				v38 = *(_DWORD**)(a1 + 16);
				*v38 = 1;
				v38[2] = 1;
				*(_QWORD*)(a1 + 16) += 16i64;
				v39 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v39, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				v40 = (*a2)[9];
				sub_140058710(a1, (unsigned __int64*)"bHasSound", 9ui64);
				v41 = *(_DWORD**)(a1 + 16);
				v41[2] = 1;
				*v41 = v40 != 0;
				*(_QWORD*)(a1 + 16) += 16i64;
				v42 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v42, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				v43 = v81;
				*(_QWORD*)(a1 + 16) -= 32i64;
				if (v43)
					sub_14018B900(v43, 0);
				sub_1400B7390(&v77);
				if (v35)
					sub_14018B900((__int64)v35, 0);
				v10 = v85;
			}
			else
			{
				v47 = sub_14034BDD0(v21, 170159);
				sub_1400F0090(a1, v48, (unsigned __int64*)"strText", (unsigned __int16*)v47);
				sub_140058710(a1, (unsigned __int64*)"bIsComplete", 0xBui64);
				v49 = *(_DWORD**)(a1 + 16);
				*v49 = 0;
				v49[2] = 1;
				*(_QWORD*)(a1 + 16) += 16i64;
				v50 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v50, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				sub_140058710(a1, (unsigned __int64*)"bHasSound", 9ui64);
				v51 = *(_DWORD**)(a1 + 16);
				*v51 = 0;
				v51[2] = 1;
				*(_QWORD*)(a1 + 16) += 16i64;
				v52 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v52, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				if ((*a2)[1] != 1)
				{
					v54 = sub_14034BDD0(v53, 170159);
					sub_1400F0090(a1, v55, (unsigned __int64*)"strTitle", (unsigned __int16*)v54);
				LABEL_61:
					if ((*a2)[1] == 1)
					{
						sub_1400EFF50(a1, v56, (unsigned __int64*)"nNumCompleted", v9);
						sub_1400EFF50(a1, v66, (unsigned __int64*)"nNumTotal", (*a2)[11]);
						if (v7)
						{
							v68 = *((_QWORD*)*a2 + 6);
							if (v68)
							{
								if (v68 <= qword_140C3FE70)
									v19 = (unsigned __int16*)(v68 + qword_140C3FE68);
							}
						}
						else
						{
							v19 = (unsigned __int16*)&unk_1409F96EC;
						}
						sub_1400F0090(a1, v67, (unsigned __int64*)"strAsset", v19);
					}
					return 1i64;
				}
			}
			sub_1400B6F30((__int64)&v77);
			v77 = off_140B69230;
			v82 = 0i64;
			v81 = 0i64;
			v44 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v81 = v44;
			*((_QWORD*)&v81 + 1) = v44;
			v82 = v44 + 4;
			if (v44)
				*(_WORD*)v44 = 0;
			v45 = sub_14018B280(96i64, 0);
			if (v45)
				v46 = (_QWORD*)sub_1404DB7E0((__int64)v45, v10);
			else
				v46 = 0i64;
			v57 = 0i64;
			v58 = 0i64;
			v70 = 0i64;
			v71 = 0i64;
			v72 = 0i64;
			do
				++v57;
			while (word_140B0A7C8[v57]);
			v59 = (2 * v57) >> 1;
			if ((unsigned __int64)(v59 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
			{
				v58 = sub_14018B280(2 * (v59 + 1), 0);
				v70 = v58;
				v71 = v58;
				v72 = (__int64)v58 + 2 * v59 + 2;
			}
			sub_1407DB590(v58, (int*)word_140B0A7C8, 2 * v59);
			v60 = (int*)((char*)v58 + 2 * v59);
			v71 = v60;
			if (v60)
				*(_WORD*)v60 = 0;
			sub_1400B7480((__int64)&v77, v46);
			(*(void(__fastcall**)(_QWORD*, char*))(*v46 + 72i64))(v46, v69);
			v61 = (__int64)v70;
			if (v70)
				sub_14018B900((__int64)v70, 0);
			v62 = (int*)sub_14034BDD0(v61, (*a2)[2]);
			if (v62)
			{
				v63 = 0i64;
				if (*(_WORD*)v62)
				{
					do
						++v63;
					while (*((_WORD*)v62 + v63));
				}
				sub_14001C480((__int64)v78, v62, (int*)((char*)v62 + 2 * v63));
			}
			else if (v79 != v80)
			{
				*v79 = 0;
				v80 = v79;
			}
			v64 = sub_1400B7660(&v77);
			sub_1400F0090(a1, v65, (unsigned __int64*)"strTitle", *(unsigned __int16**)(v64 + 8));
			if ((_QWORD)v81)
				sub_14018B900(v81, 0);
			sub_1400B7390(&v77);
			v7 = v83;
			v9 = v84;
			goto LABEL_61;
		}
	}
	return result;
}
// 140755730: variable 'v8' is possibly undefined
// 140755742: variable 'v11' is possibly undefined
// 140755758: variable 'v12' is possibly undefined
// 14075576A: variable 'v13' is possibly undefined
// 140755772: variable 'v14' is possibly undefined
// 140755784: variable 'v16' is possibly undefined
// 1407557B3: variable 'v18' is possibly undefined
// 1407557FB: variable 'v23' is possibly undefined
// 140755995: variable 'v37' is possibly undefined
// 140755AF1: variable 'v21' is possibly undefined
// 140755B03: variable 'v48' is possibly undefined
// 140755BBA: variable 'v53' is possibly undefined
// 140755BCC: variable 'v55' is possibly undefined
// 140755C9B: variable 'v61' is possibly undefined
// 140755CFF: variable 'v65' is possibly undefined
// 140755D42: variable 'v56' is possibly undefined
// 140755D58: variable 'v66' is possibly undefined
// 140755D97: variable 'v67' is possibly undefined
// 140B0A7C8: using guessed type __int16 word_140B0A7C8[];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;
// 140755660: using guessed type char var_150[8];
// 140755660: using guessed type char var_108[8];

