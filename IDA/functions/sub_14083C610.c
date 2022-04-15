#include "../winhttp.h"

//----- (000000014083C610) ----------------------------------------------------
int* __fastcall sub_14083C610(__int64 a1, unsigned int a2)
{
	unsigned int v4; // ecx
	int* result; // rax
	__int64 v6; // rsi
	unsigned int v7; // eax
	int v8; // ecx
	__int64 v9; // rax
	int* v10; // rsi
	unsigned int v11; // eax
	__int64 v12; // rcx
	unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 48))
	{
		v4 = *(_DWORD*)(a1 + 16);
		if (a2 <= v4)
		{
			result = *(int**)(a1 + 8);
			*(_DWORD*)(a1 + 16) = v4 - a2;
			*(_QWORD*)(a1 + 8) = (char*)result + a2;
			return result;
		}
		v6 = 0i64;
		v7 = a2;
		v8 = v4 & 0x1F;
		if (v8)
		{
			v7 = a2 + 31;
			v6 = (unsigned int)(32 - v8);
		}
		v9 = sub_140881960(dword_140C10F20, v7, 0x20u);
		*(_QWORD*)(a1 + 32) = v9;
		if (v9)
		{
			v10 = (int*)(v9 + v6);
			if ((unsigned int)sub_14083C410(a1, v10, a2, &v13) == 1 && v13 == a2)
				return v10;
			sub_140881720(dword_140C10F20, *(_QWORD*)(a1 + 32));
			*(_QWORD*)(a1 + 32) = 0i64;
		}
		return *(int**)(a1 + 32);
	}
	else
	{
		v11 = *(_DWORD*)(a1 + 16);
		v12 = v11;
		if (a2 < v11)
			v12 = a2;
		*(_DWORD*)(a1 + 16) = v11 - v12;
		result = *(int**)(a1 + 40);
		*(_QWORD*)(a1 + 40) = (char*)result + v12;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

