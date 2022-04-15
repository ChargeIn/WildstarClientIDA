//----- (00000001400D1710) ----------------------------------------------------
char __fastcall sub_1400D1710(__int64 a1, int* a2)
{
	char v2; // al
	__int64 v5; // rcx
	int i; // edi
	int* v7; // rax
	int v8; // ecx
	__int64 v9; // rax
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64(__fastcall * **v15)(_QWORD); // rdx
	__int64 v16; // rax
	__int64 v17; // rbx
	void(__fastcall * **v18)(_QWORD); // rcx
	void(__fastcall * **v19)(_QWORD); // rdi
	int v20; // [rsp+20h] [rbp-38h]
	int v21; // [rsp+28h] [rbp-30h]
	char v22[24]; // [rsp+40h] [rbp-18h] BYREF
	int v23; // [rsp+60h] [rbp+8h] BYREF

	v2 = *(_BYTE*)(a1 + 29);
	if ((v2 & 8) != 0 || (v2 & 0x10) != 0 || (v2 & 0x20) != 0 || (v2 & 0x40) != 0)
	{
		if ((v2 & 0x10) == 0 || (v2 & 8) == 0 || (v2 & 0x40) != 0 || (v2 & 0x20) != 0)
		{
			if ((v2 & 0x10) != 0)
			{
				if ((v2 & 8) == 0 && (v2 & 0x40) == 0 && (v2 & 0x20) == 0)
					goto LABEL_26;
				if ((v2 & 0x10) != 0)
				{
					if ((v2 & 8) == 0 && (v2 & 0x40) == 0 && (v2 & 0x20) != 0)
						goto LABEL_21;
					if ((v2 & 0x10) != 0)
						goto LABEL_72;
				}
			}
			if ((v2 & 8) == 0 && (v2 & 0x40) == 0 && (v2 & 0x20) != 0)
				goto LABEL_38;
			if ((v2 & 0x10) != 0)
				goto LABEL_72;
			if ((v2 & 8) != 0 || (v2 & 0x40) == 0 || (v2 & 0x20) == 0)
			{
				if ((v2 & 0x10) != 0)
					goto LABEL_72;
				if ((v2 & 8) != 0 || (v2 & 0x40) == 0 || (v2 & 0x20) != 0)
				{
					if ((v2 & 0x10) != 0)
						goto LABEL_72;
					if ((v2 & 8) == 0 || (v2 & 0x40) == 0 || (v2 & 0x20) != 0)
					{
						if ((v2 & 0x10) != 0 || (v2 & 8) == 0 || (v2 & 0x40) != 0 || (v2 & 0x20) != 0)
						{
						LABEL_72:
							v16 = *(_QWORD*)(a1 + 48);
							v17 = *(_QWORD*)(a1 + 32);
							v18 = *(void(__fastcall****)(_QWORD))(v17 + 2848);
							v19 = *(void(__fastcall****)(_QWORD))(v16 + 952);
							if (v19 != v18)
							{
								if (v18)
								{
									(*v18)[1](v18);
									*(_QWORD*)(v17 + 2848) = 0i64;
								}
								*(_QWORD*)(v17 + 2848) = v19;
								if (v19)
									(**v19)(v19);
							}
							return 1;
						}
					LABEL_38:
						v15 = *(__int64(__fastcall****)(_QWORD))(*(_QWORD*)(a1 + 48) + 968i64);
					LABEL_39:
						sub_1400E6E20(*(_QWORD*)(a1 + 32), v15);
						return 1;
					}
				LABEL_21:
					sub_1400E6E20(*(_QWORD*)(a1 + 32), *(__int64(__fastcall****)(_QWORD))(*(_QWORD*)(a1 + 48) + 984i64));
					return 1;
				}
			LABEL_26:
				sub_1400E6E20(*(_QWORD*)(a1 + 32), *(__int64(__fastcall****)(_QWORD))(*(_QWORD*)(a1 + 48) + 960i64));
				return 1;
			}
		}
	LABEL_16:
		sub_1400E6E20(*(_QWORD*)(a1 + 32), *(__int64(__fastcall****)(_QWORD))(*(_QWORD*)(a1 + 48) + 976i64));
		return 1;
	}
	v5 = *(_QWORD*)(a1 + 656);
	if ((*(_QWORD*)(a1 + 656) & 0x4000i64) == 0 && (v5 & 0x40) != 0)
	{
		for (i = 0; i < 8; ++i)
		{
			v7 = (int*)sub_1400DF5A0(a1, (__int64)v22, i);
			if (*a2 >= *v7 && *a2 < v7[2])
			{
				v8 = a2[1];
				if (v8 >= v7[1] && v8 < v7[3])
				{
					switch (i)
					{
					case 0:
						goto LABEL_16;
					case 4:
						v9 = *(_QWORD*)(a1 + 48);
						if (v9 && *(_QWORD*)(v9 + 976))
							goto LABEL_16;
						break;
					case 2:
						goto LABEL_21;
					case 6:
						v11 = *(_QWORD*)(a1 + 48);
						if (v11 && *(_QWORD*)(v11 + 984))
							goto LABEL_21;
						break;
					case 1:
						goto LABEL_26;
					case 5:
						v12 = *(_QWORD*)(a1 + 48);
						if (v12 && *(_QWORD*)(v12 + 960))
							goto LABEL_26;
						break;
					case 7:
						goto LABEL_38;
					case 3:
						v13 = *(_QWORD*)(a1 + 48);
						if (v13)
						{
							if (*(_QWORD*)(v13 + 968))
								goto LABEL_38;
						}
						break;
					}
				}
			}
		}
	}
	if ((*(_DWORD*)(a1 + 656) & 0x4000i64) != 0)
		return 0;
	v21 = a2[1];
	v20 = *a2;
	v23 = 0;
	if (!sub_1400D4070(a1, 0x12u, (char*)a1, "ii>b", v20, v21, &v23) || !v23)
	{
		v14 = *(_QWORD*)(a1 + 48);
		if (!v14)
			return 0;
		v15 = *(__int64(__fastcall****)(_QWORD))(v14 + 952);
		if (!v15)
			return 0;
		goto LABEL_39;
	}
	return 1;
}
// 1400D1710: using guessed type char var_18[24];

