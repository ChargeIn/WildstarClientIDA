#include "../winhttp.h"

//----- (00000001407BCB60) ----------------------------------------------------
__int64 __fastcall sub_1407BCB60(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r9
	unsigned __int64 v3; // rdx
	unsigned __int64 v4; // rbx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // r8
	__int64 result; // rax
	__int64 v9; // r8
	__int64 v10; // rdi
	__int64 v11; // rcx
	unsigned __int64 v12; // rdx
	__int64 v13; // r9

	v2 = qword_140C7F868;
	v3 = a2 + 1;
	v4 = qword_140C7F868 - 1;
	if (v3 < qword_140C7F868)
	{
		v5 = 32 * v3;
		do
		{
			v6 = qword_140C7F860;
			v7 = v5 + qword_140C7F860 - 32;
			if (v7)
			{
				*(_OWORD*)v7 = *(_OWORD*)(v5 + qword_140C7F860);
				*(_QWORD*)(v7 + 16) = *(_QWORD*)(v5 + v6 + 16);
				v2 = qword_140C7F868;
			}
			++v3;
			v5 += 32i64;
		} while (v3 < v2);
	}
	result = (__int64)sub_14018DB00(qword_140C7F860, v4, 32i64);
	v9 = qword_140C7F860;
	v10 = result;
	if (qword_140C7F860 != result)
	{
		if (v4)
		{
			v11 = result;
			v12 = v4;
			v13 = -result;
			do
			{
				if (v11)
				{
					*(_OWORD*)v11 = *(_OWORD*)(v13 + v11 + v9);
					result = *(_QWORD*)(v13 + v11 + v9 + 16);
					*(_QWORD*)(v11 + 16) = result;
					v9 = qword_140C7F860;
				}
				v11 += 32i64;
				--v12;
			} while (v12);
		}
		if (v9)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
		qword_140C7F860 = v10;
	}
	qword_140C7F868 = v4;
	return result;
}
// 140C7F860: using guessed type __int64 qword_140C7F860;
// 140C7F868: using guessed type __int64 qword_140C7F868;

