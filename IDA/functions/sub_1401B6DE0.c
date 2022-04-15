#include "../winhttp.h"

//----- (00000001401B6DE0) ----------------------------------------------------
__int64 __fastcall sub_1401B6DE0(__int64 a1, const __m128i* a2, int** a3, __int64 a4, __int64 a5)
{
	int v9; // ebx
	__int64 v10; // rbx
	__int64 v11; // rbp
	int v12; // r14d
	int v13; // ebp
	__int64 v14; // [rsp+50h] [rbp+8h] BYREF

	v14 = a1;
	if (!a3)
		return 2147942487i64;
	v9 = sub_1401B5B50(*(__int64*)&qword_140C63788, a2, 1i64, 3, &v14);
	if (v9 >= 0)
	{
		v10 = v14;
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 24i64))(v14);
		v12 = sub_1401C5690(v11, a3, 0);
		if (v12 >= 0)
		{
			v13 = (*(__int64(__fastcall**)(__int64, int*, __int64, __int64))(*(_QWORD*)v10 + 88i64))(v10, *a3, a4, a5);
			if (v13 >= 0)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
				return 0i64;
			}
			else
			{
				sub_1400035B0();
				(*(void(__fastcall**)(int*))(*(_QWORD*)*a3 + 8i64))(*a3);
				*a3 = 0i64;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
				return (unsigned int)v13;
			}
		}
		else
		{
			sub_1400035B0();
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
			return (unsigned int)v12;
		}
	}
	else
	{
		v14 = 0x141D41B20i64;
		sub_1401A3130(3, 2, &v14, (unsigned int)v9, a2);
		return (unsigned int)v9;
	}
}

