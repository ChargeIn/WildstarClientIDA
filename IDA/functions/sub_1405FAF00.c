#include "../winhttp.h"

//----- (00000001405FAF00) ----------------------------------------------------
_QWORD* __fastcall sub_1405FAF00(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	_QWORD** v4; // r10
	_QWORD* result; // rax
	__int64 v10; // rbx
	_QWORD* v11; // rdi
	_QWORD* v12; // rcx

	v4 = *(_QWORD***)(a4 + 8);
	result = *v4;
	if (*v4 != v4)
	{
		do
		{
			v10 = result[2];
			v11 = (_QWORD*)*result;
			if (v10)
			{
				if (*(_DWORD*)(v10 + 20) == 4 && *(_DWORD*)(v10 + 24) == a2)
				{
					v12 = (_QWORD*)result[1];
					*v12 = v11;
					v11[1] = v12;
					sub_14018B900((__int64)result, 0);
					if (*(_QWORD*)(a3 + 8) == v10)
					{
						*(_QWORD*)(a3 + 8) = 0i64;
						sub_1405FA640(a1, v10);
					}
				}
				result = v11;
			}
		} while (result != *(_QWORD**)(a4 + 8));
	}
	return result;
}

