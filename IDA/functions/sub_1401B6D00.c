#include "../winhttp.h"

//----- (00000001401B6D00) ----------------------------------------------------
int __fastcall sub_1401B6D00(__int64 a1, const __m128i* a2, __int64* a3)
{
	int result; // eax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // edi
	__int64 v8; // rdi
	int v9; // ebp
	__int64 v10; // [rsp+40h] [rbp+8h] BYREF

	v10 = a1;
	if (!a3)
		return -2147024809;
	result = sub_1401B5B50(*(__int64*)&qword_140C63788, a2, 1i64, 3, &v10);
	if (result >= 0)
	{
		v5 = v10;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
		v7 = sub_1401C5690(v6, (int**)&v10, 0);
		if (v7 >= 0)
		{
			v8 = v10;
			v9 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v5 + 72i64))(v5, v10);
			if (v9 >= 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				*a3 = v8;
				return 0;
			}
			else
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				return v9;
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			return v7;
		}
	}
	return result;
}

