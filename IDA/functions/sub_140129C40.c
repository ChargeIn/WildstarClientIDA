#include "../winhttp.h"

//----- (0000000140129C40) ----------------------------------------------------
void __fastcall sub_140129C40(__int64 a1)
{
	unsigned __int64 i; // rdi
	_QWORD* v3; // rsi
	__int64 v4; // rsi
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rcx
	_QWORD* v8; // rcx
	signed __int32 v9; // ecx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	_QWORD* v16; // rcx
	__int64 v17; // rcx

	*(_QWORD*)a1 = off_140B57C40;
	if (qword_140C63650)
		sub_1400E2A10(qword_140C63650, *(int**)(a1 + 720));
	for (i = 0i64; i < *(_QWORD*)(a1 + 864); ++i)
	{
		v3 = *(_QWORD**)(*(_QWORD*)(a1 + 856) + 8 * i);
		if (*v3)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 8i64))(*v3);
			*v3 = 0i64;
		}
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 856) + 8 * i);
		if (v4)
		{
			v5 = *(_QWORD*)(v4 + 16);
			if (v5)
				sub_14018B900(v5, 0);
			sub_14018B900(v4, 0);
		}
	}
	*(_QWORD*)(a1 + 864) = 0i64;
	v6 = *(_QWORD*)(a1 + 856);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	sub_140195D70(a1 + 784);
	*(_DWORD*)(a1 + 784) = 0;
	v7 = *(_QWORD**)(a1 + 800);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 808);
	v8 = *(_QWORD**)(a1 + 808);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 800);
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_QWORD*)(a1 + 808) = 0i64;
	while (*(_QWORD*)(a1 + 768))
	{
		v9 = *(_DWORD*)(a1 + 760);
		if (v9)
		{
			while (v9 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 760), v9 - 1, v9))
			{
				v9 = *(_DWORD*)(a1 + 760);
				if (!v9)
					goto LABEL_25;
			}
			if (v9 == 1)
			{
				v10 = *(_QWORD*)(a1 + 768);
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					*(_QWORD*)(a1 + 768) = 0i64;
				}
			}
		}
	LABEL_25:
		;
	}
	v11 = *(_QWORD*)(a1 + 752);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	v12 = *(_QWORD*)(a1 + 744);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	v13 = *(_QWORD*)(a1 + 720);
	if (v13)
		sub_14018B900(v13, 0);
	v14 = *(_QWORD**)(a1 + 696);
	if (v14)
		*v14 = *(_QWORD*)(a1 + 704);
	v15 = *(_QWORD*)(a1 + 704);
	if (v15)
		*(_QWORD*)(v15 + 32) = *(_QWORD*)(a1 + 696);
	*(_QWORD*)(a1 + 696) = 0i64;
	*(_QWORD*)(a1 + 704) = 0i64;
	v16 = *(_QWORD**)(a1 + 680);
	if (v16)
		*v16 = *(_QWORD*)(a1 + 688);
	v17 = *(_QWORD*)(a1 + 688);
	if (v17)
		*(_QWORD*)(v17 + 16) = *(_QWORD*)(a1 + 680);
	*(_QWORD*)(a1 + 680) = 0i64;
	*(_QWORD*)(a1 + 688) = 0i64;
	sub_1401A76A0(a1 + 16);
}
// 140B57C40: using guessed type __int64 (__fastcall *off_140B57C40[29])();
// 140C63650: using guessed type __int64 qword_140C63650;

