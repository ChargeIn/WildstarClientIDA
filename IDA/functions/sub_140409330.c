//----- (0000000140409330) ----------------------------------------------------
__int64 __fastcall sub_140409330(__int64 a1, _DWORD* a2)
{
	_QWORD* v4; // rax
	const wchar_t* v5; // rdx
	__int64 v6; // rax
	void(__fastcall * **v7)(_QWORD); // rsi
	int v8; // r14d
	_QWORD* v9; // rax
	__int64 v11; // rcx
	_QWORD* v12; // rbx
	int* v13; // rax
	int v14; // edx
	_QWORD* v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rsi
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rdx
	int v24; // r15d
	_QWORD* v25; // rax
	__int64 v26; // rdx
	int v27; // r10d
	__int64 v28; // rcx
	unsigned __int16* v29; // rbx
	__int64 v30; // rax
	__int64 v31; // r14
	__int64 v32; // rax
	_QWORD* v33; // rax
	__int64 v34; // rdx
	__int64 v35; // rdx
	unsigned int v36; // edx
	unsigned __int64 v37; // r8
	unsigned __int64 v38; // rcx
	unsigned __int64 v39; // rax
	__m128 v40; // [rsp+20h] [rbp-E0h] BYREF
	__int64(__fastcall * *v41)(); // [rsp+30h] [rbp-D0h] BYREF
	int v42; // [rsp+38h] [rbp-C8h]
	__int64 v43; // [rsp+40h] [rbp-C0h]
	int v44; // [rsp+48h] [rbp-B8h]
	char v45[8]; // [rsp+50h] [rbp-B0h] BYREF
	int v46; // [rsp+58h] [rbp-A8h]
	__int64 v47; // [rsp+60h] [rbp-A0h]
	char v48[1216]; // [rsp+70h] [rbp-90h] BYREF
	char v49[1216]; // [rsp+530h] [rbp+430h] BYREF
	char v50[1216]; // [rsp+9F0h] [rbp+8F0h] BYREF
	__int64 v51[96]; // [rsp+EB0h] [rbp+DB0h] BYREF
	__int64 v52; // [rsp+11B0h] [rbp+10B0h]
	__int64 v53; // [rsp+1364h] [rbp+1264h]

	switch (*a2)
	{
	case 4:
		v12 = *(_QWORD**)(a1 + 16);
		v13 = sub_1400B5DF0(qword_140C658F0, a2[2], 0i64);
		if (!(unsigned int)sub_140415C70(v12, (__int64)v13))
			return 1i64;
		goto LABEL_19;
	case 5:
		v14 = a2[2];
		v15 = *(_QWORD**)(a1 + 16);
		if (v14)
		{
			v16 = sub_1405A8A40(a1, v14);
			if (v16)
			{
				if ((unsigned int)sub_140663030(v15, v16))
				{
				LABEL_19:
					sub_1400FB540(a1);
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
				}
			}
		}
		return 1i64;
	case 6:
		sub_14040B420(a1, 0x140000000i64, a2[2]);
		return 1i64;
	case 8:
		sub_14040FAE0((__int64)v51);
		if (a2 == (_DWORD*)-8i64 || !sub_1404112E0((__int64)v51, (__int64)(a2 + 2)))
			goto LABEL_51;
		v4 = (_QWORD*)sub_14040FC60((__int64)v48, (__int64)v51);
		v5 = L"uItem";
		goto LABEL_47;
	case 9:
		sub_14040FAE0((__int64)v51);
		v6 = sub_1403ACBB0(qword_140C65898 + 160, *((_QWORD*)a2 + 1));
		v7 = (void(__fastcall***)(_QWORD))v6;
		if (v6)
		{
			v8 = 0;
			if (v6 != v51[0])
			{
				v8 = 1;
				if (v51[0])
					(*(void (**)(void))(*(_QWORD*)v51[0] + 8i64))();
				v51[0] = (__int64)v7;
				(**v7)(v7);
			}
			v53 = 0i64;
			sub_140412AD0((__int64)v51);
			if (v8)
			{
				v9 = (_QWORD*)sub_14040FC60((__int64)v50, (__int64)v51);
				sub_14040B3A0(a1, (__int64)L"uItem", v9);
				if (v51[0])
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v51[0] + 8i64))(v51[0]);
					v51[0] = 0i64;
				}
				if (v52)
					sub_14018B900(v52, 0);
				return 1i64;
			}
		}
		v11 = v51[0];
		if (!v51[0])
			goto LABEL_53;
		goto LABEL_52;
	case 0xA:
		v17 = *(_QWORD*)(a1 + 16);
		v18 = *(_QWORD*)(v17 + 32);
		v41 = off_140B569F0;
		v44 = 1;
		v19 = *(_QWORD*)(v18 + 112);
		v43 = v17;
		if (*(_QWORD*)(v18 + 120) >= v19)
			sub_14005E2C0(v17);
		v20 = *(_QWORD*)(v17 + 16);
		v21 = sub_14005C1B0(v17, 0, 0);
		*(_DWORD*)(v20 + 8) = 5;
		*(_QWORD*)v20 = v21;
		*(_QWORD*)(v17 + 16) += 16i64;
		v22 = sub_1400578C0(v17);
		v23 = *(_QWORD*)(a1 + 16);
		v40 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)(unsigned int)a2[3], (__m128)(unsigned int)a2[4]), (__m128)0i64);
		v24 = v22;
		v42 = v22;
		sub_1400FA3C0((__int64)v45, v23, v40.m128_f32);
		sub_1400FB2A0((__int64)&v41, (__int64)L"tPosition", v46);
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v24);
		v26 = *(_QWORD*)(v17 + 16);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(v17 + 16) += 16i64;
		sub_1400F06F0(v17, v26, L"nMapZoneId", v27);
		*(_QWORD*)(v17 + 16) -= 16i64;
		v29 = 0i64;
		if (qword_140C658F8)
		{
			v30 = sub_140448420(v28, a2[2]);
			v31 = v30;
			if (v30)
			{
				v32 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v30 + 24i64))(v30);
				if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v32 + 48i64))(v32))
					v29 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
			}
		}
		v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v17 + 32) + 160i64), v24);
		v34 = *(_QWORD*)(v17 + 16);
		*(_QWORD*)v34 = *v33;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
		*(_QWORD*)(v17 + 16) += 16i64;
		sub_1400F0870(v17, v34, L"strZoneName", v29);
		*(_QWORD*)(v17 + 16) -= 16i64;
		sub_1400FB2A0(a1, (__int64)L"tNavPoint", v24);
		if (v47)
			sub_1400579E0(v47, v35, v46);
		sub_1400579E0(v17, v35, v24);
		return 1i64;
	case 0xB:
		sub_14040FAE0((__int64)v51);
		v36 = a2[2];
		v37 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
		v38 = v37;
		v39 = *(_QWORD*)(v37 + 8);
		while (v39)
		{
			if (*(_DWORD*)(v39 + 32) < v36)
			{
				v39 = *(_QWORD*)(v39 + 24);
			}
			else
			{
				v38 = v39;
				v39 = *(_QWORD*)(v39 + 16);
			}
		}
		if (v38 == v37 || (v40.m128_u64[0] = v38, v36 < *(_DWORD*)(v38 + 32)))
			v40.m128_u64[0] = v37;
		if (v40.m128_u64[0] == v37
			|| v40.m128_u64[0] == -40i64
			|| !(unsigned int)sub_1404111E0((__int64)v51, v40.m128_u64[0] + 40, 1))
		{
		LABEL_51:
			v11 = v51[0];
			if (v51[0])
			{
			LABEL_52:
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v51[0] + 8i64))(v11);
				v51[0] = 0i64;
			}
		LABEL_53:
			if (v52)
				sub_14018B900(v52, 0);
			return 0i64;
		}
		else
		{
			v4 = (_QWORD*)sub_14040FC60((__int64)v49, (__int64)v51);
			v5 = L"uItem";
		LABEL_47:
			sub_14040B3A0(a1, (__int64)v5, v4);
			if (v51[0])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v51[0] + 8i64))(v51[0]);
				v51[0] = 0i64;
			}
			if (v52)
			{
				sub_14018B900(v52, 0);
				return 1i64;
			}
			else
			{
				return 1i64;
			}
		}
	default:
		return 0i64;
	}
}
// 14040962E: variable 'v27' is possibly undefined
// 140409647: variable 'v28' is possibly undefined
// 1404096DC: variable 'v35' is possibly undefined
// 140AF89A8: using guessed type wchar_t aUitem_0[6];
// 140AF89B8: using guessed type wchar_t aUitem[6];
// 140AF89C8: using guessed type wchar_t aNmapzoneid[11];
// 140AF89E0: using guessed type wchar_t aTposition[10];
// 140AF8A58: using guessed type wchar_t aUitem_2[6];
// 140AF8A68: using guessed type wchar_t aTnavpoint[10];
// 140AF8A80: using guessed type wchar_t aStrzonename[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140409330: using guessed type char var_1330[1216];
// 140409330: using guessed type char var_9B0[1216];
// 140409330: using guessed type char var_1350[8];
// 140409330: using guessed type char var_E70[1216];

