#include "../winhttp.h"

//----- (0000000140057A70) ----------------------------------------------------
int* __fastcall sub_140057A70(__int64 a1, __int64 a2, unsigned __int64* a3)
{
	int* result; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	__int64 v7; // rbx
	int* v8; // rbp
	int* v9; // rdx
	unsigned __int64 v10; // rsi
	unsigned __int64 v11; // rax

	if (*(_DWORD*)a2)
	{
		result = (int*)&unk_140C1DB4C;
		*(_DWORD*)a2 = 0;
		*a3 = 1i64;
	}
	else
	{
		v5 = *(_QWORD*)(a2 + 8);
		if (v5)
		{
			v6 = *(_QWORD*)(v5 + 8);
			v7 = 0i64;
			if (*(_QWORD*)(v5 + 16) == v6)
			{
				return 0i64;
			}
			else
			{
				v8 = (int*)(a2 + 16);
				if (a2 == -16)
				{
					v10 = 0i64;
					*(_DWORD*)sub_1407DE1B0() = 22;
				}
				else
				{
					v9 = *(int**)(v5 + 16);
					v10 = 512i64;
					v11 = v6 - (_QWORD)v9;
					if (v11 < 0x200)
						v10 = v11;
					sub_1407DB590(v8, v9, v10);
					*(_QWORD*)(v5 + 16) += v10;
				}
				*a3 = v10;
				if (v10)
					return v8;
				return (int*)v7;
			}
		}
		else
		{
			*(_DWORD*)sub_1407DE1B0() = 22;
			return 0i64;
		}
	}
	return result;
}
// 140057B04: conditional instruction was optimized away because rdi.8!=0

