#include "../winhttp.h"

//----- (00000001400D3940) ----------------------------------------------------
__int64 __fastcall sub_1400D3940(_QWORD* a1, unsigned __int16* a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int16* v7; // r9
	int v8; // edx
	__int64 v9; // r8
	int v10; // eax
	_QWORD* v11; // rax
	_QWORD* v12; // rbx

	if (!a2)
		return 0i64;
	if (a1[68] == a3)
	{
		v7 = (unsigned __int16*)a1[67];
		if (v7 == a2)
			return (__int64)a1;
		if (v7)
		{
			v8 = *v7;
			v9 = 0i64;
			if (v8 == *a2)
			{
				while ((_WORD)v8)
				{
					v8 = v7[v9 + 1];
					v10 = a2[++v9];
					if (v8 != v10)
						goto LABEL_9;
				}
				return (__int64)a1;
			}
		}
	}
LABEL_9:
	v11 = (_QWORD*)a1[70];
	v12 = (_QWORD*)*v11;
	if ((_QWORD*)*v11 == v11)
		return 0i64;
	while (1)
	{
		result = sub_1400D3940(v12[2], a2, a3);
		if (result)
		{
			if ((*(_BYTE*)(result + 28) & 1) != 0)
				break;
		}
		v12 = (_QWORD*)*v12;
		if (v12 == (_QWORD*)a1[70])
			return 0i64;
	}
	return result;
}

