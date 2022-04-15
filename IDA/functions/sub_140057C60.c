//----- (0000000140057C60) ----------------------------------------------------
__int64 __fastcall sub_140057C60(_QWORD* a1, char* a2)
{
	__int64 v3; // r14
	int v5; // r14d
	int* v7; // rax
	__int64* v8; // rbx
	unsigned __int8* v9; // rax
	int v10; // ecx
	unsigned __int8* v11; // rax
	int v12; // ecx
	_QWORD* v13; // rax
	unsigned __int8* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rax
	_BYTE* v17; // rax
	__int64 v18; // rax
	__int64 v19; // rcx
	char* v20; // rax
	__int64 v21; // r9
	__int64 v22; // rax
	unsigned int v23; // eax
	__int64 v24; // rbx
	__int64 v25; // rdi
	unsigned int v26; // r15d
	__int64* v27; // rcx
	__int64* v28; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v29; // [rsp+38h] [rbp-C8h]
	__int64 v30; // [rsp+48h] [rbp-B8h]
	char* v31; // [rsp+50h] [rbp-B0h]
	__int64 v32[5]; // [rsp+58h] [rbp-A8h] BYREF
	int v33; // [rsp+80h] [rbp-80h] BYREF
	void* v34; // [rsp+88h] [rbp-78h]

	v3 = a1[2] - a1[3];
	v33 = 0;
	v5 = (v3 >> 4) + 1;
	if (!a2)
		return 6i64;
	sub_140058780((__int64)a1, (unsigned __int64*)"@%s", a2);
	v7 = sub_1400593A0(a2);
	v8 = (__int64*)v7;
	v34 = v7;
	if (!v7)
		return sub_140057B70((__int64)a1, aOpen_0, v5);
	v9 = (unsigned __int8*)*((_QWORD*)v7 + 2);
	if (v9 == (unsigned __int8*)v8[1])
	{
	LABEL_6:
		v10 = -1;
	}
	else
	{
		v10 = *v9;
		v8[2] = (__int64)(v9 + 1);
		if (v10 == 35)
		{
			v33 = 1;
			while (1)
			{
				v8 = (__int64*)v34;
				if (!v34)
					break;
				v11 = (unsigned __int8*)*((_QWORD*)v34 + 2);
				if (v11 == *((unsigned __int8**)v34 + 1))
					goto LABEL_6;
				v12 = *v11;
				*((_QWORD*)v34 + 2) = v11 + 1;
				if (v12 == 10)
				{
					v10 = sub_1400594E0((__int64)v34);
					goto LABEL_15;
				}
			}
			v13 = sub_1407DE1B0();
			v10 = -1;
			*(_DWORD*)v13 = 22;
		}
	LABEL_15:
		v8 = (__int64*)v34;
	}
	if (v10 == byte_140C1DC30)
	{
		if (v8)
		{
			sub_14018B900(*v8, 0);
			sub_14018B900((__int64)v8, 0);
		}
		v8 = (__int64*)sub_1400593A0(a2);
		v34 = v8;
		if (!v8)
			return sub_140057B70((__int64)a1, aReopen, v5);
		while (v8)
		{
			v14 = (unsigned __int8*)v8[2];
			if (v14 == (unsigned __int8*)v8[1])
			{
				v10 = -1;
				goto LABEL_29;
			}
			v10 = *v14;
			v8[2] = (__int64)(v14 + 1);
			if (v10 == byte_140C1DC48)
				goto LABEL_28;
			v8 = (__int64*)v34;
		}
		v15 = sub_1407DE1B0();
		v10 = -1;
		*(_DWORD*)v15 = 22;
	LABEL_28:
		v8 = (__int64*)v34;
	LABEL_29:
		v33 = 0;
	}
	if (v8)
	{
		if (v10 != -1)
		{
			v16 = v8[2];
			if (v16 != *v8)
			{
				v17 = (_BYTE*)(v16 - 1);
				v8[2] = (__int64)v17;
				*v17 = v10;
			}
		}
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
	}
	v18 = a1[2] - 16i64;
	if (*(_DWORD*)(v18 + 8) == 4)
		goto LABEL_41;
	if ((unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v18 = a1[2] - 16i64;
	LABEL_41:
		v19 = *(_QWORD*)v18 + 32i64;
		goto LABEL_42;
	}
	v19 = 0i64;
LABEL_42:
	v20 = asc_140C1DC04;
	if (v19)
		v20 = (char*)v19;
	v21 = a1[2] - a1[8];
	v32[2] = (__int64)sub_140057A70;
	v31 = v20;
	v22 = a1[22];
	v32[3] = (__int64)&v33;
	v28 = v32;
	v32[4] = (__int64)a1;
	v32[0] = 0i64;
	v32[1] = 0i64;
	v29 = 0i64;
	v30 = 0i64;
	v23 = sub_140061FB0((__int64)a1, (void(__fastcall*)(__int64, __int64))sub_1400620B0, (__int64)&v28, v21, v22);
	v24 = a1[4];
	v25 = v30;
	v26 = v23;
	(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(v24 + 16))(*(_QWORD*)(v24 + 24), v29, v30, 0i64);
	*(_QWORD*)(v24 + 120) -= v25;
	v27 = (__int64*)v34;
	if (!v34)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		v27 = (__int64*)v34;
	}
	sub_1400594A0(v27);
	sub_140058300((__int64)a1, v5);
	return v26;
}
// 140057D40: conditional instruction was optimized away because ecx.4<100u
// 140057DDC: conditional instruction was optimized away because ecx.4<100u
// 140C1DC30: using guessed type char byte_140C1DC30;
// 140C1DC48: using guessed type char byte_140C1DC48;

