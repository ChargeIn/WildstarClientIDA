#include "../winhttp.h"

//----- (000000014077ADB0) ----------------------------------------------------
void __fastcall sub_14077ADB0(__int64 a1)
{
	int v1; // xmm10_4
	float v3; // xmm8_4
	unsigned int v4; // eax
	float v5; // xmm6_4
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // edx
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned int v11; // edx
	float v12; // xmm7_4
	__int64 v13; // rax
	__int64 v14; // rcx
	unsigned int v15; // edx
	__int64 v16; // rax
	__int64 v17; // rcx
	unsigned int v18; // edx
	unsigned __int64 v19; // r15
	__int64 v20; // rsi
	int v21; // eax
	int v22; // eax
	__int64 v23; // rdi
	__int64 v24; // rcx
	__int64 v25; // rcx
	unsigned __int64 v26; // rbp
	__int64 v27; // rax
	__int64 v28; // rcx
	unsigned int v29; // edx
	_QWORD* v30; // rdi
	__int64 v31; // rax
	__int64 v32; // rcx
	unsigned int v33; // edx
	int v34; // ecx
	BOOL v35; // eax
	BOOL v36; // eax
	unsigned __int64 v37; // rcx
	__int64 v38; // rax
	float v39; // xmm0_4
	__int64 v40; // rax
	float v41; // xmm0_4
	__int64(__fastcall * v42)(wchar_t**, _QWORD, __int64); // r9
	unsigned int v43; // edi
	__int64 v44; // rax
	__int64 v45; // r9
	unsigned int v46; // r8d
	unsigned int v47; // esi
	__int64 v48; // rax
	__int64 v49; // r9
	unsigned int v50; // r8d
	float v51; // xmm1_4
	float v52; // xmm1_4
	unsigned int v53; // eax
	__int128 v54; // [rsp+60h] [rbp-78h] BYREF

	v1 = 1065353216;
	v3 = (float)*(int*)(a1 + 164) * *(float*)(a1 + 180);
	while (v3 != 0.0)
	{
		v4 = *(_DWORD*)(a1 + 188);
		if (*(_DWORD*)(a1 + 184) <= v4)
			break;
		if ((v4 & 1) == 0)
		{
			v12 = *(float*)(a1 + 176);
			if ((float)(v12 + v3) <= 1.0)
			{
				*(float*)(a1 + 176) = v12 + v3;
				v3 = 0.0;
			}
			else
			{
				*(_DWORD*)(a1 + 176) = 1065353216;
				v3 = v3 + (float)(v12 - 1.0);
				while (*(_QWORD*)(a1 + 64))
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 64) + 32i64))(*(_QWORD*)(a1 + 64));
				while (*(_QWORD*)(a1 + 72))
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 72) + 32i64))(*(_QWORD*)(a1 + 72));
				if (!*(_QWORD*)(a1 + 80))
				{
					v13 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 92i64));
					if (v13)
					{
						v15 = *(_DWORD*)(a1 + 108);
						if (v15)
							sub_140578770(v14, v15, v13, 0i64, 0i64, (_QWORD*)(a1 + 80));
					}
				}
				if (!*(_QWORD*)(a1 + 88))
				{
					v16 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 72i64));
					if (v16)
					{
						v18 = *(_DWORD*)(a1 + 112);
						if (v18)
							sub_140578770(v17, v18, v16, 0i64, 0i64, (_QWORD*)(a1 + 88));
					}
				}
			}
			v5 = *(float*)(a1 + 176);
			goto LABEL_34;
		}
		v5 = *(float*)(a1 + 176);
		if ((float)(v5 - v3) >= 0.0)
		{
			*(float*)(a1 + 176) = v5 - v3;
			v3 = 0.0;
		}
		else
		{
			*(_DWORD*)(a1 + 176) = 0;
			v3 = v3 - v5;
			while (*(_QWORD*)(a1 + 80))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 32i64))(*(_QWORD*)(a1 + 80));
			while (*(_QWORD*)(a1 + 88))
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88));
			if (!*(_QWORD*)(a1 + 64))
			{
				v6 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 88i64));
				if (v6)
				{
					v8 = *(_DWORD*)(a1 + 108);
					if (v8)
						sub_140578770(v7, v8, v6, 0i64, 0i64, (_QWORD*)(a1 + 64));
				}
			}
			if (!*(_QWORD*)(a1 + 72))
			{
				v9 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 68i64));
				if (v9)
				{
					v11 = *(_DWORD*)(a1 + 112);
					if (v11)
					{
						sub_140578770(v10, v11, v9, 0i64, 0i64, (_QWORD*)(a1 + 72));
						v12 = *(float*)(a1 + 176);
						goto LABEL_34;
					}
				}
			}
		}
		v12 = *(float*)(a1 + 176);
	LABEL_34:
		v19 = 0i64;
		v20 = a1 + 212;
		do
		{
			if (*(_DWORD*)(v20 + 4) && !*(_DWORD*)(v20 + 8))
			{
				v21 = *(_DWORD*)(a1 + 196);
				if (v21)
				{
					if (v5 >= *(float*)(v20 - 4) && v12 <= *(float*)v20)
					{
						*(_DWORD*)(a1 + 196) = v21 - 1;
						*(_DWORD*)(v20 + 8) = 1;
						*(_DWORD*)(v20 + 12) = 1065353216;
						v22 = *(_DWORD*)(a1 + 188) & 1;
						if ((unsigned __int64)v22 < 5)
						{
							v23 = 2i64 * v22;
							if (*(_QWORD*)(a1 + 16i64 * v22 + 16))
							{
								v24 = *(_QWORD*)(a1 + 16i64 * v22 + 16);
								do
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 32i64))(v24);
									v24 = *(_QWORD*)(a1 + 8 * v23 + 16);
								} while (v24);
							}
							if (*(_QWORD*)(a1 + 8 * v23 + 24))
							{
								v25 = *(_QWORD*)(a1 + 8 * v23 + 24);
								do
								{
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 32i64))(v25);
									v25 = *(_QWORD*)(a1 + 8 * v23 + 24);
								} while (v25);
							}
						}
						v26 = v19 != 0;
						if (v26 < 5)
						{
							if (!*(_QWORD*)(16i64 * (v19 != 0) + a1 + 16))
							{
								v27 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 4 * v26 + 76));
								if (v27)
								{
									v29 = *(_DWORD*)(a1 + 108);
									if (v29)
										sub_140578770(v28, v29, v27, 0i64, 0i64, (_QWORD*)(16 * v26 + a1 + 16));
								}
							}
							v30 = (_QWORD*)(a1 + 16i64 * (v19 != 0) + 24);
							if (!*v30)
							{
								v31 = sub_140248F00(*(_DWORD*)(*(_QWORD*)(a1 + 144) + 4 * v26 + 56));
								if (v31)
								{
									v33 = *(_DWORD*)(a1 + 112);
									if (v33)
										sub_140578770(v32, v33, v31, 0i64, 0i64, v30);
								}
							}
						}
					}
				}
				else if ((*(_DWORD*)(a1 + 188) & 1) == 0 && v12 > *(float*)v20
					|| (*(_DWORD*)(a1 + 188) & 1) != 0 && v5 < *(float*)(v20 - 4))
				{
					if (++ * (_DWORD*)(a1 + 200) > *(_DWORD*)(*(_QWORD*)(a1 + 144) + 8i64))
						sub_140779660(a1, 0i64);
					*(_DWORD*)(v20 + 8) = 1;
				}
			}
			++v19;
			v20 += 20i64;
		} while (v19 < 2);
		v34 = *(_DWORD*)(a1 + 188);
		if ((v34 & 1) == 0 && v5 == 1.0 || (*(_DWORD*)(a1 + 188) & 1) != 0 && v12 == 0.0)
		{
			*(_DWORD*)(a1 + 188) = v34 + 1;
			if (*(_DWORD*)(a1 + 184) == v34 + 1 && *(_DWORD*)(a1 + 196))
				*(_DWORD*)(a1 + 204) = 1;
			v35 = *(_DWORD*)(a1 + 204) || !*(_DWORD*)(a1 + 220) && *(_DWORD*)(a1 + 216);
			*(_DWORD*)(a1 + 204) = v35;
			*(_QWORD*)(a1 + 220) = 0i64;
			v36 = *(_DWORD*)(a1 + 204) || !*(_DWORD*)(a1 + 240) && *(_DWORD*)(a1 + 236);
			*(_DWORD*)(a1 + 204) = v36;
			*(_QWORD*)(a1 + 240) = 0i64;
			if (!*(_DWORD*)(a1 + 204))
				++* (_DWORD*)(a1 + 192);
			*(_DWORD*)(a1 + 204) = 0;
		}
	}
	if (!*(_DWORD*)(a1 + 196))
		goto LABEL_122;
	if (++ * (_DWORD*)(a1 + 200) > *(_DWORD*)(*(_QWORD*)(a1 + 144) + 8i64))
		sub_140779660(a1, 0i64);
	if ((*(_BYTE*)(a1 + 188) & 1) != 0)
	{
		v37 = 1i64;
		v38 = a1 + 228;
		while (1)
		{
			if (*(_DWORD*)(v38 + 8))
			{
				v39 = *(float*)(a1 + 176);
				if (v39 >= *(float*)v38 && v39 > *(float*)(v38 + 4))
					break;
			}
			v38 -= 20i64;
			if ((--v37 & 0x8000000000000000ui64) != 0i64)
				goto LABEL_103;
		}
	}
	else
	{
		v37 = 0i64;
		v40 = a1 + 212;
		while (1)
		{
			if (*(_DWORD*)(v40 + 4))
			{
				v41 = *(float*)(a1 + 176);
				if (v41 <= *(float*)v40 && v41 < *(float*)(v40 - 4))
					break;
			}
			++v37;
			v40 += 20i64;
			if (v37 >= 2)
				goto LABEL_103;
		}
	}
	*(_DWORD*)(a1 + 20 * v37 + 220) = 1;
LABEL_103:
	*(_DWORD*)(a1 + 196) = 0;
	*(_DWORD*)(a1 + 204) = 1;
	if (*(_QWORD*)(a1 + 48))
		goto LABEL_112;
	v42 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	v43 = *(_DWORD*)(*(_QWORD*)(a1 + 144) + 84i64);
	if (qword_140C63840)
	{
		v44 = qword_140C63840(off_140A6DFF8, v43, qword_140C63858);
		goto LABEL_109;
	}
	if (!dword_140C64C04)
	{
		if ((int)sub_140248CA0() < 0)
		{
		LABEL_112:
			v42 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			goto LABEL_113;
		}
		v44 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v43);
	LABEL_109:
		if (v44)
		{
			v46 = *(_DWORD*)(a1 + 108);
			if (v46)
			{
				v54 = 0i64;
				sub_1405787D0((__int64)&v54, 0, v46, v45, v44, 0i64, 0i64, 0, (_QWORD*)(a1 + 48), &v54, 0);
			}
		}
		goto LABEL_112;
	}
LABEL_113:
	if (*(_QWORD*)(a1 + 56))
		goto LABEL_122;
	v47 = *(_DWORD*)(*(_QWORD*)(a1 + 144) + 64i64);
	if (v42)
	{
		v48 = v42(off_140A6DFF8, v47, qword_140C63858);
	}
	else
	{
		if (dword_140C64C04 || (int)sub_140248CA0() < 0)
			goto LABEL_122;
		v48 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B40 + 24i64))(qword_140C63B40, v47);
	}
	if (v48)
	{
		v50 = *(_DWORD*)(a1 + 112);
		if (v50)
		{
			v54 = 0i64;
			sub_1405787D0((__int64)&v54, 0, v50, v49, v48, 0i64, 0i64, 0, (_QWORD*)(a1 + 56), &v54, 0);
		}
	}
LABEL_122:
	v51 = *(float*)(a1 + 224);
	if (v51 > 0.0)
		*(float*)(a1 + 224) = (float)*(int*)(a1 + 164) + v51;
	v52 = *(float*)(a1 + 244);
	if (v52 > 0.0)
		*(float*)(a1 + 244) = (float)*(int*)(a1 + 164) + v52;
	v53 = *(_DWORD*)(a1 + 184);
	if (v53 <= *(_DWORD*)(a1 + 188))
	{
		if ((v53 & 1) == 0)
			v1 = 0;
		*(_DWORD*)(a1 + 176) = v1;
		sub_140779660(a1, 1i64);
	}
}
// 14077B16B: conditional instruction was optimized away because eax.4!=0
// 14077AECB: variable 'v7' is possibly undefined
// 14077AF05: variable 'v10' is possibly undefined
// 14077AFCB: variable 'v14' is possibly undefined
// 14077B005: variable 'v17' is possibly undefined
// 14077B125: variable 'v28' is possibly undefined
// 14077B162: variable 'v32' is possibly undefined
// 14077B412: variable 'v45' is possibly undefined
// 14077B4B1: variable 'v49' is possibly undefined
// 140A6DFF8: using guessed type wchar_t *off_140A6DFF8[2];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B40: using guessed type __int64 qword_140C63B40;
// 140C64C04: using guessed type int dword_140C64C04;

