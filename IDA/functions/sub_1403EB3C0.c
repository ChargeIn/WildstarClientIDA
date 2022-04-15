#include "../winhttp.h"

//----- (00000001403EB3C0) ----------------------------------------------------
_QWORD* __fastcall sub_1403EB3C0(__int64* a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	_QWORD* result; // rax
	__int64 v7; // rax
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	int v9; // [rsp+28h] [rbp-20h]
	__int64 v10; // [rsp+2Ch] [rbp-1Ch]
	__int64 v11; // [rsp+34h] [rbp-14h]
	int v12; // [rsp+3Ch] [rbp-Ch]

	if (!a4)
	{
		if (*(_DWORD*)(a6 + 72) == 2)
		{
			v10 = 0i64;
			v11 = 0i64;
			v12 = 0;
			v9 = 1065353216;
			v7 = *a1;
			v8 = 150i64;
			return (_QWORD*)(*(__int64(__fastcall**)(__int64*, _QWORD, __int64*))(v7 + 584))(a1, 0i64, &v8);
		}
		else if (*(_DWORD*)(a6 + 72) == 3)
		{
			return sub_1403E59A0((_QWORD*)a6);
		}
	}
	return result;
}

