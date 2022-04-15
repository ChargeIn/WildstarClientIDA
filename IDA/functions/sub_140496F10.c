#include "../winhttp.h"

//----- (0000000140496F10) ----------------------------------------------------
_QWORD* __fastcall sub_140496F10(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax

	result = *(_QWORD**)(a1 + 24);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v3[5] + 16i64))(v3[5]);
			v4 = v3[3];
			if (v4)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v4 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 24));
	}
	return result;
}

