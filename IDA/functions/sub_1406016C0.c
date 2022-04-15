//----- (00000001406016C0) ----------------------------------------------------
void __fastcall sub_1406016C0(_QWORD* a1, int a2)
{
	unsigned __int64 i; // rbx
	__int64 v4; // rax
	unsigned int v5; // esi
	__int64 v6; // rax
	unsigned int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // r9
	_QWORD* v10; // rcx
	_QWORD* v11; // rbx
	__int128 v12; // [rsp+60h] [rbp-18h] BYREF

	if (a2)
	{
		for (i = 0i64; i < a1[15]; ++i)
		{
			v4 = a1[14];
			v5 = *(_DWORD*)(v4 + 8 * i + 4);
			if (v5)
			{
				v6 = sub_140240F80(*(_DWORD*)(v4 + 8 * i));
				if (v6)
				{
					v7 = *(_DWORD*)(v6 + 4);
					if (v7)
					{
						v8 = sub_140248F00(v7);
						v12 = 0i64;
						sub_1405787D0((__int64)(a1 + 16), 0, v5, v9, v8, 0i64, 0i64, 0, a1 + 16, &v12, 0);
					}
				}
			}
		}
	}
	else
	{
		v10 = (_QWORD*)a1[16];
		if (v10)
		{
			do
			{
				v11 = (_QWORD*)v10[2];
				(*(void(__fastcall**)(_QWORD*))(*v10 + 32i64))(v10);
				v10 = v11;
			} while (v11);
		}
	}
}
// 14060174F: variable 'v9' is possibly undefined

