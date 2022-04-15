#include "../winhttp.h"

//----- (00000001405A5BF0) ----------------------------------------------------
__int64 __fastcall sub_1405A5BF0(int a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v5; // rbx
	__int64 v7; // rdi

	result = qword_140C65898;
	v5 = *(_QWORD*)(qword_140C65898 + 8i64 * a1 + 27832);
	if (v5)
	{
		do
		{
			v7 = *(_QWORD*)(v5 + 40);
			*(_QWORD*)(v5 + 48) = a2;
			*(_QWORD*)(v5 + 56) = a3;
			if (*(_DWORD*)v5)
			{
				if (*(_DWORD*)v5 == 1)
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD))(v5 + 16))(*(_QWORD*)(v5 + 8), *(_QWORD*)(v5 + 24));
			}
			else
			{
				result = (*(__int64(__fastcall**)(_QWORD))(v5 + 16))(*(_QWORD*)(v5 + 8));
			}
			*(_QWORD*)(v5 + 48) = 0i64;
			*(_QWORD*)(v5 + 56) = 0i64;
			v5 = v7;
		} while (v7);
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

