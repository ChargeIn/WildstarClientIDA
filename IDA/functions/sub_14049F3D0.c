#include "../winhttp.h"

//----- (000000014049F3D0) ----------------------------------------------------
__int64 __fastcall sub_14049F3D0(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
	unsigned int v5; // edi
	unsigned int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rbp
	int v10; // ebx

	v5 = 0;
	v7 = 0;
	v8 = sub_1405A8A40(a1, a4);
	v9 = v8;
	if (v8)
	{
		if ((unsigned int)sub_140552F50(v8))
		{
			if ((unsigned int)sub_1405510D0(v9, a5) || (v7 = 1, !(unsigned int)sub_140553790(v9, a5)))
				v7 = 0;
		}
	}
	v10 = a3 - 1;
	if (!v10)
		return v7;
	if (v10 == 1)
		LOBYTE(v5) = v7 == 0;
	return v5;
}

