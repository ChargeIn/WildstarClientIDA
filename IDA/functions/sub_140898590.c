#include "../winhttp.h"

//----- (0000000140898590) ----------------------------------------------------
__int64 __fastcall sub_140898590(_QWORD* a1, int a2)
{
	__int64 result; // rax
	bool v5; // [rsp+38h] [rbp+10h] BYREF

	if (!a2)
		return a1[16];
	sub_14088FBA0((__int64)a1);
	if ((unsigned int)sub_1408975E0((__int64)(a1 + 20), a2) != 1)
		return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 200i64))(a1);
	result = sub_140898620((__int64)a1, &v5);
	if (result)
	{
		if (!*(_QWORD*)(result + 24))
		{
			sub_14088FBA0((__int64)a1);
			return 0i64;
		}
	}
	return result;
}

