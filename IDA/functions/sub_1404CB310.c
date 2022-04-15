#include "../winhttp.h"

//----- (00000001404CB310) ----------------------------------------------------
_QWORD* __fastcall sub_1404CB310(__int64 a1, int a2)
{
	_QWORD* result; // rax
	__int64 i; // rdi
	_QWORD* v5; // rbx
	__m128* v6; // rcx
	__int64 v7; // rax

	result = (_QWORD*)qword_140C659F8;
	for (i = *(_QWORD*)(qword_140C659F8 + 112); i; i = *(_QWORD*)(i + 8))
	{
		if (*(_DWORD*)(i + 20) == a2)
		{
			result = *(_QWORD**)(i + 88);
			v5 = (_QWORD*)result[2];
			if (v5 != result)
			{
				do
				{
					v6 = (__m128*)v5[5];
					if (v6)
						sub_1404C6A80(v6);
					v7 = v5[3];
					if (v7)
					{
						v5 = (_QWORD*)v5[3];
						for (result = *(_QWORD**)(v7 + 16); result; result = (_QWORD*)result[2])
							v5 = result;
					}
					else
					{
						for (result = (_QWORD*)v5[1]; v5 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
							v5 = result;
						if ((_QWORD*)v5[3] != result)
							v5 = result;
					}
				} while (v5 != *(_QWORD**)(i + 88));
			}
		}
	}
	return result;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

