//----- (0000000140273670) ----------------------------------------------------
void __fastcall sub_140273670(__int64 a1)
{
	unsigned __int64 v1; // r8
	__int64 v2; // rsi
	int v3; // edi
	__int64 v4; // rcx
	int v5; // ebp
	__int64 v6; // rbx
	unsigned int v7[4]; // [rsp+20h] [rbp-28h] BYREF
	char v8; // [rsp+50h] [rbp+8h] BYREF

	v1 = *(_QWORD*)(a1 + 6648);
	if (v1)
	{
		v2 = *(_QWORD*)(*(_QWORD*)(a1 + 6640) + 8 * (*(unsigned int*)(a1 + 240) % v1));
		if ((*(unsigned int(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)v2 + 56i64))(v2, &v8, 4i64) == 1)
		{
			v3 = 1;
			v5 = sub_14018CDF0() + 10000;
		LABEL_4:
			v6 = 0i64;
			while (1)
			{
				if (v3)
				{
					v7[0] = 0;
					if (qword_140C63758)
						v3 = sub_1401C81F0(v4, v7);
					else
						v3 = 0;
				}
				if ((*(unsigned int(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)v2 + 56i64))(v2, &v8, 4i64) != 1)
					break;
				if ((unsigned __int64)++v6 >= 0x3E8)
				{
					if ((int)(sub_14018CDF0() - v5) < 0)
						goto LABEL_4;
					return;
				}
			}
		}
	}
}
// 1402736FB: variable 'v4' is possibly undefined
// 140C63758: using guessed type __int64 qword_140C63758;
// 140273670: using guessed type unsigned int var_28[4];

