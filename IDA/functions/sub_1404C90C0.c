#include "../winhttp.h"

//----- (00000001404C90C0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404C90C0(__int64 a1, int a2, int a3, __int64 a4)
{
	__int64 v4; // rdi
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	unsigned __int64 v9; // rsi
	_QWORD* v10; // rbx
	__int64* v11; // rbx
	__int64 v12; // rcx
	__int64* v14; // rbx
	int v15; // [rsp+50h] [rbp+18h] BYREF

	v15 = a3;
	v4 = qword_140C659F8;
	v7 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v15);
	v8 = *(_QWORD**)(*(_QWORD*)(v4 + 48) + 8 * (v7 % *(_QWORD*)(v4 + 40)));
	if (v8)
	{
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v4 + 64))(&v15, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				goto LABEL_5;
		}
		v11 = v8 + 3;
		if (v11)
		{
			v12 = *v11;
			if (*(_DWORD*)(*v11 + 20) == a2)
				return (int)sub_1404C7860(v12, a4) >= 0;
		}
	}
LABEL_5:
	v9 = (*(__int64(__fastcall**)(int*))(v4 + 96))(&v15);
	v10 = *(_QWORD**)(*(_QWORD*)(v4 + 88) + 8 * (v9 % *(_QWORD*)(v4 + 80)));
	if (v10)
	{
		while (v9 != *v10 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v4 + 104))(&v15, v10 + 2))
		{
			v10 = (_QWORD*)v10[1];
			if (!v10)
				return 0i64;
		}
		v14 = v10 + 3;
		if (v14)
		{
			v12 = *v14;
			if (*(_DWORD*)(*v14 + 20) == a2)
				return (int)sub_1404C7860(v12, a4) >= 0;
		}
	}
	return 0i64;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

