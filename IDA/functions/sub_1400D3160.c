#include "../winhttp.h"

//----- (00000001400D3160) ----------------------------------------------------
_QWORD* __fastcall sub_1400D3160(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	__int64 v5; // rcx
	__int64 v6; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	result = *(_QWORD**)(a1 + 344);
	if (result)
	{
		result = (_QWORD*)result[1];
		v3 = (_QWORD*)result[2];
		if (v3 != result)
		{
			do
			{
				v4 = v3[5];
				v5 = *(_QWORD*)(v4 + 184);
				if (v5)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
					*(_QWORD*)(v4 + 184) = 0i64;
				}
				*(_BYTE*)v4 = 0;
				v6 = v3[3];
				if (v6)
				{
					v3 = (_QWORD*)v3[3];
					for (i = *(_QWORD**)(v6 + 16); i; i = (_QWORD*)i[2])
						v3 = i;
				}
				else
				{
					for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v3 = (_QWORD*)j;
					if (v3[3] != j)
						v3 = (_QWORD*)j;
				}
				result = *(_QWORD**)(a1 + 344);
			} while (v3 != (_QWORD*)result[1]);
		}
	}
	return result;
}

