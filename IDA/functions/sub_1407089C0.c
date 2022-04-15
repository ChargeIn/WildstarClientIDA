//----- (00000001407089C0) ----------------------------------------------------
__int64 __fastcall sub_1407089C0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rbp
	int v8; // r9d
	__int64 v9; // rsi
	unsigned int v10; // ebx
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rdx
	unsigned __int16* v17; // r10
	_QWORD* v18; // rax
	__int64 v19; // r11
	__int64 v20; // rdx
	int v21; // r10d
	__int64 v22; // rdx
	__int64 v23; // r10
	_DWORD* v24; // rcx
	__int64 v25; // r8
	__int64 v26; // rdx
	__int64(__fastcall * *v28)(); // [rsp+20h] [rbp-118h] BYREF
	int v29; // [rsp+28h] [rbp-110h]
	__int64 v30; // [rsp+30h] [rbp-108h]
	int v31; // [rsp+38h] [rbp-100h]
	__int64 v32[24]; // [rsp+40h] [rbp-F8h] BYREF
	__int128 v33; // [rsp+100h] [rbp-38h]
	int* v34; // [rsp+110h] [rbp-28h]
	double v35; // [rsp+140h] [rbp+8h]

	v1 = a1;
	v30 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v28 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v31 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v7 = qword_140C65898;
	v8 = v6;
	v29 = v6;
	v9 = 0i64;
	if (*(_QWORD*)(qword_140C65898 + 32792))
	{
		while (1)
		{
			v10 = *(_DWORD*)(*(_QWORD*)(v7 + 32784) + 8 * v9);
			if (qword_140C63840)
				break;
			if (!dword_140C64698 && (int)sub_14024AA60() >= 0)
			{
				v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C08 + 24i64))(qword_140C63C08, v10);
				goto LABEL_9;
			}
		LABEL_19:
			if ((unsigned __int64)++v9 >= *(_QWORD*)(v7 + 32792))
			{
				v1 = v30;
				v8 = v29;
				goto LABEL_21;
			}
		}
		v11 = qword_140C63840(off_140A6E180, v10, qword_140C63858);
	LABEL_9:
		if (v11 && (*(_BYTE*)(v11 + 16) & 0x40) != 0 && *(_WORD*)(*(_QWORD*)(v7 + 32784) + 8 * v9 + 4))
		{
			sub_1400B7090((__int64)v32, *(_DWORD*)(v11 + 60));
			v32[0] = (__int64)off_140B69230;
			v34 = 0i64;
			v33 = 0i64;
			v12 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v33 = v12;
			*((_QWORD*)&v33 + 1) = v12;
			v34 = v12 + 4;
			if (v12)
				*(_WORD*)v12 = 0;
			if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
				sub_14005E2C0(v1);
			v13 = *(_QWORD*)(v1 + 16);
			v14 = sub_14005C1B0(v1, 0, 0);
			*(_DWORD*)(v13 + 8) = 5;
			*(_QWORD*)v13 = v14;
			*(_QWORD*)(v1 + 16) += 16i64;
			LODWORD(v13) = sub_1400578C0(v1);
			sub_1400B7660(v32);
			v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v13);
			v16 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v16 = *v15;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F0870(v1, v16, L"strWorldName", v17);
			*(_QWORD*)(v1 + 16) -= 16i64;
			v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v13);
			*(_QWORD*)v19 = *v18;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			sub_1400F06F0(v1, v20, L"nLevel", v21);
			*(_QWORD*)(v1 + 16) -= 16i64;
			sub_1400FB1D0((__int64)&v28);
			sub_1400579E0(v1, v22, v13);
			if ((_QWORD)v33)
				sub_14018B900(v33, 0);
			sub_1400B7390(v32);
		}
		goto LABEL_19;
	}
LABEL_21:
	v23 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v23 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v24 = *(_DWORD**)(v23 + 32);
		}
		else
		{
			v35 = (double)v8;
			v24 = (_DWORD*)(*(_QWORD*)(v23 + 32)
				+ 40 * ((unsigned int)(LODWORD(v35) + HIDWORD(v35)) % (((1i64 << *(_BYTE*)(v23 + 11)) - 1) | 1)));
		}
		while (v24[6] != 3 || (double)v8 != *((double*)v24 + 2))
		{
			v24 = (_DWORD*)*((_QWORD*)v24 + 4);
			if (!v24)
			{
				v24 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v24 = (_DWORD*)(*(_QWORD*)(v23 + 24) + 16i64 * (v8 - 1));
	}
	v25 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v25 = *(_QWORD*)v24;
	v26 = (unsigned int)v24[2];
	*(_DWORD*)(v25 + 8) = v26;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v26, v8);
	return 1i64;
}
// 140708BB8: variable 'v17' is possibly undefined
// 140708BF2: variable 'v19' is possibly undefined
// 140708C04: variable 'v20' is possibly undefined
// 140708C04: variable 'v21' is possibly undefined
// 140708C20: variable 'v22' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6E180: using guessed type wchar_t *off_140A6E180[2];
// 140B422D0: using guessed type wchar_t aNlevel_16[7];
// 140B422E0: using guessed type wchar_t aStrworldname_0[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C08: using guessed type __int64 qword_140C63C08;
// 140C64698: using guessed type int dword_140C64698;
// 140C65898: using guessed type __int64 qword_140C65898;

