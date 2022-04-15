#include "../winhttp.h"

//----- (000000014003B4F0) ----------------------------------------------------
__int64 __fastcall sub_14003B4F0(__int64 a1)
{
	int* v1; // rbp
	unsigned int v2; // esi
	unsigned __int64 v3; // rdi
	int* v4; // rax
	int* v5; // rbx
	__int64 v6; // rdi
	int* v7; // rax
	const char* v8; // r15
	_BYTE* v9; // rcx
	__int64 v10; // r8
	char v11; // al
	int* v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rbp
	unsigned __int64 v15; // r14
	int* v16; // rax
	int* v17; // rbx
	__int64 v18; // rbp
	unsigned __int64 v19; // r14
	int* v20; // rax
	int* v21; // rbx
	_QWORD* v22; // rax
	__int64 v23; // rcx
	__int64 v25; // [rsp+50h] [rbp+8h] BYREF

	v25 = a1;
	if ((((_DWORD)qword_140C66780 - 1) & 0xFFFFFFFD) == 0)
		return 0i64;
	v1 = (int*)StringUuid;
	v2 = 0;
	if (StringUuid)
	{
		v3 = 0i64;
		if (*StringUuid)
		{
			do
				++v3;
			while (StringUuid[v3]);
		}
		v4 = sub_14018B280(v3 + 17, 0);
		if (v4)
		{
			*(_QWORD*)v4 = off_140B55060;
			*((_QWORD*)v4 + 1) = v3;
		}
		else
		{
			v4 = 0i64;
		}
		v5 = v4 + 4;
		sub_1407DB590(v4 + 4, v1, v3);
		*((_BYTE*)v5 + v3) = 0;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = *((_QWORD*)v5 - 1);
	v7 = sub_14018B280(v6 + 17, 0);
	if (v7)
	{
		*(_QWORD*)v7 = off_140B55060;
		*((_QWORD*)v7 + 1) = v6;
	}
	else
	{
		v7 = 0i64;
	}
	v8 = (const char*)(v7 + 4);
	if (v6)
	{
		v9 = v7 + 4;
		v10 = v6;
		do
		{
			v11 = v9[(char*)v5 - v8];
			if ((unsigned __int8)(v11 - 97) <= 0x19u)
				v11 -= 32;
			*v9++ = v11;
			--v10;
		} while (v10);
	}
	v8[v6] = 0;
	(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
	v12 = sub_14018B280(80i64, 0);
	v13 = (__int64)v12;
	if (v12)
	{
		*((_QWORD*)v12 + 3) = 0i64;
		*(_QWORD*)v12 = off_140B55828;
		*((_QWORD*)v12 + 5) = 0i64;
		*((_QWORD*)v12 + 6) = 0i64;
		*((_QWORD*)v12 + 7) = 0i64;
		*(_QWORD*)(v12 + 17) = 0i64;
	}
	else
	{
		v13 = 0i64;
	}
	*(_DWORD*)(v13 + 32) = 20021;
	v14 = *(_QWORD*)(v13 + 40);
	v15 = 0i64;
	do
		++v15;
	while (aAuth_2[v15]);
	v16 = sub_14018B280(v15 + 17, 0);
	if (v16)
	{
		*(_QWORD*)v16 = off_140B55060;
		*((_QWORD*)v16 + 1) = v15;
	}
	else
	{
		v16 = 0i64;
	}
	v17 = v16 + 4;
	sub_1407DB590(v16 + 4, (int*)"Auth", v15);
	*((_BYTE*)v17 + v15) = 0;
	*(_QWORD*)(v13 + 40) = v17;
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	v18 = *(_QWORD*)(v13 + 48);
	v19 = 0i64;
	do
		++v19;
	while (aPageverifiedip[v19]);
	v20 = sub_14018B280(v19 + 17, 0);
	if (v20)
	{
		*(_QWORD*)v20 = off_140B55060;
		*((_QWORD*)v20 + 1) = v19;
	}
	else
	{
		v20 = 0i64;
	}
	v21 = v20 + 4;
	sub_1407DB590(v20 + 4, (int*)"PageVerifiedIps", v19);
	*((_BYTE*)v21 + v19) = 0;
	*(_QWORD*)(v13 + 48) = v21;
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	*(_DWORD*)(v13 + 64) = 1;
	v22 = sub_14018DED0(
		&v25,
		(__int64)"<Request><PageIndex>1</PageIndex><PageSize>10</PageSize><UserId>%s</UserId></Request>",
		v8);
	v23 = *(_QWORD*)(v13 + 56);
	*(_QWORD*)(v13 + 56) = *v22;
	*v22 = v23;
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
	if ((int)sub_1400B19C0(&qword_140C66F70, v13, 0) >= 0)
		LODWORD(qword_140C66780) = 1;
	else
		v2 = -2147467259;
	if (v8)
		(*(void(__fastcall**)(const char*))(*((_QWORD*)v8 - 2) + 8i64))(v8 - 16);
	return v2;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B55828: using guessed type __int64 (__fastcall *off_140B55828[10])();
// 140C66780: using guessed type __int64 qword_140C66780;
// 140C66F70: using guessed type __int64 qword_140C66F70;

