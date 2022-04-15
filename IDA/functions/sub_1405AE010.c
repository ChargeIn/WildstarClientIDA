#include "../winhttp.h"

//----- (00000001405AE010) ----------------------------------------------------
__int64 __fastcall sub_1405AE010(__int64 a1, int a2)
{
	__int64 v3; // rbx
	int v5; // edi
	__int64 result; // rax
	__int64 v7; // r8
	unsigned int v8; // edx
	_DWORD* v9; // rcx

	v3 = 0i64;
	v5 = 0;
	result = sub_140205FA0(*(_DWORD*)(a1 + 184));
	if (result)
		v5 = *(_DWORD*)(result + 4);
	v7 = *(_QWORD*)(a1 + 232);
	if (v7)
	{
		v8 = *(_DWORD*)(a1 + 272);
		result = 0i64;
		if (v8)
		{
			v9 = (_DWORD*)(v7 + 4);
			while (*v9 != v5)
			{
				result = (unsigned int)(result + 1);
				v9 += 48;
				if ((unsigned int)result >= v8)
					goto LABEL_11;
			}
			v3 = v7 + 192 * result;
			if (v3)
			{
				if (a2 == 1)
					return sub_1405A9980(v3);
			}
		}
	}
LABEL_11:
	if (a2 == 3 && !*(_DWORD*)(a1 + 80))
		return sub_1405A9980(v3);
	return result;
}

