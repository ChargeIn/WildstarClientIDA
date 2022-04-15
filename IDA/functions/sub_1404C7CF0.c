#include "../winhttp.h"

//----- (00000001404C7CF0) ----------------------------------------------------
_QWORD* __fastcall sub_1404C7CF0(__int64 a1, _QWORD* a2, int a3)
{
	_QWORD* result; // rax
	_QWORD* v6; // rbx
	__int64 v8; // rax
	int* v9; // rdx
	__int64 v10; // rax

	result = *(_QWORD**)(a1 + 88);
	v6 = (_QWORD*)result[2];
	if (v6 != result)
	{
		do
		{
			v8 = v6[5];
			if (*(_DWORD*)(v8 + 128) == a3)
			{
				v9 = (int*)a2[2];
				if (v9 == (int*)a2[3])
				{
					sub_1400B9430(a2, v9, v6 + 5);
				}
				else
				{
					if (v9)
						*(_QWORD*)v9 = v8;
					a2[2] += 8i64;
				}
			}
			v10 = v6[3];
			if (v10)
			{
				v6 = (_QWORD*)v6[3];
				for (result = *(_QWORD**)(v10 + 16); result; result = (_QWORD*)result[2])
					v6 = result;
			}
			else
			{
				for (result = (_QWORD*)v6[1]; v6 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v6 = result;
				if ((_QWORD*)v6[3] != result)
					v6 = result;
			}
		} while (v6 != *(_QWORD**)(a1 + 88));
	}
	return result;
}

