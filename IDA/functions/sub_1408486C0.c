#include "../winhttp.h"

//----- (00000001408486C0) ----------------------------------------------------
char __fastcall sub_1408486C0(__int64* a1, int a2)
{
	__int64 v3; // rbp
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // r8
	__int64 v9; // r11
	_DWORD* v10; // r9
	__int64 v11; // rcx
	__int64 v12; // rdx

	v3 = (unsigned int)(a2 + *((_DWORD*)a1 + 4));
	v4 = sub_1408819F0(dword_140C10F20, 36 * v3);
	v5 = v4;
	if (v4)
	{
		v6 = (a1[1] - *a1) / 36;
		v7 = (unsigned int)v6;
		if (*a1)
		{
			if ((_DWORD)v6)
			{
				v8 = v4 + 4;
				v9 = (unsigned int)v6;
				do
				{
					v10 = (_DWORD*)(v8 - 4);
					if (v8 != 4)
					{
						*(_BYTE*)(v8 + 12) &= 0xFCu;
						*(_QWORD*)(v8 + 4) = 0i64;
						*v10 = 0;
						*(_DWORD*)v8 = 0;
						*(_BYTE*)(v8 + 13) = 0;
						*(_DWORD*)(v8 + 16) = 1065353216;
						*(_DWORD*)(v8 + 20) = 1065353216;
						*(_DWORD*)(v8 + 24) = 1065353216;
						*(_DWORD*)(v8 + 28) = 1065353216;
					}
					v11 = *a1;
					v12 = -4 - v4 + v8;
					v8 += 36i64;
					*v10 = *(_DWORD*)(v12 + *a1);
					v10[1] = *(_DWORD*)(v12 + v11 + 4);
					v10[2] = *(_DWORD*)(v12 + v11 + 8);
					v10[3] = *(_DWORD*)(v12 + v11 + 12);
					v10[4] = *(_DWORD*)(v12 + v11 + 16);
					v10[5] = *(_DWORD*)(v12 + v11 + 20);
					v10[6] = *(_DWORD*)(v12 + v11 + 24);
					v10[7] = *(_DWORD*)(v12 + v11 + 28);
					v10[8] = *(_DWORD*)(v12 + v11 + 32);
					--v9;
				} while (v9);
			}
			sub_140881720(dword_140C10F20, *a1);
		}
		*((_DWORD*)a1 + 4) = v3;
		*a1 = v5;
		a1[1] = v5 + 36 * v7;
		LOBYTE(v4) = 1;
	}
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;

