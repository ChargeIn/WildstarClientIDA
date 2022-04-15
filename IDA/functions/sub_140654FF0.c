//----- (0000000140654FF0) ----------------------------------------------------
__int64 __fastcall sub_140654FF0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 result; // rax
	__int64 v6; // rax
	__int64 v7; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0)
	{
		switch ((unsigned int)sub_14045BA60(v3))
		{
		case 0u:
		case 1u:
			v4 = *(_QWORD*)(a1 + 16);
			result = 1i64;
			*(_QWORD*)v4 = 0x3FF0000000000000i64;
			*(_DWORD*)(v4 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			break;
		case 2u:
		case 3u:
			v6 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v6 = 0x4000000000000000i64;
			*(_DWORD*)(v6 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			result = 1i64;
			break;
		case 4u:
		case 5u:
			v7 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v7 = 0x4008000000000000i64;
			*(_DWORD*)(v7 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			result = 1i64;
			break;
		default:
			goto LABEL_7;
		}
	}
	else
	{
	LABEL_7:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

