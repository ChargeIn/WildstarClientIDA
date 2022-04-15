#include "../winhttp.h"

//----- (000000014086FD20) ----------------------------------------------------
__int64 __fastcall sub_14086FD20(__int64 a1)
{
	unsigned __int8* v1; // r8
	int v2; // r10d
	unsigned int v4; // r9d
	int v5; // edx
	__int64 v6; // rcx
	__int64 v7; // rdx
	unsigned __int8* v8; // r9
	int* v9; // rax
	int v10; // ebx
	unsigned int v11; // eax
	int i; // edx
	__int64 v13; // r8
	unsigned __int8* v15; // rdi
	int v16; // esi
	int v17; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(unsigned __int8**)(a1 + 80);
	v2 = 0;
	v17 = 1;
	if (v1)
	{
		v4 = *v1;
		v5 = 0;
		while (1)
		{
			v6 = (unsigned int)(v5 + 1);
			if (v1[v6] == 7)
				break;
			++v5;
			if ((unsigned int)v6 >= v4)
				goto LABEL_5;
		}
		v7 = (__int64)&v1[4 * v5 + ((v4 + 4) & 0xFFFFFFFC)];
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = *(unsigned __int8**)(a1 + 128);
	v9 = &v17;
	if (v7)
		v9 = (int*)v7;
	v10 = *v9;
	if (!v8)
		return (unsigned __int16)v10;
	v11 = *v8;
	for (i = 0; ; ++i)
	{
		v13 = (unsigned int)(i + 1);
		if (v8[v13] == 7)
			break;
		if ((unsigned int)v13 >= v11)
			return (unsigned __int16)v10;
	}
	v15 = &v8[8 * i + ((v11 + 4) & 0xFFFFFFFC)];
	if (!v15)
		return (unsigned __int16)v10;
	v16 = *((_DWORD*)v15 + 1) - *(_DWORD*)v15;
	if (v16)
		v2 = (int)((double)(int)sub_1407DDB28() * 0.00003051850947599719 * (double)v16 + 0.5);
	return (unsigned int)(v10 + v2 + *(_DWORD*)v15);
}

