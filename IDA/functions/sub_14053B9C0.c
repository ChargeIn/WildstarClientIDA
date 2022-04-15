#include "../winhttp.h"

//----- (000000014053B9C0) ----------------------------------------------------
__int64 __fastcall sub_14053B9C0(__int64 a1, int a2)
{
	__int64 v2; // rdi
	__int64* v3; // rcx
	__int64 v4; // rax
	float v6; // xmm0_4
	__int64 v7; // rax
	float v8; // [rsp+38h] [rbp+10h] BYREF

	v2 = qword_140C65898;
	if (a2)
	{
		if (a2 >= 0)
			*(_DWORD*)(qword_140C65898 + 29812) = a2;
		else
			*(_DWORD*)(qword_140C65898 + 29812) = *(_DWORD*)(qword_140C65898 + 29816);
		*(_DWORD*)(v2 + 29696) = 3;
		v6 = (**(float(__fastcall***)(__int64))(v2 + 29704))(v2 + 29704);
		v7 = *(_QWORD*)(v2 + 29704);
		v8 = v6;
		(*(void(__fastcall**)(__int64, float*))(v7 + 8))(v2 + 29704, &v8);
		return sub_1400F9C30(v2 + 29704, 0.0, 1000.0 / (float)*(int*)(v2 + 29812));
	}
	else
	{
		v3 = (__int64*)(qword_140C65898 + 29704);
		*(_DWORD*)(qword_140C65898 + 29696) = 0;
		if (*(float*)(v2 + 29728) != 0.0 || (float)0.0 != *(float*)(v2 + 29732))
		{
			*(_QWORD*)(v2 + 29728) = 0i64;
			*(_DWORD*)(v2 + 29720) = 0;
			*(_DWORD*)(v2 + 29712) = dword_140C636A8;
		}
		v4 = *v3;
		v8 = 0.0;
		return (*(__int64(__fastcall**)(__int64*, float*))(v4 + 8))(v3, &v8);
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

