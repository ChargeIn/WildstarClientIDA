#include "../winhttp.h"

//----- (0000000140854560) ----------------------------------------------------
__int64 __fastcall sub_140854560(_QWORD* a1, unsigned int** a2, _DWORD* a3)
{
	unsigned int* v3; // rax
	unsigned int v6; // edx
	__int64 v8; // rsi
	int* v9; // rax
	unsigned int v10; // edx
	unsigned __int32 v11; // r8d
	int v12; // r9d
	int v13; // r11d
	__int64 v14; // rdi
	unsigned int v16; // [rsp+30h] [rbp-18h]

	v3 = *a2;
	v6 = *(unsigned __int16*)*a2;
	*a2 = (unsigned int*)((char*)v3 + 2);
	if (v6)
	{
		v8 = v6;
		do
		{
			v9 = (int*)(*a2 + 1);
			v10 = **a2;
			*a2 = (unsigned int*)v9++;
			v11 = *(v9 - 1);
			*a2 = (unsigned int*)v9;
			v12 = *v9++;
			*a2 = (unsigned int*)v9;
			v9 = (int*)((char*)v9 + 1);
			v13 = *((unsigned __int8*)v9 - 1);
			*a2 = (unsigned int*)v9;
			v16 = *(unsigned __int16*)v9;
			v14 = *(unsigned __int16*)v9;
			*a2 = (unsigned int*)((char*)v9 + 2);
			sub_140854D30(a1, v10, v11, v12, v13, (int*)((char*)v9 + 2), v16);
			*a2 += 3 * v14;
			*a3 += -12 * v14;
			--v8;
		} while (v8);
	}
	return 1i64;
}

