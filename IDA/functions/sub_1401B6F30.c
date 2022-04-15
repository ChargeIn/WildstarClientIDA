#include "../winhttp.h"

//----- (00000001401B6F30) ----------------------------------------------------
int __fastcall sub_1401B6F30(__int64 a1, const __m128i* a2, __int64 a3, __int64 a4)
{
	int result; // eax
	__int64 v6; // rbx
	int v7; // edi
	__int64 v8; // [rsp+40h] [rbp+8h] BYREF

	v8 = a1;
	if (!a4)
		return -2147024809;
	result = sub_1401B5B50(*(__int64*)&qword_140C63788, a2, 2i64, 0, &v8);
	if (result >= 0)
	{
		v6 = v8;
		v7 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 104i64))(v8, a4);
		if (v7 >= 0)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 136i64))(v6);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			return 0;
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			return v7;
		}
	}
	return result;
}

