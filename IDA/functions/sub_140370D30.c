#include "../winhttp.h"

//----- (0000000140370D30) ----------------------------------------------------
__int64 __fastcall sub_140370D30(
	__int64* a1,
	__int64* a2,
	__int64 a3,
	int(__fastcall* a4)(__int64, __int64, __int64),
	__int64 a5)
{
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64* v10; // rbx
	__int64 v12; // r15
	__int64 result; // rax
	__int64 v14; // [rsp+50h] [rbp+8h] BYREF

	v5 = *a2;
	v6 = *a1;
	v14 = 0i64;
	v10 = &v14;
	if (v6)
	{
		v12 = a5;
		while (v5)
		{
			if (a4(v6, v5, v12) > 0)
			{
				*v10 = v5;
				*(_QWORD*)(v5 + a3) = v10;
				v10 = (__int64*)(v5 + a3 + 8);
				v5 = *v10;
			}
			else
			{
				*v10 = v6;
				*(_QWORD*)(v6 + a3) = v10;
				v10 = (__int64*)(v6 + a3 + 8);
				v6 = *v10;
			}
			if (!v6)
				goto LABEL_8;
		}
		*v10 = v6;
		*(_QWORD*)(v6 + a3) = v10;
	}
	else
	{
	LABEL_8:
		if (v5)
		{
			*v10 = v5;
			*(_QWORD*)(v5 + a3) = v10;
		}
		else
		{
			*v10 = 0i64;
		}
	}
	result = v14;
	*a1 = 0i64;
	*a2 = result;
	if (result)
		*(_QWORD*)(result + a3) = a2;
	return result;
}
// 140370DCF: conditional instruction was optimized away because rdi.8!=0

