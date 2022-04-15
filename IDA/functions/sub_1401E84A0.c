#include "../winhttp.h"

//----- (00000001401E84A0) ----------------------------------------------------
__int64 __fastcall sub_1401E84A0(_WORD* a1)
{
	unsigned __int64 v3; // rdi
	__int16 v4; // bp
	__int64 v5; // rbx
	unsigned __int64 v6; // rax
	__int64 v7; // r10
	unsigned __int64 v8; // rdx
	_WORD* v9; // rcx
	__int64 v10; // r10

	if (!qword_140C79A78)
		return (unsigned int)(qword_140C79A78 + 1);
	v3 = 0i64;
	if (qword_140C79A78)
	{
		v4 = *a1;
		v5 = qword_140C79A70;
		do
		{
			v6 = 0i64;
			if (v4)
			{
				do
					++v6;
				while (a1[v6]);
			}
			v7 = *(_QWORD*)(v5 + 8);
			if ((*(_QWORD*)(v5 + 16) - v7) >> 1 == v6)
			{
				v8 = 0i64;
				if (!v6)
					return 1i64;
				v9 = a1;
				v10 = v7 - (_QWORD)a1;
				while (*(_WORD*)((char*)v9 + v10) == *v9)
				{
					++v8;
					++v9;
					if (v8 >= v6)
						return 1i64;
				}
			}
			++v3;
			v5 += 32i64;
		} while (v3 < qword_140C79A78);
	}
	return 0i64;
}
// 1401E8551: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140C79A70: using guessed type __int64 qword_140C79A70;
// 140C79A78: using guessed type __int64 qword_140C79A78;

