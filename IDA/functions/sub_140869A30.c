#include "../winhttp.h"

//----- (0000000140869A30) ----------------------------------------------------
__int64 __fastcall sub_140869A30(__int64 a1)
{
	_QWORD* v1; // rbx
	__int64 result; // rax
	unsigned int v4; // esi
	_QWORD* v5; // rdi

	v1 = *(_QWORD**)(a1 + 168);
	if (v1 == *(_QWORD**)(a1 + 176))
		return 1i64;
	while (1)
	{
		result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v1 + 320i64))(*v1);
		v4 = result;
		if ((_DWORD)result != 1)
			break;
		if (++v1 == *(_QWORD**)(a1 + 176))
			return result;
	}
	v5 = *(_QWORD**)(a1 + 168);
	if (v5 != v1)
	{
		do
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v5 + 328i64))(*v5);
			++v5;
		} while (v5 != v1);
		return v4;
	}
	return result;
}

