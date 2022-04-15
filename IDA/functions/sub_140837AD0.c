#include "../winhttp.h"

//----- (0000000140837AD0) ----------------------------------------------------
void __fastcall sub_140837AD0(__int64 a1, int a2)
{
	__int64* v2; // rsi
	__int64* v5; // r15
	__int64 v6; // rdx
	_QWORD* v7; // rbx
	__int64 v8; // rbp
	_QWORD* v9; // rax
	_QWORD* v10; // rcx
	__int64 v11; // rax
	_QWORD* v12; // rcx
	__int64 v13; // rdx
	__int64* v14; // rax
	__int64 v15; // [rsp+28h] [rbp-30h]

	v2 = *(__int64**)(a1 + 4712);
	v5 = 0i64;
	if (v2)
	{
		while (*((_DWORD*)v2 + 2) != a2)
		{
			v5 = v2;
			v2 = (__int64*)*v2;
			if (!v2)
				return;
		}
		v6 = v2[2];
		if (v6)
		{
			sub_140881720(dword_140C10F20, v6);
			v2[2] = 0i64;
		}
		v2[3] = 0i64;
		v7 = (_QWORD*)v2[4];
		if (v7)
		{
			while (1)
			{
				v8 = v7[1];
				if (v8)
				{
					sub_140839150(a1, v7[1]);
					LODWORD(v15) = a2;
					if (*(_QWORD*)(a1 + 4680))
						goto LABEL_13;
					if (*(_DWORD*)(a1 + 4696) < *(_DWORD*)(a1 + 4692))
					{
						v9 = (_QWORD*)sub_1408819F0(dword_140C10F20, 24i64);
						if (v9)
							break;
					}
				}
			LABEL_17:
				v7 = (_QWORD*)*v7;
				if (!v7)
					goto LABEL_18;
			}
			*v9 = *(_QWORD*)(a1 + 4680);
			*(_QWORD*)(a1 + 4680) = v9;
		LABEL_13:
			v10 = *(_QWORD**)(a1 + 4672);
			v11 = *(_QWORD*)(a1 + 4680);
			if (v10)
				*v10 = v11;
			else
				*(_QWORD*)(a1 + 4664) = v11;
			v12 = *(_QWORD**)(a1 + 4680);
			*(_QWORD*)(a1 + 4672) = v12;
			*(_QWORD*)(a1 + 4680) = *v12;
			*v12 = 0i64;
			v13 = *(_QWORD*)(a1 + 4672);
			++* (_DWORD*)(a1 + 4696);
			*(_QWORD*)(v13 + 8) = v8;
			*(_QWORD*)(v13 + 16) = v15;
			goto LABEL_17;
		}
	LABEL_18:
		sub_1408387C0((__int64)(v2 + 4));
		v14 = (__int64*)*v2;
		if (v2 == *(__int64**)(a1 + 4712))
			*(_QWORD*)(a1 + 4712) = v14;
		else
			*v5 = (__int64)v14;
		if (v2 == *(__int64**)(a1 + 4720))
			*(_QWORD*)(a1 + 4720) = v5;
		*v2 = *(_QWORD*)(a1 + 4728);
		--* (_DWORD*)(a1 + 4744);
		*(_QWORD*)(a1 + 4728) = v2;
	}
}
// 140837C0A: variable 'v15' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

