#include "../winhttp.h"

//----- (0000000140633CB0) ----------------------------------------------------
__int64 __fastcall sub_140633CB0(__int64 a1, unsigned int a2, _QWORD* a3)
{
	void(__fastcall * **v4)(_QWORD); // rbx
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF
	unsigned int v10; // [rsp+38h] [rbp+10h] BYREF

	v9 = a1;
	v10 = a2;
	if (a2 >= *(_DWORD*)(qword_140C65898 + 31408))
	{
		v5 = *(_QWORD*)(qword_140C65898 + 31424);
		v6 = v5;
		v7 = *(_QWORD*)(v5 + 8);
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < a2)
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (v6 == v5 || (v9 = v6, a2 < *(_DWORD*)(v6 + 32)))
			v9 = v5;
		if (v9 != v5)
		{
			v4 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(v9 + 40) + 8i64);
			goto LABEL_14;
		}
		return 2147500037i64;
	}
	if (!(unsigned int)sub_1402DD480(*(_QWORD*)(qword_140C65898 + 31400), (__int64)&v10, &v9))
		return 2147500037i64;
	v4 = (void(__fastcall***)(_QWORD))v9;
LABEL_14:
	if (a3)
	{
		(**v4)(v4);
		*a3 = v4;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

