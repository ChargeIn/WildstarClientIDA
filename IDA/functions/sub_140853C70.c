#include "../winhttp.h"

//----- (0000000140853C70) ----------------------------------------------------
__int64 __fastcall sub_140853C70(_QWORD* a1, int** a2)
{
	int v2; // r14d
	unsigned int v4; // r15d
	int v6; // edx
	__int64 v7; // rax
	__int64* v8; // rbp
	int v9; // ebx
	char v10; // dl
	unsigned int v11; // edx
	unsigned int v12; // esi
	int v13; // r8d
	unsigned int* v14; // rax
	unsigned int v15; // edx
	__int64 result; // rax

	v2 = 0;
	v4 = *(*a2)++;
	if (!v4)
		return 1i64;
	while (1)
	{
		v6 = *(*a2)++;
		v7 = sub_1408518A0(a1, v6, 1);
		v8 = (__int64*)v7;
		if (!v7)
			return 2i64;
		v9 = 0;
		v10 = *(_BYTE*)*a2;
		*a2 = (int*)((char*)*a2 + 1);
		*(_BYTE*)(v7 + 72) = v10;
		v11 = *(unsigned __int16*)*a2;
		*a2 = (int*)((char*)*a2 + 2);
		v12 = v11;
		if (v11)
			break;
	LABEL_6:
		if (++v2 >= v4)
			return 1i64;
	}
	while (1)
	{
		v13 = **a2;
		v14 = (unsigned int*)(*a2 + 1);
		*a2 = (int*)v14;
		v15 = *v14;
		*a2 = (int*)(v14 + 1);
		result = sub_1408516E0(v8, v15, v13, 1);
		if ((_DWORD)result != 1)
			return result;
		if (++v9 >= v12)
			goto LABEL_6;
	}
}

