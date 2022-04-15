#include "../winhttp.h"

//----- (00000001405DA960) ----------------------------------------------------
__int16* __fastcall sub_1405DA960(unsigned int a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx
	__int64 v3; // rbx
	int i; // edx
	__int16* result; // rax
	__int64 v6; // rcx
	unsigned int v7; // ebx
	__int64 v8; // rax

	v1 = sub_14024DB80(a1);
	v3 = v1;
	if (!v1)
		return 0i64;
	for (i = *(_DWORD*)(v1 + 4); ; i = *(_DWORD*)(v8 + 4))
	{
		result = sub_14034BDD0(v2, i);
		if (result)
		{
			v6 = -1i64;
			do
				++v6;
			while (result[v6]);
			if (v6)
				break;
		}
		v7 = *(_DWORD*)(v3 + 8);
		if (qword_140C63840)
		{
			v8 = qword_140C63840(off_140A6E3E8, v7, qword_140C63858);
		}
		else
		{
			if (dword_140C64634 || (int)sub_14024D920() < 0)
				return 0i64;
			v8 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v7);
		}
		v3 = v8;
		if (!v8)
			return 0i64;
	}
	return result;
}
// 1405DA976: variable 'v2' is possibly undefined
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;

