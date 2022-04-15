#include "../winhttp.h"

//----- (00000001403C23C0) ----------------------------------------------------
__int64 __fastcall sub_1403C23C0(__int64 a1)
{
	__int64 result; // rax
	__int64 i; // rbp
	unsigned int v4; // edx
	__int64 v5; // rcx
	BOOL v6; // r8d
	__int64 v7; // r9
	__int64 v8; // r8
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rcx
	bool v17; // zf
	__int64 v18; // [rsp+40h] [rbp+8h] BYREF
	__int64 v19; // [rsp+48h] [rbp+10h] BYREF

	result = *(_QWORD*)(a1 + 120);
	for (i = *(_QWORD*)(result + 5640); i; i = *(_QWORD*)(i + 136))
	{
		result = (unsigned int)(*(_DWORD*)(i + 4) - 1);
		if ((unsigned int)result <= 1)
		{
			v4 = *(_DWORD*)(i + 8);
			v5 = *(_QWORD*)(a1 + 120);
			if (v4)
			{
				if (v5)
				{
					v6 = *(_QWORD*)(qword_140C65898 + 120) == v5 || *(_QWORD*)(qword_140C65898 + 25744) == v5;
					v7 = 0i64;
					if (v6)
						v7 = qword_140C65898;
					if (v7)
					{
						v8 = *(_QWORD*)(v7 + 32024);
						v9 = v8;
						v10 = *(_QWORD*)(v8 + 8);
						while (v10)
						{
							if (*(_DWORD*)(v10 + 32) < v4)
							{
								v10 = *(_QWORD*)(v10 + 24);
							}
							else
							{
								v9 = v10;
								v10 = *(_QWORD*)(v10 + 16);
							}
						}
						if (v9 == v8 || v4 < *(_DWORD*)(v9 + 32))
						{
							v19 = *(_QWORD*)(v7 + 32024);
							v11 = &v19;
						}
						else
						{
							v18 = v9;
							v11 = &v18;
						}
						v12 = *v11;
						if (v12 != v8)
						{
							v13 = *(_QWORD*)(v12 + 40);
							if (v13)
								goto LABEL_23;
						}
					}
				}
				result = sub_1407A0FD0(qword_140C65B70, v4);
				v13 = result;
				if (result)
				{
				LABEL_23:
					result = sub_1403D8C10(v13);
					if (!(_DWORD)result)
					{
						v14 = 0i64;
						while (1)
						{
							result = *(unsigned int*)(a1 + 28140);
							v15 = *(_QWORD*)(a1 + 8 * (v14 + 48 * result) + 2752);
							if (v15)
							{
								result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
								if ((_DWORD)result == 4)
								{
									v16 = *(_QWORD*)(v13 + 112);
									result = *(unsigned int*)(*(_QWORD*)(a1 + 8 * (v14 + 48i64 * *(unsigned int*)(a1 + 28140)) + 2752)
										+ 280i64);
									if (*(_DWORD*)(v16 + 4) == (_DWORD)result)
										break;
								}
							}
							if ((unsigned __int64)++v14 >= 0xC)
								goto LABEL_33;
						}
						result = sub_1403BAD30(a1, *(_DWORD*)(v16 + 4), *(_BYTE*)(a1 + 28140));
						if ((_DWORD)result)
						{
							v17 = *(_DWORD*)(i + 4) == 1;
							*(_DWORD*)(i + 8) = result;
							if (v17)
								*(_DWORD*)(i + 12) = result;
						}
					}
				}
			}
		}
	LABEL_33:
		;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

