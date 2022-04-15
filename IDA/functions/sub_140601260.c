#include "../winhttp.h"

//----- (0000000140601260) ----------------------------------------------------
_QWORD* __fastcall sub_140601260(__int64 a1, int a2)
{
	__int64 v2; // rdi
	_QWORD* result; // rax
	_QWORD* v5; // rbx

	v2 = qword_140C65BB0;
	result = *(_QWORD**)(qword_140C65BB0 + 8);
	v5 = (_QWORD*)*result;
	if ((_QWORD*)*result != result)
	{
		do
		{
			result = (_QWORD*)sub_140620DE0((__m128*)v5[2], a2);
			v5 = (_QWORD*)*v5;
		} while (v5 != *(_QWORD**)(v2 + 8));
	}
	return result;
}
// 140C65BB0: using guessed type __int64 qword_140C65BB0;

