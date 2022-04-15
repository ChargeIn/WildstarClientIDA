//----- (0000000140471EF0) ----------------------------------------------------
__int64 __fastcall sub_140471EF0(__int64 a1, int a2, int a3)
{
	__int64 v3; // rax
	unsigned int v5; // esi
	unsigned int v6; // edi
	int v7; // eax
	int v8; // edx
	int v9; // eax
	int v10; // eax
	int v11; // ecx
	int v12; // eax
	int v13; // ecx
	__int64 v15[2]; // [rsp+20h] [rbp-40h] BYREF
	int v16; // [rsp+30h] [rbp-30h]
	__int64 v17; // [rsp+34h] [rbp-2Ch]
	__int64 v18[2]; // [rsp+40h] [rbp-20h] BYREF
	__int64 v19; // [rsp+50h] [rbp-10h]
	__int64 v20; // [rsp+58h] [rbp-8h]

	v3 = *(_QWORD*)(a1 + 3264);
	v18[1] = 1065353216i64;
	v15[1] = 1065353216i64;
	v16 = 0;
	v18[0] = 0i64;
	v19 = 0i64;
	v20 = 0i64;
	v15[0] = 0i64;
	v17 = 0i64;
	if (!a3)
	{
		v5 = 3;
		v6 = 9;
		if (!v3)
			goto LABEL_28;
		if (a2)
		{
			if ((unsigned int)sub_140467ED0(a1) == 6)
			{
				LODWORD(v15[0]) = 206;
				v16 = 1065353216;
				HIDWORD(v17) = 8;
			}
			goto LABEL_28;
		}
		v7 = sub_140467ED0(a1);
		if (v7 <= 0)
			goto LABEL_28;
		if (v7 <= 3)
		{
			v8 = 164;
			LODWORD(v19) = 6;
		}
		else
		{
			if (v7 != 4)
			{
				if (v7 != 5)
				{
					if (v7 != 7)
						goto LABEL_28;
					v8 = 7524;
					LODWORD(v19) = 6;
					goto LABEL_25;
				}
				LODWORD(v19) = 6;
				goto LABEL_24;
			}
			v8 = 1125;
			LODWORD(v19) = 6;
		}
	LABEL_25:
		LODWORD(v18[0]) = v8;
		v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5864) + 408i64))(*(_QWORD*)(a1 + 5864));
		v11 = v18[0];
		if (!v10)
			v11 = 0;
		LODWORD(v18[0]) = v11;
		goto LABEL_28;
	}
	v5 = 2;
	v6 = 8;
	if (!v3)
		goto LABEL_28;
	if (!a2)
	{
		v9 = sub_140467ED0(a1);
		if (v9 != 5)
		{
			if (v9 != 7)
				goto LABEL_28;
			v8 = 7524;
			LODWORD(v19) = 5;
			goto LABEL_25;
		}
		LODWORD(v19) = 5;
	LABEL_24:
		v8 = 1124;
		goto LABEL_25;
	}
	if ((unsigned int)sub_140467ED0(a1) == 6)
	{
		LODWORD(v15[0]) = 205;
		v16 = 1065353216;
		HIDWORD(v17) = 7;
	}
LABEL_28:
	(*(void(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 5864) + 584i64))(
		*(_QWORD*)(a1 + 5864),
		v5,
		v18);
	if (LODWORD(v15[0]))
	{
		v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5864) + 448i64))(*(_QWORD*)(a1 + 5864));
		v13 = v15[0];
		if (!v12)
			v13 = 0;
		LODWORD(v15[0]) = v13;
	}
	return (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(**(_QWORD**)(a1 + 5864) + 600i64))(
		*(_QWORD*)(a1 + 5864),
		v6,
		v15);
}
// 140471F86: conditional instruction was optimized away because %var_20.4==0

