//----- (0000000140566D40) ----------------------------------------------------
__int64 __fastcall sub_140566D40(__int64 a1, __int64 a2, float* a3)
{
	float* v3; // rbx
	__int64 v6; // r14
	__int64 v7; // rsi
	float v8; // xmm6_4
	double v9; // xmm0_8
	float v10; // xmm6_4

	v3 = a3;
	if (!a1)
		return 0i64;
	v6 = a2 - (_QWORD)a3;
	v7 = 4i64;
	v8 = 0.0;
	do
	{
		switch (*(_DWORD*)((char*)v3 + v6))
		{
		case 1:
			v9 = sub_140466A70(a1, 0);
			goto LABEL_13;
		case 2:
			v9 = sub_140466A70(a1, 1u);
			goto LABEL_13;
		case 3:
			v9 = sub_140466A70(a1, 2u);
			goto LABEL_13;
		case 4:
			v9 = sub_140466A70(a1, 3u);
			goto LABEL_13;
		case 5:
			v9 = sub_140466A70(a1, 4u);
			goto LABEL_13;
		case 0xB:
			v9 = sub_140466A70(a1, 0x28u);
			goto LABEL_13;
		case 0xC:
			LODWORD(v9) = sub_140462930(a1).m128_u32[0];
			goto LABEL_13;
		case 0xD:
			LODWORD(v9) = sub_140462980(a1).m128_u32[0];
		LABEL_13:
			v8 = v8 + (float)(*(float*)&v9 * *v3);
			break;
		default:
			break;
		}
		++v3;
		--v7;
	} while (v7);
	if (v8 >= 0.0)
		v10 = v8 + 0.5;
	else
		v10 = v8 - 0.5;
	return (unsigned int)(int)v10;
}

