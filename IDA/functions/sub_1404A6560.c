#include "../winhttp.h"

//----- (00000001404A6560) ----------------------------------------------------
__int64 __fastcall sub_1404A6560(__int64 a1, unsigned int* a2)
{
	__int64 v2; // rsi
	unsigned int v5; // ebx
	__int64 v6; // r14
	unsigned int v7; // edx
	__int64 v8; // rbp
	unsigned int v9; // ecx
	unsigned int v10; // ecx
	__int64 v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rbx
	void* v15; // rax
	__int64 v16; // [rsp+20h] [rbp-38h]
	__int64 v17; // [rsp+28h] [rbp-30h]
	__int64 v18; // [rsp+60h] [rbp+8h] BYREF

	v18 = a1;
	v2 = qword_140C659A8;
	if (!a2)
		return 2147500037i64;
	if (a2[1] == 3)
	{
		sub_1404A5F90(qword_140C659A8);
		return 0i64;
	}
	else
	{
		v5 = *a2;
		v6 = sub_1402030E0(*a2);
		if (v6)
		{
			v8 = sub_14049ADE0(v2, v5);
			if (v8)
			{
				v9 = a2[1];
				if (v9)
				{
					v10 = v9 - 1;
					if (v10)
					{
						if (v10 == 1)
							sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 3856i64);
					}
					else
					{
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HazardRemoved", byte_1409E9A5C, v5);
						sub_1400EA3E0(
							*(_QWORD*)(qword_140C65898 + 29504),
							"HazardRemoveMinimapUnit",
							byte_1409E99FC,
							v5,
							*(_DWORD*)(v8 + 24));
						v11 = *(_QWORD*)(v2 + 56);
						v12 = *(_QWORD*)(v11 + 8);
						v13 = v11;
						while (v12)
						{
							if (*(_DWORD*)(v12 + 32) < v5)
							{
								v12 = *(_QWORD*)(v12 + 24);
							}
							else
							{
								v13 = v12;
								v12 = *(_QWORD*)(v12 + 16);
							}
						}
						if (v13 == v11 || (v18 = v13, v5 < *(_DWORD*)(v13 + 32)))
							v18 = v11;
						v14 = v18;
						if (v18 != v11)
						{
							sub_14018B900(*(_QWORD*)(v18 + 40), 0);
							v18 = v14;
							sub_1404A6830(v2 + 48, &v18);
						}
					}
				}
				else
				{
					v15 = sub_1404A6340(v2, v7);
					sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HazardEnabled", byte_1409E9964, v5, v15);
					sub_140437A10((_QWORD*)qword_140C658D8, 0x6Au, 0, 0i64, 0, 0, 1);
					if (*(_DWORD*)(v8 + 32) && (*(_DWORD*)(v6 + 20) & 8) != 0)
					{
						LODWORD(v17) = *(_DWORD*)(v6 + 20) & 0x10;
						LODWORD(v16) = *(_DWORD*)(v8 + 24);
						sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HazardShowMinimapUnit", byte_1409E9A44, v5, v16, v17);
					}
				}
				return 0i64;
			}
			else
			{
				return 2147500037i64;
			}
		}
		else
		{
			return 2147500037i64;
		}
	}
}
// 1404A66E6: variable 'v7' is possibly undefined
// 1404A6776: variable 'v16' is possibly undefined
// 1404A6776: variable 'v17' is possibly undefined
// 1409E9964: using guessed type _BYTE byte_1409E9964[24];
// 1409E99FC: using guessed type _BYTE byte_1409E99FC[72];
// 1409E9A44: using guessed type _BYTE byte_1409E9A44[24];
// 1409E9A5C: using guessed type _BYTE byte_1409E9A5C[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C659A8: using guessed type __int64 qword_140C659A8;

