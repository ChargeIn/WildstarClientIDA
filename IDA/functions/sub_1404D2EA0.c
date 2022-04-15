#include "../winhttp.h"

//----- (00000001404D2EA0) ----------------------------------------------------
__int64 __fastcall sub_1404D2EA0(__int64 a1, __int64 a2)
{
	int v4; // ebx
	__int64 v5; // rdi
	__int64 v6; // rsi
	__int64 v7; // rbp
	__int64 v8; // rax
	__int64 result; // rax
	__int64 v10; // [rsp+58h] [rbp+10h] BYREF

	v10 = a2;
	v4 = 1;
	v5 = *(_QWORD*)(a1 + 24) - 1i64;
	if (*(_QWORD*)(a1 + 24) != 1i64)
	{
		v6 = 0i64;
		v7 = *(_QWORD*)(a1 + 24) - 1i64;
		do
		{
			v8 = *(_QWORD*)(a2 + 8);
			if ((v4 & *(_DWORD*)(v8 + 8)) != 0 && (*(_BYTE*)(v8 + 16) & 1) == 0)
				sub_140033260((__int64*)(v6 + *(_QWORD*)(a1 + 56)), &v10);
			v4 = __ROL4__(v4, 1);
			v6 += 16i64;
			--v7;
		} while (v7);
	}
	result = *(_QWORD*)(a2 + 8);
	if (((1 << v5) & *(_DWORD*)(result + 8)) != 0 && (*(_BYTE*)(result + 16) & 1) != 0)
		return sub_140033260((__int64*)(*(_QWORD*)(a1 + 56) + 16 * v5), &v10);
	return result;
}

