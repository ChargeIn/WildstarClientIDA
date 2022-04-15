#include "../winhttp.h"

//----- (00000001402E6B90) ----------------------------------------------------
__int64 __fastcall sub_1402E6B90(__int64* a1, __int64* a2)
{
	__int64 v3; // rcx
	unsigned int v5; // ebx
	int v6; // eax
	void(__fastcall * **v8)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

	v3 = a1[4];
	v5 = 0;
	v8 = 0i64;
	v6 = (*(__int64(__fastcall**)(__int64, void(__fastcall****)(_QWORD)))(*(_QWORD*)v3 + 88i64))(v3, &v8);
	if (v6 < 0)
		goto LABEL_4;
	if (!v8)
	{
		*a2 = 0i64;
		return 1i64;
	}
	v6 = sub_1402E1790(a1[2], a1[3], v8, a2);
	if (v6 < 0)
		LABEL_4:
	v5 = v6;
	if (v8)
		(*v8)[1](v8);
	return v5;
}

