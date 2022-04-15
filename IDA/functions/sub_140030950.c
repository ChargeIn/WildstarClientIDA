#include "../winhttp.h"

//----- (0000000140030950) ----------------------------------------------------
_QWORD* __fastcall sub_140030950(__int64 a1)
{
	__int64 v1; // r9
	__int64 v2; // rdi
	_QWORD* v3; // rsi
	_QWORD* result; // rax
	_QWORD* v5; // rdi
	_QWORD* v6; // rbx
	int** v7; // rdx
	__int64 v8; // rax
	int* v9; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(int*)(a1 + 4856);
	if (*(_DWORD*)(a1 + 4852) > 0x10u || (unsigned int)v1 > 2)
		v2 = qword_140C658E8;
	else
		v2 = *(_QWORD*)(32i64 * *(int*)(a1 + 4852) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v1;
	v3 = (_QWORD*)(a1 + 4816);
	*(_QWORD*)(a1 + 4832) += -8 * ((__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3);
	result = (_QWORD*)sub_140030B50((_QWORD*)(a1 + 4816), *(_QWORD*)(v2 + 32));
	v5 = *(_QWORD**)(v2 + 24);
	v6 = (_QWORD*)v5[2];
	if (v6 != v5)
	{
		HIDWORD(v9) = 0;
		do
		{
			v7 = (int**)v3[2];
			LODWORD(v9) = *((_DWORD*)v6 + 8);
			if (v7 == (int**)v3[3])
			{
				sub_140031EF0(v3, v7, &v9);
			}
			else
			{
				if (v7)
					*v7 = v9;
				v3[2] += 8i64;
			}
			v8 = v6[3];
			if (v8)
			{
				v6 = (_QWORD*)v6[3];
				for (result = *(_QWORD**)(v8 + 16); result; result = (_QWORD*)result[2])
					v6 = result;
			}
			else
			{
				for (result = (_QWORD*)v6[1]; v6 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v6 = result;
				if ((_QWORD*)v6[3] != result)
					v6 = result;
			}
		} while (v6 != v5);
	}
	return result;
}
// 140C658E8: using guessed type __int64 qword_140C658E8;

