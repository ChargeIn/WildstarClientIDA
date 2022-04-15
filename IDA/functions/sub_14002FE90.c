//----- (000000014002FE90) ----------------------------------------------------
void __fastcall sub_14002FE90(__int64 a1, __int64 a2)
{
	__int64 v4; // r8
	__int64 v5; // rdi
	unsigned __int64 v6; // rbx
	unsigned __int64 v7; // rbp
	__int64 v8; // r8
	__int64 v9; // r10
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64* v12; // r9
	__int64 v13; // r9
	__int64 v14; // [rsp+58h] [rbp+10h] BYREF
	__int64 v15; // [rsp+60h] [rbp+18h] BYREF

	if (a2
		&& *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2) + 12) == *(_DWORD*)(a1 + 4852)
		&& *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2) + 16) == *(_DWORD*)(a1 + 4856))
	{
		sub_140008410(a1 + 4784);
		v4 = *(int*)(a1 + 4856);
		if (*(_DWORD*)(a1 + 4852) > 0x10u || (unsigned int)v4 > 2)
			v5 = qword_140C658E8;
		else
			v5 = *(_QWORD*)(32i64 * *(int*)(a1 + 4852) + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v4;
		v6 = 0i64;
		v7 = (__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3;
		if (v7)
		{
			do
			{
				v8 = *(_QWORD*)(v5 + 24);
				v9 = *(_QWORD*)(a1 + 4824);
				v10 = *(_QWORD*)(v8 + 8);
				v11 = v8;
				while (v10)
				{
					if (*(_DWORD*)(v10 + 32) < *(_DWORD*)(v9 + 8 * v6))
					{
						v10 = *(_QWORD*)(v10 + 24);
					}
					else
					{
						v11 = v10;
						v10 = *(_QWORD*)(v10 + 16);
					}
				}
				if (v11 == v8 || *(_DWORD*)(v9 + 8 * v6) < *(_DWORD*)(v11 + 32))
				{
					v15 = *(_QWORD*)(v5 + 24);
					v12 = &v15;
				}
				else
				{
					v14 = v11;
					v12 = &v14;
				}
				v13 = *v12;
				if (v13 != v8)
					(*(void(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a2 + 328i64))(
						a2,
						a1 + 4784,
						v8,
						v13 + 40);
				++v6;
			} while (v6 < v7);
		}
	}
}
// 140C658E8: using guessed type __int64 qword_140C658E8;

