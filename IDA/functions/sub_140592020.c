#include "../winhttp.h"

//----- (0000000140592020) ----------------------------------------------------
__m128 __fastcall sub_140592020(__int64 a1)
{
	__int64 v3; // r8
	unsigned int v4; // edi
	__int128 v5; // xmm6
	__int64* v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // r8
	bool v9; // zf
	float* v10; // rbx
	__int64 v11[2]; // [rsp+20h] [rbp-38h] BYREF
	int v12; // [rsp+30h] [rbp-28h]

	if (*(_QWORD*)(a1 + 776))
	{
		v3 = *(_QWORD*)(a1 + 784);
		v4 = 0;
		v5 = 0i64;
		v11[0] = 0i64;
		v11[1] = 0i64;
		v12 = 0;
		if (v3)
		{
			v6 = v11;
			v7 = 5i64;
			v8 = v3 - (_QWORD)v11;
			do
			{
				v9 = *(_DWORD*)((char*)v6 + v8 + 4) == 4;
				v6 = (__int64*)((char*)v6 + 4);
				*((_DWORD*)v6 - 1) = v9;
				--v7;
			} while (v7);
		}
		v10 = (float*)(a1 + 792);
		do
		{
			*(float*)&v5 = *(float*)&v5 + *v10;
			if (*(_DWORD*)((char*)&v11[-99] + (_QWORD)v10 - a1))
			{
				if ((unsigned int)sub_140591CD0(a1, v4))
					*(float*)&v5 = *(float*)&v5 + (float)(*(float*)(a1 + 868) * *v10);
			}
			++v4;
			++v10;
		} while (v4 < 5);
		return (__m128)v5;
	}
	else
	{
		return (__m128)0i64;
	}
}

