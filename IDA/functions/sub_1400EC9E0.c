#include "../winhttp.h"

//----- (00000001400EC9E0) ----------------------------------------------------
__int64 __fastcall sub_1400EC9E0(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 v3; // rax
	__int64 v6; // rbx
	_QWORD* v7; // rax
	__int64 v8; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

	v3 = *(_QWORD*)(a1 + 3600);
	v6 = *(_QWORD*)(v3 + 16);
	if (v6 != v3)
	{
		do
		{
			v7 = sub_14001C170(v12, *(int**)(v6 + 40));
			sub_140115DF0(a3, v7);
			sub_14001C290((__int64)v12);
			v8 = *(_QWORD*)(v6 + 24);
			if (v8)
			{
				v6 = *(_QWORD*)(v6 + 24);
				for (i = *(_QWORD*)(v8 + 16); i; i = *(_QWORD*)(i + 16))
					v6 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v6 = j;
				if (*(_QWORD*)(v6 + 24) != j)
					v6 = j;
			}
		} while (v6 != *(_QWORD*)(a1 + 3600));
	}
	return 1i64;
}
// 1400EC9E0: using guessed type _QWORD var_28[5];

