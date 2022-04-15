#include "../winhttp.h"

//----- (00000001403AD860) ----------------------------------------------------
float __fastcall sub_1403AD860(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v7; // r11
	unsigned int* v8; // rax
	__int64 v9; // rax

	if (!a2)
		return 0.0;
	v7 = sub_1403ACD90(a1, a2, a3);
	if (!v7)
		return 0.0;
	if (a3)
	{
		v8 = *(unsigned int**)(a3 + 24);
		if (v8)
		{
			v9 = sub_1407A1680(a1, *v8, a2);
			if (v9)
			{
				if (*(_DWORD*)v9)
					return *(float*)(v9 + 32);
			}
		}
	}
	return *(float*)(*(_QWORD*)(v7 + 112) + 108i64);
}
// 1403AD8D5: variable 'v7' is possibly undefined

