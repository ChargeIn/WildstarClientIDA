//----- (000000014085BBC0) ----------------------------------------------------
__int64 __fastcall sub_14085BBC0(_QWORD* a1, __int64 a2, int a3, int a4)
{
	__int64 v4; // r11
	unsigned __int8* v7; // r11
	unsigned int v8; // r9d
	unsigned int i; // r10d
	__int64 v10; // rcx
	__int64 result; // rax
	float* v12; // rcx

	v4 = a1[5];
	if (v4)
	{
		v7 = *(unsigned __int8**)(v4 + 24);
		if (v7)
		{
			v8 = *v7;
			for (i = 0; ; ++i)
			{
				v10 = i + 1;
				if (v7[v10] == (_BYTE)a2)
					break;
				if ((unsigned int)v10 >= v8)
					return result;
			}
			result = (__int64)&v7[(v8 + 4) & 0xFFFFFFFC];
			v12 = (float*)(result + 16i64 * i);
			if (v12)
			{
				if (*v12 != 0.0)
					return (*(__int64(__fastcall**)(_QWORD*, __int64, _QWORD, _QWORD, _DWORD, int, int))(*a1 + 368i64))(
						a1,
						a2,
						0i64,
						0i64,
						0,
						a3,
						a4);
			}
		}
	}
	return result;
}

