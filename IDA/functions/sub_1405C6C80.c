//----- (00000001405C6C80) ----------------------------------------------------
__int64 __fastcall sub_1405C6C80(__int64 a1, __int64 a2)
{
	int v4; // edi
	__int64 v5; // rcx
	int v6; // eax
	BOOL v7; // eax
	__int64 v8; // rcx
	int v9; // eax
	__int64* v10; // rcx
	double v11; // xmm0_8
	__int64 v12; // rcx
	int v13; // eax
	__int64* v14; // rcx
	int v15; // ecx
	__int64 v16; // rcx
	int v17; // eax
	BOOL v18; // eax
	__int64 v19; // rcx
	int v20; // eax
	BOOL v21; // eax
	__int64 v22; // rcx
	int v23; // eax
	BOOL v24; // eax
	__int64 v25; // rcx
	int v26; // eax
	BOOL v27; // eax
	__int64 v28; // rcx
	int v29; // eax
	BOOL v30; // eax
	__int64 v31; // rcx
	int v32; // eax
	BOOL v33; // eax
	__int64 v34; // rcx
	int v35; // eax
	BOOL v36; // eax
	__int64 v37; // rcx
	int v38; // eax
	BOOL v39; // eax
	_OWORD* v40; // rax
	_OWORD* v41; // rax
	__int64 v42; // rcx
	int v43; // eax
	BOOL v44; // eax
	__int64 v45; // rcx
	int v46; // eax
	BOOL v47; // eax
	__int64 result; // rax
	__int64 v49; // rcx
	int v50; // eax
	__int64 v51; // [rsp+20h] [rbp-18h] BYREF
	int v52; // [rsp+28h] [rbp-10h]
	__int64 v53; // [rsp+40h] [rbp+8h] BYREF

	sub_1400FABF0(a2, L"sprite", (_QWORD*)a1);
	sub_1400FABF0(a2, L"textString", (_QWORD*)(a1 + 32));
	sub_1400FABF0(a2, L"countString", (_QWORD*)(a1 + 64));
	v4 = 1;
	if ((int)sub_1400FB720(a2, L"globalCooldown", 1) >= 0)
	{
		v5 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v6 = *(_DWORD*)(v5 - 8);
		v7 = v6 && (v6 != 1 || *(_DWORD*)(v5 - 16));
		*(_DWORD*)(a1 + 128) = v7;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"cooldownPercent", 3) >= 0)
	{
		v8 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v9 = *(_DWORD*)(v8 - 8);
		v10 = (__int64*)(v8 - 16);
		if (v9 != 3)
		{
			if (v9 != 4 || !sub_14005AC80((char*)(*v10 + 32), (unsigned __int64*)&v53))
			{
				v11 = 0.0;
				goto LABEL_14;
			}
			v52 = 3;
			v10 = &v51;
			v51 = v53;
		}
		v11 = *(double*)v10;
	LABEL_14:
		*(float*)(a1 + 132) = v11;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"cooldownTime", 3) < 0)
		goto LABEL_22;
	v12 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
	v13 = *(_DWORD*)(v12 - 8);
	v14 = (__int64*)(v12 - 16);
	if (v13 != 3)
	{
		if (v13 != 4 || !sub_14005AC80((char*)(*v14 + 32), (unsigned __int64*)&v53))
		{
			v15 = 0;
			goto LABEL_21;
		}
		v52 = 3;
		v14 = &v51;
		v51 = v53;
	}
	v15 = (int)*(double*)v14;
LABEL_21:
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	*(_DWORD*)(a1 + 136) = v15;
LABEL_22:
	if ((int)sub_1400FB720(a2, L"casting", 1) >= 0)
	{
		v16 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v17 = *(_DWORD*)(v16 - 8);
		v18 = v17 && (v17 != 1 || *(_DWORD*)(v16 - 16));
		*(_DWORD*)(a1 + 144) = v18;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"radarSweep", 1) >= 0)
	{
		v19 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v20 = *(_DWORD*)(v19 - 8);
		v21 = v20 && (v20 != 1 || *(_DWORD*)(v19 - 16));
		*(_DWORD*)(a1 + 148) = v21;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"popIcon", 1) >= 0)
	{
		v22 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v23 = *(_DWORD*)(v22 - 8);
		v24 = v23 && (v23 != 1 || *(_DWORD*)(v22 - 16));
		*(_DWORD*)(a1 + 152) = v24;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"readyBlingSprite", 1) >= 0)
	{
		v25 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v26 = *(_DWORD*)(v25 - 8);
		v27 = v26 && (v26 != 1 || *(_DWORD*)(v25 - 16));
		*(_DWORD*)(a1 + 156) = v27;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"blur", 1) >= 0)
	{
		v28 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v29 = *(_DWORD*)(v28 - 8);
		v30 = v29 && (v29 != 1 || *(_DWORD*)(v28 - 16));
		*(_DWORD*)(a1 + 160) = v30;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"shake", 1) >= 0)
	{
		v31 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v32 = *(_DWORD*)(v31 - 8);
		v33 = v32 && (v32 != 1 || *(_DWORD*)(v31 - 16));
		*(_DWORD*)(a1 + 164) = v33;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"shatterSprite", 1) >= 0)
	{
		v34 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v35 = *(_DWORD*)(v34 - 8);
		v36 = v35 && (v35 != 1 || *(_DWORD*)(v34 - 16));
		*(_DWORD*)(a1 + 168) = v36;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"itemUnavailable", 1) >= 0)
	{
		v37 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v38 = *(_DWORD*)(v37 - 8);
		v39 = v38 && (v38 != 1 || *(_DWORD*)(v37 - 16));
		*(_DWORD*)(a1 + 172) = v39;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	v40 = (_OWORD*)sub_1401183E0(a2, L"textColor");
	if (v40)
		*(_OWORD*)(a1 + 192) = *v40;
	v41 = (_OWORD*)sub_1401183E0(a2, L"diffuse");
	if (v41)
		*(_OWORD*)(a1 + 208) = *v41;
	if ((int)sub_1400FB720(a2, L"lightOverlay", 1) >= 0)
	{
		v42 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v43 = *(_DWORD*)(v42 - 8);
		v44 = v43 && (v43 != 1 || *(_DWORD*)(v42 - 16));
		*(_DWORD*)(a1 + 240) = v44;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	if ((int)sub_1400FB720(a2, L"diffused", 1) >= 0)
	{
		v45 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v46 = *(_DWORD*)(v45 - 8);
		v47 = v46 && (v46 != 1 || *(_DWORD*)(v45 - 16));
		*(_DWORD*)(a1 + 244) = v47;
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 32i64;
	}
	result = sub_1400FB720(a2, L"indicatorSprite", 1);
	if ((int)result >= 0)
	{
		v49 = *(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64);
		v50 = *(_DWORD*)(v49 - 8);
		if (!v50 || v50 == 1 && !*(_DWORD*)(v49 - 16))
			v4 = 0;
		*(_DWORD*)(a1 + 248) = v4;
		result = *(_QWORD*)(a2 + 16);
		*(_QWORD*)(result + 16) -= 32i64;
	}
	return result;
}
// 140B221C8: using guessed type wchar_t aShake_0[6];
// 140B221D8: using guessed type wchar_t aShattersprite_0[14];
// 140B221F8: using guessed type wchar_t aReadyblingspri_0[17];
// 140B22220: using guessed type wchar_t aBlur_0[5];
// 140B22230: using guessed type wchar_t aRadarsweep_0[11];
// 140B22248: using guessed type wchar_t aPopicon_0[8];
// 140B22258: using guessed type wchar_t aCooldowntime_0[13];
// 140B22278: using guessed type wchar_t aCasting_0[8];
// 140B22288: using guessed type wchar_t aGlobalcooldown_0[15];
// 140B222A8: using guessed type wchar_t aCooldownpercen_0[16];
// 140B222C8: using guessed type wchar_t aTextstring_0[11];
// 140B222E0: using guessed type wchar_t aCountstring_0[12];
// 140B22318: using guessed type wchar_t aSprite_2[7];
// 140B224A0: using guessed type wchar_t aDiffused_0[9];
// 140B224B8: using guessed type wchar_t aIndicatorsprit_0[16];
// 140B224D8: using guessed type wchar_t aDiffuse_0[8];
// 140B224E8: using guessed type wchar_t aLightoverlay_0[13];
// 140B22508: using guessed type wchar_t aItemunavailabl_0[16];
// 140B22528: using guessed type wchar_t aTextcolor_0[10];

