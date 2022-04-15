//----- (0000000140769620) ----------------------------------------------------
__int64 __fastcall sub_140769620(__int64 a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v2; // rdx
	_DWORD* v3; // rbx
	__int64(__fastcall * *v4)(); // r8
	__int64 v5; // rdx
	unsigned __int64 v6; // rcx
	int v7; // eax
	int v8; // ebx
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64(__fastcall * *v12)(); // [rsp+20h] [rbp-40h] BYREF
	int v13; // [rsp+28h] [rbp-38h]
	__int64 v14; // [rsp+30h] [rbp-30h]
	int v15; // [rsp+38h] [rbp-28h]
	__int64(__fastcall * *v16)(); // [rsp+40h] [rbp-20h] BYREF
	int v17; // [rsp+48h] [rbp-18h]
	__int64 v18; // [rsp+50h] [rbp-10h]
	__int64(__fastcall * **v19)(); // [rsp+58h] [rbp-8h]
	unsigned int v20; // [rsp+78h] [rbp+18h] BYREF

	v1 = *(_DWORD**)(a1 + 24);
	v2 = *(_QWORD*)(a1 + 16);
	if ((unsigned __int64)v1 < v2)
	{
		v3 = dword_140A12138;
		if (v1 != dword_140A12138 && v1[2] == 5)
		{
			v4 = off_140B569F0;
			v14 = a1;
			v15 = 1;
			v13 = -2;
			v12 = off_140B569F0;
			if ((unsigned __int64)v1 < v2 && v1 != dword_140A12138 && v1[2] == 5)
			{
				sub_1400579E0(a1, v2, -2);
				v5 = v14;
				v6 = *(_QWORD*)(v14 + 16);
				if (*(_QWORD*)(v14 + 24) < v6)
					v3 = *(_DWORD**)(v14 + 24);
				*(_QWORD*)v6 = *(_QWORD*)v3;
				*(_DWORD*)(v6 + 8) = v3[2];
				*(_QWORD*)(v5 + 16) += 16i64;
				v7 = sub_1400578C0(v14);
				a1 = v14;
				v13 = v7;
			}
			v18 = a1;
			v17 = -2;
			v19 = &v12;
			v8 = 0;
			v16 = off_140B56A08;
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			((void(__fastcall*)(__int64(__fastcall***)(), __int64, __int64(__fastcall**)()))v16[2])(
				&v16,
				0xFFFFFFFFi64,
				v4);
			*(_QWORD*)(v14 + 16) -= 16i64;
			while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v19)[1])(v19)
				&& (unsigned int)sub_1400FCBA0((__int64)&v16))
			{
				if ((int)sub_1400FC8E0((__int64)&v16, (int*)&v20) >= 0 && v20 < 3)
					v8 |= 1 << v20;
			}
			sub_1405C36E0(v9, v8);
			v16 = off_140B56A08;
			if (v18)
				sub_1400579E0(v18, v10, v17);
			v12 = off_140B56A08;
			if (v14)
				sub_1400579E0(v14, v10, v13);
		}
	}
	return 0i64;
}
// 1407696FE: variable 'v4' is possibly undefined
// 140769751: variable 'v9' is possibly undefined
// 140769767: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

