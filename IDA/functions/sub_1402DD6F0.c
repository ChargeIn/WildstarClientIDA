#include "../winhttp.h"

//----- (00000001402DD6F0) ----------------------------------------------------
__int64 __fastcall sub_1402DD6F0(__int64 a1, int* a2)
{
	int* v2; // rdi
	_DWORD* v3; // rsi
	int* v5; // r12
	__int64 v6; // r15
	int* v7; // rbx
	unsigned __int64 v8; // rax

	v2 = *(int**)(a1 + 24);
	v3 = (_DWORD*)((char*)&unk_140C41340 + 56 * *(int*)(a1 + 12));
	v5 = (int*)((char*)v2 + (v3[9] - v3[7]) * v3[11]);
	if (v2 < v5)
	{
		v6 = (v3[8] - v3[6]) * v3[10];
		do
		{
			v7 = v2;
			if (v2 < (int*)((char*)v2 + v6))
			{
				v8 = (int)v3[10];
				do
				{
					sub_1407DB590(v7, a2, v8);
					v8 = (int)v3[10];
					v7 = (int*)((char*)v7 + v8);
				} while (v7 < (int*)((char*)v2 + v6));
			}
			v2 = (int*)((char*)v2 + (int)v3[11]);
		} while (v2 < v5);
	}
	return 0i64;
}

