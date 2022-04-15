#include "../winhttp.h"

//----- (00000001407D20E0) ----------------------------------------------------
__int64 __fastcall sub_1407D20E0(__int64* a1)
{
	__int64 v1; // rax
	__int64 result; // rax
	_WORD* v4; // rdx
	__int64 v5; // rcx
	unsigned int v6; // edi
	__int64 v7; // rcx
	__int64 v8; // rdx
	int v9[6]; // [rsp+40h] [rbp-18h] BYREF
	__int64 (***v10)(void); // [rsp+60h] [rbp+8h] BYREF

	v1 = *a1;
	v9[0] = 0;
	result = (*(__int64(__fastcall**)(__int64*, int*))(v1 + 16))(a1, v9);
	if ((_DWORD)result)
	{
		result = a1[1];
		v4 = *(_WORD**)(result + 856);
		if (v4)
		{
			if (*v4)
			{
				v5 = a1[3];
				result = *(unsigned int*)(v5 + 2972);
				v6 = (int)fmaxf((float)(int)result, *(float*)(v5 + 2976));
				if (v6 != *((_DWORD*)a1 + 90))
				{
					v10 = 0i64;
					result = (*(__int64(__fastcall**)(__int64, _WORD*, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, __int64 (****)(void)))(*(_QWORD*)qword_140C65670 + 112i64))(
						qword_140C65670,
						v4,
						v6,
						0i64,
						0,
						0,
						0,
						&v10);
					v7 = (__int64)v10;
					if ((int)result >= 0 && (__int64 (***)(void))a1[46] != v10)
					{
						if (v10)
						{
							result = (**v10)();
							v7 = (__int64)v10;
						}
						v8 = a1[46];
						if (v8)
						{
							result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(a1[46]);
							v7 = (__int64)v10;
						}
						a1[46] = v7;
					}
					*((_DWORD*)a1 + 90) = v6;
					if (v7)
						return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
				}
			}
		}
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 1407D20E0: using guessed type int var_18[6];

