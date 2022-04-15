//----- (000000014078FE80) ----------------------------------------------------
__int64 __fastcall sub_14078FE80(int a1, unsigned int a2)
{
	unsigned int v4; // esi
	unsigned int v5; // ebx
	__int64 result; // rax

	v4 = 0;
	switch ((unsigned int)sub_1407F69AC(a2))
	{
	case 'a':
		v5 = sub_1407DE778(a1);
		goto LABEL_12;
	case 'c':
		v5 = sub_1407DE7F8(a1);
		goto LABEL_12;
	case 'd':
		v5 = sub_1407DE874(a1);
		goto LABEL_12;
	case 'l':
		v5 = sub_1407DE8F0(a1);
		goto LABEL_12;
	case 'p':
		v5 = sub_1407DE96C(a1);
		goto LABEL_12;
	case 's':
		v5 = sub_1407DE9E8(a1);
		goto LABEL_12;
	case 'u':
		v5 = sub_1407DEA64(a1);
		goto LABEL_12;
	case 'w':
		v5 = sub_1407DE6F8(a1);
		goto LABEL_12;
	case 'x':
		v5 = sub_1407DEAE0(a1);
		goto LABEL_12;
	case 'z':
		v5 = a1 == 0;
	LABEL_12:
		if (!(unsigned int)sub_1407DE8F0(a2))
		{
			LOBYTE(v4) = v5 == 0;
			v5 = v4;
		}
		result = v5;
		break;
	default:
		result = a2 == a1;
		break;
	}
	return result;
}

