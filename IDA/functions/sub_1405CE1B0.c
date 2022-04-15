#include "../winhttp.h"

//----- (00000001405CE1B0) ----------------------------------------------------
void __fastcall sub_1405CE1B0(_DWORD* a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rax
	int v5; // ebx
	__int128 v6; // xmm6
	__int64 v7; // rcx
	__m128i v8; // xmm0
	float (***v9)(void); // rbx
	float (**v10)(void); // rax
	int v11; // [rsp+20h] [rbp-38h] BYREF
	_DWORD* v12; // [rsp+28h] [rbp-30h]
	void (*v13)(); // [rsp+30h] [rbp-28h]
	__int64 v14; // [rsp+38h] [rbp-20h]
	__int64 v15; // [rsp+68h] [rbp+10h] BYREF

	v15 = a2;
	v3 = *(_QWORD*)(*(_QWORD*)a1 + 8i64);
	if (v3 && *(_DWORD*)(v3 + 692) && (unsigned int)(*(_DWORD*)(v3 + 724) - 2) <= 1)
	{
		a1[18] = 1;
		v13 = sub_1405CE4A0;
		v11 = 0;
		v12 = a1;
		v14 = 0i64;
		sub_140195960((__int64)(a1 + 102), 0, (__int64)&v11, 4);
	}
	else
	{
		if ((dword_140DC34E8 & 1) != 0)
		{
			v5 = dword_140DC34EC;
		}
		else
		{
			dword_140DC34E8 |= 1u;
			v4 = sub_140200220(0x231u);
			if (v4)
			{
				v5 = *(_DWORD*)(v4 + 4);
				dword_140DC34EC = v5;
			}
			else
			{
				v5 = 0;
				dword_140DC34EC = 0;
			}
		}
		v6 = xmmword_140C777D0;
		sub_140195D70((__int64)(a1 + 120));
		v7 = qword_140C65898;
		if (v5 >= 0)
			*(_DWORD*)(qword_140C65898 + 29812) = v5;
		else
			*(_DWORD*)(qword_140C65898 + 29812) = *(_DWORD*)(qword_140C65898 + 29816);
		*(_DWORD*)(v7 + 29808) = 0x7FFFFFFF;
		*(_OWORD*)(v7 + 29792) = v6;
		v8 = _mm_cvtsi32_si128(*(_DWORD*)(v7 + 29812));
		*(_DWORD*)(v7 + 29696) = 1;
		v9 = (float (***)(void))(v7 + 29704);
		sub_1400F9C30(v7 + 29704, 1.0, 1000.0 / _mm_cvtepi32_ps(v8).m128_f32[0]);
		*(float*)v8.m128i_i32 = (**v9)();
		v10 = *v9;
		LODWORD(v15) = v8.m128i_i32[0];
		((void(__fastcall*)(float (***)(void), __int64*))v10[1])(v9, &v15);
		v13 = sub_1405CE4A0;
		v11 = 0;
		v12 = a1;
		v14 = 0i64;
		sub_140195960((__int64)(a1 + 102), dword_140DC34EC, (__int64)&v11, 4);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140DC34E8: using guessed type int dword_140DC34E8;
// 140DC34EC: using guessed type int dword_140DC34EC;

