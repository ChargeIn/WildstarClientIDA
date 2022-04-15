//----- (00000001403A1630) ----------------------------------------------------
__int64 __fastcall sub_1403A1630(__int64 a1, unsigned int a2, int a3)
{
	__int64 v4; // rdx
	__int64 v6; // rax
	__int64 v8; // r9
	int* v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rax
	int v14; // edx
	int* v15; // rcx
	int v16; // edx
	int v17; // edx
	int v19; // edx
	_QWORD v20[2]; // [rsp+20h] [rbp-48h] BYREF
	int v21; // [rsp+30h] [rbp-38h] BYREF
	__int64 v22; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * v23)(); // [rsp+40h] [rbp-28h]
	__int64 v24; // [rsp+48h] [rbp-20h]
	__int64 v25; // [rsp+70h] [rbp+8h]

	v4 = *(_QWORD*)(a1 + 27952);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = v4;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v8 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v8 == v4 || (v25 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v25 = *(_QWORD*)(a1 + 27952);
	if (v25 == v4)
	{
		v9 = sub_14018B280(128i64, 0);
		v10 = (__int64)v9;
		if (v9)
		{
			*v9 = 0;
			*((_QWORD*)v9 + 3) = 0i64;
			*((_QWORD*)v9 + 4) = 0i64;
			*((_QWORD*)v9 + 6) = 0i64;
			*((_QWORD*)v9 + 7) = 0i64;
			v9[2] = 1414420037;
			v9[19] = 24;
			*((_QWORD*)v9 + 11) = 0i64;
			*((_QWORD*)v9 + 12) = 0i64;
			*((_QWORD*)v9 + 14) = 0i64;
			v9[30] = 0;
		}
		else
		{
			v10 = 0i64;
		}
		*(_DWORD*)(v10 + 112) = a2;
		*(_DWORD*)v10 = a3 != 0;
		v11 = sub_14001C280(a1);
		*(_DWORD*)(v10 + 80) = 1;
		*(_QWORD*)(v10 + 88) = v11;
		v12 = dword_140DC21D0;
		*(_QWORD*)(v10 + 96) = sub_1403A1840;
		*(_QWORD*)(v10 + 104) = v10;
		if ((v12 & 1) != 0)
		{
			v14 = dword_140DC21D4;
		}
		else
		{
			dword_140DC21D0 = v12 | 1;
			v13 = sub_140200220(0x472u);
			if (v13)
			{
				v14 = *(_DWORD*)(v13 + 4);
				dword_140DC21D4 = v14;
			}
			else
			{
				v14 = 150;
				dword_140DC21D4 = 150;
			}
		}
		v21 = 0;
		v22 = v10;
		v23 = sub_1407A0180;
		v24 = 0i64;
		sub_140195960(v10 + 8, v14, (__int64)&v21, 4);
		LODWORD(v20[0]) = a2;
		v20[1] = v10;
		sub_140055F80(a1 + 27944, (__int64)&v21, v20);
		return 1i64;
	}
	v15 = *(int**)(v25 + 40);
	v16 = *v15;
	if (!a3)
	{
		if (v16)
		{
			v17 = v16 - 1;
			if (v17)
			{
				if (v17 != 1)
					return 1i64;
			}
			else
			{
				*v15 = 2;
			}
		}
		return 0i64;
	}
	if (v16)
	{
		v19 = v16 - 1;
		if (!v19)
			return 0i64;
		if (v19 == 1)
		{
			*v15 = 1;
			return 0i64;
		}
	}
	else
	{
		*v15 = 1;
	}
	return 1i64;
}
// 1407A0180: using guessed type __int64 __fastcall sub_1407A0180();
// 140DC21D0: using guessed type int dword_140DC21D0;
// 140DC21D4: using guessed type int dword_140DC21D4;

