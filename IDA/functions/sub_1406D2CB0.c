//----- (00000001406D2CB0) ----------------------------------------------------
char __fastcall sub_1406D2CB0(int a1)
{
	__int64 v3; // rbx
	__int64 v4; // rcx
	int v5; // edx
	int v6; // edx
	__int64 v7; // rcx
	unsigned __int64 v8; // rsi
	__int64 v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	char v13; // bl
	__int64 v14; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v15; // [rsp+28h] [rbp-10h]

	if (!qword_140C65898)
		return 0;
	v3 = 0i64;
	v4 = qword_140C65898 + 160;
	v15 = 0i64;
	v14 = 0i64;
	if (a1)
	{
		v5 = a1 - 1;
		if (!v5)
			goto LABEL_9;
		v6 = v5 - 1;
		if (!v6)
		{
			v4 = qword_140C65898 + 208;
			goto LABEL_10;
		}
		if (v6 != 8)
		{
		LABEL_9:
			v4 = qword_140C65898 + 184;
			goto LABEL_10;
		}
		v4 = qword_140C65898 + 232;
	}
LABEL_10:
	sub_1403D6710(v4, &v14);
	v8 = v15;
	v9 = v14;
	if (v15)
	{
		while (1)
		{
			v10 = *(_QWORD*)(v9 + 8 * v3);
			if (v10)
			{
				v11 = *(_QWORD*)(v10 + 64);
				if (v11)
				{
					if ((*(_DWORD*)(v11 + 340) & 0x200) != 0)
					{
						v12 = sub_1405A8A40(v7, *(_DWORD*)(v11 + 432));
						if (v12)
						{
							if (!(unsigned int)sub_140552F50(v12))
								break;
						}
					}
				}
			}
			if (++v3 >= v8)
				goto LABEL_17;
		}
		v13 = 1;
	}
	else
	{
	LABEL_17:
		v13 = 0;
	}
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	return v13;
}
// 1406D2D49: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

