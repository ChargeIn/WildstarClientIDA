//----- (000000014092EB40) ----------------------------------------------------
void __fastcall sub_14092EB40(__int64 a1)
{
	__int64 v1; // rbx
	_DWORD* v2; // rsi
	_QWORD* v4; // rax
	__int64 v5; // rcx
	_QWORD* v6; // rdi
	_QWORD* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdi
	_QWORD* v10; // rax

	v1 = *(_QWORD*)(a1 + 192);
	v2 = *(_DWORD**)a1;
	if (v1)
	{
		do
		{
			v4 = sub_140932570((__int64)v2);
			v5 = *(_QWORD*)(v1 + 8);
			if (v5 && v4)
			{
				*(_QWORD*)(v5 + 16) &= ~2ui64;
				*(_QWORD*)(v5 + 16) |= 1ui64;
				*(_QWORD*)(v5 + 24) = v4;
			}
			if (!*(_DWORD*)v1)
			{
				v6 = sub_140932450((__int64)v2, 23);
				if (!*v2)
				{
					v7 = sub_14092D590((__int64)v2, 16i64);
					if (v7)
					{
						v8 = *(_QWORD*)(a1 + 248);
						*v7 = v6;
						v7[1] = v8;
						*(_QWORD*)(a1 + 248) = v7;
					}
				}
			}
			v9 = *(_QWORD*)(v1 + 16);
			v10 = sub_140932450((__int64)v2, 22);
			if (v10)
			{
				if (v9)
				{
					v10[2] &= ~2ui64;
					v10[2] |= 1ui64;
					v10[3] = v9;
				}
			}
			v1 = *(_QWORD*)(v1 + 24);
		} while (v1);
		*(_QWORD*)(a1 + 192) = 0i64;
	}
	else
	{
		*(_QWORD*)(a1 + 192) = 0i64;
	}
}

