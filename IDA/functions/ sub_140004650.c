#include "../winhttp.h"

//----- (0000000140004650) ----------------------------------------------------
__int64 __fastcall sub_140004650(__int64 a1, _QWORD* a2)
{
	unsigned __int64 v4; // r8
	__int64 v5; // rbx
	__int64 v6; // r14
	_QWORD** v7; // rdi
	_QWORD** i; // rcx
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rax

	sub_140007910(a1 + 8, a2);
	v4 = *(_QWORD*)(a1 + 48);
	v5 = 0i64;
	if (v4)
	{
		v6 = a1 + 40;
		v7 = *(_QWORD***)(a1 + 40);
		for (i = v7; **i != *a2; ++i)
		{
			if (++v5 >= v4)
				return 0i64;
		}
		v9 = (__int64)v7[v5];
		if (v9)
		{
			v10 = *(_QWORD*)(v9 + 64);
			if (v10)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
			v11 = *(_QWORD*)(v9 + 56);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			sub_14018B900(v9, 0);
		}
		sub_140007270(v6, v5);
		if (qword_140C65898)
		{
			sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "AccountPendingItemsUpdate", &unk_1409D138E);
			v12 = *(_QWORD*)(qword_140C65898 + 32736);
			if (v12)
				sub_1400EA3E0(*(_QWORD*)(v12 + 96), "AccountPendingItemsUpdate", &unk_1409D013D);
		}
		v13 = qword_140C66DA8;
		v14 = qword_140C66DA8;
		if (qword_140C66DA8)
		{
			while (*(_DWORD*)(v14 + 368) == 5)
			{
				v14 = *(_QWORD*)(v14 + 176);
				if (!v14)
					return 0i64;
			}
			if (qword_140C66DA8)
			{
				do
				{
					if (*(_DWORD*)(v13 + 368) != 5)
						break;
					v13 = *(_QWORD*)(v13 + 176);
				} while (v13);
			}
			sub_1400EA3E0(*(_QWORD*)(v13 + 72), "AccountItemUpdate", &unk_1409D013E);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

