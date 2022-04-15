#include "../winhttp.h"

//----- (0000000140157180) ----------------------------------------------------
_QWORD* __fastcall sub_140157180(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rdi
	_QWORD* v4; // rsi
	_QWORD* v5; // rbx

	result = *(_QWORD**)(a1 + 56);
	v3 = (_QWORD*)*result;
	if ((_QWORD*)*result != result)
	{
		do
		{
			v4 = (_QWORD*)v3[2];
			(*(void(__fastcall**)(_QWORD*))(*v4 + 208i64))(v4);
			result = (_QWORD*)v4[70];
			v5 = (_QWORD*)*result;
			if ((_QWORD*)*result != result)
			{
				do
				{
					result = sub_1400C86A0((_QWORD*)v5[2]);
					v5 = (_QWORD*)*v5;
				} while (v5 != (_QWORD*)v4[70]);
			}
			v3 = (_QWORD*)*v3;
		} while (v3 != *(_QWORD**)(a1 + 56));
	}
	return result;
}

