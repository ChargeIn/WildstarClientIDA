#include "../winhttp.h"

//----- (00000001401C09D0) ----------------------------------------------------
int __fastcall sub_1401C09D0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, __int64* a5)
{
	int result; // eax
	__int64 v9; // rax
	__int64 v10; // [rsp+30h] [rbp-248h] BYREF
	int v11[132]; // [rsp+40h] [rbp-238h] BYREF

	result = sub_1401C0820(a1, v11);
	if (result >= 0)
	{
		result = sub_1401C39A0((HINTERNET*)(a1 + 128), (const WCHAR*)v11, (DWORD_PTR)&v10);
		if (result >= 0)
		{
			if (a4)
				*a4 = v10;
			if (a5)
			{
				v9 = (__int64)sub_14018B280(576i64, 0);
				if (v9)
					v9 = sub_1401D44B0(v9, a1 + 128, (__int64)v11, a3, v10);
				*a5 = v9;
			}
			return 0;
		}
	}
	return result;
}
// 1401C09D0: using guessed type int var_238[132];

