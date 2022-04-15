#include "../winhttp.h"

//----- (00000001400623D0) ----------------------------------------------------
_QWORD* __fastcall sub_1400623D0(__int64 a1, _DWORD* a2, int a3)
{
	int v3; // eax
	__int64 v4; // r9
	__int64 v5; // rdx
	_QWORD* result; // rax

	v3 = a2[2];
	if (v3 == 5 || v3 == 7)
		v4 = *(_QWORD*)(*(_QWORD*)a2 + 16i64);
	else
		v4 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * (int)a2[2] + 224);
	if (!v4)
		return &unk_140A12138;
	v5 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * a3 + 296);
	result = (_QWORD*)(*(_QWORD*)(v4 + 32)
		+ 40 * (*(int*)(v5 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v4 + 11)) - 1)));
	while (*((_DWORD*)result + 6) != 4 || result[2] != v5)
	{
		result = (_QWORD*)result[4];
		if (!result)
			return &unk_140A12138;
	}
	return result;
}

