//----- (000000014046E720) ----------------------------------------------------
__int64 __fastcall sub_14046E720(_DWORD* a1, _DWORD* a2, _DWORD* a3, _DWORD* a4)
{
	__int64 v4; // rdi
	bool v7; // zf
	__int64 v10; // rax
	__int64 result; // rax
	__int64 v12; // rax
	unsigned int* v13; // rax
	unsigned int v14; // r8d
	int v15; // r9d
	__int64 v16; // r10
	__int64 v17; // rcx
	__int64 v18; // rax
	int v19; // edx
	bool v20; // sf
	bool v21; // of
	int v22; // eax
	bool v23; // sf
	bool v24; // of
	__int64 v25; // rdx
	int v26; // eax
	bool v27; // al
	int v28; // eax
	bool v29; // al
	int v30; // eax
	int v31; // ecx
	int v32; // eax
	unsigned int v33; // ecx
	__int64 v34; // rcx
	__int64 v35; // rbp
	unsigned int v36; // r9d
	int v37; // eax
	int v38; // eax
	__int64 v39; // [rsp+50h] [rbp+8h] BYREF

	v4 = 0i64;
	*a2 = 0;
	*a4 = 1;
	v7 = a1[110] == 13;
	*a3 = 0;
	if (v7)
	{
		if (!qword_140C4DF20)
			return 150i64;
		while (1)
		{
			v10 = *(_QWORD*)(qword_140C4DF18 + 8 * v4);
			if (v10)
			{
				if (*(_DWORD*)(v10 + 104) == a1[2])
					break;
			}
			if (++v4 >= (unsigned __int64)qword_140C4DF20)
				return 150i64;
		}
		v12 = sub_1402052E0(*(unsigned __int16*)(v10 + 102));
		if (v12 && (v13 = (unsigned int*)sub_14021A740(*(_DWORD*)(v12 + 20))) != 0i64)
			return *v13;
		else
			return 150i64;
	}
	else
	{
		v14 = a1[3444];
		if (v14)
		{
			v15 = a1[112];
			if (v15 == v14)
				return v14;
			v16 = qword_140C7CF48;
			v17 = *(_QWORD*)(qword_140C7CF48 + 8);
			v18 = v17;
			if (!v17)
				goto LABEL_23;
			do
			{
				v19 = *(_DWORD*)(v18 + 32);
				v21 = __OFSUB__(v19, v15);
				v20 = v19 - v15 < 0;
				if (v19 == v15)
				{
					v21 = __OFSUB__(*(_DWORD*)(v18 + 36), v14);
					v20 = (int)(*(_DWORD*)(v18 + 36) - v14) < 0;
				}
				if (v20 != v21)
				{
					v18 = *(_QWORD*)(v18 + 24);
				}
				else
				{
					v16 = v18;
					v18 = *(_QWORD*)(v18 + 16);
				}
			} while (v18);
			if (v16 == qword_140C7CF48)
				goto LABEL_23;
			v22 = *(_DWORD*)(v16 + 32);
			v24 = __OFSUB__(v15, v22);
			v23 = v15 - v22 < 0;
			if (v15 == v22)
			{
				v24 = __OFSUB__(v14, *(_DWORD*)(v16 + 36));
				v23 = (int)(v14 - *(_DWORD*)(v16 + 36)) < 0;
			}
			v39 = v16;
			if (v23 != v24)
				LABEL_23:
			v39 = qword_140C7CF48;
			if (v39 != qword_140C7CF48)
				return *(unsigned int*)(v39 + 40);
			v25 = qword_140C7CF48;
			if (!v17)
				goto LABEL_39;
			do
			{
				v26 = *(_DWORD*)(v17 + 32);
				if (v26)
					v27 = v26 < 0;
				else
					v27 = *(_DWORD*)(v17 + 36) < (int)v14;
				if (v27)
				{
					v17 = *(_QWORD*)(v17 + 24);
				}
				else
				{
					v25 = v17;
					v17 = *(_QWORD*)(v17 + 16);
				}
			} while (v17);
			if (v25 == qword_140C7CF48
				|| ((v28 = *(_DWORD*)(v25 + 32)) != 0 ? (v29 = v28 > 0) : (v29 = (int)v14 < *(_DWORD*)(v25 + 36)),
					v39 = v25,
					v29))
			{
			LABEL_39:
				v39 = qword_140C7CF48;
			}
			if (v39 == qword_140C7CF48)
				return v14;
			result = *(unsigned int*)(v39 + 40);
			if (v15 == (_DWORD)result)
				return v14;
		}
		else
		{
			if (a1[113])
				*a2 = a1[114]
				+ (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 29264) + 56i64))(*(_QWORD*)(qword_140C65898 + 29264));
			switch (a1[110])
			{
			case 0:
				*a4 = 2;
				switch (a1[111])
				{
				case 1:
					return 1468i64;
				case 2:
					return 627i64;
				case 6:
					return 473i64;
				}
				if (a1[111] != 10)
					goto LABEL_108;
				return 821i64;
			case 1:
				*a4 = 2;
				v30 = a1[111];
				if (!v30)
					return 1469i64;
				if (v30 == 2)
					return 1471i64;
				*a3 = 1;
				return 1467i64;
			case 2:
				*a4 = 43;
				v31 = a1[111];
				if (!v31)
					return 626i64;
				if (v31 == 1)
					return 1470i64;
				*a3 = 1;
				return 625i64;
			case 3:
				*a4 = 1;
				switch (a1[111])
				{
				case 4:
					return 1112i64;
				case 5:
					return 1115i64;
				case 0xB:
					return 6672i64;
				}
				*a3 = 1;
				return 1118i64;
			case 4:
				*a4 = 1;
				v32 = a1[111];
				switch (v32)
				{
				case 3:
					return 1109i64;
				case 5:
					return 1116i64;
				case 11:
					return 6673i64;
				}
				*a3 = 1;
				return 1120i64;
			case 5:
				*a4 = 1;
				switch (a1[111])
				{
				case 3:
					return 1110i64;
				case 4:
					return 1113i64;
				case 0xB:
					return 6674i64;
				}
				*a3 = 1;
				return 1122i64;
			case 6:
				*a4 = 2;
				if (!a1[111])
					return 471i64;
				*a3 = 1;
				return 472i64;
			case 7:
				*a4 = 1;
				v33 = a1[115];
				if (!v33)
					goto LABEL_108;
				v35 = sub_1401FDBE0(v33);
				if (!v35)
					goto LABEL_108;
				if ((unsigned int)sub_1403DEEC0(v34, a1[111], a1[116], a1[115], &v39))
					return *(unsigned int*)(v39 + 16);
				if (a1[120])
					sub_140474400(a1, v36, 0);
				result = *(unsigned int*)(v35 + 84);
				*a3 = 1;
				return result;
			case 8:
				*a4 = 4;
				*a3 = 1;
				return 1664i64;
			case 9:
				*a4 = 4;
				*a3 = 1;
				return 1213i64;
			case 0xA:
				*a4 = 1;
				v37 = a1[111];
				if (!v37 || v37 == 7)
					return 819i64;
				*a3 = 1;
				return 822i64;
			case 0xB:
				*a4 = 1;
				switch (a1[111])
				{
				case 3:
					return 6667i64;
				case 4:
					return 6668i64;
				case 5:
					return 6669i64;
				}
				*a3 = 1;
				return 6670i64;
			default:
			LABEL_108:
				*a2 = 0;
				*a4 = 2;
				v38 = a1[1058];
				if (v38)
				{
					if (v38 == 2 && !a1[1223])
						return 623i64;
				}
				else if (a1[1223] == 2)
				{
					return 624i64;
				}
				*a4 = 1;
				if (a1[171] || a1[1237] || a1[32] == 20 && sub_140482370(a1))
				{
					result = 151i64;
				}
				else
				{
					result = 150i64;
					if ((int)a1[21] > 1)
						result = 5642i64;
				}
				break;
			}
		}
	}
	return result;
}
// 14046E794: conditional instruction was optimized away because rax.8!=0
// 14046EB5F: variable 'v34' is possibly undefined
// 14046EB86: variable 'v36' is possibly undefined
// 140C4DF18: using guessed type __int64 qword_140C4DF18;
// 140C4DF20: using guessed type __int64 qword_140C4DF20;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7CF48: using guessed type __int64 qword_140C7CF48;

