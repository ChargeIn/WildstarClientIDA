#include "../winhttp.h"

//----- (0000000140458EC0) ----------------------------------------------------
__int64 __fastcall sub_140458EC0(__int64 a1, __int64 a2)
{
	int v4; // edx
	__int64 v5; // rax
	__int64 v6; // rdi
	int v7; // eax
	__int64* v8; // rcx
	unsigned __int64 v9; // r8
	unsigned __int64 v10; // r9
	_DWORD* v11; // rdx
	__int64 v12; // rcx
	int v14; // [rsp+40h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 128) == 25)
	{
		v4 = *(_DWORD*)(a1 + 688);
		*(_DWORD*)(a1 + 132) = 1;
		v5 = sub_1403D90D0(qword_140C65898, v4);
		v6 = v5;
		if (v5)
		{
			v7 = *(_DWORD*)(a1 + 8);
			v8 = (__int64*)(v6 + 696);
			v9 = 0i64;
			v10 = *(_QWORD*)(v6 + 704);
			v14 = v7;
			if (v10)
			{
				v11 = (_DWORD*)*v8;
				while (*v11 != v7)
				{
					++v9;
					++v11;
					if (v9 >= v10)
						goto LABEL_7;
				}
			}
			else
			{
			LABEL_7:
				sub_140003460(v8, &v14);
			}
			LODWORD(v5) = *(_DWORD*)(v6 + 684);
		}
		v12 = *(_QWORD*)(a1 + 3264);
		if (v12 && (_DWORD)v5)
		{
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v12 + 80i64))(
				v12,
				20i64,
				*(unsigned int*)(a2 + 16));
			*(_DWORD*)(a1 + 244) = 1;
			sub_1404718E0(a1, 0, 0, 1, 1);
			sub_140472D80(a1);
			if (v6)
				*(_DWORD*)(v6 + 712) = 1;
		}
		else
		{
			if (v6)
				*(_DWORD*)(v6 + 712) = 0;
			sub_14045BF30(a1, 4, 0);
		}
		*(_DWORD*)(a1 + 4936) = 0;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

