#include "../winhttp.h"

//----- (0000000140561F10) ----------------------------------------------------
__int64 __fastcall sub_140561F10(__int64 a1, __int64* a2, int a3)
{
	__int64 result; // rax
	__int64 v7; // rsi
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // rdx
	_DWORD* v10; // rcx
	__int64 v11; // rbp
	unsigned __int64 v12; // rsi
	_QWORD* v13; // rbx
	_QWORD** v14; // rbx
	_QWORD* v15; // r12
	unsigned __int64 i; // rbp
	unsigned __int64 v17; // rbx
	unsigned __int64 v18; // rcx
	int v19; // esi
	__int64 v20; // r14
	int v21; // [rsp+60h] [rbp+18h] BYREF
	int v22; // [rsp+68h] [rbp+20h] BYREF

	v21 = a3;
	result = sub_1407A0FD0(a1, a3);
	v7 = result;
	if (result)
	{
		v8 = a2[1];
		v9 = 0i64;
		if (v8)
		{
			v10 = (_DWORD*)*a2;
			while (*v10 != a3)
			{
				++v9;
				++v10;
				if (v9 >= v8)
					goto LABEL_6;
			}
		}
		else
		{
		LABEL_6:
			sub_140003460(a2, &v21);
		}
		v11 = *(_QWORD*)(a1 + 1560);
		v22 = *(_DWORD*)(*(_QWORD*)(v7 + 112) + 4i64);
		v12 = (*(__int64(__fastcall**)(int*, unsigned __int64))(v11 + 24))(&v22, v9);
		result = v12 / *(_QWORD*)(v11 + 8);
		v13 = *(_QWORD**)(*(_QWORD*)(v11 + 16) + 8 * (v12 % *(_QWORD*)(v11 + 8)));
		if (v13)
		{
			while (1)
			{
				if (v12 == *v13)
				{
					result = (*(__int64(__fastcall**)(int*, _QWORD*))(v11 + 32))(&v22, v13 + 2);
					if ((_DWORD)result)
						break;
				}
				v13 = (_QWORD*)v13[1];
				if (!v13)
					return result;
			}
			v14 = (_QWORD**)(v13 + 3);
			if (v14)
			{
				v15 = *v14;
				if (*v14)
				{
					for (i = 0i64; i < v15[1]; ++i)
					{
						v17 = a2[1];
						v18 = 0i64;
						v19 = *(_DWORD*)(*v15 + 4 * i);
						if (v17)
						{
							result = *a2;
							while (*(_DWORD*)result != v19)
							{
								++v18;
								result += 4i64;
								if (v18 >= v17)
									goto LABEL_19;
							}
						}
						else
						{
						LABEL_19:
							result = (__int64)sub_14018DB00(*a2, v17 + 1, 4i64);
							v20 = result;
							*(_DWORD*)(result + 4 * v17) = v19;
							if (*a2 != result)
							{
								result = (__int64)sub_1407DB590((int*)result, (int*)*a2, 4 * a2[1]);
								if (*a2)
									result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
								*a2 = v20;
							}
							a2[1] = v17 + 1;
						}
					}
				}
			}
		}
	}
	return result;
}
// 140561F7C: variable 'v9' is possibly undefined

