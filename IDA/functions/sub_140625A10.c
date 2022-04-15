#include "../winhttp.h"

//----- (0000000140625A10) ----------------------------------------------------
__int64 __fastcall sub_140625A10(__int64 a1, float a2)
{
	__int64 v3; // rcx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* i; // rbx
	__int64 j; // rbx

	*(float*)(a1 + 668) = a2;
	v3 = *(_QWORD*)(a1 + 112);
	if (v3)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 152i64))(v3);
	v5 = *(_QWORD*)(a1 + 120);
	if (v5)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 152i64))(v5);
	v6 = *(_QWORD*)(a1 + 128);
	if (v6)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 152i64))(v6);
	for (i = *(_QWORD**)(a1 + 136); i; i = (_QWORD*)i[3])
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*i + 152i64))(*i);
	for (j = *(_QWORD*)(a1 + 1472); j; j = *(_QWORD*)(j + 40))
		result = sub_140625A10(j);
	return result;
}

