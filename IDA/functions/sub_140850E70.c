#include "../winhttp.h"

//----- (0000000140850E70) ----------------------------------------------------
char __fastcall sub_140850E70(__int64 a1)
{
	__int64 v1; // r15
	unsigned __int64 v3; // rax
	__int64 v4; // rdi
	__int64 i; // r14
	__int64 v6; // rbp
	__int64 v7; // rax
	_QWORD* v8; // rcx
	unsigned __int64 v9; // rsi
	char v11; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_QWORD*)a1;
	v3 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 3;
	if ((_DWORD)v3)
	{
		v4 = 0i64;
		*(_QWORD*)(a1 + 8) = v1;
		for (i = (int)v3; v4 < i; *v8 = v6)
		{
			v6 = *(_QWORD*)(v1 + 8 * v4);
			v7 = sub_140850C90((_QWORD*)a1, *(_QWORD*)(v6 + 388), &v11);
			if (v7)
			{
				v3 = sub_1408535A0(a1, (v7 - *(_QWORD*)a1) >> 3);
				v8 = (_QWORD*)v3;
			}
			else
			{
				v9 = (unsigned int)((__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 3);
				if ((v9 < *(unsigned int*)(a1 + 16) || (LOBYTE(v3) = sub_140892EF0(a1, 8), (_BYTE)v3))
					&& (v3 = *(unsigned int*)(a1 + 16), v9 < v3))
				{
					v8 = *(_QWORD**)(a1 + 8);
					LOBYTE(v3) = (_BYTE)v8 + 8;
					*(_QWORD*)(a1 + 8) = v8 + 1;
				}
				else
				{
					v8 = 0i64;
				}
			}
			++v4;
		}
	}
	return v3;
}

