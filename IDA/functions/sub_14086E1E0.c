#include "../winhttp.h"

//----- (000000014086E1E0) ----------------------------------------------------
__int64 __fastcall sub_14086E1E0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
	__int64 v3; // r14
	__int64 v7; // rbx
	unsigned __int16 v9; // ax
	unsigned __int16 v10; // di
	int v11; // eax
	unsigned __int16* v12; // rdi
	unsigned __int64 v13; // rcx
	unsigned __int16* v14; // rsi
	unsigned __int64 i; // rcx

	v3 = *(_QWORD*)(a1 + 192);
	if (*(_WORD*)(a1 + 476))
	{
		v7 = a2 + 40;
		--* (_WORD*)(a2 + 32);
		if (!sub_14086C450(a2 + 40, a3))
		{
			*(_WORD*)(a2 + 34) = 0;
			return 2i64;
		}
		sub_14087C120(a2, a3);
		*(_DWORD*)(a2 + 28) -= (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 80i64))(v3, a3);
		v9 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192)) - 1;
		if (*(_WORD*)(a1 + 476) < v9)
			v9 = *(_WORD*)(a1 + 476);
		if ((unsigned int)((__int64)(*(_QWORD*)(v7 + 8) - *(_QWORD*)v7) >> 1) > v9)
		{
			v10 = **(_WORD**)v7;
			sub_14087C150(a2, v10);
			v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 80i64))(v3, v10);
			++* (_WORD*)(a2 + 32);
			*(_DWORD*)(a2 + 28) += v11;
			v12 = *(unsigned __int16**)v7;
			v13 = *(_QWORD*)(v7 + 8) - 2i64;
			if (*(_QWORD*)v7 < v13)
			{
				v14 = v12 + 1;
				for (i = ((v13 - (unsigned __int64)v12 - 1) >> 1) + 1; i; --i)
					*v12++ = *v14++;
			}
			*(_QWORD*)(v7 + 8) -= 2i64;
		}
	}
	return 1i64;
}

