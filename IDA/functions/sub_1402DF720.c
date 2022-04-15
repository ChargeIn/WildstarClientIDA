#include "../winhttp.h"

//----- (00000001402DF720) ----------------------------------------------------
__int64 __fastcall sub_1402DF720(__int64 a1, unsigned int* a2, unsigned __int64 a3)
{
	__int64 result; // rax
	unsigned __int64 v5; // rsi
	unsigned __int64 v6; // rbx
	__int64 v7; // rdi
	unsigned int* v8; // rdi
	unsigned __int64 v9; // rbx
	__int64 v10; // rbp
	char* v11; // rsi
	__int64* i; // r15
	unsigned __int64 v13; // rax
	__int64 v14; // r14
	__int64 v15; // rax
	__int64 v16; // [rsp+20h] [rbp-448h] BYREF
	char v17[1024]; // [rsp+30h] [rbp-438h] BYREF

	if (a3 < 4)
		return 2147500037i64;
	v5 = *a2;
	v6 = a3 - 4;
	v7 = (__int64)(a2 + 1);
	if (a3 - 4 < v5)
		return 2147500037i64;
	v16 = 1024i64;
	result = sub_1402E30E0((__int64)v17, (int*)&v16, v7, v5);
	if ((int)result >= 0)
	{
		if (v16 == 1024)
		{
			v8 = (unsigned int*)(v5 + v7);
			v9 = v6 - v5;
			v10 = 0i64;
			v11 = v17;
			for (i = (__int64*)(a1 + 3256); ; ++i)
			{
				v13 = *(unsigned int*)v11;
				if ((_DWORD)v13)
				{
					if (v9 < v13)
						return 2147500037i64;
					v14 = *i;
					if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 1576i64))
						result = sub_1402E3010(
							(__int64)v8,
							(unsigned int)v13,
							*(void(__fastcall****)(_QWORD))(a1 + 1200),
							(int**)(a1 + 3256 + 8 * v10));
					else
						result = sub_1402E2F60(v8, (unsigned int)v13, (int**)(a1 + 3256 + 8 * v10));
					if ((int)result < 0)
						return result;
					if (v14)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
					v15 = *(unsigned int*)v11;
					v8 = (unsigned int*)((char*)v8 + v15);
					v9 -= v15;
				}
				v10 = (unsigned int)(v10 + 1);
				v11 += 4;
				if ((unsigned int)v10 >= 0x100)
					return v9 != 0 ? 0x80004005 : 0;
			}
		}
		return 2147500037i64;
	}
	return result;
}

