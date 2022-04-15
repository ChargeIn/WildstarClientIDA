#include "../winhttp.h"

//----- (00000001400BA9F0) ----------------------------------------------------
int __fastcall sub_1400BA9F0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rdx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // r8
	_DWORD* v31; // rdx
	__int64 v32; // rcx
	__int64 v33; // r8
	_DWORD* v34; // rdx
	__int64 v35; // rcx
	__int64 v36; // r8
	_DWORD* v37; // rdx
	__int64 v38; // rcx
	__int64 v39; // r8
	_DWORD* v40; // rdx
	__int64 v41; // rcx
	__int64 v42; // r8
	_DWORD* v43; // rdx
	__int64 v44; // rdx
	__int64 v45; // r8
	_DWORD* v46; // rcx
	__int64 v47; // rdx
	__int64 v48; // r8
	_DWORD* v49; // rcx
	__int64 v50; // rdx
	__int64 v51; // r8
	_DWORD* v52; // rcx
	__int64 v53; // rdx
	__int64 v54; // r8
	_DWORD* v55; // rcx
	__int64 v56; // rdx
	__int64 v57; // r8
	_DWORD* v58; // rcx
	int v59; // eax

	sub_1407E4830((int*)(a1 + 184), 0i64, 0x58ui64);
	v2 = *(_QWORD*)(a1 + 280);
	*(_DWORD*)(a1 + 260) = 1065353216;
	if (v2)
	{
		v3 = *(_QWORD*)(a1 + 272) + 8 * v2;
		while (1)
		{
			v4 = *(_QWORD*)(v3 - 8);
			v3 -= 8i64;
			--v2;
			if (v4)
			{
				if ((*(_BYTE*)v4 & 1) != 0)
					break;
			}
			if (!v2)
				goto LABEL_8;
		}
		*(_DWORD*)(a1 + 196) = *(_DWORD*)(v4 + 12);
	}
LABEL_8:
	v5 = *(_QWORD*)(a1 + 280);
	if (v5)
	{
		v6 = *(_QWORD*)(a1 + 272) + 8 * v5;
		while (1)
		{
			v7 = *(_QWORD*)(v6 - 8);
			v6 -= 8i64;
			--v5;
			if (v7)
			{
				if ((*(_BYTE*)v7 & 1) != 0)
					break;
			}
			if (!v5)
				goto LABEL_15;
		}
		*(_DWORD*)(a1 + 200) = *(_DWORD*)(v7 + 16);
	}
LABEL_15:
	v8 = *(_QWORD*)(a1 + 280);
	if (v8)
	{
		v9 = *(_QWORD*)(a1 + 272) + 8 * v8;
		while (1)
		{
			v10 = *(_QWORD*)(v9 - 8);
			v9 -= 8i64;
			--v8;
			if (v10)
			{
				if ((*(_BYTE*)v10 & 1) != 0)
					break;
			}
			if (!v8)
				goto LABEL_22;
		}
		*(_DWORD*)(a1 + 204) = *(_DWORD*)(v10 + 20);
	}
LABEL_22:
	v11 = *(_QWORD*)(a1 + 280);
	if (v11)
	{
		v12 = *(_QWORD*)(a1 + 272) + 8 * v11;
		while (1)
		{
			v13 = *(_QWORD*)(v12 - 8);
			v12 -= 8i64;
			--v11;
			if (v13)
			{
				if ((*(_BYTE*)v13 & 1) != 0)
					break;
			}
			if (!v11)
				goto LABEL_29;
		}
		*(_DWORD*)(a1 + 208) = *(_DWORD*)(v13 + 24);
	}
LABEL_29:
	v14 = *(_QWORD*)(a1 + 280);
	if (v14)
	{
		v15 = *(_QWORD*)(a1 + 272) + 8 * v14;
		while (1)
		{
			v16 = *(_QWORD*)(v15 - 8);
			v15 -= 8i64;
			--v14;
			if (v16)
			{
				if ((*(_BYTE*)v16 & 1) != 0)
					break;
			}
			if (!v14)
				goto LABEL_36;
		}
		*(_DWORD*)(a1 + 212) = *(_DWORD*)(v16 + 28);
	}
LABEL_36:
	v17 = *(_QWORD*)(a1 + 280);
	if (v17)
	{
		v18 = *(_QWORD*)(a1 + 272) + 8 * v17;
		while (1)
		{
			v19 = *(_QWORD*)(v18 - 8);
			v18 -= 8i64;
			--v17;
			if (v19)
			{
				if ((*(_BYTE*)v19 & 1) != 0)
					break;
			}
			if (!v17)
				goto LABEL_43;
		}
		*(_DWORD*)(a1 + 216) = *(_DWORD*)(v19 + 32);
	}
LABEL_43:
	v20 = *(_QWORD*)(a1 + 280);
	if (v20)
	{
		v21 = *(_QWORD*)(a1 + 272) + 8 * v20;
		while (1)
		{
			v22 = *(_QWORD*)(v21 - 8);
			v21 -= 8i64;
			--v20;
			if (v22)
			{
				if ((*(_BYTE*)v22 & 4) != 0)
					break;
			}
			if (!v20)
				goto LABEL_50;
		}
		*(_DWORD*)(a1 + 220) = *(_DWORD*)(v22 + 36);
	}
LABEL_50:
	v23 = *(_QWORD*)(a1 + 280);
	if (v23)
	{
		v24 = *(_QWORD*)(a1 + 272) + 8 * v23;
		while (1)
		{
			v25 = *(_QWORD*)(v24 - 8);
			v24 -= 8i64;
			--v23;
			if (v25)
			{
				if ((*(_BYTE*)v25 & 0x10) != 0)
					break;
			}
			if (!v23)
				goto LABEL_57;
		}
		*(_DWORD*)(a1 + 224) = *(_DWORD*)(v25 + 40);
	}
LABEL_57:
	v26 = *(_QWORD*)(a1 + 280);
	if (v26)
	{
		v27 = *(_QWORD*)(a1 + 272) + 8 * v26;
		while (1)
		{
			v28 = *(_QWORD*)(v27 - 8);
			v27 -= 8i64;
			--v26;
			if (v28)
			{
				if ((*(_BYTE*)v28 & 0x40) != 0)
					break;
			}
			if (!v26)
				goto LABEL_64;
		}
		*(_DWORD*)(a1 + 228) = *(_DWORD*)(v28 + 44);
	}
LABEL_64:
	v29 = *(_QWORD*)(a1 + 280);
	if (v29)
	{
		v30 = *(_QWORD*)(a1 + 272) + 8 * v29;
		while (1)
		{
			v31 = *(_DWORD**)(v30 - 8);
			v30 -= 8i64;
			--v29;
			if (v31)
			{
				if ((*v31 & 0x100i64) != 0)
					break;
			}
			if (!v29)
				goto LABEL_71;
		}
		*(_DWORD*)(a1 + 232) = v31[12];
	}
LABEL_71:
	v32 = *(_QWORD*)(a1 + 280);
	if (v32)
	{
		v33 = *(_QWORD*)(a1 + 272) + 8 * v32;
		while (1)
		{
			v34 = *(_DWORD**)(v33 - 8);
			v33 -= 8i64;
			--v32;
			if (v34)
			{
				if ((*v34 & 0x400i64) != 0)
					break;
			}
			if (!v32)
				goto LABEL_78;
		}
		*(_DWORD*)(a1 + 236) = v34[13];
	}
LABEL_78:
	v35 = *(_QWORD*)(a1 + 280);
	if (v35)
	{
		v36 = *(_QWORD*)(a1 + 272) + 8 * v35;
		while (1)
		{
			v37 = *(_DWORD**)(v36 - 8);
			v36 -= 8i64;
			--v35;
			if (v37)
			{
				if ((*v37 & 0x400000) != 0)
					break;
			}
			if (!v35)
				goto LABEL_85;
		}
		*(_DWORD*)(a1 + 240) = v37[14];
	}
LABEL_85:
	v38 = *(_QWORD*)(a1 + 280);
	if (v38)
	{
		v39 = *(_QWORD*)(a1 + 272) + 8 * v38;
		while (1)
		{
			v40 = *(_DWORD**)(v39 - 8);
			v39 -= 8i64;
			--v38;
			if (v40)
			{
				if ((*v40 & 0x1000i64) != 0)
					break;
			}
			if (!v38)
				goto LABEL_92;
		}
		*(_DWORD*)(a1 + 244) = v40[15];
	}
LABEL_92:
	v41 = *(_QWORD*)(a1 + 280);
	if (v41)
	{
		v42 = *(_QWORD*)(a1 + 272) + 8 * v41;
		while (1)
		{
			v43 = *(_DWORD**)(v42 - 8);
			v42 -= 8i64;
			--v41;
			if (v43)
			{
				if ((*v43 & 0x4000i64) != 0)
					break;
			}
			if (!v41)
				goto LABEL_99;
		}
		*(_DWORD*)(a1 + 248) = v43[16];
	}
LABEL_99:
	v44 = *(_QWORD*)(a1 + 280);
	if (v44)
	{
		v45 = *(_QWORD*)(a1 + 272) + 8 * v44;
		while (1)
		{
			v46 = *(_DWORD**)(v45 - 8);
			v45 -= 8i64;
			--v44;
			if (v46)
			{
				if ((*v46 & 0x40000) != 0)
					break;
			}
			if (!v44)
				goto LABEL_106;
		}
		*(_DWORD*)(a1 + 252) = v46[17];
	}
LABEL_106:
	v47 = *(_QWORD*)(a1 + 280);
	if (v47)
	{
		v48 = *(_QWORD*)(a1 + 272) + 8 * v47;
		while (1)
		{
			v49 = *(_DWORD**)(v48 - 8);
			v48 -= 8i64;
			--v47;
			if (v49)
			{
				if ((*v49 & 0x100000) != 0)
					break;
			}
			if (!v47)
				goto LABEL_113;
		}
		*(_DWORD*)(a1 + 256) = v49[18];
	}
LABEL_113:
	v50 = *(_QWORD*)(a1 + 280);
	if (v50)
	{
		v51 = *(_QWORD*)(a1 + 272) + 8 * v50;
		while (1)
		{
			v52 = *(_DWORD**)(v51 - 8);
			v51 -= 8i64;
			--v50;
			if (v52)
			{
				if ((*v52 & 0x10000) != 0)
					break;
			}
			if (!v50)
				goto LABEL_120;
		}
		*(_DWORD*)(a1 + 260) = v52[19];
	}
LABEL_120:
	v53 = *(_QWORD*)(a1 + 280);
	if (v53)
	{
		v54 = *(_QWORD*)(a1 + 272) + 8 * v53;
		while (1)
		{
			v55 = *(_DWORD**)(v54 - 8);
			v54 -= 8i64;
			--v53;
			if (v55)
			{
				if ((*v55 & 0x40000) != 0)
					break;
			}
			if (!v53)
				goto LABEL_127;
		}
		*(_DWORD*)(a1 + 264) = v55[20];
	}
LABEL_127:
	v56 = *(_QWORD*)(a1 + 280);
	if (v56)
	{
		v57 = *(_QWORD*)(a1 + 272) + 8 * v56;
		while (1)
		{
			v58 = *(_DWORD**)(v57 - 8);
			v57 -= 8i64;
			--v56;
			if (v58)
			{
				if ((*v58 & 0x100000) != 0)
					break;
			}
			if (!v56)
				goto LABEL_134;
		}
		*(_DWORD*)(a1 + 268) = v58[21];
	}
LABEL_134:
	v59 = *(_DWORD*)(a1 + 252);
	*(_DWORD*)(a1 + 552) = 0;
	*(_DWORD*)(a1 + 536) = v59;
	*(_DWORD*)(a1 + 540) = *(_DWORD*)(a1 + 264);
	*(_DWORD*)(a1 + 544) = *(_DWORD*)(a1 + 256);
	*(_DWORD*)(a1 + 548) = *(_DWORD*)(a1 + 268);
	*(_DWORD*)(a1 + 556) = *(_DWORD*)(a1 + 260);
	if ((dword_140C8B6D8 & 1) == 0)
	{
		dword_140C8B6D8 |= 1u;
		sub_1401AD620((__int64)&unk_140C8B6E0, L"Music Start");
	}
	sub_1401ADA40((__int64)&unk_140C8B6E0, *(_DWORD*)(a1 + 196));
	if ((dword_140C8B6D8 & 2) == 0)
	{
		dword_140C8B6D8 |= 2u;
		sub_1401AD620((__int64)&unk_140C8B800, L"Music Stop End");
	}
	sub_1401ADA40((__int64)&unk_140C8B800, *(_DWORD*)(a1 + 200));
	if ((dword_140C8B6D8 & 4) == 0)
	{
		dword_140C8B6D8 |= 4u;
		sub_1401AD620((__int64)&unk_140C8B920, L"Music Stop Begin");
	}
	sub_1401ADA40((__int64)&unk_140C8B920, *(_DWORD*)(a1 + 204));
	if ((dword_140C8B6D8 & 8) == 0)
	{
		dword_140C8B6D8 |= 8u;
		sub_1401AD510((__int64)&unk_140C8BA40, L"Music Loop Restart Min");
	}
	sub_1401AD8F0((__int64)&unk_140C8BA40, *(float*)(a1 + 208));
	if ((dword_140C8B6D8 & 0x10) == 0)
	{
		dword_140C8B6D8 |= 0x10u;
		sub_1401AD510((__int64)&unk_140C8BB60, L"Music Loop Restart Max");
	}
	sub_1401AD8F0((__int64)&unk_140C8BB60, *(float*)(a1 + 212));
	if ((dword_140C8B6D8 & 0x20) == 0)
	{
		dword_140C8B6D8 |= 0x20u;
		sub_1401AD740((__int64)&unk_140C8BC80, L"Music Flag Override Intro");
	}
	sub_1401ADA40((__int64)&unk_140C8BC80, *(_DWORD*)(a1 + 216) & 1);
	if ((dword_140C8B6D8 & 0x40) == 0)
	{
		dword_140C8B6D8 |= 0x40u;
		sub_1401AD620((__int64)&unk_140C8BDA0, L"Music Intro");
	}
	sub_1401ADA40((__int64)&unk_140C8BDA0, *(_DWORD*)(a1 + 220));
	if ((dword_140C8B6D8 & 0x80u) == 0)
	{
		dword_140C8B6D8 |= 0x80u;
		sub_1401AD510((__int64)&unk_140C8BEC0, L"Music Intro Wait");
	}
	sub_1401AD8F0((__int64)&unk_140C8BEC0, *(float*)(a1 + 224));
	if ((dword_140C8B6D8 & 0x100) == 0)
	{
		dword_140C8B6D8 |= 0x100u;
		sub_1401AD620((__int64)&unk_140C8BFE0, L"Music Mood");
	}
	sub_1401ADA40((__int64)&unk_140C8BFE0, *(_DWORD*)(a1 + 228));
	if ((dword_140C8B6D8 & 0x200) == 0)
	{
		dword_140C8B6D8 |= 0x200u;
		sub_1401AD620((__int64)&unk_140C8C100, L"Ambient Day");
	}
	sub_1401ADA40((__int64)&unk_140C8C100, *(_DWORD*)(a1 + 232));
	if ((dword_140C8B6D8 & 0x400) == 0)
	{
		dword_140C8B6D8 |= 0x400u;
		sub_1401AD620((__int64)&unk_140C8C220, L"Ambient Night");
	}
	sub_1401ADA40((__int64)&unk_140C8C220, *(_DWORD*)(a1 + 236));
	if ((dword_140C8B6D8 & 0x800) == 0)
	{
		dword_140C8B6D8 |= 0x800u;
		sub_1401AD620((__int64)&unk_140C8C340, L"Ambient Underwater");
	}
	sub_1401ADA40((__int64)&unk_140C8C340, *(_DWORD*)(a1 + 240));
	if ((dword_140C8B6D8 & 0x1000) == 0)
	{
		dword_140C8B6D8 |= 0x1000u;
		sub_1401AD620((__int64)&unk_140C8C460, L"Ambient Stop End");
	}
	sub_1401ADA40((__int64)&unk_140C8C460, *(_DWORD*)(a1 + 244));
	if ((dword_140C8B6D8 & 0x2000) == 0)
	{
		dword_140C8B6D8 |= 0x2000u;
		sub_1401AD620((__int64)&unk_140C8C580, L"Ambient Stop Begin");
	}
	sub_1401ADA40((__int64)&unk_140C8C580, *(_DWORD*)(a1 + 248));
	if ((dword_140C8B6D8 & 0x4000) == 0)
	{
		dword_140C8B6D8 |= 0x4000u;
		sub_1401AD620((__int64)&unk_140C8C6A0, L"Environment 1");
	}
	sub_1401ADA40((__int64)&unk_140C8C6A0, *(_DWORD*)(a1 + 252));
	if ((dword_140C8B6D8 & 0x8000) == 0)
	{
		dword_140C8B6D8 |= 0x8000u;
		sub_1401AD620((__int64)&unk_140C8C7C0, L"Environment 2");
	}
	sub_1401ADA40((__int64)&unk_140C8C7C0, *(_DWORD*)(a1 + 256));
	if ((dword_140C8B6D8 & 0x10000) == 0)
	{
		dword_140C8B6D8 |= 0x10000u;
		sub_1401AD510((__int64)&unk_140C8C8E0, L"Environment Dry");
	}
	sub_1401AD8F0((__int64)&unk_140C8C8E0, *(float*)(a1 + 260));
	if ((dword_140C8B6D8 & 0x20000) == 0)
	{
		dword_140C8B6D8 |= 0x20000u;
		sub_1401AD510((__int64)&unk_140C8CA00, L"Environment Wet 1");
	}
	sub_1401AD8F0((__int64)&unk_140C8CA00, *(float*)(a1 + 264));
	if ((dword_140C8B6D8 & 0x40000) == 0)
	{
		dword_140C8B6D8 |= 0x40000u;
		sub_1401AD510((__int64)&unk_140C8CB20, L"Environment Wet 2");
	}
	return sub_1401AD8F0((__int64)&unk_140C8CB20, *(float*)(a1 + 268));
}
// 140A13E28: using guessed type wchar_t aMusicStart[12];
// 140A13ED0: using guessed type wchar_t aMusicLoopResta_0[23];
// 140A13F00: using guessed type wchar_t aMusicLoopResta[23];
// 140A13F30: using guessed type wchar_t aMusicStopBegin[17];
// 140A13F58: using guessed type wchar_t aMusicStopEnd[15];
// 140A13F78: using guessed type wchar_t aMusicMood[11];
// 140A13F90: using guessed type wchar_t aMusicIntroWait[17];
// 140A13FB8: using guessed type wchar_t aMusicIntro[12];
// 140A13FD0: using guessed type wchar_t aMusicFlagOverr[26];
// 140A14008: using guessed type wchar_t aAmbientStopEnd[17];
// 140A14030: using guessed type wchar_t aAmbientUnderwa[19];
// 140A14058: using guessed type wchar_t aAmbientNight[14];
// 140A14078: using guessed type wchar_t aAmbientDay[12];
// 140A14090: using guessed type wchar_t aEnvironmentDry[16];
// 140A140B0: using guessed type wchar_t aEnvironment2[14];
// 140A140D0: using guessed type wchar_t aEnvironment1[14];
// 140A140F0: using guessed type wchar_t aAmbientStopBeg[19];
// 140A14118: using guessed type wchar_t aEnvironmentWet_0[18];
// 140A141C8: using guessed type wchar_t aEnvironmentWet[18];
// 140C8B6D8: using guessed type int dword_140C8B6D8;

