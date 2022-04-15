//----- (000000014048C320) ----------------------------------------------------
__int64 __fastcall sub_14048C320(_QWORD* a1)
{
	int v2; // eax
	int v3; // eax
	__int64 v4; // rax
	double v5; // xmm0_8
	unsigned int v7; // ecx
	unsigned int v8; // edi
	unsigned int v9; // edi
	unsigned int i; // ebx

	v2 = sub_1406428D0((__int64)a1) - 1;
	if (v2 && (v3 = v2 - 2) != 0 && v3 != 2)
	{
		v4 = *a1;
		if (*(_DWORD*)(*a1 + 4i64) == 42)
		{
			v5 = sub_1407A2950(*(_DWORD*)(v4 + 40));
			if (*(float*)&v5 > 0.0)
			{
				v7 = -1;
				if ((int)*(float*)&v5 != -1)
					v7 = (int)*(float*)&v5;
				v8 = 0;
				if (v7)
					return v7;
				return v8;
			}
			else
			{
				return 0i64;
			}
		}
		else
		{
			return *(unsigned int*)(v4 + 44);
		}
	}
	else
	{
		v9 = 0;
		for (i = 0; i < 0x20; ++i)
		{
			if (sub_14048C100(a1, i))
				++v9;
		}
		return v9;
	}
}

