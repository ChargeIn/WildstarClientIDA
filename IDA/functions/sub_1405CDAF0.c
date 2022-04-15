#include "../winhttp.h"

//----- (00000001405CDAF0) ----------------------------------------------------
__int64 __fastcall sub_1405CDAF0(__int64 a1, __int64 a2)
{
	__int64** v3; // rcx
	__int64* v4; // r8
	__int64* i; // rax
	__int64 v6; // rcx
	__int64 v7; // r9
	__int64 v8; // rcx
	int v9; // edx
	__int64 result; // rax
	__int128 v11; // xmm6
	int v12; // edi
	__int64 v13; // rcx
	float(__fastcall * **v14)(__int64); // rbx
	__int64 v15; // rcx
	float v16; // xmm0_4
	float(__fastcall * *v17)(__int64); // rax
	__int128 v18; // xmm6
	__int64 v19; // rax
	float (***v20)(void); // rbx
	float v21; // xmm0_4
	float (**v22)(void); // rax
	int v23; // [rsp+20h] [rbp-38h] BYREF
	__int64 v24; // [rsp+28h] [rbp-30h]
	void(__fastcall * v25)(__int64, __int64, __int64, double); // [rsp+30h] [rbp-28h]
	__int64 v26; // [rsp+38h] [rbp-20h]
	float v27; // [rsp+60h] [rbp+8h] BYREF

	v3 = *(__int64***)(a1 + 136);
	v4 = *v3;
	for (i = *v3; i != (__int64*)v3; i = (__int64*)*i)
	{
		if (*((_DWORD*)i + 5))
			break;
	}
	v6 = **(_QWORD**)(a1 + 152);
	if (v4 != i && (__int64*)v6 != i)
	{
		*(_QWORD*)i[1] = v6;
		*(_QWORD*)v4[1] = i;
		**(_QWORD**)(v6 + 8) = v4;
		v7 = *(_QWORD*)(v6 + 8);
		*(_QWORD*)(v6 + 8) = i[1];
		i[1] = v4[1];
		v4[1] = v7;
	}
	v8 = qword_140C65898;
	*(_DWORD*)(a1 + 28) = 1;
	*(_DWORD*)(a1 + 56) = *(unsigned __int16*)(a2 + 8);
	*(_DWORD*)(a1 + 60) = *(unsigned __int16*)(a2 + 4);
	*(_DWORD*)(a1 + 64) = *(unsigned __int16*)(a2 + 6);
	*(_DWORD*)(a1 + 68) = *(_DWORD*)a2;
	if (((*(_DWORD*)(v8 + 31560) - 63) & 0xFFFFFFBF) != 0 || *(_QWORD*)(v8 + 29096))
	{
		result = *(unsigned int*)(a1 + 68);
		*(_DWORD*)(a1 + 32) = 1;
		if ((_DWORD)result == 2)
		{
			v18 = xmmword_140C777D0;
		}
		else
		{
			if ((_DWORD)result != 3)
				return result;
			v18 = xmmword_140B7B240;
		}
		sub_140195D70(a1 + 480);
		v19 = qword_140C65898;
		*(_QWORD*)(qword_140C65898 + 29808) = 0x7FFFFFFFi64;
		v20 = (float (***)(void))(v19 + 29704);
		*(_OWORD*)(v19 + 29792) = v18;
		*(_DWORD*)(v19 + 29696) = 1;
		sub_1400F9C30(v19 + 29704, 1.0, 1000.0 / (float)*(int*)(v19 + 29812));
		v21 = (**v20)();
		v22 = *v20;
		v27 = v21;
		return ((__int64(__fastcall*)(float (***)(void), float*))v22[1])(v20, &v27);
	}
	v9 = *(_DWORD*)(a1 + 64) + *(_DWORD*)(a1 + 60);
	v23 = 0;
	v26 = 0i64;
	v24 = a1;
	v25 = sub_1405CD160;
	sub_140195960(a1 + 336, v9, (__int64)&v23, 4);
	result = *(unsigned int*)(a1 + 68);
	if ((_DWORD)result == 2)
	{
		v11 = xmmword_140C777D0;
	}
	else
	{
		if ((_DWORD)result != 3)
			return result;
		v11 = xmmword_140B7B240;
	}
	v12 = *(_DWORD*)(a1 + 60);
	sub_140195D70(a1 + 480);
	v13 = qword_140C65898;
	if (v12 >= 0)
		*(_DWORD*)(qword_140C65898 + 29812) = v12;
	else
		*(_DWORD*)(qword_140C65898 + 29812) = *(_DWORD*)(qword_140C65898 + 29816);
	*(_DWORD*)(v13 + 29808) = 0x7FFFFFFF;
	*(_OWORD*)(v13 + 29792) = v11;
	*(_DWORD*)(v13 + 29696) = 1;
	v14 = (float(__fastcall***)(__int64))(v13 + 29704);
	sub_1400F9C30(v13 + 29704, 1.0, 1000.0 / (float)*(int*)(v13 + 29812));
	v16 = (**v14)(v15);
	v17 = *v14;
	v27 = v16;
	return ((__int64(__fastcall*)(float(__fastcall***)(__int64), float*))v17[1])(v14, &v27);
}
// 1405CDC8B: variable 'v15' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;

