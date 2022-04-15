#include "../winhttp.h"

//----- (00000001405FC800) ----------------------------------------------------
__int64 __fastcall sub_1405FC800(__int64 a1, __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // rdi
	__int64 v5; // rbx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = *(_QWORD*)(a1 + 8);
	v4 = a1;
	v5 = *(_QWORD*)(v2 + 16);
	if (v5 != v2)
	{
		do
		{
			v6 = sub_1405A8A40(a1, *(_DWORD*)(v5 + 32));
			if (!v6)
				break;
			v7 = *(_QWORD*)(qword_140C65898 + 27728);
			if (!v7
				|| (a1 = (*(_DWORD*)(v7 + 8) >> 1) & 1, ((*(_DWORD*)(v7 + 8) >> 1) & 1) == 0)
				|| (*(_DWORD*)(*(_QWORD*)(v6 + 8) + 12i64) & 0x40000) != 0)
			{
				if ((unsigned int)sub_140553110(v6, a2))
					return 1i64;
			}
			v8 = *(_QWORD*)(v5 + 24);
			if (v8)
			{
				v5 = *(_QWORD*)(v5 + 24);
				for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
					v5 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v5 + 8); v5 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v5 = j;
				if (*(_QWORD*)(v5 + 24) != j)
					v5 = j;
			}
		} while (v5 != *(_QWORD*)(v4 + 8));
	}
	return 0i64;
}
// 1405FC829: variable 'a1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

