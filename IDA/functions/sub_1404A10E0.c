#include "../winhttp.h"

//----- (00000001404A10E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A10E0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
	int v5; // eax
	__int64 v6; // rax
	__int64 v8; // rbp
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rbx
	_QWORD* v11; // rbx
	int v12; // [rsp+20h] [rbp-18h] BYREF
	__int64 v13; // [rsp+28h] [rbp-10h]

	if (!a2)
		return 0i64;
	v5 = *(_DWORD*)(a2 + 128);
	if (v5 != 20 && v5 != 23)
		return 0i64;
	if (!a4)
		return 0i64;
	v6 = sub_1405B15C0((__int64)&qword_140C7DFB0, *(_DWORD*)(a4 + 5932));
	if (!v6)
		return 0i64;
	v8 = qword_140C659F0;
	v12 = *(_DWORD*)(v6 + 8);
	v13 = *(_QWORD*)(v6 + 32);
	v9 = (*(__int64(__fastcall**)(int*))(qword_140C659F0 + 480))(&v12);
	v10 = *(_QWORD**)(*(_QWORD*)(v8 + 472) + 8 * (v9 % *(_QWORD*)(v8 + 464)));
	if (v10)
	{
		while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v8 + 488))(&v12, v10 + 2))
		{
			v10 = (_QWORD*)v10[1];
			if (!v10)
				return a3 == 2;
		}
		v11 = v10 + 4;
		if (v11)
		{
			if (*v11)
				return a3 == 1;
		}
	}
	return a3 == 2;
}
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

