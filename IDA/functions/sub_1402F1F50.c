//----- (00000001402F1F50) ----------------------------------------------------
__int64 __fastcall sub_1402F1F50(__int64 a1, int a2, float a3, int a4)
{
	__int64 v4; // rbx
	float v8; // xmm7_4
	__int64 result; // rax
	float v10; // xmm0_4
	__int64 v11; // rbx
	float v12; // xmm7_4
	float v13; // xmm0_4
	__int64 v14; // rcx
	_QWORD* v15; // rcx
	__int64 v16; // rcx

	v4 = *(_QWORD*)(a1 + 8);
	v8 = 1.0;
	if (v4)
	{
		while (1)
		{
			result = sub_1402F1780(v4, a2, a3, a4);
			if ((int)result < 0)
				break;
			if (!*(_QWORD*)(v4 + 32) && *(float*)(v4 + 68) >= 1.0)
			{
				sub_1402F1720(v4);
				goto LABEL_8;
			}
			v10 = *(float*)(v4 + 68) * v8;
			v8 = v8 * (float)(1.0 - *(float*)(v4 + 68));
			*(float*)(v4 + 72) = v10;
			v4 = *(_QWORD*)(v4 + 96);
			if (!v4)
				goto LABEL_8;
		}
	}
	else
	{
	LABEL_8:
		v11 = *(_QWORD*)(a1 + 16);
		v12 = 1.0;
		if (v11)
		{
			while (1)
			{
				result = sub_1402F1B20(v11, a2, a3, a4);
				if ((int)result < 0)
					break;
				if (!*(_QWORD*)(v11 + 32) && *(float*)(v11 + 72) >= 1.0)
				{
					v14 = *(_QWORD*)(v11 + 88);
					if (v14)
						sub_1402F1AC0(v14);
					v15 = *(_QWORD**)(v11 + 80);
					if (v15)
						*v15 = *(_QWORD*)(v11 + 88);
					v16 = *(_QWORD*)(v11 + 88);
					if (v16)
						*(_QWORD*)(v16 + 80) = *(_QWORD*)(v11 + 80);
					*(_QWORD*)(v11 + 80) = 0i64;
					*(_QWORD*)(v11 + 88) = 0i64;
					sub_14018B900(v11, 0);
					return 0i64;
				}
				v13 = *(float*)(v11 + 72) * v12;
				v12 = v12 * (float)(1.0 - *(float*)(v11 + 72));
				*(float*)(v11 + 76) = v13;
				v11 = *(_QWORD*)(v11 + 88);
				if (!v11)
					return 0i64;
			}
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}

