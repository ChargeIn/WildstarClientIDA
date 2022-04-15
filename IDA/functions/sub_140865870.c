#include "../winhttp.h"

//----- (0000000140865870) ----------------------------------------------------
__int64 __fastcall sub_140865870(__int64 a1, unsigned int** a2, _DWORD* a3)
{
	unsigned int* v3; // rax
	unsigned int v6; // edx
	__int64 v8; // rbp
	unsigned int v9; // r8d
	__int32* v10; // rax
	__int32 v11; // r9d
	int v12; // r11d
	int v13; // edx
	__int64 v14; // rdi

	v3 = *a2;
	v6 = *(unsigned __int16*)*a2;
	*a2 = (unsigned int*)((char*)v3 + 2);
	if (v6)
	{
		v8 = v6;
		do
		{
			v9 = **a2;
			v10 = (__int32*)(*a2 + 1);
			*a2 = (unsigned int*)v10;
			v11 = *v10++;
			*a2 = (unsigned int*)v10;
			v12 = *v10++;
			*a2 = (unsigned int*)v10;
			v13 = *(unsigned __int8*)v10;
			v10 = (__int32*)((char*)v10 + 1);
			*a2 = (unsigned int*)v10;
			v14 = *(unsigned __int16*)v10;
			*a2 = (unsigned int*)((char*)v10 + 2);
			*(_DWORD*)(a1 + 56) |= 1i64 << v11;
			sub_1408382F0(qword_140C61BB0, a1, v9, v11, v12, v13, (__int32*)((char*)v10 + 2), v14, 0i64, 3);
			*a2 += 3 * v14;
			*a3 += -12 * v14;
			--v8;
		} while (v8);
	}
	return 1i64;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

