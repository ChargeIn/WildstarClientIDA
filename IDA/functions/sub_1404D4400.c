//----- (00000001404D4400) ----------------------------------------------------
__int64 __fastcall sub_1404D4400(__int64 a1, __int64 a2)
{
	__int64* v3; // rcx
	unsigned __int64 v5; // rbp
	__int64 v6; // r15
	__int64 v7; // rdi
	__int64 v8; // rsi
	_QWORD* v9; // rbx
	__int64 result; // rax
	char v11[24]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v12; // [rsp+38h] [rbp-40h]
	_QWORD* v13; // [rsp+40h] [rbp-38h]
	__int64 v14; // [rsp+48h] [rbp-30h]

	v3 = (__int64*)(a1 + 32);
	*((_DWORD*)v3 - 6) = *(_DWORD*)a2;
	sub_1404D4E30(v3);
	v5 = 0i64;
	if (*(_DWORD*)(a2 + 16))
	{
		v6 = 0i64;
		do
		{
			sub_1404D3470((__int64)v11, v6 + *(_QWORD*)(a2 + 24));
			sub_1404D4D40((__int64*)(a1 + 32), (__int64)v11);
			v7 = v14;
			v8 = (__int64)v13;
			if (v14)
			{
				v9 = v13;
				do
				{
					if (*v9)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v9 - 16i64) + 8i64))(*v9 - 16i64);
					v9 += 2;
					--v7;
				} while (v7);
			}
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			++v5;
			v6 += 48i64;
		} while (v5 < *(unsigned int*)(a2 + 16));
	}
	result = *(_QWORD*)(a2 + 8);
	*(_QWORD*)(a1 + 16) = result;
	return result;
}

