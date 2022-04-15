#include "../winhttp.h"

//----- (0000000140609900) ----------------------------------------------------
__int64 __fastcall sub_140609900(__int64 a1)
{
	__int64 result; // rax
	_QWORD* v2; // rbx
	__int64 v3; // rdi
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	int v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+2Ch] [rbp-1Ch]
	__int64 v7; // [rsp+34h] [rbp-14h]
	int v8; // [rsp+3Ch] [rbp-Ch]

	if (!*(_BYTE*)(a1 + 412) && *(_DWORD*)(a1 + 408))
	{
		result = 0i64;
		v4 = 1225i64;
		v2 = (_QWORD*)(a1 + 8);
		v5 = 1065353216;
		v6 = 0i64;
		v7 = 0i64;
		v8 = 0;
		v3 = 13i64;
		do
		{
			if (*v2)
				result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(*(_QWORD*)*v2 + 584i64))(*v2, 0i64, &v4);
			++v2;
			--v3;
		} while (v3);
	}
	return result;
}

