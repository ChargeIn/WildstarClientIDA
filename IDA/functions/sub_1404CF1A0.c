//----- (00000001404CF1A0) ----------------------------------------------------
char sub_1404CF1A0()
{
	__int64 v0; // r15
	char result; // al
	__int64 v2; // rcx
	int v3; // eax
	int v4; // ebp
	int v5; // r14d
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rsi
	int* v12; // rax
	int v13; // ecx
	float v14; // xmm4_4
	float v15; // xmm0_4
	int v16; // eax
	int v17; // ecx
	int v18; // edi
	int v19; // eax
	__int64 v20; // rcx
	__int64* v21; // rax
	__int64 v22; // rdi
	__int64 v23; // rax
	int v24; // edx
	int v25; // eax
	__int64 v26; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v29; // ecx
	char v30[8]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v31; // [rsp+28h] [rbp-50h]

	v0 = qword_140C65A20;
	if (!qword_140C65970)
		return 0;
	v2 = *(_QWORD*)(qword_140C65898 + 7152);
	if (!v2)
		return 0;
	v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2);
	if (v3 == 166)
	{
		v4 = *(_DWORD*)(v0 + 40);
	}
	else
	{
		if (v3 != 167)
			return 0;
		v4 = *(_DWORD*)(v0 + 36);
	}
	if (!v4)
		return 0;
	v5 = *(_DWORD*)(v0 + 136);
	if ((dword_140DC31BC & 1) == 0)
	{
		dword_140DC31BC |= 1u;
		v6 = sub_140200220(0x3F7u);
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 4);
			if (v7 <= 0)
			{
				dword_140DC31C0 = 0;
				goto LABEL_15;
			}
		}
		else
		{
			v7 = 5;
		}
		dword_140DC31C0 = v7;
	}
LABEL_15:
	v8 = *(_QWORD*)(v0 + 56);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 != v8)
	{
		do
		{
			if (qword_140C658F8)
			{
				v10 = sub_140448420(**(_QWORD**)(v9 + 40), ***(_DWORD***)(v9 + 40));
				v11 = v10;
				if (v10)
				{
					if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 64i64))(v10) & 1) == 0)
					{
						v12 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 168i64))(v11);
						v13 = v12[1];
						if (v13)
							v14 = fmaxf(0.0, fminf((float)*v12 / (float)v13, 1.0));
						else
							v14 = 0.0;
						v15 = (float)dword_140DC31C0 * v14;
						if (v15 > 0.0)
						{
							v17 = -1;
							if ((int)v15 != -1)
								v17 = (int)v15;
							v16 = 0;
							if (v17)
								v16 = v17;
						}
						else
						{
							v16 = 0;
						}
						v5 += v16;
						v4 += dword_140DC31C0;
					}
					v18 = *(_DWORD*)(qword_140C65970 + 8);
					v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 48i64))(v11);
					v21 = sub_140491A20(v20, v18, *(_DWORD*)(v9 + 32), v19);
					v22 = (__int64)v21;
					if (v21)
					{
						v5 += sub_1404A1AA0(*v21, *(_DWORD*)*v21, 0);
						v23 = sub_1404CF4F0(v22, (__int64)v30, *(_QWORD*)(qword_140C65898 + 120));
						v24 = -1;
						if (*(_DWORD*)(v23 + 16) != -1)
							v24 = *(_DWORD*)(v23 + 16);
						v25 = 0;
						if (v24)
							v25 = v24;
						v4 += v25;
						sub_140008410((__int64)v30);
						sub_14018B900(v31, 0);
					}
				}
			}
			v26 = *(_QWORD*)(v9 + 24);
			if (v26)
			{
				v9 = *(_QWORD*)(v9 + 24);
				for (i = *(_QWORD*)(v26 + 16); i; i = *(_QWORD*)(i + 16))
					v9 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = j;
				if (*(_QWORD*)(v9 + 24) != j)
					v9 = j;
			}
		} while (v9 != *(_QWORD*)(v0 + 56));
	}
	if (v5 == v4)
		return 100;
	if (!v5)
		return 0;
	v29 = (int)(float)((float)((float)v5 / (float)v4) * 100.0);
	if (!(_BYTE)v29)
		return 1;
	result = (int)(float)((float)((float)v5 / (float)v4) * 100.0);
	if ((unsigned __int8)v29 > 0x63u)
		return 99;
	return result;
}
// 1404CF25C: conditional instruction was optimized away because eax.4>=1
// 1404CF263: conditional instruction was optimized away because ecx.4>=1
// 1404CF369: variable 'v20' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65A20: using guessed type __int64 qword_140C65A20;
// 140DC31BC: using guessed type int dword_140DC31BC;
// 140DC31C0: using guessed type int dword_140DC31C0;
// 1404CF1A0: using guessed type char var_58[8];

