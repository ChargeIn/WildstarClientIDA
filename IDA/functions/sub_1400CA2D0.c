#include "../winhttp.h"

//----- (00000001400CA2D0) ----------------------------------------------------
__int64 __fastcall sub_1400CA2D0(__int64 a1, char a2, char a3, char a4, char a5)
{
	__int64 v5; // rdi
	__int64 v7; // rcx
	_DWORD* v11; // rax
	_DWORD* v12; // rax
	__int64 v13; // rax
	__int64 result; // rax
	int v15[10]; // [rsp+20h] [rbp-28h] BYREF

	v5 = *(_QWORD*)(a1 + 32);
	v7 = *(_QWORD*)(v5 + 2888);
	if (v7 != a1)
	{
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(v5 + 2888) = 0i64;
		}
		*(_QWORD*)(v5 + 2888) = a1;
		(**(void(__fastcall***)(__int64))a1)(a1);
	}
	v11 = *(_DWORD**)(*(_QWORD*)(a1 + 32) + 2832i64);
	*(_DWORD*)(a1 + 856) = *v11;
	*(_DWORD*)(a1 + 860) = v11[1];
	*(_BYTE*)(a1 + 29) &= 0x87u;
	*(_BYTE*)(a1 + 29) |= 8 * (a2 & 1 | (2 * (a3 & 1 | (2 * (a4 & 1 | (2 * (a5 & 1)))))));
	if (*(char*)(a1 + 29) >= 0)
	{
		v12 = sub_1400CB0E0(a1, v15, a1 + 64);
		*(_DWORD*)(a1 + 396) = *v12;
		*(_DWORD*)(a1 + 400) = v12[1];
		*(_DWORD*)(a1 + 404) = v12[2];
		*(_DWORD*)(a1 + 408) = v12[3];
		*(_BYTE*)(a1 + 29) |= 0x80u;
		v13 = a1;
		do
		{
			if (!*(_DWORD*)(v13 + 392))
				break;
			*(_DWORD*)(v13 + 392) = 0;
			v13 = *(_QWORD*)(v13 + 16);
		} while (v13);
	}
	result = (unsigned int)(*(_DWORD*)(a1 + 404) - *(_DWORD*)(a1 + 396));
	*(_DWORD*)(a1 + 940) = *(_DWORD*)(a1 + 408) - *(_DWORD*)(a1 + 400);
	*(_DWORD*)(a1 + 936) = result;
	return result;
}
// 1400CA2D0: using guessed type int var_28[10];

