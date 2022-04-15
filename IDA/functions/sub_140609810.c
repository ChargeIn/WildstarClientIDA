#include "../winhttp.h"

//----- (0000000140609810) ----------------------------------------------------
__int64 __fastcall sub_140609810(__int64 a1, int a2, int a3)
{
	__int64 result; // rax
	_QWORD* v7; // rdi
	__int64 v8; // rbx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	int v10; // [rsp+28h] [rbp-20h]
	__int64 v11; // [rsp+2Ch] [rbp-1Ch]
	__int64 v12; // [rsp+34h] [rbp-14h]
	int v13; // [rsp+3Ch] [rbp-Ch]

	if (a2 != *(_DWORD*)(a1 + 408))
	{
		result = 0i64;
		v11 = 0i64;
		v12 = 0i64;
		v10 = 1065353216;
		v7 = (_QWORD*)(a1 + 8);
		v8 = 13i64;
		v13 = 0;
		if (a2)
		{
			v9 = 1225i64;
			do
			{
				if (*v7)
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(*(_QWORD*)*v7 + 584i64))(*v7, 0i64, &v9);
				++v7;
				--v8;
			} while (v8);
		}
		else
		{
			*(_BYTE*)(a1 + 412) = 1;
			v9 = 1231i64;
			do
			{
				if (*v7)
					result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(*(_QWORD*)*v7 + 584i64))(*v7, 0i64, &v9);
				++v7;
				--v8;
			} while (v8);
		}
		*(_DWORD*)(a1 + 408) = a2;
	}
	if (a2)
	{
		if (*(_DWORD*)(a1 + 236) != a3)
			return sub_140609980(a1, a3);
	}
	return result;
}

