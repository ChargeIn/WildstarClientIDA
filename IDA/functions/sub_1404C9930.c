#include "../winhttp.h"

//----- (00000001404C9930) ----------------------------------------------------
__int64 __fastcall sub_1404C9930(__int64 a1, int a2, int a3)
{
	__int64 v3; // rdi
	unsigned __int64 v5; // rsi
	_QWORD* v6; // rbx
	unsigned __int64 v7; // rsi
	_QWORD* v8; // rbx
	__int64* v9; // rbx
	__int64 v10; // rcx
	__int64* v12; // rbx
	int v13; // [rsp+38h] [rbp+10h] BYREF

	v13 = a2;
	v3 = qword_140C659F8;
	v5 = (*(__int64(__fastcall**)(int*))(qword_140C659F8 + 56))(&v13);
	v6 = *(_QWORD**)(*(_QWORD*)(v3 + 48) + 8 * (v5 % *(_QWORD*)(v3 + 40)));
	if (v6)
	{
		while (v5 != *v6 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 64))(&v13, v6 + 2))
		{
			v6 = (_QWORD*)v6[1];
			if (!v6)
				goto LABEL_5;
		}
		v9 = v6 + 3;
		if (v9)
		{
			v10 = *v9;
			if (*(_DWORD*)(*v9 + 20) == a3)
				return sub_1404C83E0(v10);
		}
	}
LABEL_5:
	v7 = (*(__int64(__fastcall**)(int*))(v3 + 96))(&v13);
	v8 = *(_QWORD**)(*(_QWORD*)(v3 + 88) + 8 * (v7 % *(_QWORD*)(v3 + 80)));
	if (v8)
	{
		while (v7 != *v8 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 104))(&v13, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				return 2147500037i64;
		}
		v12 = v8 + 3;
		if (v12)
		{
			v10 = *v12;
			if (*(_DWORD*)(*v12 + 20) == a3)
				return sub_1404C83E0(v10);
		}
	}
	return 2147500037i64;
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

