#include "../winhttp.h"

//----- (0000000140630580) ----------------------------------------------------
_QWORD* __fastcall sub_140630580(__int64 a1)
{
	__int64 v1; // r13
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rbp
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64* v8; // rax
	__int64 v9; // rax
	_DWORD* v10; // r14
	__int64 v11; // rax
	int v12; // r11d
	_DWORD* v13; // rcx
	int v14; // eax
	int v15; // eax
	__int64 v16; // r15
	unsigned int v17; // r11d
	int v18; // eax
	int v19; // eax
	__int64 v20; // rbp
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64 v24; // [rsp+20h] [rbp-48h] BYREF
	__int64 v25; // [rsp+28h] [rbp-40h]
	__int64 v26; // [rsp+30h] [rbp-38h]
	__int64 v27; // [rsp+38h] [rbp-30h]
	__int64 v28; // [rsp+70h] [rbp+8h] BYREF
	__int64 v29; // [rsp+78h] [rbp+10h] BYREF

	v28 = a1;
	v1 = qword_140C65C18;
	result = *(_QWORD**)(qword_140C65C18 + 176);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		v4 = qword_140C65898;
		do
		{
			if (v3[12] != v3[8])
			{
				v5 = *(_QWORD*)(v1 + 88);
				v6 = v5;
				v7 = *(_QWORD*)(v5 + 8);
				while (v7)
				{
					if (*(_DWORD*)(v7 + 32) < *((_DWORD*)v3 + 8))
					{
						v7 = *(_QWORD*)(v7 + 24);
					}
					else
					{
						v6 = v7;
						v7 = *(_QWORD*)(v7 + 16);
					}
				}
				if (v6 == v5 || *((_DWORD*)v3 + 8) < *(_DWORD*)(v6 + 32))
				{
					v29 = *(_QWORD*)(v1 + 88);
					v8 = &v29;
				}
				else
				{
					v28 = v6;
					v8 = &v28;
				}
				v9 = *v8;
				if (v9 != v5)
				{
					v10 = (_DWORD*)(v9 + 40);
					if (*((_DWORD*)v3 + 8) == 2)
					{
						if (v4)
						{
							v11 = *(_QWORD*)(v4 + 27728);
							if (v11)
							{
								if (*(_DWORD*)(v11 + 96))
								{
									sub_1407A00F0(v10);
									v10[3] = v12;
									sub_1407A00F0(v13);
								}
							}
						}
					}
					for (; v3[12] != v3[8]; v4 = qword_140C65898)
					{
						sub_1407A00F0((_DWORD*)(v1 + 144));
						v14 = *(_DWORD*)(v1 + 160);
						if (v14 <= 0 || !*(_DWORD*)(v1 + 152))
							break;
						v15 = v14 - 1;
						*(_DWORD*)(v1 + 160) = v15;
						if (v15 < 0)
							*(_DWORD*)(v1 + 160) = v15 - 1;
						v16 = v3[8];
						sub_1407A00F0(v10);
						v18 = v10[4];
						if (v18 <= 0 || v10[2] < v17)
							break;
						v19 = v18 - v17;
						v10[4] = v19;
						if (v19 < 0)
							v10[4] = v19 - v17;
						v24 = 0i64;
						v25 = 0i64;
						v26 = 0i64;
						v27 = 0i64;
						v24 = *(_QWORD*)(v16 + 8);
						v26 = *(_QWORD*)(v16 + 16);
						LODWORD(v25) = *(_DWORD*)v16;
						v27 = *(_QWORD*)(v16 + 24);
						sub_1403F4740(v4, 0x54Bu, (__int64)&v24);
						v20 = v3[8];
						if (v20 == v3[10] - 32i64)
						{
							sub_1406326F0(v3 + 5);
						}
						else
						{
							v21 = *(_QWORD*)(v20 + 24);
							if (v21)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
							v22 = *(_QWORD*)(v20 + 16);
							if (v22)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
							v3[8] += 32i64;
						}
					}
				}
			}
			v23 = v3[3];
			if (v23)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v23 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(v1 + 176));
	}
	return result;
}
// 14063066C: variable 'v12' is possibly undefined
// 140630670: variable 'v13' is possibly undefined
// 140630709: variable 'v17' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C18: using guessed type __int64 qword_140C65C18;

