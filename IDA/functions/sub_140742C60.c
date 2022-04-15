#include "../winhttp.h"

//----- (0000000140742C60) ----------------------------------------------------
__int64 __fastcall sub_140742C60(__int64 a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v2; // rdx
	int v3; // ebx
	_DWORD* v4; // rdi
	__int64 v5; // rdx
	unsigned __int64 v6; // rcx
	int v7; // eax
	__int64 v8; // rdx
	__int64(__fastcall * *v10)(); // [rsp+20h] [rbp-40h] BYREF
	int v11; // [rsp+28h] [rbp-38h]
	__int64 v12; // [rsp+30h] [rbp-30h]
	int v13; // [rsp+38h] [rbp-28h]
	__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-20h] BYREF
	int v15; // [rsp+48h] [rbp-18h]
	__int64 v16; // [rsp+50h] [rbp-10h]
	__int64(__fastcall * **v17)(); // [rsp+58h] [rbp-8h]
	unsigned int v18; // [rsp+78h] [rbp+18h] BYREF

	v1 = *(_DWORD**)(a1 + 24);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = 0;
	if ((unsigned __int64)v1 < v2)
	{
		v4 = dword_140A12138;
		if (v1 != dword_140A12138 && (int)v1[2] > 0)
		{
			v12 = a1;
			v13 = 1;
			v11 = -2;
			v10 = off_140B569F0;
			if ((unsigned __int64)v1 < v2 && v1 != dword_140A12138 && v1[2] == 5)
			{
				sub_1400579E0(a1, v2, -2);
				v5 = v12;
				v6 = *(_QWORD*)(v12 + 16);
				if (*(_QWORD*)(v12 + 24) < v6)
					v4 = *(_DWORD**)(v12 + 24);
				*(_QWORD*)v6 = *(_QWORD*)v4;
				*(_DWORD*)(v6 + 8) = v4[2];
				*(_QWORD*)(v5 + 16) += 16i64;
				v7 = sub_1400578C0(v12);
				a1 = v12;
				v11 = v7;
			}
			v16 = a1;
			v15 = -2;
			v17 = &v10;
			v14 = off_140B56A08;
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			((void(__fastcall*)(__int64(__fastcall***)(), __int64))v14[2])(&v14, 0xFFFFFFFFi64);
			*(_QWORD*)(v12 + 16) -= 16i64;
			while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v17)[1])(v17)
				&& (unsigned int)sub_1400FCBA0((__int64)&v14))
			{
				if ((int)sub_1400FC8E0((__int64)&v14, (int*)&v18) >= 0 && v18 < 3)
					v3 |= 1 << v18;
			}
			v14 = off_140B56A08;
			if (v16)
				sub_1400579E0(v16, v8, v15);
			v10 = off_140B56A08;
			if (v12)
				sub_1400579E0(v12, v8, v11);
		}
	}
	sub_1406019A0((__int64*)(qword_140C65898 + 27664), v3);
	return 0i64;
}
// 140742DA0: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

