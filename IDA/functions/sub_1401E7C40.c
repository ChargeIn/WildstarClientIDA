//----- (00000001401E7C40) ----------------------------------------------------
__int64 __fastcall sub_1401E7C40(__int64 a1, __int64 a2)
{
	__int64 v2; // r8
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx

	v2 = *(_QWORD*)(a1 + 16);
	switch (*(_DWORD*)(a1 + 40))
	{
	case 3:
		result = 15i64;
		break;
	case 7:
		if (!*(_DWORD*)(v2 + 3144) || (*(_BYTE*)(v2 + 3140) & 2) != 0)
			goto LABEL_11;
		result = 3i64;
		break;
	case 0x14:
		if ((*(_BYTE*)(v2 + 3140) & 1) != 0 || *(_DWORD*)(v2 + 3144))
		{
			if (*(_DWORD*)(v2 + 3148))
				goto LABEL_11;
			result = *(unsigned int*)(v2 + 3156);
		}
		else
		{
			result = *(unsigned int*)(v2 + 3164);
		}
		break;
	default:
	LABEL_11:
		result = 0i64;
		break;
	}
	if (*(_DWORD*)(a1 + 68) != (_DWORD)result)
	{
		v5 = *(_QWORD*)(a1 + 56);
		*(_DWORD*)(a1 + 68) = result;
		if (v5)
		{
			result = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)v5 + 936i64))(v5, a2, v2);
			v6 = *(unsigned int*)(a1 + 68);
			if ((_DWORD)v6)
				return (*(__int64(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 288i64) + 896i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 288i64),
					v6,
					*(_QWORD*)(a1 + 56));
		}
	}
	return result;
}

