#include "../winhttp.h"

//----- (0000000140040660) ----------------------------------------------------
__int64 sub_140040660()
{
	__int64 v0; // rbp
	__int64 v1; // rdi
	__int64 v2; // rax
	unsigned int v3; // ecx
	__int64 v4; // r12
	__int64 v5; // r13
	_QWORD* v6; // r15
	__int64 v7; // rsi
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // r14
	__int64 v12; // rbp
	__int64 v13; // rsi
	__int64 v14; // rbx
	__int64 v16; // [rsp+60h] [rbp+18h]

	v0 = qword_140C66E38;
	v16 = qword_140C66E38;
	if (qword_140C66E38)
	{
		v1 = qword_140C63748;
		do
		{
			v2 = *(_QWORD*)(v0 + 72);
			if (v2)
			{
				v3 = *(_DWORD*)(v2 + 2520);
				if (v3)
				{
					v4 = 0i64;
					v5 = v3;
					do
					{
						v6 = *(_QWORD**)(v4 + *(_QWORD*)(*(_QWORD*)(v0 + 72) + 2512i64));
						v7 = v6[3];
						if (v7)
						{
							v8 = *(_QWORD*)(v1 + 56);
							if (v8 != *(_QWORD*)(v1 + 64))
							{
								do
								{
									(*(void(__fastcall**)(_QWORD, __int64))(v8 + 8))(*(_QWORD*)v8, v7);
									v8 += 16i64;
								} while (v8 != *(_QWORD*)(v1 + 64));
								v1 = qword_140C63748;
							}
						}
						v9 = (__int64)(v6[65] - v6[64]) >> 5;
						if ((_DWORD)v9)
						{
							v11 = (int)v9;
							if ((int)v9 > 0)
							{
								v12 = 0i64;
								do
								{
									v13 = *(_QWORD*)(v6[64] + v12 + 8);
									if (v13)
									{
										v14 = *(_QWORD*)(v1 + 56);
										if (v14 != *(_QWORD*)(v1 + 64))
										{
											do
											{
												(*(void(__fastcall**)(_QWORD, __int64))(v14 + 8))(*(_QWORD*)v14, v13);
												v14 += 16i64;
											} while (v14 != *(_QWORD*)(v1 + 64));
											v1 = qword_140C63748;
										}
									}
									v12 += 32i64;
									--v11;
								} while (v11);
								v0 = v16;
							}
						}
						else
						{
							v10 = *(_QWORD*)(v1 + 56);
							if (v10 != *(_QWORD*)(v1 + 64))
							{
								do
								{
									(*(void(__fastcall**)(_QWORD, const wchar_t*))(v10 + 8))(*(_QWORD*)v10, L"None.");
									v10 += 16i64;
								} while (v10 != *(_QWORD*)(v1 + 64));
								v1 = qword_140C63748;
							}
						}
						v4 += 8i64;
						--v5;
					} while (v5);
				}
			}
			v0 = *(_QWORD*)(v0 + 160);
			v16 = v0;
		} while (v0);
	}
	return 0i64;
}
// 1409F7D68: using guessed type wchar_t aNone[6];
// 140C63748: using guessed type __int64 qword_140C63748;
// 140C66E38: using guessed type __int64 qword_140C66E38;

