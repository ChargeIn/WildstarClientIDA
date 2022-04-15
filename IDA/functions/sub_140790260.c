#include "../winhttp.h"

//----- (0000000140790260) ----------------------------------------------------
__int64 __fastcall sub_140790260(__int64 a1, unsigned __int8* a2, char* a3, __int64 a4)
{
	__int64 v4; // rbx
	unsigned __int8* v9; // rdi
	char v10; // al
	BOOL v11; // ecx
	int v12; // eax
	__int64 result; // rax

	v4 = 0i64;
	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 8))
	{
		v9 = a2;
		while (1)
		{
			v10 = *a3;
			if (*a3 == 37)
				break;
			if (v10 != 46)
			{
				if (v10 != 91)
				{
					v11 = (unsigned __int8)*a3 == *v9;
					goto LABEL_10;
				}
				v12 = sub_14078FFD0(*v9, (__int64)a3, a4 - 1);
			LABEL_9:
				v11 = v12;
			LABEL_10:
				if (!v11)
					goto LABEL_12;
			}
			++v9;
			++v4;
			if ((unsigned __int64)v9 >= *(_QWORD*)(a1 + 8))
			{
			LABEL_12:
				if (v4 >= 0)
					goto LABEL_13;
				return 0i64;
			}
		}
		v12 = sub_14078FE80(*v9, (unsigned __int8)a3[1]);
		goto LABEL_9;
	}
LABEL_13:
	while (1)
	{
		result = sub_1407905D0(a1, &a2[v4], a4 + 1);
		if (result)
			break;
		if (--v4 < 0)
			return 0i64;
	}
	return result;
}
// 1407905D0: using guessed type __int64 __fastcall sub_1407905D0(_QWORD, _QWORD, _QWORD);

