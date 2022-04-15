//----- (00000001400B4840) ----------------------------------------------------
__int64 __fastcall sub_1400B4840(__int64 a1, const char* a2)
{
	const char* v2; // r15
	int v3; // ebx
	int* v4; // rax
	int* v5; // rdi
	__int64 v6; // rsi
	unsigned __int64 v7; // rbx
	int* v8; // rax
	int* v9; // r14
	unsigned __int64 v10; // rbx
	int* v11; // rax
	int* v12; // rbp
	__int64 v13; // r13
	unsigned __int64 v14; // r15
	int* v15; // rax
	int* v16; // rbx
	__int64 v17; // r13
	unsigned __int64 v18; // r15
	int* v19; // rax
	int* v20; // rbx
	int* v21; // rbx
	__int64 v22; // r13
	unsigned __int64 v23; // r15
	int* v24; // rax
	int v25; // edi
	__int64 v27; // [rsp+60h] [rbp+8h] BYREF

	v27 = a1;
	v2 = "en-US";
	if (a2)
		v2 = a2;
	v3 = ++dword_140C670D0;
	v4 = sub_14018B280(80i64, 0);
	v5 = 0i64;
	v6 = (__int64)v4;
	if (v4)
	{
		v4[4] = v3;
		*((_QWORD*)v4 + 3) = 0i64;
		*(_QWORD*)v4 = off_140B55828;
		*((_QWORD*)v4 + 5) = 0i64;
		*((_QWORD*)v4 + 6) = 0i64;
		*((_QWORD*)v4 + 7) = 0i64;
		*(_QWORD*)(v4 + 17) = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	*(_DWORD*)(v6 + 72) = 1;
	*(_DWORD*)(v6 + 32) = 30002;
	v7 = 0i64;
	do
		++v7;
	while (aIpauthz[v7]);
	v8 = sub_14018B280(v7 + 17, 0);
	if (v8)
	{
		*(_QWORD*)v8 = off_140B55060;
		*((_QWORD*)v8 + 1) = v7;
	}
	else
	{
		v8 = 0i64;
	}
	v9 = v8 + 4;
	sub_1407DB590(v8 + 4, (int*)"IpAuthz", v7);
	*((_BYTE*)v9 + v7) = 0;
	v10 = 0i64;
	do
		++v10;
	while (aSendipauthcode[v10]);
	v11 = sub_14018B280(v10 + 17, 0);
	if (v11)
	{
		*(_QWORD*)v11 = off_140B55060;
		*((_QWORD*)v11 + 1) = v10;
	}
	else
	{
		v11 = 0i64;
	}
	v12 = v11 + 4;
	sub_1407DB590(v11 + 4, (int*)"SendIpAuthCode", v10);
	*((_BYTE*)v12 + v10) = 0;
	sub_14018DED0(&v27, (__int64)"<Request><Locale>%s</Locale></Request>", v2);
	v13 = *(_QWORD*)(v6 + 40);
	if (v9)
	{
		v14 = *((_QWORD*)v9 - 1);
		v15 = sub_14018B280(v14 + 17, 0);
		if (v15)
		{
			*(_QWORD*)v15 = off_140B55060;
			*((_QWORD*)v15 + 1) = v14;
		}
		else
		{
			v15 = 0i64;
		}
		v16 = v15 + 4;
		sub_1407DB590(v15 + 4, v9, v14);
		*((_BYTE*)v16 + v14) = 0;
		*(_QWORD*)(v6 + 40) = v16;
	}
	else
	{
		*(_QWORD*)(v6 + 40) = 0i64;
	}
	if (v13)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
	v17 = *(_QWORD*)(v6 + 48);
	if (v12)
	{
		v18 = *((_QWORD*)v12 - 1);
		v19 = sub_14018B280(v18 + 17, 0);
		if (v19)
		{
			*(_QWORD*)v19 = off_140B55060;
			*((_QWORD*)v19 + 1) = v18;
		}
		else
		{
			v19 = 0i64;
		}
		v20 = v19 + 4;
		sub_1407DB590(v19 + 4, v12, v18);
		*((_BYTE*)v20 + v18) = 0;
		*(_QWORD*)(v6 + 48) = v20;
	}
	else
	{
		*(_QWORD*)(v6 + 48) = 0i64;
	}
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	v21 = (int*)v27;
	*(_DWORD*)(v6 + 64) = 1;
	v22 = *(_QWORD*)(v6 + 56);
	if (v21)
	{
		v23 = *((_QWORD*)v21 - 1);
		v24 = sub_14018B280(v23 + 17, 0);
		if (v24)
		{
			*(_QWORD*)v24 = off_140B55060;
			*((_QWORD*)v24 + 1) = v23;
		}
		else
		{
			v24 = 0i64;
		}
		v5 = v24 + 4;
		sub_1407DB590(v24 + 4, v21, v23);
		*((_BYTE*)v5 + v23) = 0;
	}
	*(_QWORD*)(v6 + 56) = v5;
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
	v25 = sub_1400B19C0(&qword_140C66F70, v6, 0);
	if (v25 < 0)
	{
		v27 = 0x141D0E1B8i64;
		sub_1401A2E50(0x15u, 0, &v27, v9, v12);
	}
	if (v21)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v21 - 2) + 8i64))(v21 - 4);
	if (v12)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v12 - 2) + 8i64))(v12 - 4);
	if (v9)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
	return (unsigned int)v25;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B55828: using guessed type __int64 (__fastcall *off_140B55828[10])();
// 140C66F70: using guessed type __int64 qword_140C66F70;
// 140C670D0: using guessed type int dword_140C670D0;

