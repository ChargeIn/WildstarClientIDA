//----- (00000001406F37F0) ----------------------------------------------------
__int64 __fastcall sub_1406F37F0(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // r9
	int v8; // r10d
	_QWORD* v9; // r14
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // r8
	unsigned int v13; // edx
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64* v16; // rax
	__int64 v17; // rax
	__int64 v18; // rcx
	unsigned int v19; // esi
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v24; // r9
	_DWORD* v25; // rcx
	__int64 v26; // r8
	__int64 v27; // rdx
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-38h] BYREF
	int v30; // [rsp+28h] [rbp-30h]
	_QWORD* v31; // [rsp+30h] [rbp-28h]
	int v32; // [rsp+38h] [rbp-20h]
	double v33; // [rsp+60h] [rbp+8h] BYREF
	__int64 v34; // [rsp+68h] [rbp+10h] BYREF

	v1 = (_QWORD*)a1;
	v31 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v29 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v32 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0((__int64)v1);
	v4 = v1[2];
	v5 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v1[2] += 16i64;
	v6 = sub_1400578C0((__int64)v1);
	v7 = qword_140C65988;
	v8 = v6;
	v30 = v6;
	v9 = (_QWORD*)(qword_140C65988 + 216);
	v10 = *(_QWORD*)(qword_140C65988 + 216);
	v11 = *(_QWORD*)(v10 + 16);
	if (v11 != v10)
	{
		while (1)
		{
			v12 = *(_QWORD*)(v7 + 16);
			v13 = *(_DWORD*)(v11 + 32);
			v14 = *(_QWORD*)(v12 + 8);
			v15 = v12;
			while (v14)
			{
				if (*(_DWORD*)(v14 + 32) < v13)
				{
					v14 = *(_QWORD*)(v14 + 24);
				}
				else
				{
					v15 = v14;
					v14 = *(_QWORD*)(v14 + 16);
				}
			}
			if (v15 == v12 || v13 < *(_DWORD*)(v15 + 32))
			{
				v34 = *(_QWORD*)(v7 + 16);
				v16 = &v34;
			}
			else
			{
				v33 = *(double*)&v15;
				v16 = (__int64*)&v33;
			}
			v17 = *v16;
			if (v17 == v12)
				goto LABEL_25;
			v18 = *(_QWORD*)(v17 + 40);
			if (!v18)
				goto LABEL_25;
			v19 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18) + 36);
			if (qword_140C63840)
				break;
			if (!dword_140C64FBC && (int)sub_14020FAE0() >= 0)
			{
				v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C10 + 24i64))(qword_140C63C10, v19);
				goto LABEL_20;
			}
		LABEL_24:
			v7 = qword_140C65988;
		LABEL_25:
			v21 = *(_QWORD*)(v11 + 24);
			if (v21)
			{
				v11 = *(_QWORD*)(v11 + 24);
				for (i = *(_QWORD*)(v21 + 16); i; i = *(_QWORD*)(i + 16))
					v11 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v11 = j;
				if (*(_QWORD*)(v11 + 24) != j)
					v11 = j;
			}
			if (v11 == *v9)
			{
				v8 = v30;
				goto LABEL_35;
			}
		}
		v20 = qword_140C63840(off_140A6B0F0, v19, qword_140C63858);
	LABEL_20:
		if (v20 && (*(_BYTE*)(v20 + 12) & 0x20) != 0 && (unsigned int)sub_1406B91F0(v1, v20))
		{
			sub_1400FB470((__int64)&v29);
			v1 = v31;
			v31[2] -= 16i64;
		}
		goto LABEL_24;
	}
LABEL_35:
	v24 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v24 + 56))
	{
		v33 = (double)v8;
		if ((double)v8 == 0.0)
			v25 = *(_DWORD**)(v24 + 32);
		else
			v25 = (_DWORD*)(*(_QWORD*)(v24 + 32)
				+ 40 * ((unsigned int)(LODWORD(v33) + HIDWORD(v33)) % (((1i64 << *(_BYTE*)(v24 + 11)) - 1) | 1)));
		while (v25[6] != 3 || (double)v8 != *((double*)v25 + 2))
		{
			v25 = (_DWORD*)*((_QWORD*)v25 + 4);
			if (!v25)
			{
				v25 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v25 = (_DWORD*)(*(_QWORD*)(v24 + 24) + 16i64 * (v8 - 1));
	}
	v26 = v1[2];
	*(_QWORD*)v26 = *(_QWORD*)v25;
	v27 = (unsigned int)v25[2];
	*(_DWORD*)(v26 + 8) = v27;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v27, v8);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6B0F0: using guessed type wchar_t *off_140A6B0F0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C10: using guessed type __int64 qword_140C63C10;
// 140C64FBC: using guessed type int dword_140C64FBC;
// 140C65988: using guessed type __int64 qword_140C65988;

