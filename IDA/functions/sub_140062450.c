#include "../winhttp.h"

//----- (0000000140062450) ----------------------------------------------------
__int64 __fastcall sub_140062450(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v3; // rbp
	int v5; // ebx
	char* v6; // r14
	__int64 v7; // rsi
	__int64 v8; // r8
	__int64* v9; // rax
	__int64* v10; // rdi
	char* v11; // rdx

	result = *(_QWORD*)(a1 + 32);
	v3 = a2;
	if (*(_BYTE*)(result + 33) != 2)
	{
		v5 = 0;
		if ((unsigned __int64)(a2 + 1) > 0x1FFFFFFFFFFFFFFFi64)
			sub_14005ABE0(a1, aMemoryAllocati);
		v6 = (char*)sub_140064780(a1, 0i64, 0i64);
		v7 = *(_QWORD*)(a1 + 32);
		if ((int)v3 > 0)
			memset(v6, 0, 8 * v3);
		if (*(int*)(v7 + 12) > 0)
		{
			v8 = 0i64;
			do
			{
				v9 = *(__int64**)(v8 + *(_QWORD*)v7);
				if (v9)
				{
					do
					{
						v10 = (__int64*)*v9;
						v11 = &v6[8 * (((int)v3 - 1) & *((_DWORD*)v9 + 3))];
						*v9 = *(_QWORD*)v11;
						*(_QWORD*)v11 = v9;
						v9 = v10;
					} while (v10);
				}
				++v5;
				v8 += 8i64;
			} while (v5 < *(_DWORD*)(v7 + 12));
		}
		result = sub_140064780(a1, *(_QWORD*)v7, 8i64 * *(int*)(v7 + 12));
		*(_QWORD*)v7 = v6;
		*(_DWORD*)(v7 + 12) = v3;
	}
	return result;
}
// 14005ABE0: using guessed type void __fastcall __noreturn sub_14005ABE0(_QWORD, _QWORD);
// 140064780: using guessed type __int64 __fastcall sub_140064780(_QWORD, _QWORD, _QWORD);

