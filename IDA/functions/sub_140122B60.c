//----- (0000000140122B60) ----------------------------------------------------
void __fastcall sub_140122B60(__int64 a1, int a2, __int64 a3)
{
	double v3; // xmm0_8
	__int64 v4; // r15
	__int64 v7; // rax
	__int64 v8; // rcx
	_QWORD* v9; // rdi
	__int64 v10; // rax
	__int64 v11; // r8
	_QWORD* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rbx
	_QWORD* v15; // rax
	__int64 v16; // r10
	_DWORD* v17; // rax
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	__int64 v20; // rax
	char* v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // rax
	char* v24; // rdx
	__int64 v25; // rax
	unsigned __int16* v26; // rax
	unsigned __int64* v27; // rdx
	unsigned __int64 v28; // r8
	unsigned __int64* v29; // rax
	unsigned __int64 v30; // r8
	unsigned __int16* v31; // rax
	float v32; // xmm0_4
	__int64 v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // rdx
	char* v36; // rax
	__int64(__fastcall * *v37)(); // r9
	int v38; // ebx
	__int64 v39; // rcx
	__int64 v40; // [rsp+20h] [rbp-50h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	__int64 v42; // [rsp+38h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-30h]
	__int64(__fastcall * *v44)(); // [rsp+50h] [rbp-20h] BYREF
	__int64 v45; // [rsp+58h] [rbp-18h]
	LPVOID v46; // [rsp+60h] [rbp-10h]
	__int64 v47; // [rsp+A0h] [rbp+30h] BYREF

	v4 = a2;
	if (a2 == 73)
	{
		v7 = *(_QWORD*)(a1 + 1088);
		if (a3 == v7)
			sub_140173980(*(_QWORD*)(a1 + 1080), *(float*)(v7 + 1032));
	}
	else if (a2 == 71)
	{
		v8 = *(_QWORD*)(a1 + 1080);
		if (a3 == v8)
		{
			if (*(_QWORD*)(a1 + 1088))
			{
				*(float*)&v3 = sub_1401737B0(v8);
				sub_140174900(*(_QWORD*)(a1 + 1088), v3);
			}
		}
	}
	if (*(_DWORD*)(a1 + 1128) != -2)
	{
		v9 = *(_QWORD**)(*(_QWORD*)(a1 + 32) + 400i64);
		if (*(_QWORD*)(v9[4] + 120i64) >= *(_QWORD*)(v9[4] + 112i64))
			sub_14005E2C0((__int64)v9);
		v10 = v9[5];
		if (v10 == v9[10])
			v11 = v9[15];
		else
			v11 = *(_QWORD*)(**(_QWORD**)(v10 + 8) + 24i64);
		v12 = sub_140060AB0((__int64)v9, 0, v11);
		v12[4] = sub_1400F3FF0;
		v13 = v9[2];
		*(_QWORD*)v13 = v12;
		*(_DWORD*)(v13 + 8) = 6;
		v9[2] += 16i64;
		v14 = (__int64)(v9[2] - v9[3]) >> 4;
		v15 = sub_14005C3C0(*(_QWORD*)(v9[4] + 160i64), *(_DWORD*)(a1 + 1128));
		*(_QWORD*)v16 = *v15;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
		v9[2] += 16i64;
		v17 = (_DWORD*)(v9[2] - 16i64);
		if (v17 == dword_140A12138 || v17[2] != 6)
		{
			v9[2] = v17;
			goto LABEL_68;
		}
		sub_1400D62A0(v9, a1);
		v18 = (unsigned __int64*)off_140C2C4D0[v4];
		if (v18)
		{
			v19 = -1i64;
			do
				++v19;
			while (*((_BYTE*)v18 + v19));
			sub_140058710((__int64)v9, v18, v19);
		}
		else
		{
			*(_DWORD*)(v9[2] + 8i64) = 0;
			v9[2] += 16i64;
		}
		sub_140058900((__int64)v9, (__int64)v18, 0);
		if ((_DWORD)v4 == 32)
		{
			sub_140058710((__int64)v9, (unsigned __int64*)"Button", 6ui64);
			v29 = (unsigned __int64*)sub_140123610((_QWORD*)a1, a3);
			if (v29)
			{
				v30 = -1i64;
				do
					++v30;
				while (*((_BYTE*)v29 + v30));
				sub_140058710((__int64)v9, v29, v30);
			}
			else
			{
				*(_DWORD*)(v9[2] + 8i64) = 0;
				v9[2] += 16i64;
			}
			sub_14005EA50((__int64)v9, (__int64*)(v9[2] - 48i64), (int*)(v9[2] - 32i64), (unsigned int*)(v9[2] - 16i64));
			v9[2] -= 32i64;
			if (!*(_QWORD*)(a1 + 1104))
			{
				if (*(_QWORD*)(a1 + 1088))
				{
					v21 = "Value";
					goto LABEL_29;
				}
				if (!*(_QWORD*)(a1 + 1080))
				{
				LABEL_60:
					v34 = sub_14005C3C0(*(_QWORD*)(v9[4] + 160i64), *(_DWORD*)(a1 + 1132));
					v35 = v9[2];
					*(_QWORD*)v35 = *v34;
					*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
					v9[2] += 16i64;
					if ((_DWORD)v14)
						v36 = (char*)sub_1400580E0((__int64)v9, v14) - v9[8];
					else
						v36 = 0i64;
					v37 = (__int64(__fastcall**)())(v9[2] - 80i64);
					LODWORD(v42) = 0;
					TlsValue = v37;
					if ((unsigned int)sub_140061FB0(
						(__int64)v9,
						(void(__fastcall*)(__int64, __int64))sub_140058DB0,
						(__int64)&TlsValue,
						(__int64)v37 - v9[8],
						(__int64)v36))
					{
						TlsValue = &off_140B5E648;
						v42 = 0i64;
						lpTlsValue = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, &TlsValue);
						v44 = TlsValue;
						v45 = v42;
						v46 = lpTlsValue;
						v47 = sub_140056BB0(v9, 0xFFFFFFFF, 0i64) + 19899968;
						v38 = sub_140196F30(&dword_140C8A11C, 13, &v47, &v44);
						TlsValue = &off_140B5E648;
						TlsSetValue(dwTlsIndex, lpTlsValue);
						if (v38)
							DebugBreak();
					}
					sub_1400582A0((__int64)v9, -2);
					goto LABEL_68;
				}
				v24 = "Value";
			LABEL_57:
				sub_140058710((__int64)v9, (unsigned __int64*)v24, 5ui64);
				v32 = sub_1401737B0(*(_QWORD*)(a1 + 1080));
				v33 = v9[2];
				*(_DWORD*)(v33 + 8) = 3;
				*(double*)v33 = v32;
				goto LABEL_58;
			}
			sub_140058710((__int64)v9, (unsigned __int64*)"Text", 4ui64);
			v31 = (unsigned __int16*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1104) + 112i64))(*(_QWORD*)(a1 + 1104));
			v27 = (unsigned __int64*)sub_14018F0E0(&v44, v31)[1];
			if (!v27)
			{
				*(_DWORD*)(v9[2] + 8i64) = 0;
				v9[2] += 16i64;
			LABEL_40:
				if (v45)
					sub_14018B900(v45, 0);
				goto LABEL_59;
			}
			v28 = -1i64;
			do
				++v28;
			while (*((_BYTE*)v27 + v28));
		}
		else
		{
			if ((int)v4 <= 38)
				goto LABEL_60;
			if ((int)v4 > 40)
			{
				if ((_DWORD)v4 != 71)
				{
					if ((_DWORD)v4 == 73)
					{
						v20 = *(_QWORD*)(a1 + 1088);
						if (v20)
						{
							if (a3 == v20)
							{
								v21 = "Value";
							LABEL_29:
								sub_140058710((__int64)v9, (unsigned __int64*)v21, 5ui64);
								v22 = v9[2];
								*(double*)v22 = *(float*)(*(_QWORD*)(a1 + 1088) + 1032i64);
								*(_DWORD*)(v22 + 8) = 3;
							LABEL_58:
								v9[2] += 16i64;
							LABEL_59:
								sub_14005EA50(
									(__int64)v9,
									(__int64*)(v9[2] - 48i64),
									(int*)(v9[2] - 32i64),
									(unsigned int*)(v9[2] - 16i64));
								v9[2] -= 32i64;
								goto LABEL_60;
							}
						}
					}
					goto LABEL_60;
				}
				v23 = *(_QWORD*)(a1 + 1080);
				if (!v23 || a3 != v23)
					goto LABEL_60;
				v24 = "Value";
				goto LABEL_57;
			}
			v25 = *(_QWORD*)(a1 + 1104);
			if (!v25 || a3 != v25)
				goto LABEL_60;
			sub_140058710((__int64)v9, (unsigned __int64*)"Text", 4ui64);
			v26 = (unsigned __int16*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1104) + 112i64))(*(_QWORD*)(a1 + 1104));
			v27 = (unsigned __int64*)sub_14018F0E0(&v44, v26)[1];
			if (!v27)
			{
				*(_DWORD*)(v9[2] + 8i64) = 0;
				v9[2] += 16i64;
				goto LABEL_40;
			}
			v28 = -1i64;
			do
				++v28;
			while (*((_BYTE*)v27 + v28));
		}
		sub_140058710((__int64)v9, v27, v28);
		goto LABEL_40;
	}
LABEL_68:
	v39 = *(_QWORD*)(a1 + 1120);
	if (v39)
	{
		if ((_DWORD)v4 != 32)
			return;
		if (a3 == *(_QWORD*)(a1 + 1024))
			sub_1400D4070(v39, 0x1Eu, (char*)a1, byte_1409D7764, 0i64);
		if (a3 == *(_QWORD*)(a1 + 1032))
		{
			LODWORD(v40) = 1;
			sub_1400D4070(*(_QWORD*)(a1 + 1120), 0x1Eu, (char*)a1, byte_1409D7894, v40);
		}
		if (a3 == *(_QWORD*)(a1 + 1056))
		{
			LODWORD(v40) = 4;
			sub_1400D4070(*(_QWORD*)(a1 + 1120), 0x1Eu, (char*)a1, "i", v40);
		}
		if (a3 == *(_QWORD*)(a1 + 1064))
		{
			LODWORD(v40) = 5;
			sub_1400D4070(*(_QWORD*)(a1 + 1120), 0x1Eu, (char*)a1, L"i", v40);
		}
		if (a3 == *(_QWORD*)(a1 + 1040))
		{
			LODWORD(v40) = 2;
			sub_1400D4070(*(_QWORD*)(a1 + 1120), 0x1Eu, (char*)a1, L"i", v40);
		}
		if (a3 == *(_QWORD*)(a1 + 1048))
		{
			LODWORD(v40) = 3;
			sub_1400D4070(*(_QWORD*)(a1 + 1120), 0x1Eu, (char*)a1, byte_1409D77A4, v40);
		}
	}
	else if ((_DWORD)v4 != 32)
	{
		return;
	}
	if (a3 == *(_QWORD*)(a1 + 1024)
		|| a3 == *(_QWORD*)(a1 + 1032)
		|| a3 == *(_QWORD*)(a1 + 1056)
		|| a3 == *(_QWORD*)(a1 + 1064)
		|| a3 == *(_QWORD*)(a1 + 1040)
		|| a3 == *(_QWORD*)(a1 + 1048))
	{
		sub_1400C6B20(a1);
	}
}
// 140122BCC: variable 'v3' is possibly undefined
// 140122C7D: variable 'v16' is possibly undefined
// 140122CF7: variable 'v18' is possibly undefined
// 140123125: variable 'v40' is possibly undefined
// 1409D7764: using guessed type _BYTE byte_1409D7764[4];
// 1409D77A4: using guessed type _BYTE byte_1409D77A4[4];
// 1409D7894: using guessed type _BYTE byte_1409D7894[4];
// 1409D7904: using guessed type wchar_t aI_24[2];
// 1409D7914: using guessed type wchar_t aI_25[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C2C4D0: using guessed type char *off_140C2C4D0[80];
// 140C8A11C: using guessed type _DWORD dword_140C8A11C;

