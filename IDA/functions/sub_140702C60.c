//----- (0000000140702C60) ----------------------------------------------------
__int64 __fastcall sub_140702C60(_QWORD* a1)
{
	unsigned int v3; // eax
	unsigned int v4; // ebp
	_DWORD* v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // ebx
	__int64 v11; // rcx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int16* v16; // r10
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	int v20; // r11d
	unsigned int v21; // edx
	int* v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int16* v25; // r10
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-28h] BYREF
	int v30; // [rsp+28h] [rbp-20h]
	_QWORD* v31; // [rsp+30h] [rbp-18h]
	int v32; // [rsp+38h] [rbp-10h]
	int v33; // [rsp+58h] [rbp+10h] BYREF

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v3 = sub_140056D60(a1, 1u);
		v4 = v3;
		if (v3 <= 0x23 && (v5 = (_DWORD*)qword_140C89D80[v3]) != 0i64)
		{
			v6 = a1[4];
			v29 = off_140B569F0;
			v7 = *(_QWORD*)(v6 + 112);
			v31 = a1;
			v32 = 1;
			if (*(_QWORD*)(v6 + 120) >= v7)
				sub_14005E2C0((__int64)a1);
			v8 = a1[2];
			v9 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)v8 = v9;
			a1[2] += 16i64;
			v10 = sub_1400578C0((__int64)a1);
			v11 = *(_QWORD*)(a1[4] + 160i64);
			v30 = v10;
			v12 = sub_14005C3C0(v11, v10);
			v13 = a1[2];
			*(_QWORD*)v13 = *v12;
			*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v13, L"nGameCommandId", v4);
			a1[2] -= 16i64;
			if (v4 <= 0x23)
				sub_1405B2FE0(v4);
			v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
			v15 = a1[2];
			*(_QWORD*)v15 = *v14;
			*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v15, L"strName", v16);
			a1[2] -= 16i64;
			v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
			*(_QWORD*)v18 = *v17;
			*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v19, L"eActionType", v20);
			a1[2] -= 16i64;
			v21 = v5[80];
			if (v21)
			{
				v22 = sub_1400B5DF0(qword_140C658F0, v21, 0i64);
				if ((unsigned int)sub_140415C70(a1, (__int64)v22))
				{
					sub_1400FB540((__int64)&v29);
					a1[2] -= 16i64;
				}
			}
			if ((*(__int64(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v5 + 128i64))(v5, 1i64))
			{
				v33 = v5[69];
				if ((unsigned int)sub_1403D3470(a1, &v33))
				{
					sub_1400FB540((__int64)&v29);
					a1[2] -= 16i64;
				}
			}
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v5 + 176i64))(v5);
			v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
			v24 = a1[2];
			*(_QWORD*)v24 = *v23;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v24, L"strIcon", v25);
			a1[2] -= 16i64;
			v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
			*(_QWORD*)v27 = *v26;
			*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
			a1[2] += 16i64;
			sub_1400579E0((__int64)a1, v28, v10);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140702DB2: variable 'v16' is possibly undefined
// 140702DE3: variable 'v18' is possibly undefined
// 140702DF5: variable 'v19' is possibly undefined
// 140702DF5: variable 'v20' is possibly undefined
// 140702EC7: variable 'v25' is possibly undefined
// 140702EED: variable 'v27' is possibly undefined
// 140702EFF: variable 'v28' is possibly undefined
// 140B41B08: using guessed type wchar_t aEactiontype[12];
// 140B41B20: using guessed type wchar_t aStrname_92[8];
// 140B41B30: using guessed type wchar_t aNgamecommandid[15];
// 140B41D78: using guessed type wchar_t aStricon_17[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C89D80: using guessed type __int64 qword_140C89D80[];

