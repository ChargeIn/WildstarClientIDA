#include "../winhttp.h"

//----- (00000001402DBC00) ----------------------------------------------------
__int64 __fastcall sub_1402DBC00(__int64 a1)
{
	unsigned int v2; // r14d
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	wchar_t* v6; // rax
	const wchar_t* v7; // rdx
	int v8; // ecx
	bool v9; // zf
	__int64 v10; // rax
	__int64 v11; // rbx
	WCHAR* v12; // rax
	__int64 v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	_WORD* v16; // rax
	__int64 v17; // rax
	_WORD* v18; // rax
	__int64 v19; // rax
	_WORD* v20; // rax
	__int64 v21; // rax
	_WORD* v22; // rax
	__int64 v23; // rax
	__int64 v24; // rbx
	WCHAR* v25; // rax
	float v26; // xmm1_4
	__int64 v27; // rax
	__int64 v28; // rbx
	WCHAR* v29; // rax
	float v30; // xmm1_4
	__int64 v31; // rax
	__int64 v32; // rbx
	WCHAR* v33; // rax
	__int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	_WORD* v37; // rax
	__int64 v38; // rax
	_WORD* v39; // rax
	__int64 v40; // rax
	__int64 v41; // rbx
	__int64 v42; // rax
	_WORD* v43; // rax
	__int64 v44; // rax
	_WORD* v45; // rax
	__int64 v46; // rax
	__int64 v47; // rbx
	__int64 v48; // rax
	_WORD* v49; // rax
	__int64 v50; // rax
	_WORD* v51; // rax
	__int64 v52; // rax
	__int64 v53; // rbx
	__int64 v54; // rax
	_WORD* v55; // rax
	__int64 v56; // rax
	_WORD* v57; // rax
	__int64 v58; // rax
	__int64 v59; // rbx
	WCHAR* v60; // rax
	char v62[48]; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v63; // [rsp+50h] [rbp-B0h]
	int v64; // [rsp+2C0h] [rbp+1C0h] BYREF

	sub_1401A72E0((__int64)v62);
	if ((int)sub_1401A7C70((__int64)v62, *(_QWORD*)(a1 + 1600)) >= 0)
	{
		v3 = v63;
		v2 = 0;
		if (v63)
		{
			while (1)
			{
				v4 = (**(__int64(__fastcall***)(__int64))v3)(v3);
				v5 = v4;
				if (v4)
				{
					v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 48i64))(v4)
						? 0i64
						: (wchar_t*)sub_1401A4F40(v5 + 24);
					v7 = L"Map";
					if (v6 == L"Map")
						break;
					v8 = 0;
					if (*v6)
					{
						do
						{
							if (!*v7 || *v6 != *v7)
								break;
							v9 = v8 == 0x7FFFFFFF;
							if (v8 == 0x7FFFFFFF)
								goto LABEL_15;
							++v6;
							++v7;
							++v8;
						} while (*v6);
						v9 = v8 == 0x7FFFFFFF;
					LABEL_15:
						if (v9)
							break;
					}
					if (!*v6 && !*v7)
						break;
				}
				v3 = *(_QWORD*)(v3 + 72);
				if (!v3)
					goto LABEL_77;
			}
			if (v5)
			{
				v10 = sub_1401A5AE0(v5, L"OceanWaterTypeId");
				v11 = v10;
				if (v10 && sub_1401A6C20(v10))
				{
					v12 = (WCHAR*)sub_1401A6C20(v11);
					*(_DWORD*)(a1 + 1608) = sub_14018E820(v12);
				}
				v13 = sub_1401A5AE0(v5, L"ShoreWaveLayerId");
				v14 = v13;
				if (v13)
				{
					v15 = sub_1401A6B80(v13, L"ID0");
					if (v15)
					{
						v16 = (_WORD*)sub_1401A4F40(v15 + 32);
						if ((unsigned int)sub_1407DF428(v16, (__int64)L"%d", &v64) == 1)
							*(_DWORD*)(a1 + 1612) = v64;
					}
					v17 = sub_1401A6B80(v14, L"ID1");
					if (v17)
					{
						v18 = (_WORD*)sub_1401A4F40(v17 + 32);
						if ((unsigned int)sub_1407DF428(v18, (__int64)L"%d", &v64) == 1)
							*(_DWORD*)(a1 + 1616) = v64;
					}
					v19 = sub_1401A6B80(v14, L"ID2");
					if (v19)
					{
						v20 = (_WORD*)sub_1401A4F40(v19 + 32);
						if ((unsigned int)sub_1407DF428(v20, (__int64)L"%d", &v64) == 1)
							*(_DWORD*)(a1 + 1620) = v64;
					}
					v21 = sub_1401A6B80(v14, L"ID3");
					if (v21)
					{
						v22 = (_WORD*)sub_1401A4F40(v21 + 32);
						if ((unsigned int)sub_1407DF428(v22, (__int64)L"%d", &v64) == 1)
							*(_DWORD*)(a1 + 1624) = v64;
					}
				}
				v23 = sub_1401A5AE0(v5, L"ShoreAngleScale");
				v24 = v23;
				if (v23 && sub_1401A6C20(v23))
				{
					v25 = (WCHAR*)sub_1401A6C20(v24);
					v26 = *(double*)sub_1407DFE80(v25, 0i64).m128_u64;
					*(float*)(a1 + 1628) = v26;
				}
				v27 = sub_1401A5AE0(v5, L"MaxShoreWaveDepth");
				v28 = v27;
				if (v27 && sub_1401A6C20(v27))
				{
					v29 = (WCHAR*)sub_1401A6C20(v28);
					v30 = *(double*)sub_1407DFE80(v29, 0i64).m128_u64;
					*(float*)(a1 + 1632) = v30;
				}
				v31 = sub_1401A5AE0(v5, L"OceanShoreWaveLayer");
				v32 = v31;
				if (v31 && sub_1401A6C20(v31))
				{
					v33 = (WCHAR*)sub_1401A6C20(v32);
					*(_DWORD*)(a1 + 1636) = sub_14018E820(v33);
				}
				v34 = sub_1401A5AE0(v5, L"TerrainPresetId");
				v35 = v34;
				if (v34)
				{
					v36 = sub_1401A6B80(v34, L"ID0");
					if (v36)
					{
						v37 = (_WORD*)sub_1401A4F40(v36 + 32);
						if ((unsigned int)sub_1407DF428(v37, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1640) = v64;
					}
					v38 = sub_1401A6B80(v35, L"ID1");
					if (v38)
					{
						v39 = (_WORD*)sub_1401A4F40(v38 + 32);
						if ((unsigned int)sub_1407DF428(v39, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1641) = v64;
					}
				}
				v40 = sub_1401A5AE0(v5, L"ClutterPresetId");
				v41 = v40;
				if (v40)
				{
					v42 = sub_1401A6B80(v40, L"ID0");
					if (v42)
					{
						v43 = (_WORD*)sub_1401A4F40(v42 + 32);
						if ((unsigned int)sub_1407DF428(v43, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1642) = v64;
					}
					v44 = sub_1401A6B80(v41, L"ID1");
					if (v44)
					{
						v45 = (_WORD*)sub_1401A4F40(v44 + 32);
						if ((unsigned int)sub_1407DF428(v45, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1643) = v64;
					}
				}
				v46 = sub_1401A5AE0(v5, L"LandWaterPresetId");
				v47 = v46;
				if (v46)
				{
					v48 = sub_1401A6B80(v46, L"ID0");
					if (v48)
					{
						v49 = (_WORD*)sub_1401A4F40(v48 + 32);
						if ((unsigned int)sub_1407DF428(v49, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1644) = v64;
					}
					v50 = sub_1401A6B80(v47, L"ID1");
					if (v50)
					{
						v51 = (_WORD*)sub_1401A4F40(v50 + 32);
						if ((unsigned int)sub_1407DF428(v51, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1645) = v64;
					}
				}
				v52 = sub_1401A5AE0(v5, L"OceanWaterPresetId");
				v53 = v52;
				if (v52)
				{
					v54 = sub_1401A6B80(v52, L"ID0");
					if (v54)
					{
						v55 = (_WORD*)sub_1401A4F40(v54 + 32);
						if ((unsigned int)sub_1407DF428(v55, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1646) = v64;
					}
					v56 = sub_1401A6B80(v53, L"ID1");
					if (v56)
					{
						v57 = (_WORD*)sub_1401A4F40(v56 + 32);
						if ((unsigned int)sub_1407DF428(v57, (__int64)L"%d", &v64) == 1)
							*(_BYTE*)(a1 + 1647) = v64;
					}
				}
				v58 = sub_1401A5AE0(v5, L"IceLayerPresetId");
				v59 = v58;
				if (v58 && sub_1401A6C20(v58))
				{
					v60 = (WCHAR*)sub_1401A6C20(v59);
					*(_BYTE*)(a1 + 1648) = sub_14018E820(v60);
				}
			}
		}
	}
	else
	{
		v2 = -2147467259;
	}
LABEL_77:
	sub_1401A76A0((__int64)v62);
	return v2;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140AF0928: using guessed type wchar_t aId0[4];
// 140AF0C08: using guessed type wchar_t aId1[4];
// 140AF0C10: using guessed type wchar_t aId2[4];
// 140AF0C18: using guessed type wchar_t aId3[4];
// 140AF0C20: using guessed type wchar_t aShoreanglescal[16];
// 140AF0C40: using guessed type wchar_t aMaxshorewavede[18];
// 140AF0C68: using guessed type wchar_t aOceanshorewave[20];
// 140AF0C90: using guessed type wchar_t aTerrainpreseti[16];
// 140AF0CC8: using guessed type wchar_t aMap_0[4];
// 140AF0CD0: using guessed type wchar_t aOceanwatertype[17];
// 140AF0CF8: using guessed type wchar_t aShorewavelayer[17];
// 140AF0D20: using guessed type wchar_t aOceanwaterpres[19];
// 140AF0D48: using guessed type wchar_t aId0_3[4];
// 140AF0D50: using guessed type wchar_t aId1_3[4];
// 140AF0D58: using guessed type wchar_t aIcelayerpreset[17];
// 140AF0E00: using guessed type wchar_t aId0_0[4];
// 140AF0E08: using guessed type wchar_t aId1_0[4];
// 140AF0E10: using guessed type wchar_t aClutterpreseti[16];
// 140AF0E30: using guessed type wchar_t aId0_1[4];
// 140AF0E38: using guessed type wchar_t aId1_1[4];
// 140AF0E40: using guessed type wchar_t aLandwaterprese[18];
// 140AF0E68: using guessed type wchar_t aId0_2[4];
// 140AF0E70: using guessed type wchar_t aId1_2[4];

