//----- (00000001407F5E0C) ----------------------------------------------------
__int64 __fastcall sub_1407F5E0C(char a1, double* a2, __int16 a3)
{
	unsigned int v3; // r14d
	int v4; // ebx
	__int64 v8; // rax
	double v9; // xmm0_8
	double v10; // xmm0_8
	BOOL v11; // ebp
	int v12; // ecx
	double v13; // xmm0_8
	int v14; // r8d
	unsigned int v15; // eax
	__int64 v16; // rdx
	unsigned int v17; // ecx
	int v19; // [rsp+70h] [rbp+8h] BYREF
	double v20; // [rsp+88h] [rbp+20h]

	v3 = 0;
	v4 = a1 & 0x1F;
	if ((a1 & 8) != 0 && (a3 & 0x80u) != 0)
	{
		sub_1407F662C(1);
		v4 &= ~8u;
		goto LABEL_46;
	}
	if ((a1 & 4) != 0 && (a3 & 0x200) != 0)
	{
		sub_1407F662C(4);
		v4 &= ~4u;
		goto LABEL_46;
	}
	if ((a1 & 1) != 0 && (a3 & 0x400) != 0)
	{
		sub_1407F662C(8);
		v8 = a3 & 0x6000;
		if ((a3 & 0x6000) != 0)
		{
			if (v8 != 0x2000)
			{
				if (v8 != 0x4000)
				{
					if (v8 != 24576)
					{
					LABEL_24:
						v4 &= ~1u;
						goto LABEL_46;
					}
					v9 = *(double*)&qword_140C10AA0;
					if (*a2 <= 0.0)
						goto LABEL_22;
				LABEL_23:
					*a2 = v9;
					goto LABEL_24;
				}
				if (*a2 <= 0.0)
				{
					v9 = *(double*)&qword_140C10AA0;
				LABEL_22:
					v9 = -v9;
					goto LABEL_23;
				}
			LABEL_20:
				v9 = *(double*)&qword_140C10A90;
				goto LABEL_23;
			}
			if (*a2 > 0.0)
			{
				v9 = *(double*)&qword_140C10AA0;
				goto LABEL_23;
			}
		}
		else if (*a2 > 0.0)
		{
			goto LABEL_20;
		}
		v9 = *(double*)&qword_140C10A90;
		goto LABEL_22;
	}
	if ((a1 & 2) != 0 && (a3 & 0x800) != 0)
	{
		v10 = *a2;
		v11 = (a1 & 0x10) != 0;
		if (*a2 == 0.0)
		{
			v11 = 1;
		}
		else
		{
			sub_1407F8264(v10, &v19);
			v12 = v19 - 1536;
			v20 = v10;
			if (v19 - 1536 >= -1074)
			{
				v14 = 0;
				LOBYTE(v14) = v10 < 0.0;
				HIWORD(v20) = BYTE6(v20) & 0xF | 0x10;
				if (v12 < -1021)
				{
					v15 = LODWORD(v20);
					v16 = (unsigned int)(-1021 - v12);
					v17 = HIDWORD(v20);
					do
					{
						if ((v15 & 1) != 0 && !v11)
							v11 = 1;
						v15 >>= 1;
						LODWORD(v20) = v15;
						if ((v17 & 1) != 0)
						{
							v15 |= 0x80000000;
							LODWORD(v20) = v15;
						}
						v17 >>= 1;
						--v16;
					} while (v16);
					HIDWORD(v20) = v17;
				}
				v13 = v20;
				if (v14)
					v13 = -v20;
			}
			else
			{
				v13 = v10 * 0.0;
				v11 = 1;
			}
			*a2 = v13;
		}
		if (v11)
			sub_1407F662C(16);
		v4 &= ~2u;
	}
LABEL_46:
	if ((a1 & 0x10) != 0 && (a3 & 0x1000) != 0)
	{
		sub_1407F662C(32);
		v4 &= ~0x10u;
	}
	LOBYTE(v3) = v4 == 0;
	return v3;
}
// 140963AE0: using guessed type __int64 qword_140963AE0;
// 140C10A90: using guessed type __int64 qword_140C10A90;
// 140C10AA0: using guessed type __int64 qword_140C10AA0;

