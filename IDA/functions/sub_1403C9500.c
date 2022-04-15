//----- (00000001403C9500) ----------------------------------------------------
__int64 __fastcall sub_1403C9500(__int64 a1, unsigned int a2, int a3, int a4)
{
	int v5; // ebx
	__int64 v6; // rax
	unsigned int v7; // r10d
	int v8; // r11d
	unsigned int v9; // r8d
	int v10; // edx

	switch (a4)
	{
	case 0:
	case 1:
	case 4:
	case 8:
	case 9:
		v5 = 256;
		goto LABEL_5;
	case 6:
		v5 = 512;
		goto LABEL_5;
	case 7:
		v5 = 1024;
	LABEL_5:
		v6 = sub_14043ED60(a1, a2);
		v9 = v7 + 1;
		if (!v6)
			goto LABEL_10;
		break;
	default:
		return 1i64;
	}
	while (1)
	{
		v10 = *(_DWORD*)(*(_QWORD*)(v6 + 8) + 28i64);
		if ((v10 & v8) != 0)
			break;
		v6 = *(_QWORD*)(v6 + 16);
		if ((v10 & v5) != 0)
			v7 = v9;
		if (!v6)
		{
		LABEL_10:
			if (!a3 || v7)
				return v9;
			return 0i64;
		}
	}
	return 0i64;
}
// 1403C955B: variable 'v7' is possibly undefined
// 1403C956B: variable 'v8' is possibly undefined

