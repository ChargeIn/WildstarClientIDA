#include "../winhttp.h"

//----- (0000000140719BB0) ----------------------------------------------------
void __fastcall sub_140719BB0(__int64 a1, int a2)
{
	int v4; // esi
	__int64 v5; // rcx
	unsigned int v6; // eax
	unsigned int v7; // r8d
	__int64 v8; // rcx
	unsigned int v9; // r10d
	__int64 v10; // r9
	unsigned int v11; // edx
	unsigned int v12; // eax
	__int64 v13; // rbx
	_QWORD** v14; // rax
	_QWORD* v15; // rcx
	_QWORD* v16; // rdx
	_QWORD* v17; // rax
	__int64 v18; // rax
	__int64 v19; // [rsp+30h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 700))
	{
		v4 = 0;
		*(_DWORD*)(a1 + 700) = 0;
		if (*(_DWORD*)(a1 + 696))
		{
			v5 = *(_QWORD*)(a1 + 632);
			if (v5)
			{
				v6 = (*(__int64 (**)(void))(*(_QWORD*)v5 + 96i64))();
				v7 = *(_DWORD*)(a1 + 696);
				v8 = *(_QWORD*)(qword_140C7F0F0 + 8);
				v9 = v6;
				v10 = qword_140C7F0F0;
				if (!v8)
					goto LABEL_16;
				do
				{
					v11 = *(_DWORD*)(v8 + 32);
					if (v11 < v7 || v7 >= v11 && *(_DWORD*)(v8 + 36) < v6)
					{
						v8 = *(_QWORD*)(v8 + 24);
					}
					else
					{
						v10 = v8;
						v8 = *(_QWORD*)(v8 + 16);
					}
				} while (v8);
				if (v10 == qword_140C7F0F0
					|| (v12 = *(_DWORD*)(v10 + 32), v7 < v12)
					|| v12 >= v7 && v9 < *(_DWORD*)(v10 + 36))
				{
				LABEL_16:
					v19 = qword_140C7F0F0;
				}
				else
				{
					v19 = v10;
				}
				v13 = v19;
				if (v19 != qword_140C7F0F0)
				{
					v14 = *(_QWORD***)(v19 + 48);
					v15 = *v14;
					if (*v14 != v14)
					{
						while (v15[2] != a1)
						{
							v15 = (_QWORD*)*v15;
							if (v15 == v14)
								return;
						}
						LOBYTE(v4) = v15 == *v14;
						if (!v4 || !a2)
						{
							v16 = (_QWORD*)*v15;
							v17 = (_QWORD*)v15[1];
							*v17 = *v15;
							v16[1] = v17;
							sub_14018B900((__int64)v15, 0);
							if (v4)
							{
								v18 = *(_QWORD*)(v13 + 48);
								if (*(_QWORD*)v18 == v18)
								{
									v19 = v13;
									sub_140720310((__int64)&unk_140C7F0E8, &v19);
								}
								else
								{
									sub_1407198E0(*(_QWORD*)(*(_QWORD*)v18 + 16i64));
									sub_140719390(*(_QWORD*)(**(_QWORD**)(v13 + 48) + 16i64), 0i64);
								}
							}
						}
					}
				}
			}
		}
	}
}
// 140719390: using guessed type __int64 __fastcall sub_140719390(_QWORD, _QWORD);
// 1407198E0: using guessed type __int64 __fastcall sub_1407198E0(_QWORD);
// 140C7F0F0: using guessed type __int64 qword_140C7F0F0;

