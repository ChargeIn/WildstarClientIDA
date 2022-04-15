#include "../winhttp.h"

//----- (00000001401E6820) ----------------------------------------------------
__int64 __fastcall sub_1401E6820(__int64 a1, int a2, _QWORD* a3, int a4)
{
	int v4; // r10d
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rax
	int v8; // r9d
	int v10; // edx
	int v11; // eax
	int v12; // edi
	__int64 v13; // rax
	__int64 result; // rax
	__int64 v15; // rcx

	*(_DWORD*)(a1 + 40) = a2;
	v4 = a2 - 3;
	*(_QWORD*)(a1 + 24) = *a3;
	v5 = a3[1];
	v6 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 32) = v5;
	v7 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 44) = a4;
	v8 = *(_DWORD*)(v7 + 16);
	v10 = 15;
	switch (v4)
	{
	case 0:
		v11 = 15;
		break;
	case 4:
		if (!*(_DWORD*)(v6 + 3144) || (*(_BYTE*)(v6 + 3140) & 2) != 0)
			goto LABEL_31;
		v11 = 3;
		break;
	case 17:
		if ((*(_BYTE*)(v6 + 3140) & 2) != 0 || *(_DWORD*)(v6 + 3144))
		{
			if (*(_DWORD*)(v6 + 3148))
				goto LABEL_31;
			v11 = *(_DWORD*)(v6 + 3152);
		}
		else
		{
			v11 = *(_DWORD*)(v6 + 3160);
		}
		break;
	case 62:
		if (v8 != 367)
			goto LABEL_31;
		v11 = 89;
		break;
	case 63:
		switch (v8)
		{
		case 368:
			v11 = 89;
			break;
		case 372:
			v11 = 188;
			break;
		case 376:
			v11 = 21;
			break;
		default:
			goto LABEL_31;
		}
		break;
	case 64:
		if (v8 == 369)
		{
			v11 = 89;
		}
		else
		{
			if (v8 != 373)
				goto LABEL_31;
			v11 = 189;
		}
		break;
	case 65:
		if (v8 == 370)
		{
			v11 = 89;
		}
		else
		{
			if (v8 != 374)
				goto LABEL_31;
			v11 = 190;
		}
		break;
	case 66:
		if (v8 == 371)
		{
			v11 = 89;
		}
		else
		{
			if (v8 != 375)
				goto LABEL_31;
			v11 = 191;
		}
		break;
	default:
	LABEL_31:
		v11 = 0;
		break;
	}
	*(_DWORD*)(a1 + 64) = v11;
	switch (v4)
	{
	case 0:
		break;
	case 4:
		if (!*(_DWORD*)(v6 + 3144) || (*(_BYTE*)(v6 + 3140) & 2) != 0)
			goto LABEL_41;
		v10 = 3;
		break;
	case 17:
		if ((*(_BYTE*)(v6 + 3140) & 1) != 0 || *(_DWORD*)(v6 + 3144))
		{
			if (*(_DWORD*)(v6 + 3148))
				goto LABEL_41;
			v10 = *(_DWORD*)(v6 + 3156);
		}
		else
		{
			v10 = *(_DWORD*)(v6 + 3164);
		}
		break;
	default:
	LABEL_41:
		v10 = 0;
		break;
	}
	*(_DWORD*)(a1 + 68) = v10;
	v12 = sub_1401E6BF0(a1);
	if (v12 == -2147023728)
	{
		v13 = sub_1401E6B70(a1);
		if (!v13)
			return (unsigned int)v12;
		*(_QWORD*)(a1 + 24) = v13;
		v12 = sub_1401E6BF0(a1);
	}
	if (v12 < 0)
		return (unsigned int)v12;
	if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 2868i64))
	{
		v15 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 100) = *(_DWORD*)(v15 + 144);
		*(_DWORD*)(a1 + 104) = *(_DWORD*)(v15 + 148);
		sub_1401E7DE0(a1);
	}
	else
	{
		*(_QWORD*)(a1 + 100) = 0i64;
	}
	if (*(_QWORD*)(*(_QWORD*)(a1 + 16) + 288i64) == *(_QWORD*)(*(_QWORD*)(a1 + 16) + 304i64))
		return 0i64;
	result = sub_1401E7940(a1);
	if ((int)result >= 0)
		return 0i64;
	return result;
}

