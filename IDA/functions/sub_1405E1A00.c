#include "../winhttp.h"

//----- (00000001405E1A00) ----------------------------------------------------
__int64 __fastcall sub_1405E1A00(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	unsigned int** v6; // rbx
	unsigned int* v7; // rbx
	__int64 v8; // rdx
	unsigned __int64 v9; // r10
	unsigned __int64 v10; // r8
	__int64 v11; // r9
	unsigned __int8 v12; // si
	__int64 i; // r8
	__int64 v14; // rax

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 424))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 416) + 8 * (v4 % *(_QWORD*)(a1 + 408)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 432))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		v6 = (unsigned int**)(v5 + 3);
		if (v6)
		{
			v7 = *v6;
			v8 = 0i64;
			v9 = *((_QWORD*)v7 + 14);
			v10 = 0i64;
			if (v9)
			{
				v11 = *((_QWORD*)v7 + 13);
				do
				{
					if (*(_DWORD*)(*(_QWORD*)v11 + 8i64) == *(_DWORD*)(a2 + 8)
						&& *(_QWORD*)(*(_QWORD*)v11 + 16i64) == *(_QWORD*)(a2 + 16))
					{
						break;
					}
					++v10;
					v11 += 8i64;
				} while (v10 < v9);
			}
			v12 = *(_BYTE*)(a2 + 24);
			if (v9)
			{
				for (i = *((_QWORD*)v7 + 13);
					*(_DWORD*)(*(_QWORD*)i + 8i64) != *(_DWORD*)(a2 + 8)
					|| *(_QWORD*)(*(_QWORD*)i + 16i64) != *(_QWORD*)(a2 + 16);
					i += 8i64)
				{
					if (++v8 >= v9)
						return 0i64;
				}
				v14 = *(_QWORD*)(*((_QWORD*)v7 + 13) + 8 * v8);
				if (v14 && *(_DWORD*)(v14 + 36) != v12)
				{
					*(_DWORD*)(v14 + 36) = v12;
					Apollo_LUAEvent(
						*(_QWORD*)(qword_140C65898 + 29504),
						"FriendshipAccountCharacterLevelUpdate",
						byte_1409EACF4,
						*v7);
				}
			}
		}
	}
	return 0i64;
}
// 1409EACF4: using guessed type _BYTE byte_1409EACF4[24];
// 140C65898: using guessed type __int64 qword_140C65898;

