//----- (00000001402AEBB0) ----------------------------------------------------
__int64 __fastcall sub_1402AEBB0(__int64 a1, int a2, __m128i* a3, int a4, int a5, int a6, int a7)
{
	int v7; // eax
	int v9; // eax
	int v10; // eax
	const __m128i* v12; // rax
	__int64 v13; // rsi
	unsigned int v15; // edi
	__int64 v16; // rcx
	int v17; // eax
	unsigned int v18; // edx
	unsigned __int64 v19; // rax
	__int64 v20; // rcx
	unsigned int v21; // eax
	int v22; // esi
	__int64 v23; // r8
	__int64 v24; // rax
	const wchar_t* v25; // rcx
	__int64 v26; // rcx
	__int64 v27[3]; // [rsp+30h] [rbp-18h] BYREF
	void(__fastcall * **v28)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

	v7 = a5;
	*(_DWORD*)(a1 + 72) = a2;
	*(_DWORD*)(a1 + 80) = v7;
	v9 = a6;
	*(_DWORD*)(a1 + 76) = a4;
	*(_DWORD*)(a1 + 84) = v9;
	v10 = a7;
	*(_DWORD*)(a1 + 88) = 27;
	*(_DWORD*)(a1 + 104) = 6;
	*(_DWORD*)(a1 + 48) = -2147483638;
	*(_DWORD*)(a1 + 92) = v10;
	v12 = sub_1407DD8D8(a3, 0x2Eu);
	v13 = (__int64)v12;
	if (!v12)
		return sub_1402B1940(a1, 0x80004005);
	v15 = 0;
	if ((unsigned int)sub_14018E2C0((__int64)v12, L".tex"))
	{
		if ((unsigned int)sub_14018E2C0(v13, L".tga"))
		{
			if ((unsigned int)sub_14018E2C0(v13, L".dds"))
			{
				if ((unsigned int)sub_14018E2C0(v13, L".png"))
				{
					if ((unsigned int)sub_14018E2C0(v13, L".bmp"))
					{
						if ((unsigned int)sub_14018E2C0(v13, L".jpg") && (unsigned int)sub_14018E2C0(v13, L".jpeg"))
							return sub_1402B1940(a1, 0x80004005);
						*(_DWORD*)(a1 + 104) = 5;
					}
					else
					{
						*(_DWORD*)(a1 + 104) = 4;
					}
				}
				else
				{
					*(_DWORD*)(a1 + 104) = 3;
				}
			}
			else
			{
				*(_DWORD*)(a1 + 104) = 2;
			}
		}
		else
		{
			*(_DWORD*)(a1 + 104) = 1;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 104) = 0;
	}
	v28 = 0i64;
	if ((unsigned int)sub_14018E3E0((__int64)a3, L"http", 4ui64))
	{
		if (!*(_DWORD*)(a1 + 104))
		{
			v17 = sub_1401B5B50(*(__int64*)&qword_140C63788, a3, 1i64, 3, (_QWORD*)(a1 + 344));
			if (v17 >= 0)
			{
				v19 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 344) + 24i64))(*(_QWORD*)(a1 + 344));
				v20 = a1;
				if (v19 >= 0x70)
				{
					v21 = sub_14029CEC0((_DWORD*)a1);
				LABEL_34:
					v15 = v21;
					goto LABEL_35;
				}
				v18 = -2147467259;
			LABEL_33:
				v21 = sub_1402B1940(v20, v18);
				goto LABEL_34;
			}
			v18 = v17;
		LABEL_32:
			v20 = a1;
			goto LABEL_33;
		}
		v22 = sub_1401B6DE0(v16, a3, (int**)(a1 + 352), (__int64)&v28, 0i64);
		if (v22 < 0)
		{
			v24 = 0x141DE6AB8i64;
			v25 = L"na";
		LABEL_29:
			if (a3)
				v25 = (const wchar_t*)a3;
			v27[0] = v24;
			sub_1401A3130(14, 2, v27, (unsigned int)v22, v25);
			v18 = v22;
			goto LABEL_32;
		}
	}
	else
	{
		v22 = sub_1407B01F0(a3->m128i_i32, 1, (int**)(a1 + 352), (__int64)&v28);
		if (v22 < 0)
		{
			v24 = 0x141DE66D8i64;
			v25 = L"na";
			goto LABEL_29;
		}
	}
	v26 = *(_QWORD*)(a1 + 56);
	v27[1] = (__int64)sub_1402B0970;
	v27[0] = a1;
	v22 = sub_140279D70(v26, v27, v23, v28, (int**)(a1 + 368));
	if (v22 < 0)
	{
		v24 = 0x141DE6668i64;
		v25 = L"na";
		goto LABEL_29;
	}
LABEL_35:
	if (v28)
		(*v28)[1](v28);
	return v15;
}
// 1402AED8D: variable 'v16' is possibly undefined
// 1402AEE02: variable 'v23' is possibly undefined
// 140AE6E54: using guessed type wchar_t aNa_7[3];
// 140AE7144: using guessed type wchar_t aNa_6[3];
// 140AE7244: using guessed type wchar_t aNa_5[3];
// 140AEC658: using guessed type wchar_t aJpeg_1[6];
// 140AECA58: using guessed type wchar_t aJpg_2[5];
// 140AECA68: using guessed type wchar_t aBmp_3[5];
// 140AECA78: using guessed type wchar_t aPng_3[5];
// 140AECA88: using guessed type wchar_t aDds_2[5];
// 140AECA98: using guessed type wchar_t aTga_3[5];
// 140AECAA8: using guessed type wchar_t aTex_8[5];
// 140AECAB8: using guessed type wchar_t aHttp_1[5];

