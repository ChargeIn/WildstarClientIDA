#include "../winhttp.h"

//----- (0000000140338CF0) ----------------------------------------------------
__int64 __fastcall sub_140338CF0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v4; // r14
	__int64 v5; // rdx
	__int64 v6; // rbx
	__int64* v7; // rsi
	__int64* v8; // rdi
	__int64 v9; // rax
	volatile signed __int32* v10; // rbp
	__int64 v11; // rcx
	volatile signed __int32* v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+30h] [rbp-18h]

	v4 = a3;
	v5 = (unsigned __int128)((a2 - a1) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
	v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
	if (v6 > 0)
	{
		v7 = (__int64*)(a2 + 40);
		v8 = (__int64*)(a3 + 40);
		do
		{
			v9 = *(v7 - 11);
			v7 -= 6;
			v8 -= 6;
			*(_QWORD*)(v4 - 48) = v9;
			v4 -= 48i64;
			*(v8 - 4) = *(v7 - 4);
			*(v8 - 3) = *(v7 - 3);
			v13 = (volatile signed __int32*)*(v7 - 1);
			v14 = *v7;
			_InterlockedIncrement(v13);
			v10 = (volatile signed __int32*)*(v8 - 1);
			*(v8 - 1) = (__int64)v13;
			v11 = *v8;
			*v8 = v14;
			if (!_InterlockedDecrement(v10))
			{
				sub_14018B900(v11, 0);
				sub_14018B900((__int64)v10, 0);
			}
			--v6;
		} while (v6 > 0);
	}
	return v4;
}

