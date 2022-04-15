#include "../winhttp.h"

//----- (000000014083CB00) ----------------------------------------------------
__int64 __fastcall sub_14083CB00(__int64 a1, unsigned int a2, unsigned int* a3, __int64 a4)
{
	unsigned int v5; // ebx
	unsigned int v7; // ebp
	unsigned int* v8; // r14
	unsigned int v9; // ecx
	__int64 v10; // rcx
	int v11; // eax
	unsigned int v13; // eax
	__int64 v14; // [rsp+60h] [rbp+8h] BYREF

	*a3 = 0;
	v5 = a2;
	v7 = 1;
	if (!*(_QWORD*)(a1 + 48))
	{
		v13 = *(_DWORD*)(a1 + 16);
		if (a2 < v13)
			v13 = a2;
		*a3 = v13;
		*(_DWORD*)(a1 + 16) -= v13;
		*(_QWORD*)(a1 + 40) += *a3;
		return v7;
	}
	if (a2)
	{
		v8 = (unsigned int*)(a1 + 16);
		do
		{
			if (*v8)
			{
				v9 = v5;
				if (*v8 < v5)
					v9 = *v8;
				*(_QWORD*)(a1 + 8) += v9;
				*a3 += v9;
				*v8 -= v9;
			}
			else
			{
				v10 = *(_QWORD*)(a1 + 48);
				if (v5 <= *(_DWORD*)(a1 + 20))
				{
					v11 = *(_DWORD*)(a1 + 20) / *(_DWORD*)(a1 + 24);
					LOBYTE(a4) = 1;
					v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _BYTE, _DWORD, unsigned int*))(*(_QWORD*)v10 + 48i64))(
						v10,
						*(_QWORD*)a1,
						(unsigned int)(*(_DWORD*)(a1 + 24) * v11),
						a4,
						*(_BYTE*)(a1 + 60),
						(float)(*(_DWORD*)(a1 + 24) * v11) / *(float*)(a1 + 56),
						v8);
					if (v7 == 1
						&& (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 96i64))(*(_QWORD*)(a1 + 48)) == 1)
					{
						(*(void(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 48) + 64i64))(*(_QWORD*)(a1 + 48), &v14);
						if ((_BYTE)v14 && *v8 < v5)
							return v7 + 1;
						*(_QWORD*)(a1 + 8) = *(_QWORD*)a1 + v5;
						*a3 += v5;
						*v8 -= v5;
					}
					return v7;
				}
				v7 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64*))(*(_QWORD*)v10 + 72i64))(
					v10,
					v5,
					1i64,
					&v14);
				if (v7 != 1)
					return v7;
				v9 = v14;
				*a3 += v14;
			}
			v5 -= v9;
		} while (v5);
	}
	return v7;
}
// 14083CBD0: variable 'a4' is possibly undefined

