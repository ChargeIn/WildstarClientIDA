#include "../winhttp.h"

//----- (00000001400C81F0) ----------------------------------------------------
bool __fastcall sub_1400C81F0(__int64* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rbx
	__int64 v4; // r9
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rbx
	unsigned __int64* v9; // rdx
	unsigned __int64 v10; // r8
	__int64 v12; // [rsp+40h] [rbp-28h] BYREF
	__int64 v13; // [rsp+48h] [rbp-20h]
	int v14; // [rsp+70h] [rbp+8h] BYREF
	__int64 v15; // [rsp+78h] [rbp+10h]

	v4 = *a1;
	v6 = a1[1];
	v14 = 0;
	if (!sub_1400F2AD0(v6, (__int64)"SortChildren", 0i64, v4, "WW>b", a2, a3, &v14))
	{
		v7 = a1[1];
		v15 = v3;
		v8 = *(_QWORD*)(v7 + 16);
		v9 = (unsigned __int64*)sub_14018F0E0(&v12, L"Error in sort function passed to SortChildren")[1];
		if (v9)
		{
			v10 = -1i64;
			do
				++v10;
			while (*((_BYTE*)v9 + v10));
			sub_140058710(v8, v9, v10);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
			*(_QWORD*)(v8 + 16) += 16i64;
		}
		if (v13)
			sub_14018B900(v13, 0);
		sub_14005AB30(*(_QWORD*)(a1[1] + 16));
	}
	return v14 != 0;
}
// 1400C824D: variable 'v3' is possibly undefined
// 140A15340: using guessed type wchar_t aErrorInSortFun[46];

