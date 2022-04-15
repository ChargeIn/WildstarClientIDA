//----- (000000014076AA30) ----------------------------------------------------
__int64 __fastcall sub_14076AA30(__int64 a1, __int64 a2)
{
	_DWORD* v2; // rax
	_DWORD* v3; // rbx
	__int64 v4; // rdx
	unsigned __int64 v5; // rcx
	int v6; // eax
	unsigned int v7; // ebx
	__int64 v8; // rdx
	__int64(__fastcall * *v10)(); // [rsp+20h] [rbp-40h] BYREF
	int v11; // [rsp+28h] [rbp-38h]
	__int64 v12; // [rsp+30h] [rbp-30h]
	int v13; // [rsp+38h] [rbp-28h]
	__int64(__fastcall * *v14)(); // [rsp+40h] [rbp-20h] BYREF
	int v15; // [rsp+48h] [rbp-18h]
	__int64 v16; // [rsp+50h] [rbp-10h]
	__int64(__fastcall * **v17)(); // [rsp+58h] [rbp-8h]
	unsigned int v18; // [rsp+70h] [rbp+10h] BYREF

	v12 = a1;
	v13 = 1;
	v10 = off_140B569F0;
	v11 = -2;
	v2 = *(_DWORD**)(a1 + 24);
	if ((unsigned __int64)v2 < *(_QWORD*)(a1 + 16))
	{
		v3 = dword_140A12138;
		if (v2 != dword_140A12138 && v2[2] == 5)
		{
			sub_1400579E0(a1, a2, -2);
			v4 = v12;
			v5 = *(_QWORD*)(v12 + 16);
			if (*(_QWORD*)(v12 + 24) < v5)
				v3 = *(_DWORD**)(v12 + 24);
			*(_QWORD*)v5 = *(_QWORD*)v3;
			*(_DWORD*)(v5 + 8) = v3[2];
			*(_QWORD*)(v4 + 16) += 16i64;
			v6 = sub_1400578C0(v12);
			a1 = v12;
			v11 = v6;
		}
	}
	v16 = a1;
	v15 = -2;
	v17 = &v10;
	v7 = 0;
	v14 = off_140B56A08;
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v14[2])(&v14, 0xFFFFFFFFi64);
	*(_QWORD*)(v12 + 16) -= 16i64;
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v17)[1])(v17)
		&& (unsigned int)sub_1400FCBA0((__int64)&v14))
	{
		if ((int)sub_1400FC8E0((__int64)&v14, (int*)&v18) >= 0 && v18 < 3)
			v7 |= 1 << v18;
	}
	if (sub_1405C1510(qword_140C65B98 + 264))
	{
		v18 = v7;
		sub_1403F4900(qword_140C65898, 0x5D5u, (__int64)&v18);
	}
	v14 = off_140B56A08;
	if (v16)
		sub_1400579E0(v16, v8, v15);
	v10 = off_140B56A08;
	if (v12)
		sub_1400579E0(v12, v8, v11);
	return 0i64;
}
// 14076AB7F: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

