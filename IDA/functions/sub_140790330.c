#include "../winhttp.h"

//----- (0000000140790330) ----------------------------------------------------
__int64 __fastcall sub_140790330(__int64 a1, unsigned __int8* a2, char* a3, __int64 a4)
{
	unsigned __int8* v6; // rbx
	__int64 result; // rax
	char v9; // al
	BOOL v10; // ecx
	int v11; // eax

	v6 = a2;
	for (result = sub_1407905D0(a1, a2, a4 + 1); !result; result = sub_1407905D0(a1, ++v6, a4 + 1))
	{
		if ((unsigned __int64)v6 >= *(_QWORD*)(a1 + 8))
			return 0i64;
		v9 = *a3;
		if (*a3 == 37)
		{
			v11 = sub_14078FE80(*v6, (unsigned __int8)a3[1]);
		}
		else
		{
			if (v9 == 46)
				continue;
			if (v9 != 91)
			{
				v10 = (unsigned __int8)*a3 == *v6;
				goto LABEL_10;
			}
			v11 = sub_14078FFD0(*v6, (__int64)a3, a4 - 1);
		}
		v10 = v11;
	LABEL_10:
		if (!v10)
			return 0i64;
	}
	return result;
}
// 1407905D0: using guessed type __int64 __fastcall sub_1407905D0(_QWORD, _QWORD, _QWORD);

