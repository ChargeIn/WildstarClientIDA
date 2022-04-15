#include "../winhttp.h"

//----- (00000001408939D0) ----------------------------------------------------
__int64 __fastcall sub_1408939D0(_BYTE* a1, unsigned int* a2, int a3)
{
	__int64 result; // rax
	unsigned int* v5; // rdx
	char v6; // al
	unsigned int v7; // edi
	unsigned int v8; // r8d
	unsigned int* v9; // rdx
	unsigned int v10; // eax
	unsigned int v11; // ecx
	unsigned int* v12; // [rsp+38h] [rbp+10h] BYREF
	int v13; // [rsp+40h] [rbp+18h] BYREF

	v13 = a3;
	v12 = a2;
	result = sub_140896160(a1, &v12, &v13);
	if ((_DWORD)result == 1)
	{
		v5 = v12;
		v6 = *(_BYTE*)v12;
		v12 = (unsigned int*)((char*)v12 + 1);
		v5 = (unsigned int*)((char*)v5 + 5);
		a1[296] = v6 != 0;
		v7 = *(v5 - 1);
		v12 = v5;
		result = sub_1408938E0((__int64)a1, (int*)v5, (int*)&v5[v7], v7);
		if ((_DWORD)result == 1)
		{
			v12 = (unsigned int*)((char*)v12 + 5 * v7);
			v8 = *v12++;
			v9 = (unsigned int*)((char*)v12 + 1);
			a1[290] = *(_BYTE*)v12;
			v12 = v9;
			v10 = sub_140834C10((__int64)(a1 + 272), (int*)v9, v8, v7);
			v11 = 1;
			if (v10 != 1)
				return v10;
			return v11;
		}
	}
	return result;
}

