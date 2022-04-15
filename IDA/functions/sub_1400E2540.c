#include "../winhttp.h"

//----- (00000001400E2540) ----------------------------------------------------
_QWORD* __fastcall sub_1400E2540(__int64 a1, _QWORD* a2, int a3, int* a4)
{
	int* v5; // rdx
	__int64 v6; // rbx
	__int64 v8; // rax
	__int64 v9; // rcx
	int* v10; // rax
	_QWORD* v11; // rax
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	v5 = (int*)&unk_1409D379C;
	if (a4)
		v5 = a4;
	v6 = 0i64;
	v8 = 0i64;
	a2[1] = 0i64;
	a2[2] = 0i64;
	a2[3] = 0i64;
	if (*(_WORD*)v5)
	{
		do
			++v8;
		while (*((_WORD*)v5 + v8));
	}
	sub_14001C1B0(a2, v5, (__int64)v5 + 2 * v8);
	if (a3 > 0)
	{
		v10 = (int*)sub_14034BDD0(v9, a3);
		if (v10)
		{
			if (*(_WORD*)v10)
			{
				do
					++v6;
				while (*((_WORD*)v10 + v6));
			}
			sub_14001C480((__int64)a2, v10, (int*)((char*)v10 + 2 * v6));
		}
		else
		{
			v11 = sub_14018EFA0(&v13, (__int64)L"<<%d>>", (unsigned int)a3);
			if (v11 != a2)
				sub_14001C480((__int64)a2, (int*)v11[1], (int*)v11[2]);
			if (v14)
			{
				sub_14018B900(v14, 0);
				return a2;
			}
		}
	}
	return a2;
}
// 1400E259F: variable 'v9' is possibly undefined
// 140A171C0: using guessed type wchar_t aD_17[7];

