#include "../winhttp.h"

//----- (00000001405B04E0) ----------------------------------------------------
int* __fastcall sub_1405B04E0(__int64 a1)
{
	int* result; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rax
	int* v7; // rbx
	__int64 v8[2]; // [rsp+40h] [rbp-88h] BYREF
	__int64 v9[2]; // [rsp+50h] [rbp-78h] BYREF
	int v10[20]; // [rsp+60h] [rbp-68h] BYREF

	result = *(int**)(a1 + 480);
	if (!result)
	{
		v3 = 0i64;
		v4 = *(_QWORD*)(a1 + 32);
		LODWORD(v8[0]) = *(_DWORD*)(qword_140C635F0 + 5760);
		v8[1] = v4;
		v9[1] = (__int64)sub_1405B0B60;
		v9[0] = a1;
		if ((unsigned int)sub_1403F82F0(qword_140C65898, 4, v8, v10, 0x21u, v9, 0i64))
		{
			if (LOWORD(v10[0]))
			{
				do
					++v3;
				while (*((_WORD*)v10 + v3));
			}
			v5 = v3 + 1;
			v6 = 2 * (v3 + 1);
			if (!is_mul_ok(v3 + 1, 2ui64))
				v6 = -1i64;
			v7 = sub_14018B280(v6, 0);
			sub_1407DB590(v7, v10, 2 * v5);
			*(_QWORD*)(a1 + 480) = v7;
			return v7;
		}
		else
		{
			return (int*)&unk_1409F321C;
		}
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

