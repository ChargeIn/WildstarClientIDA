//----- (000000014029E7A0) ----------------------------------------------------
__int64 __fastcall sub_14029E7A0(__int64 a1, int a2)
{
	int v4; // eax
	__int64 v5; // rcx
	int v6; // edi
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // [rsp+20h] [rbp-38h] BYREF
	int v11[4]; // [rsp+28h] [rbp-30h] BYREF
	__int64 v12; // [rsp+38h] [rbp-20h]

	if (*(int*)(a1 + 48) >= 1)
	{
		if (a2 < 1)
		{
			v8 = *(_QWORD*)(a1 + 32);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 16i64))(v8);
				*(_QWORD*)(a1 + 32) = 0i64;
			}
			v9 = *(_QWORD*)(a1 + 40);
			if (v9)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9);
				*(_QWORD*)(a1 + 40) = 0i64;
			}
			*(_DWORD*)(a1 + 64) = 0;
		}
	}
	else if (a2 >= 1)
	{
		v4 = *(_DWORD*)(a1 + 24);
		v11[2] = 1;
		v11[0] = v4;
		v5 = 4i64 * *(int*)(a1 + 28);
		v12 = 0i64;
		v11[1] = *(_DWORD*)((char*)&unk_140AE7E90 + v5);
		v11[3] = *(_DWORD*)((char*)&unk_140AE7EA0 + v5);
		v6 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
			+ 24i64))(
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
				v11,
				0i64,
				a1 + 32);
		if (v6 < 0)
		{
			v10 = 0x141DE54C8i64;
			sub_1401A3130(14, 2, &v10, (unsigned int)v6);
			return (unsigned int)v6;
		}
	}
	*(_DWORD*)(a1 + 48) = a2;
	return 0i64;
}
// 14029E862: conditional instruction was optimized away because eax.4<1

