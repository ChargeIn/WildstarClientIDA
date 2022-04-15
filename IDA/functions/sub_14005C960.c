//----- (000000014005C960) ----------------------------------------------------
__int64 __fastcall sub_14005C960(__int64 a1, __int64 a2)
{
	int v2; // eax
	__int64 v3; // rbx
	__int64 result; // rax
	__int64 v6; // rdx
	int* v7; // rax

	v2 = *(unsigned __int8*)(a2 + 8);
	*(_BYTE*)(a2 + 9) &= 0xFCu;
	v3 = a2;
	LODWORD(result) = v2 - 4;
	while (2)
	{
		result = (int)result;
		switch ((int)result)
		{
		case 1:
			result = *(_QWORD*)(a1 + 56);
			*(_QWORD*)(v3 + 48) = result;
			goto LABEL_18;
		case 2:
			result = *(_QWORD*)(a1 + 56);
			*(_QWORD*)(v3 + 16) = result;
			goto LABEL_18;
		case 3:
			v6 = *(_QWORD*)(v3 + 16);
			*(_BYTE*)(v3 + 9) |= 4u;
			if (v6 && (*(_BYTE*)(v6 + 9) & 3) != 0)
				result = sub_14005C960(a1);
			v3 = *(_QWORD*)(v3 + 24);
			if ((*(_BYTE*)(v3 + 9) & 3) != 0)
			{
				*(_BYTE*)(v3 + 9) &= 0xFCu;
				result = (unsigned int)*(unsigned __int8*)(v3 + 8) - 4;
				if ((unsigned int)result <= 6)
					continue;
			}
			return result;
		case 4:
			result = *(_QWORD*)(a1 + 56);
			*(_QWORD*)(v3 + 160) = result;
			goto LABEL_18;
		case 5:
			result = *(_QWORD*)(a1 + 56);
			*(_QWORD*)(v3 + 104) = result;
		LABEL_18:
			*(_QWORD*)(a1 + 56) = v3;
			break;
		case 6:
			v7 = *(int**)(v3 + 16);
			if (v7[2] >= 4 && (*(_BYTE*)(*(_QWORD*)v7 + 9i64) & 3) != 0)
				sub_14005C960(a1);
			result = v3 + 24;
			if (*(_QWORD*)(v3 + 16) == v3 + 24)
				*(_BYTE*)(v3 + 9) |= 4u;
			break;
		default:
			return result;
		}
		return result;
	}
}

