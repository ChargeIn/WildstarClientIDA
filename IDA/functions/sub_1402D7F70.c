#include "../winhttp.h"

//----- (00000001402D7F70) ----------------------------------------------------
__int64 __fastcall sub_1402D7F70(__int64 a1, __int64 a2)
{
	int v5; // edi
	_QWORD* i; // rbx
	__int64 v7; // rcx

	if (*(_DWORD*)(a1 + 176))
		return 1i64;
	v5 = 0;
	for (i = (_QWORD*)(a1 + 72); ; ++i)
	{
		v7 = *(i - 4);
		if (v7)
		{
			if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 32i64))(v7, a2))
				break;
		}
		if (*i && !(*(unsigned int(__fastcall**)(_QWORD, __int64))(*(_QWORD*)*i + 32i64))(*i, a2))
			break;
		if ((unsigned int)++v5 >= 4)
		{
			*(_DWORD*)(a1 + 176) = 1;
			return 1i64;
		}
	}
	return 0i64;
}

