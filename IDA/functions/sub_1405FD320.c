#include "../winhttp.h"

//----- (00000001405FD320) ----------------------------------------------------
_QWORD* __fastcall sub_1405FD320(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	unsigned int* v6; // rax
	__int64 v7; // rax
	int v8; // [rsp+30h] [rbp+8h] BYREF

	result = *(_QWORD**)(a1 + 8);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			v4 = sub_1405A8A40(a1, **(_DWORD**)(v3[5] + 8i64));
			v5 = v4;
			if (v4)
			{
				v6 = *(unsigned int**)(v4 + 8);
				if (v6[5] == 3 && (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, *v6) != 2 && sub_140552930(v5))
				{
					v8 = 0;
					v8 = **(_DWORD**)(v5 + 8);
					sub_1403F4900(qword_140C65898, 0x35Au, (__int64)&v8);
				}
			}
			v7 = v3[3];
			if (v7)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v7 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 8));
	}
	return result;
}
// 1405FD35A: variable 'a1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

