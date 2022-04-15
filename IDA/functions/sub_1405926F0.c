#include "../winhttp.h"

//----- (00000001405926F0) ----------------------------------------------------
__int64 __fastcall sub_1405926F0(__int64 a1)
{
	int v1; // ebp
	unsigned __int64 v2; // r12
	__int64 v4; // rbx
	__int64 v5; // rax
	unsigned int v6; // r14d
	__int64 v7; // r9
	unsigned __int64 v8; // rcx
	__int64 v9; // r15
	__int64 v10; // r8
	unsigned int v11; // edx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rsi
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rbx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64* v22; // rax
	__int64 v23; // rcx
	__int16* v24; // rax
	__int64 v25; // rdx
	__int64 v27; // [rsp+50h] [rbp+8h] BYREF
	__int64 v28; // [rsp+58h] [rbp+10h] BYREF

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C65898 + 5792);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	v6 = 0;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	if (v2)
	{
		v7 = qword_140C65B90;
		v8 = 0i64;
		do
		{
			if (v8 < *(_QWORD*)(qword_140C65898 + 5792))
			{
				v9 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 5784) + 8 * v8);
				if (v9)
				{
					v10 = *(_QWORD*)(v7 + 16);
					v11 = *(_DWORD*)(v9 + 8);
					v12 = *(_QWORD*)(v10 + 8);
					v13 = v10;
					while (v12)
					{
						if (*(_DWORD*)(v12 + 32) < v11)
						{
							v12 = *(_QWORD*)(v12 + 24);
						}
						else
						{
							v13 = v12;
							v12 = *(_QWORD*)(v12 + 16);
						}
					}
					if (v13 == v10 || v11 < *(_DWORD*)(v13 + 32))
					{
						v28 = *(_QWORD*)(v7 + 16);
						v14 = &v28;
					}
					else
					{
						v27 = v13;
						v14 = &v27;
					}
					v15 = *v14;
					if (v15 != v10)
					{
						v16 = *(_QWORD*)(v15 + 40);
						if (v16)
						{
							v17 = *(_QWORD*)(a1 + 16);
							++v1;
							*(_DWORD*)(v17 + 8) = 3;
							*(double*)v17 = (double)v1;
							v18 = *(_QWORD*)(a1 + 32);
							*(_QWORD*)(a1 + 16) += 16i64;
							if (*(_QWORD*)(v18 + 120) >= *(_QWORD*)(v18 + 112))
								sub_14005E2C0(a1);
							v19 = *(_QWORD*)(a1 + 16);
							v20 = sub_14005C1B0(a1, 0, 0);
							*(_DWORD*)(v19 + 8) = 5;
							*(_QWORD*)v19 = v20;
							*(_QWORD*)(a1 + 16) += 16i64;
							LODWORD(v19) = *(_DWORD*)(v9 + 8);
							sub_140058710(a1, qword_1409F3094, 3ui64);
							v21 = *(_QWORD*)(a1 + 16);
							*(_DWORD*)(v21 + 8) = 3;
							*(double*)v21 = (double)(int)v19;
							*(_QWORD*)(a1 + 16) += 16i64;
							v22 = (__int64*)sub_1400580E0(a1, -3);
							sub_14005EA50(
								a1,
								v22,
								(int*)(*(_QWORD*)(a1 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
							*(_QWORD*)(a1 + 16) -= 32i64;
							v24 = sub_14034BDD0(v23, *(_DWORD*)(v16 + 4));
							sub_1400F0090(a1, v25, (unsigned __int64*)"strName", (unsigned __int16*)v24);
							sub_14005EA50(
								a1,
								(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
								(int*)(*(_QWORD*)(a1 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
							*(_QWORD*)(a1 + 16) -= 32i64;
							v7 = qword_140C65B90;
						}
					}
				}
			}
			v8 = ++v6;
		} while (v6 < v2);
	}
	return 1i64;
}
// 1405928A5: variable 'v23' is possibly undefined
// 1405928B7: variable 'v25' is possibly undefined
// 1409F3094: using guessed type unsigned __int64 qword_1409F3094[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B90: using guessed type __int64 qword_140C65B90;

