//----- (0000000140931B80) ----------------------------------------------------
_QWORD* __fastcall sub_140931B80(unsigned int* a1, __int16 a2, int a3, __int64 a4, int a5, __int64 a6)
{
	__int16 v8; // di
	int v11; // r9d
	int v12; // r8d
	int v13; // ebx
	int v14; // eax
	__int64 v15; // rax

	v8 = a2;
	if (*a1)
		return 0i64;
	v11 = a5;
	v12 = 512;
	v13 = (unsigned __int8)a2;
	if ((a3 & 0x200) == 0 || (a5 & 0x200) != 0)
	{
		v15 = a6;
	}
	else
	{
		switch ((char)a2)
		{
		case 2:
			v13 = 4;
			break;
		case 3:
			v13 = 5;
			break;
		case 4:
			v13 = 2;
			break;
		case 5:
			v13 = 3;
			break;
		case 6:
			v13 = 8;
			break;
		case 7:
			v13 = 9;
			break;
		case 8:
			v13 = 6;
			break;
		case 9:
			v13 = 7;
			break;
		default:
			break;
		}
		v14 = a3;
		a3 = a5;
		v11 = v14;
		v15 = a4;
		a4 = a6;
		v8 = v13 | a2 & 0x1100;
	}
	if (v13 > 1)
	{
		v12 = 1024;
		if (v13 <= 5)
			v12 = 2048;
	}
	if ((unsigned int)sub_140932A90(a1, v12 | v8 & 0x100 | 0x1Bu, 0, 0i64, a3, a4, v11, v15))
		return 0i64;
	else
		return sub_140932450((__int64)a1, v13 | v8 & 0x1000u);
}

