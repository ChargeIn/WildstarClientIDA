#include "../winhttp.h"

//----- (00000001403D3800) ----------------------------------------------------
__int64 __fastcall sub_1403D3800(int* a1, unsigned int a2, __int64 a3, __int64 a4)
{
	int* v6; // rsi
	int v8; // eax
	__int64 v9; // r14
	__int64 v10; // rbp
	int* v11; // rdi
	int* v12; // rax
	int* v13; // rcx
	int v14; // eax
	int v15; // eax
	int v16; // eax

	v6 = a1;
	if (!a1)
		return 2147500037i64;
	*(_QWORD*)a4 = 0i64;
	*(_QWORD*)(a4 + 8) = 0i64;
	*(_DWORD*)(a4 + 16) = 1;
	v8 = *(_DWORD*)(a4 + 16);
	*(_DWORD*)a4 = a2;
	if (a2 > 4)
		v8 = 0;
	*(_DWORD*)(a4 + 16) = v8;
	if (a2)
	{
		v9 = a2;
		do
		{
			v10 = sub_1403AC780(a3, v6);
			v11 = sub_1403ACAB0(a3, v6);
			v12 = sub_1403D6540(a3, v6);
			v13 = v12;
			if (v10 && v11 && v12)
			{
				if (*(_DWORD*)(v10 + 120) >= 2u)
					*(_DWORD*)(a4 + 16) = 0;
				if ((v11[85] & 0x20000) == 0)
					*(_DWORD*)(a4 + 16) = 0;
				*(_DWORD*)(a4 + 4) += v12[3];
				v14 = *(_DWORD*)(a4 + 8);
				if (v14)
				{
					if (v14 != *v13)
					{
						*(_DWORD*)(a4 + 8) = 8;
						*(_DWORD*)(a4 + 16) = 0;
					}
				}
				else
				{
					*(_DWORD*)(a4 + 8) = *v13;
				}
				v15 = *(_DWORD*)(a4 + 12);
				if (v15)
				{
					if (v15 != v11[95])
						*(_DWORD*)(a4 + 12) = 72;
				}
				else
				{
					*(_DWORD*)(a4 + 12) = v11[95];
				}
			}
			else
			{
				*(_DWORD*)(a4 + 16) = 0;
			}
			v6 += 2;
			--v9;
		} while (v9);
	}
	v16 = *(_DWORD*)(a4 + 8);
	if (v16 < 3)
		*(_DWORD*)(a4 + 16) = 0;
	if (v16 > 6)
		*(_DWORD*)(a4 + 16) = 0;
	return 0i64;
}

