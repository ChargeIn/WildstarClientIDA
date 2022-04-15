#include "../winhttp.h"

//----- (0000000140505D60) ----------------------------------------------------
char __fastcall sub_140505D60(char* a1, unsigned __int64 a2, char a3, char a4, unsigned int a5)
{
	char result; // al
	__int64 v7; // rdi
	__int64 v9; // rcx
	bool v10; // zf
	char v11; // al
	__int64 v12; // rax

	result = a5;
	v7 = a2;
	if (a5 <= 2)
	{
		v9 = 232i64 * a5;
		if (a2 > *(_QWORD*)&a1[v9 + 1088])
			v7 = *(_QWORD*)&a1[v9 + 1088];
		v10 = v7 == *(_QWORD*)&a1[v9 + 1080];
		v11 = 0;
		*(_QWORD*)&a1[v9 + 1080] = v7;
		if (!v10)
			v11 = 1;
		if (v11)
		{
			*(_QWORD*)&a1[v9 + 1104] = *(_QWORD*)&a1[v9 + 1096];
			a1[1076] = 0;
			*((_DWORD*)a1 + 268) = 0;
		}
		if (a3)
		{
			v12 = *(_QWORD*)&a1[v9 + 1080];
			*(_QWORD*)&a1[v9 + 1096] = v12;
			*(_QWORD*)&a1[v9 + 1104] = v12;
		}
		result = (*(__int64(__fastcall**)(char*, __int64))(*(_QWORD*)a1 + 568i64))(a1, 1i64);
		if (a4)
			return sub_1400D4040((__int64)a1, "CashWindowAmountChanged", a1, "i", v7);
	}
	return result;
}

