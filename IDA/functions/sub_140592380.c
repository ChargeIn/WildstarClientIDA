#include "../winhttp.h"

//----- (0000000140592380) ----------------------------------------------------
__int64 __fastcall sub_140592380(__int64 a1)
{
	__int64 v1; // r10
	__int64* v3; // rdx
	__int64 v4; // r10
	unsigned int v5; // ecx
	__int64 v6; // r8
	bool v7; // zf
	unsigned int v8; // r10d
	__int64 v9; // rdx
	int v10; // eax
	int v11; // r8d
	float v12; // xmm2_4
	__int64 v14[2]; // [rsp+0h] [rbp-28h] BYREF
	int v15; // [rsp+10h] [rbp-18h]

	v1 = *(_QWORD*)(a1 + 784);
	if (v1 && (*(_DWORD*)(a1 + 392) || *(_DWORD*)(a1 + 408)))
	{
		v3 = v14;
		v14[0] = 0i64;
		v14[1] = 0i64;
		v15 = 0;
		v4 = v1 - (_QWORD)v14;
		v5 = 0;
		v6 = 5i64;
		do
		{
			v7 = *(_DWORD*)((char*)v3 + v4 + 4) == 4;
			v3 = (__int64*)((char*)v3 + 4);
			*((_DWORD*)v3 - 1) = v7;
			--v6;
		} while (v6);
		v8 = *(_DWORD*)(a1 + 380);
		if (v8)
		{
			v9 = 0i64;
			while (1)
			{
				if (*(_DWORD*)((char*)v14 + v9))
				{
					v10 = *(_DWORD*)(a1 + 876);
					v11 = *(_DWORD*)(a1 + 872) * *(_DWORD*)(*(_QWORD*)(a1 + 384) + v9);
					if (v11 > v10 || v11 < -v10)
						break;
				}
				++v5;
				v9 += 4i64;
				if (v5 >= v8)
					goto LABEL_12;
			}
		}
		else
		{
		LABEL_12:
			v12 = (float)*(int*)(a1 + 376) / (float)(1 << *(_DWORD*)(a1 + 428));
			if (v12 >= 0.0 && v12 <= 1.0)
				return 1i64;
		}
	}
	return 0i64;
}

