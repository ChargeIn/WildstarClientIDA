//----- (0000000140487270) ----------------------------------------------------
__int64 __fastcall sub_140487270(__int64 a1)
{
	__int64 v1; // rsi
	__int64* v2; // rdx
	__int64* v3; // rcx
	__int64 v4; // rax
	_QWORD* v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rdi
	_QWORD* v9; // rbx
	__int64* v11; // [rsp+40h] [rbp+8h] BYREF

	v11 = (__int64*)a1;
	v1 = qword_140C65920;
	v2 = *(__int64**)(qword_140C65920 + 8);
	v3 = 0i64;
	v11 = 0i64;
	if (v2)
	{
		do
		{
			if (!v2[1])
			{
				v3 = v2;
				v2[1] = (__int64)&v11;
				v2[2] = (__int64)v11;
				v11 = v2;
				v4 = v2[2];
				if (v4)
				{
					*(_QWORD*)(v4 + 8) = v2 + 2;
					v3 = v11;
				}
			}
			v2 = (__int64*)v2[4];
		} while (v2);
		if (v3)
		{
			do
			{
				v5 = (_QWORD*)v3[1];
				if (v5)
					*v5 = v3[2];
				v6 = v3[2];
				if (v6)
					*(_QWORD*)(v6 + 8) = v3[1];
				v7 = *v3;
				v8 = v3[9];
				v3[1] = 0i64;
				v3[2] = 0i64;
				if ((*(int (**)(void))(v7 + 16))() < 0)
				{
					v9 = *(_QWORD**)(v1 + 8);
					if (v9)
					{
						while (v9[9] != v8)
						{
							v9 = (_QWORD*)v9[4];
							if (!v9)
								goto LABEL_17;
						}
						(*(void(__fastcall**)(_QWORD*))(*v9 + 8i64))(v9);
						(*(void(__fastcall**)(_QWORD*, __int64)) * v9)(v9, 1i64);
					}
				}
			LABEL_17:
				v3 = v11;
			} while (v11);
		}
	}
	return 0i64;
}
// 140C65920: using guessed type __int64 qword_140C65920;

