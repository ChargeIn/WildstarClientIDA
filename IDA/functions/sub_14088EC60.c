#include "../winhttp.h"

//----- (000000014088EC60) ----------------------------------------------------
__int64 __fastcall sub_14088EC60(__int64* a1, int a2)
{
	int v4; // eax
	__int64* v5; // rdi
	unsigned int v6; // esi
	int v7; // r13d
	__int64 v8; // r12
	__int64 v9; // rbp
	_DWORD* v10; // rbx
	__int64 v11; // rax
	int v12; // r9d
	int v13; // ecx
	int v14; // r8d
	int v15; // r8d

	v4 = sub_140892310(a1[16]);
	v5 = (__int64*)a1[19];
	v6 = 0;
	v7 = v4 + a2;
	v8 = 0i64;
	if (v5 != (__int64*)a1[20])
	{
		while (1)
		{
			v9 = *v5;
			v10 = *(_DWORD**)(*v5 + 224);
			if (v10 != *(_DWORD**)(*v5 + 232))
				break;
		LABEL_14:
			++v5;
			v8 = (unsigned int)(v8 + 1);
			if (v5 == (__int64*)a1[20])
				return v6;
		}
		while (1)
		{
			if (*v10 == *(unsigned __int16*)(a1[22] + 2 * v8))
			{
				v11 = sub_1408942C0(v9, v10[1]);
				if (v11)
					break;
			}
		LABEL_13:
			v10 += 6;
			if (v10 == *(_DWORD**)(v9 + 232))
				goto LABEL_14;
		}
		v12 = *(_DWORD*)(v11 + 16);
		v13 = v10[2] - v7;
		v14 = 0;
		if ((v12 & 0x7C) == 4)
		{
			if ((v12 & 2) != 0 && v13 >= 0)
			{
			LABEL_11:
				v15 = v14 - v13;
				if ((int)v6 < v15)
					v6 = v15;
				goto LABEL_13;
			}
			v14 = *(_DWORD*)(v11 + 40);
		}
		if (v13 < 0)
			v13 = 0;
		goto LABEL_11;
	}
	return v6;
}

