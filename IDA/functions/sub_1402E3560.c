#include "../winhttp.h"

//----- (00000001402E3560) ----------------------------------------------------
__int64 __fastcall sub_1402E3560(void (***a1)(void), __int64* a2)
{
	__int64 v3; // rbx
	int v5; // edi
	__int64 v6; // [rsp+38h] [rbp+10h] BYREF

	v3 = (__int64)a1;
	if (!a2)
		return 2147942487i64;
	(**a1)();
	v5 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v3 + 80i64))(v3, &v6);
	if (v5 < 0)
	{
	LABEL_6:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		return (unsigned int)v5;
	}
	else
	{
		while (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			v3 = v6;
			v5 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v6 + 80i64))(v6, &v6);
			if (v5 < 0)
				goto LABEL_6;
		}
		*a2 = v3;
		return 0i64;
	}
}

