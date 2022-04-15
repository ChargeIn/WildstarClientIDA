#include "../winhttp.h"

//----- (00000001405546B0) ----------------------------------------------------
void __fastcall sub_1405546B0(__int64 a1, int a2, int a3)
{
	int v3; // esi
	_QWORD* v7; // r8
	unsigned int v8; // edx
	_QWORD** v9; // rcx
	_QWORD* i; // rax
	_QWORD** v11; // rcx
	__int64 v12; // rdx
	_QWORD* v13; // rax
	_QWORD** v14; // rcx
	__int64 v15; // rdx
	_QWORD* v16; // rax
	__int64 v17; // rcx
	_QWORD* v18; // r14
	int v19; // edx
	__int64 v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rcx
	char v23; // [rsp+48h] [rbp+10h] BYREF

	v3 = 0;
	if (!a2)
	{
		sub_14034BDD0(a1, 0);
		*(_QWORD*)(a1 + 56) = 0i64;
		*(_DWORD*)(a1 + 64) = 0;
		*(_DWORD*)(a1 + 40) = 0;
	}
	sub_140555040(a1);
	v7 = *(_QWORD**)(a1 + 112);
	v8 = 0;
	v9 = (_QWORD**)v7[3];
	for (i = *v9; i != v9; ++v8)
		i = (_QWORD*)*i;
	if (a3)
	{
		v11 = (_QWORD**)v7[5];
		v12 = 0i64;
		v13 = *v11;
		if (*v11 == v11)
			goto LABEL_11;
		do
		{
			v13 = (_QWORD*)*v13;
			++v12;
		} while (v13 != v11);
		if (!v12)
		{
		LABEL_11:
			v14 = (_QWORD**)v7[7];
			v15 = 0i64;
			v16 = *v14;
			if (*v14 == v14)
				goto LABEL_12;
			do
			{
				v16 = (_QWORD*)*v16;
				++v15;
			} while (v16 != v14);
			if (!v15)
				goto LABEL_12;
		}
	}
	else if (v8 < 2)
	{
	LABEL_12:
		if (*(_DWORD*)a1)
		{
			sub_1405548F0(a1);
		}
		else
		{
			v22 = qword_140C65898;
			*(_QWORD*)(a1 + 4) = 0i64;
			*(_DWORD*)(a1 + 12) = 300;
			*(_DWORD*)(a1 + 16) = -1;
			if (*(_DWORD*)(v22 + 26180) == 37)
				sub_1403A71F0(v22, 0, 0x65u, 1);
		}
		return;
	}
	if (!a2)
	{
		v17 = *(_QWORD*)(a1 + 32);
		v18 = (_QWORD*)(a1 + 32);
		if (v17)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			*v18 = 0i64;
		}
		v19 = *(_DWORD*)(a1 + 4);
		if (v19)
		{
			v20 = sub_1403D90D0(qword_140C65898, v19);
			v21 = v20;
			if (v20 && (*(_QWORD*)(v20 + 5528) || (int)sub_1407129A0((__int64*)(v20 + 5528)) >= 0))
			{
				*v18 = *(_QWORD*)(v21 + 5528);
				(***(void(__fastcall****)(_QWORD))(v21 + 5528))(*(_QWORD*)(v21 + 5528));
			}
			v23 = 0;
			sub_1403F4900(qword_140C65898, 0x356u, (__int64)&v23);
			if (v21 && (*(_BYTE*)(v21 + 4208) & 2) == 0 && !*(_DWORD*)(v21 + 684) && (*(_DWORD*)(v21 + 36) & 0x10000) == 0)
			{
				*(_DWORD*)(v21 + 3748) = *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 25744) + 8i64);
				if (!*(_DWORD*)(v21 + 3824))
				{
					*(_DWORD*)(v21 + 3828) = *(_DWORD*)(v21 + 4352);
					*(_DWORD*)(v21 + 3832) = *(_DWORD*)(v21 + 4356);
					*(_DWORD*)(v21 + 3836) = *(_DWORD*)(v21 + 4360);
				}
				*(_DWORD*)(v21 + 3824) = 1;
				sub_140195D70(v21 + 5672);
			}
		}
		else if (a1 != -32)
		{
			sub_14043CB30((_QWORD*)(a1 + 32));
		}
	}
	LOBYTE(v3) = a3 == 0;
	sub_140558930(a1, 1, 0, v3);
}
// 140C65898: using guessed type __int64 qword_140C65898;

