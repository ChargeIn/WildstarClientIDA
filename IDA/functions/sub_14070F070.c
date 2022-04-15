#include "../winhttp.h"

//----- (000000014070F070) ----------------------------------------------------
__int64 __fastcall sub_14070F070(_QWORD* a1)
{
	int v2; // ebp
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rsi
	unsigned __int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rax

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_1405E2000(qword_140C65898 + 26680, v2);
	v4 = qword_140C65898;
	if (v3)
	{
		v5 = *(_QWORD*)(v3 + 112);
		v6 = 0i64;
		if (v5)
		{
			v7 = *(_QWORD*)(v3 + 104);
			do
			{
				if ((unsigned int)sub_1403D9500(v4, (int*)(*(_QWORD*)v7 + 8i64)))
					break;
				++v6;
				v7 += 8i64;
			} while (v6 < v5);
		}
	}
	v8 = sub_1405E2300(v4 + 26680, v2);
	v9 = qword_140C65898;
	if (!v8 || (v10 = sub_1403D9500(qword_140C65898, (int*)(v8 + 184))) == 0)
	{
		v11 = sub_1405E29A0(v9 + 26680, v2);
		if (!v11)
			return 0i64;
		v10 = sub_1403D9500(qword_140C65898, (int*)(v11 + 176));
		if (!v10)
			return 0i64;
	}
	sub_140649870(a1, v10);
	return 1i64;
}
// 14070F0D7: variable 'v4' is possibly undefined
// 14070F125: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

