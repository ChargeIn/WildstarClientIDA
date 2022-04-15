//----- (000000014005F0D0) ----------------------------------------------------
__int64 __fastcall sub_14005F0D0(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned int v7; // edx
	bool v8; // zf
	__int64 v9; // r8
	__int64 v10; // rdx
	_DWORD* v11; // rax
	int v12; // ecx

	switch (a2[2])
	{
	case 0:
		goto LABEL_2;
	case 1:
		v7 = 0;
		v8 = *a2 == *a3;
		goto LABEL_15;
	case 2:
		v7 = 0;
		v8 = *(_QWORD*)a2 == *(_QWORD*)a3;
		goto LABEL_15;
	case 3:
		if (*(double*)a3 == *(double*)a2)
			goto LABEL_4;
		goto LABEL_5;
	case 5:
	case 7:
		v9 = *(_QWORD*)a3;
		v10 = *(_QWORD*)a2;
		if (v10 == v9)
		{
		LABEL_2:
			result = 1i64;
		}
		else
		{
			result = (__int64)sub_14005ECD0(a1, *(_QWORD*)(v10 + 16), *(_QWORD*)(v9 + 16));
			if (result)
			{
				sub_14005E780(a1, *(_QWORD*)(a1 + 16), result, (_DWORD)a2, (__int64)a3);
				v11 = *(_DWORD**)(a1 + 16);
				v12 = v11[2];
				if (v12 && (v12 != 1 || *v11))
					LABEL_4:
				result = 1i64;
				else
					LABEL_5:
				result = 0i64;
			}
		}
		break;
	default:
		v7 = 0;
		v8 = *(_QWORD*)a2 == *(_QWORD*)a3;
	LABEL_15:
		LOBYTE(v7) = v8;
		result = v7;
		break;
	}
	return result;
}
// 14005E780: using guessed type __int64 __fastcall sub_14005E780(_DWORD, _DWORD, _DWORD, _DWORD, __int64);

