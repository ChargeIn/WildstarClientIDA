//----- (00000001405C42C0) ----------------------------------------------------
__int64 __fastcall sub_1405C42C0(int a1)
{
	unsigned int v1; // ebx
	__int64 result; // rax
	unsigned int v3; // ebx
	__int64 v4; // rcx
	__int16* v5; // rax
	int v6; // eax
	int v7; // eax
	int v8; // eax
	int v9; // eax

	v1 = 0;
	switch (a1)
	{
	case 0:
		result = 359328i64;
		break;
	case 1:
		result = 359334i64;
		break;
	case 2:
		result = 359335i64;
		break;
	case 3:
		result = 359336i64;
		break;
	case 4:
		result = 359342i64;
		break;
	case 5:
		result = 359343i64;
		break;
	case 6:
		result = 309341i64;
		break;
	case 7:
		result = 359347i64;
		break;
	case 8:
		result = 359348i64;
		break;
	case 9:
	case 14:
		result = 359337i64;
		break;
	case 10:
		result = 359356i64;
		break;
	case 11:
		v3 = 359357;
		if ((unsigned int)sub_1405BED30(qword_140C65B98, 16))
			v3 = 309385;
		result = v3;
		break;
	case 12:
		if ((unsigned int)sub_1405BED30(qword_140C65B98, 16))
		{
			v5 = sub_14034BDD0(v4, 359361);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v5, 0, 0i64);
			result = 309385i64;
		}
		else
		{
			result = 359357i64;
		}
		break;
	case 15:
		result = 359359i64;
		break;
	case 18:
		result = 406770i64;
		break;
	case 19:
		result = 406771i64;
		break;
	case 25:
		result = 423963i64;
		break;
	case 29:
		v6 = *(_DWORD*)(qword_140C65B98 + 268);
		if (v6 && (unsigned int)(v6 - 3) > 4)
			result = 496197i64;
		else
			result = 442171i64;
		break;
	case 32:
		v7 = *(_DWORD*)(qword_140C65B98 + 268);
		if (v7 && (unsigned int)(v7 - 3) > 4)
			result = 496200i64;
		else
			result = 441681i64;
		break;
	case 33:
		v8 = *(_DWORD*)(qword_140C65B98 + 268);
		if (v8 && (unsigned int)(v8 - 3) > 4)
			result = 496205i64;
		else
			result = 442156i64;
		break;
	case 34:
		result = 443765i64;
		break;
	case 35:
		v9 = *(_DWORD*)(qword_140C65B98 + 268);
		if (v9 && (unsigned int)(v9 - 3) > 4)
			result = 496206i64;
		else
			result = 447020i64;
		break;
	case 38:
		LOBYTE(v1) = (unsigned int)sub_1405BED30(qword_140C65B98, 16) != 0;
		result = v1 + 473831;
		break;
	case 40:
		result = 623374i64;
		break;
	case 41:
		result = 623372i64;
		break;
	case 42:
		result = 623447i64;
		break;
	case 43:
		result = 623446i64;
		break;
	case 44:
		result = 626774i64;
		break;
	case 45:
		result = 626775i64;
		break;
	case 46:
		result = 634204i64;
		break;
	case 47:
		result = 760535i64;
		break;
	case 48:
		result = 763514i64;
		break;
	case 49:
		result = 766779i64;
		break;
	case 51:
		v1 = 767763;
		goto LABEL_52;
	default:
	LABEL_52:
		result = v1;
		break;
	}
	return result;
}
// 1405C43C5: variable 'v4' is possibly undefined
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65B98: using guessed type __int64 qword_140C65B98;

