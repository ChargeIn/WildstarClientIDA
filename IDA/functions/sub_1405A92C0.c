#include "../winhttp.h"

//----- (00000001405A92C0) ----------------------------------------------------
__int64 __fastcall sub_1405A92C0(__int64 a1, _DWORD* a2)
{
	__int64 v5; // r13
	int v6; // r14d
	__int64 v7; // rax
	__int64 v8; // rdi
	int v9; // edx
	__int64 v10; // rcx
	unsigned int v11; // ebp
	unsigned int v12; // ebx
	__int64 v13; // rsi
	int v14; // [rsp+50h] [rbp+8h]

	if (!*(_QWORD*)(a1 + 24))
		return 0i64;
	v5 = *(_QWORD*)qword_140C65B80;
	if (!*(_QWORD*)qword_140C65B80)
		return 0i64;
	v6 = 0;
	v14 = *(_DWORD*)(v5 + 16);
	if (v14 <= 0)
		return 0i64;
	while (1)
	{
		v7 = sub_1405FC730(v5, v6);
		v8 = v7;
		if (v7)
		{
			if ((unsigned int)sub_140552F50(v7))
			{
				v9 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + 12i64);
				if ((v9 & 0x80000) == 0)
				{
					v10 = *(_QWORD*)(qword_140C65898 + 27728);
					if (!v10 || ((*(_DWORD*)(v10 + 8) >> 1) & 1) == 0 || (v9 & 0x40000) != 0)
					{
						v11 = *(_DWORD*)(v8 + 16);
						v12 = 0;
						if (v11)
							break;
					}
				}
			}
		}
	LABEL_18:
		if (++v6 >= v14)
			return 0i64;
	}
	v13 = v8 + 24;
	while ((unsigned int)sub_1405510D0(v8, v12)
		|| !(unsigned int)sub_140553790(v8, v12)
		|| *(char*)(*(_QWORD*)v13 + 8i64) >= 0
		|| !(unsigned int)sub_140550C50(v8, a1, v12, a2))
	{
		++v12;
		v13 += 8i64;
		if (v12 >= v11)
			goto LABEL_18;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;

