//----- (000000014002BAC0) ----------------------------------------------------
__int64 __fastcall sub_14002BAC0(_QWORD* a1)
{
	char* v2; // rax
	_DWORD* v3; // rbp
	_DWORD* v4; // rax
	_DWORD* v5; // rax
	__int64 v6; // r14
	__int64 v7; // rax
	_DWORD* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // rdi
	char* v11; // rdi
	unsigned __int16* v12; // rdi
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rsi
	unsigned __int64 v16; // rax
	unsigned __int64 v17; // r8
	_DWORD* v18; // rdx
	char* v19; // rdi
	__int64 v20; // rax
	char* v21; // rsi
	_BYTE* v22; // rax
	__int64 v23; // rax
	_DWORD* v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rax
	unsigned __int64 v31; // r8
	__int128* v32; // rax
	int v33; // edx
	__int128 v35[2]; // [rsp+20h] [rbp-28h] BYREF

	v2 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(v35, v2);
	v3 = dword_140A12138;
	v4 = (_DWORD*)(a1[3] + 32i64);
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(_DWORD*)(a1[3] + 40i64) != 5)
		sub_140056570(a1, 3u, "not table");
	v5 = (_DWORD*)(a1[3] + 48i64);
	if ((unsigned __int64)v5 >= a1[2] || v5 == dword_140A12138 || *(_DWORD*)(a1[3] + 56i64) != 5)
		sub_140056570(a1, 4u, "not table");
	v6 = *((_QWORD*)&v35[0] + 1);
	if (!(unsigned int)sub_14018E2C0(*((__int64*)&v35[0] + 1), L"ColorChanged"))
	{
		v7 = a1[2];
		v8 = dword_140A12138;
		*(_QWORD*)v7 = 0x3FF0000000000000i64;
		*(_DWORD*)(v7 + 8) = 3;
		a1[2] += 16i64;
		v9 = a1[2];
		if (a1[3] + 48i64 < v9)
			v8 = (_DWORD*)(a1[3] + 48i64);
		sub_14005E8E0((__int64)a1, (__int64)v8, (int*)(v9 - 16), v9 - 16);
		v10 = a1[2] - 16i64;
		if (*(_DWORD*)(v10 + 8) != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
			{
				v11 = 0i64;
			LABEL_19:
				sub_14018F2D0(v35, v11);
				v12 = (unsigned __int16*)*((_QWORD*)&v35[0] + 1);
				a1[2] -= 16i64;
				v14 = sub_14019D200(v13, v12);
				v15 = v14;
				if (v14 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14) == 12)
				{
					sub_140058710((__int64)a1, (unsigned __int64*)"Value", 5ui64);
					v16 = a1[3] + 32i64;
				LABEL_44:
					v31 = a1[2];
					if (v16 < v31)
						v3 = (_DWORD*)v16;
					sub_14005E8E0((__int64)a1, (__int64)v3, (int*)(v31 - 16), v31 - 16);
					v32 = (__int128*)sub_140056AB0(a1, (__int64)(a1[2] - a1[3]) >> 4);
					v33 = *(_DWORD*)(v15 + 16);
					v35[0] = *v32;
					if (*(_DWORD*)qword_140C63750 < v33)
						v33 = *(_DWORD*)qword_140C63750;
					sub_14002C7C0(v15, v33, v35);
					a1[2] -= 16i64;
					goto LABEL_49;
				}
				goto LABEL_49;
			}
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v10 = a1[2] - 16i64;
		}
		v11 = (char*)(*(_QWORD*)v10 + 32i64);
		goto LABEL_19;
	}
	if ((unsigned int)sub_14018E2C0(v6, L"ButtonSignal"))
		goto LABEL_51;
	sub_140058710((__int64)a1, (unsigned __int64*)"Button", 6ui64);
	v17 = a1[2];
	v18 = dword_140A12138;
	if (a1[3] + 32i64 < v17)
		v18 = (_DWORD*)(a1[3] + 32i64);
	sub_14005E8E0((__int64)a1, (__int64)v18, (int*)(v17 - 16), v17 - 16);
	v19 = 0i64;
	v20 = a1[2] - 16i64;
	if (*(_DWORD*)(v20 + 8) != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
		{
			v21 = 0i64;
			goto LABEL_32;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v20 = a1[2] - 16i64;
	}
	v21 = (char*)(*(_QWORD*)v20 + 32i64);
LABEL_32:
	a1[2] -= 16i64;
	v22 = sub_1400E8DD0(1u);
	if ((unsigned int)sub_14018E260(v21, (__int64)v22))
		goto LABEL_51;
	v23 = a1[2];
	v24 = dword_140A12138;
	*(_QWORD*)v23 = 0x3FF0000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v25 = a1[2];
	if (a1[3] + 48i64 < v25)
		v24 = (_DWORD*)(a1[3] + 48i64);
	sub_14005E8E0((__int64)a1, (__int64)v24, (int*)(v25 - 16), v25 - 16);
	v26 = a1[2] - 16i64;
	if (*(_DWORD*)(v26 + 8) == 4)
		goto LABEL_40;
	if ((unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v26 = a1[2] - 16i64;
	LABEL_40:
		v19 = (char*)(*(_QWORD*)v26 + 32i64);
	}
	sub_14018F2D0(v35, v19);
	v12 = (unsigned __int16*)*((_QWORD*)&v35[0] + 1);
	a1[2] -= 16i64;
	v28 = sub_14019D200(v27, v12);
	v15 = v28;
	if (v28 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28) == 12)
	{
		v29 = a1[2];
		*(_QWORD*)v29 = 0x4000000000000000i64;
		*(_DWORD*)(v29 + 8) = 3;
		v30 = a1[3];
		a1[2] += 16i64;
		v16 = v30 + 48;
		goto LABEL_44;
	}
LABEL_49:
	if (v12)
		sub_14018B900((__int64)v12, 0);
LABEL_51:
	if (v6)
		sub_14018B900(v6, 0);
	return 0i64;
}
// 14002BC15: variable 'v13' is possibly undefined
// 14002BDAF: variable 'v27' is possibly undefined
// 1409EE988: using guessed type wchar_t aColorchanged[13];
// 1409EE9B8: using guessed type wchar_t aButtonsignal_1[13];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63750: using guessed type __int64 qword_140C63750;

