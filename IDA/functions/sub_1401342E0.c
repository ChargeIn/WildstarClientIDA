//----- (00000001401342E0) ----------------------------------------------------
__int64 __fastcall sub_1401342E0(__int64 a1, __int64 a2, int a3, char a4)
{
	unsigned __int64 v6; // rdi
	__int64 v8; // rbx
	__int64 v9; // r9
	__int64 v10; // rbx
	int v11; // eax
	int v12; // eax
	int v13; // eax
	__int64 v14; // rax
	__int64 v15; // r10

	if (a3 <= 0)
	{
		v6 = *(_QWORD*)(a2 + 16) + 16i64 * a3;
		if (v6 < *(_QWORD*)(a2 + 24))
			return 0i64;
	}
	else
	{
		v6 = *(_QWORD*)(a2 + 24) + 16i64 * (a3 - 1);
		if (v6 >= *(_QWORD*)(a2 + 16))
			return 0i64;
	}
	if (*(int*)(v6 + 8) < 4)
	{
		if (a4)
			return 0i64;
	}
	else if (!sub_140134260(a1, *(_QWORD*)v6))
	{
		return 0i64;
	}
	LODWORD(v8) = 0;
	switch (*(_DWORD*)(v6 + 8))
	{
	case 1:
		LODWORD(v8) = 4;
		break;
	case 2:
	case 3:
		LODWORD(v8) = 8;
		break;
	case 4:
		LODWORD(v8) = *(_QWORD*)(*(_QWORD*)v6 + 16i64) + 33;
		break;
	case 5:
		v8 = 16 * (*(int*)(*(_QWORD*)v6 + 56i64) + 4i64) + 40 * (1i64 << *(_BYTE*)(*(_QWORD*)v6 + 11i64));
		if ((unsigned int)sub_140058190(a2, 2))
		{
			*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
			for (*(_QWORD*)(a2 + 16) += 16i64; (unsigned int)sub_1400590A0(a2, -2); v8 = v11 + v10)
			{
				LOBYTE(v9) = 1;
				v10 = (int)sub_1401342E0(a1, a2, 4294967294i64, v9) + v8;
				v11 = sub_1401342E0(a1, a2, 0xFFFFFFFFi64, 0i64);
				*(_QWORD*)(a2 + 16) -= 16i64;
			}
		}
		break;
	case 6:
		v12 = *(unsigned __int8*)(*(_QWORD*)v6 + 11i64);
		if (*(_BYTE*)(*(_QWORD*)v6 + 10i64))
			v13 = 16 * v12 + 40;
		else
			v13 = 8 * v12 + 40;
		LODWORD(v8) = v13;
		break;
	case 7:
		v8 = *(_QWORD*)(*(_QWORD*)v6 + 32i64);
		v14 = sub_140058660(a2, a3);
		if (v8 == 16 && v14 && *(_QWORD*)v14 == 14672i64)
			LODWORD(v8) = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v14 + 8) + 8i64))(
				*(_QWORD*)(v14 + 8),
				v15)
			+ 16;
		break;
	case 8:
		LODWORD(v8) = 16 * *(_DWORD*)(*(_QWORD*)v6 + 88i64) + 8 * (5 * *(_DWORD*)(*(_QWORD*)v6 + 92i64) + 23);
		break;
	case 9:
		LODWORD(v8) = 4
			* (*(_DWORD*)(*(_QWORD*)v6 + 80i64)
				+ *(_DWORD*)(*(_QWORD*)v6 + 84i64)
				+ 30
				+ 2
				* (*(_DWORD*)(*(_QWORD*)v6 + 72i64)
					+ *(_DWORD*)(*(_QWORD*)v6 + 88i64)
					+ 2 * (*(_DWORD*)(*(_QWORD*)v6 + 76i64) + *(_DWORD*)(*(_QWORD*)v6 + 92i64))));
		break;
	default:
		return (unsigned int)v8;
	}
	return (unsigned int)v8;
}
// 14013441F: variable 'v9' is possibly undefined
// 14013450B: variable 'v15' is possibly undefined

