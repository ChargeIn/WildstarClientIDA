#include "../winhttp.h"

//----- (00000001404C7F20) ----------------------------------------------------
_QWORD* __fastcall sub_1404C7F20(__int64 a1, unsigned int a2)
{
	_QWORD* result; // rax
	_QWORD* v5; // rbx
	__int64 v6; // rax

	result = *(_QWORD**)(a1 + 88);
	v5 = (_QWORD*)result[2];
	if (v5 == result)
	{
		*(_DWORD*)(a1 + 40) = a2;
	}
	else
	{
		do
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)v5[5] + 24i64))(v5[5], a2, *(unsigned int*)(a1 + 20));
			v6 = v5[3];
			if (v6)
			{
				v5 = (_QWORD*)v5[3];
				for (result = *(_QWORD**)(v6 + 16); result; result = (_QWORD*)result[2])
					v5 = result;
			}
			else
			{
				for (result = (_QWORD*)v5[1]; v5 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v5 = result;
				if ((_QWORD*)v5[3] != result)
					v5 = result;
			}
		} while (v5 != *(_QWORD**)(a1 + 88));
		*(_DWORD*)(a1 + 40) = a2;
	}
	return result;
}

