//----- (00000001403B8060) ----------------------------------------------------
void __fastcall sub_1403B8060(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned int v11; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v12[152]; // [rsp+48h] [rbp-B8h] BYREF
	int v13; // [rsp+508h] [rbp+408h]
	int v14; // [rsp+50Ch] [rbp+40Ch]
	__int64 v15; // [rsp+510h] [rbp+410h]
	__int64 v16; // [rsp+518h] [rbp+418h]
	__int64 v17; // [rsp+520h] [rbp+420h]
	__int64 v18; // [rsp+528h] [rbp+428h]
	__int64 v19; // [rsp+530h] [rbp+430h]
	__int64 v20; // [rsp+538h] [rbp+438h]
	__int64 v21; // [rsp+540h] [rbp+440h]
	__int64 v22; // [rsp+548h] [rbp+448h]
	__int64 v23; // [rsp+550h] [rbp+450h]
	unsigned int v24; // [rsp+560h] [rbp+460h] BYREF
	__int64 v25[152]; // [rsp+568h] [rbp+468h] BYREF
	int v26; // [rsp+A28h] [rbp+928h]

	if (*(_DWORD*)(a2 + 1184) && *(_QWORD*)(a2 + 8) && *(_QWORD*)a2)
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ItemAdded", "oiiO");
	switch (a4)
	{
	case 4:
	case 5:
	case 10:
	case 11:
	case 15:
	case 19:
	case 25:
	case 36:
	case 38:
	case 39:
	case 40:
	case 43:
	case 44:
		v11 = 1;
		sub_14040FC60((__int64)v12, a2);
		v8 = *(_QWORD*)(a1 + 29504);
		v13 = a3;
		v14 = 0;
		v15 = 0i64;
		v16 = 1i64;
		v17 = 0i64;
		v18 = 0i64;
		v19 = 1i64;
		v20 = 0i64;
		v21 = 0i64;
		v22 = 1i64;
		v23 = 0i64;
		sub_140427FA0(v8, &v11);
		if (v12[0])
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12[0] + 8i64))(v12[0]);
			v12[0] = 0i64;
		}
		v9 = v12[96];
		goto LABEL_12;
	case 17:
		v24 = 1;
		sub_14040FC60((__int64)v25, a2);
		v10 = *(_QWORD*)(a1 + 29504);
		v26 = a3;
		sub_140428260(v10, &v24);
		if (v25[0])
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v25[0] + 8i64))(v25[0]);
			v25[0] = 0i64;
		}
		v9 = v25[96];
	LABEL_12:
		if (v9)
			sub_14018B900(v9, 0);
		break;
	default:
		return;
	}
}

