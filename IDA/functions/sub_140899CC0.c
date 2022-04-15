#include "../winhttp.h"

//----- (0000000140899CC0) ----------------------------------------------------
__int64 __fastcall sub_140899CC0(__int64 a1, __int64* a2, __int64* a3)
{
	__int64* v3; // rbx
	__int64 result; // rax
	__int64* i; // rbx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // [rsp+30h] [rbp+8h] BYREF
	__int64 v11; // [rsp+48h] [rbp+20h] BYREF

	v3 = *(__int64**)(a1 + 160);
	if (v3)
	{
		if (!*(_QWORD*)(a1 + 16) && *v3)
			v3 = (__int64*)*v3;
		(*(void(__fastcall**)(__int64, __int64*, __int64*))(*(_QWORD*)v3[1] + 112i64))(v3[1], &v10, &v11);
		*a2 = v10 + *(_QWORD*)(v3[1] + 112);
		result = v3[1];
		*a3 = v11 + *(_QWORD*)(result + 112);
		for (i = (__int64*)*v3; i; i = (__int64*)*i)
		{
			(*(void(__fastcall**)(__int64, __int64*, __int64*))(*(_QWORD*)i[1] + 112i64))(i[1], &v10, &v11);
			v8 = *(_QWORD*)(i[1] + 112) + v10;
			v10 = v8;
			if (v8 < *a2)
				*a2 = v8;
			result = i[1];
			v9 = *(_QWORD*)(result + 112) + v11;
			v11 = v9;
			if (v9 < *a3)
				*a3 = v9;
		}
	}
	else
	{
		result = 0i64;
		*a2 = 0i64;
		*a3 = 0i64;
	}
	return result;
}

