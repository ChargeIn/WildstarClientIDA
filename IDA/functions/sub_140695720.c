//----- (0000000140695720) ----------------------------------------------------
__int64 __fastcall sub_140695720(_QWORD* a1)
{
	__int64 v1; // rsi
	__int64 v2; // rax
	__int64 v3; // rax
	__int64* v4; // rdx
	unsigned __int64 v5; // rbx
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	int v10; // eax
	unsigned __int64 v11; // rbp
	__int64 v12; // rdi
	int v13; // r11d
	_QWORD* v14; // rax
	__int64 v15; // r8
	__int64 v16; // rdx
	int v17; // r11d
	__int64 v19; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v20; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * *v21)(); // [rsp+30h] [rbp-28h] BYREF
	int v22; // [rsp+38h] [rbp-20h]
	__int64 v23; // [rsp+40h] [rbp-18h]
	int v24; // [rsp+48h] [rbp-10h]

	v1 = (__int64)a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(__int64**)(v3 + 8)) != 0i64)
	{
		v5 = 0i64;
		v20 = 0i64;
		v19 = 0i64;
		sub_1405E6AD0((__int64*)(qword_140C65898 + 5784), v4, &v19);
		v6 = *(_QWORD*)(v1 + 32);
		v23 = v1;
		v21 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v24 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v1);
		v8 = *(_QWORD*)(v1 + 16);
		v9 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v1 + 16) += 16i64;
		v10 = sub_1400578C0(v1);
		v11 = v20;
		v12 = v19;
		v13 = v10;
		v22 = v10;
		if (v20)
		{
			do
			{
				sub_1400FA9E0((__int64)&v21);
				++v5;
			} while (v5 < v11);
			v1 = v23;
			v13 = v22;
		}
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v13);
		v15 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v15 = *v14;
		v16 = *((unsigned int*)v14 + 2);
		*(_DWORD*)(v15 + 8) = v16;
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v16, v17);
		if (v12)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
}
// 140695852: variable 'v17' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

