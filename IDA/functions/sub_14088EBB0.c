#include "../winhttp.h"

//----- (000000014088EBB0) ----------------------------------------------------
__int64 __fastcall sub_14088EBB0(__int64 a1, int a2, int a3, int a4)
{
	__int64 v5; // rcx
	_DWORD* v7; // rbx
	__int64 result; // rax
	__int64 v9; // rcx

	v5 = *(_QWORD*)(a1 + 24);
	v7 = *(_DWORD**)(v5 + 192);
	result = *(_QWORD*)(v5 + 200);
	if (v7 != (_DWORD*)result)
	{
		do
		{
			if (*v7 == a2 && v7[1] == a3)
				break;
			v7 += 6;
		} while (v7 != (_DWORD*)result);
		if (v7 != (_DWORD*)result)
		{
			if (v7)
			{
				result = sub_1408819F0(dword_140C10F20, 32i64);
				if (result)
				{
					*(_QWORD*)result = v7;
					*(_DWORD*)(result + 16) = a4;
					*(_QWORD*)(result + 8) = 0i64;
					v9 = *(_QWORD*)(a1 + 48);
					if (v9)
					{
						*(_QWORD*)(result + 24) = v9;
						*(_QWORD*)(a1 + 48) = result;
					}
					else
					{
						*(_QWORD*)(a1 + 48) = result;
						*(_QWORD*)(result + 24) = 0i64;
					}
				}
			}
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

