//----- (000000014003C5A0) ----------------------------------------------------
__int64 __fastcall sub_14003C5A0(_QWORD* a1)
{
	int* v3; // rax
	unsigned int v4; // ebp
	int* v5; // rbx
	unsigned __int64 v6; // r14
	int* v7; // r15
	__int64 v8; // r12
	__int64 v9; // rdi
	int* v10; // r14
	unsigned __int64 v11; // rsi
	int* v12; // rax
	int* v13; // rdi
	__int64 v14; // rsi
	int* v15; // rax
	const char* v16; // r13
	_BYTE* v17; // rcx
	__int64 v18; // r8
	char v19; // al
	int* v20; // rax
	__int64 v21; // r14
	__int64 v22; // r15
	unsigned __int64 v23; // rsi
	int* v24; // rax
	int* v25; // rdi
	__int64 v26; // r15
	unsigned __int64 v27; // rsi
	int* v28; // rax
	int* v29; // rdi
	int* v30; // rcx
	unsigned __int64 v31; // rsi
	__int64 v32; // r15
	__int64 v33; // rdx
	unsigned __int16 v34; // ax
	int* v35; // rax
	const char* v36; // rdi
	_QWORD* v37; // rax
	__int64 v38; // rcx
	int** v39; // [rsp+70h] [rbp+8h] BYREF
	__int64 v40; // [rsp+78h] [rbp+10h] BYREF

	if (!a1[1])
		return 2147500037i64;
	HIDWORD(qword_140C66780) = 1;
	sub_14003D180(&qword_140C66770, a1);
	v3 = sub_14018B280(18i64, 0);
	v4 = 0;
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 0i64;
		*(_QWORD*)v3 = off_140B55060;
	}
	else
	{
		v3 = 0i64;
	}
	v5 = v3 + 4;
	v6 = 0i64;
	for (*((_WORD*)v3 + 8) = 0; v6 < a1[1]; ++v6)
	{
		v39 = (int**)sub_14018D540(&v40, (__int64)L"<NetAddress>%s</NetAddress>", *(_QWORD*)(*a1 + 8 * v6));
		if (*v39)
		{
			v7 = v5;
			v8 = v5 ? *((_QWORD*)v5 - 1) : 0i64;
			v9 = *((_QWORD*)*v39 - 1);
			v5 = (int*)sub_14018D140(v5, v9 + v8);
			sub_1407DB590((int*)((char*)v5 + 2 * v8), *v39, 2 * v9);
			*((_WORD*)v5 + v9 + v8) = 0;
			if (v7 != v5)
			{
				if (v7)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
			}
		}
		if (v40)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
	}
	v10 = (int*)StringUuid;
	if (StringUuid)
	{
		v11 = 0i64;
		if (*StringUuid)
		{
			do
				++v11;
			while (StringUuid[v11]);
		}
		v12 = sub_14018B280(v11 + 17, 0);
		if (v12)
		{
			*(_QWORD*)v12 = off_140B55060;
			*((_QWORD*)v12 + 1) = v11;
		}
		else
		{
			v12 = 0i64;
		}
		v13 = v12 + 4;
		sub_1407DB590(v12 + 4, v10, v11);
		*((_BYTE*)v13 + v11) = 0;
	}
	else
	{
		v13 = 0i64;
	}
	v14 = *((_QWORD*)v13 - 1);
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
	v16 = (const char*)(v15 + 4);
	if (v14)
	{
		v17 = v15 + 4;
		v18 = v14;
		do
		{
			v19 = v17[(char*)v13 - v16];
			if ((unsigned __int8)(v19 - 97) <= 0x19u)
				v19 -= 32;
			*v17++ = v19;
			--v18;
		} while (v18);
	}
	v16[v14] = 0;
	(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
	v20 = sub_14018B280(80i64, 0);
	v21 = (__int64)v20;
	if (v20)
	{
		*((_QWORD*)v20 + 3) = 0i64;
		*(_QWORD*)v20 = off_140B55828;
		*((_QWORD*)v20 + 5) = 0i64;
		*((_QWORD*)v20 + 6) = 0i64;
		*((_QWORD*)v20 + 7) = 0i64;
		*(_QWORD*)(v20 + 17) = 0i64;
	}
	else
	{
		v21 = 0i64;
	}
	*(_DWORD*)(v21 + 32) = 20021;
	v22 = *(_QWORD*)(v21 + 40);
	v23 = 0i64;
	do
		++v23;
	while (aAuth_3[v23]);
	v24 = sub_14018B280(v23 + 17, 0);
	if (v24)
	{
		*((_QWORD*)v24 + 1) = v23;
		*(_QWORD*)v24 = off_140B55060;
	}
	else
	{
		v24 = 0i64;
	}
	v25 = v24 + 4;
	sub_1407DB590(v24 + 4, (int*)"Auth", v23);
	*((_BYTE*)v25 + v23) = 0;
	*(_QWORD*)(v21 + 40) = v25;
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
	v26 = *(_QWORD*)(v21 + 48);
	v27 = 0i64;
	do
		++v27;
	while (aUnregisterveri[v27]);
	v28 = sub_14018B280(v27 + 17, 0);
	if (v28)
	{
		*((_QWORD*)v28 + 1) = v27;
		*(_QWORD*)v28 = off_140B55060;
	}
	else
	{
		v28 = 0i64;
	}
	v29 = v28 + 4;
	sub_1407DB590(v28 + 4, (int*)"UnregisterVerifiedIp", v27);
	*((_BYTE*)v29 + v27) = 0;
	*(_QWORD*)(v21 + 48) = v29;
	if (v26)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v26 - 16) + 8i64))(v26 - 16);
	*(_DWORD*)(v21 + 64) = 1;
	if (v5)
	{
		v30 = v5;
		v31 = 0i64;
		v32 = *((_QWORD*)v5 - 1) + 1i64;
		v33 = v32;
		if (*((_QWORD*)v5 - 1) != -1i64)
		{
			do
			{
				v34 = *(_WORD*)v30;
				if (*(_WORD*)v30 >= 0x80u)
				{
					if (v34 >= 0x1000u)
						v31 += 3i64;
					else
						v31 += 2i64;
				}
				else
				{
					++v31;
				}
				if (!v34)
					break;
				v30 = (int*)((char*)v30 + 2);
				--v33;
			} while (v33);
		}
		v35 = sub_14018B280(v31 - 1 + 17, 0);
		if (v35)
		{
			*((_QWORD*)v35 + 1) = v31 - 1;
			*(_QWORD*)v35 = off_140B55060;
		}
		else
		{
			v35 = 0i64;
		}
		v36 = (const char*)(v35 + 4);
		sub_14018EB80((unsigned __int16*)v5, v32, (__int64)(v35 + 4), v31, 0i64);
	}
	else
	{
		v36 = 0i64;
	}
	v37 = sub_14018DED0(&v39, (__int64)"<Request><NetAddresses>%s</NetAddresses><UserId>%s</UserId></Request>", v36, v16);
	v38 = *(_QWORD*)(v21 + 56);
	*(_QWORD*)(v21 + 56) = *v37;
	*v37 = v38;
	if (v39)
		(*((void(__fastcall**)(int**)) * (v39 - 2) + 1))(v39 - 2);
	if (v36)
		(*(void(__fastcall**)(const char*))(*((_QWORD*)v36 - 2) + 8i64))(v36 - 16);
	if ((int)sub_1400B19C0(&qword_140C66F70, v21, 0) < 0)
		v4 = -2147467259;
	if (v16)
		(*(void(__fastcall**)(const char*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 16);
	if (v5)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
	return v4;
}
// 1409F6640: using guessed type wchar_t aNetaddressSNet[28];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B55828: using guessed type __int64 (__fastcall *off_140B55828[10])();
// 140C66770: using guessed type __int64 qword_140C66770;
// 140C66780: using guessed type __int64 qword_140C66780;
// 140C66F70: using guessed type __int64 qword_140C66F70;

