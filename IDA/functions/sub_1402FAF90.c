//----- (00000001402FAF90) ----------------------------------------------------
void __fastcall sub_1402FAF90(__int64 a1, int a2)
{
	__int64 v4; // r8
	__int64 i; // rbp
	__int64 v6; // rbx
	__int64 v7; // rsi
	_QWORD* v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rax

	if ((*(_BYTE*)(a1 + 48) & 1) != 0)
	{
		v4 = *(_QWORD*)(a1 + 64);
		for (i = 0i64; (unsigned int)i < *(_DWORD*)(v4 + 696); i = (unsigned int)(i + 1))
		{
			v6 = 0i64;
			v7 = *(_QWORD*)(v4 + 704) + 40 * i;
			v8 = (_QWORD*)(*(_QWORD*)(a1 + 1128) + 40 * i);
			if (*(_DWORD*)(v7 + 24))
			{
				do
				{
					v9 = *(_QWORD*)(v8[1] + 8 * v6);
					if (v9)
					{
						v10 = v8[4];
						if (*(_BYTE*)(v10 + 20 * v6))
						{
							*(_BYTE*)(v10 + 20 * v6) = 0;
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 72i64))(v9);
						}
					}
					v6 = (unsigned int)(v6 + 1);
				} while ((unsigned int)v6 < *(_DWORD*)(v7 + 24));
			}
			if (*v8)
			{
				if (!a2)
					(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v8 + 48i64))(*v8);
			}
			v4 = *(_QWORD*)(a1 + 64);
		}
	}
}

