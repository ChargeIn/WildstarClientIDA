//----- (0000000140137F70) ----------------------------------------------------
_QWORD* __fastcall sub_140137F70(_QWORD* a1)
{
	unsigned int v1; // ebx
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rdi
	_QWORD* result; // rax
	_QWORD* v7; // rbx
	void(__fastcall * **v8)(_QWORD, __int64); // rcx
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rdi

	v1 = 0;
	if (a1[3])
	{
		v3 = 0i64;
		do
		{
			v4 = a1[2];
			v5 = *(_QWORD*)(v4 + 8 * v3);
			if (v5)
			{
				sub_1401356F0(*(_QWORD**)(v4 + 8 * v3), v3);
				sub_14018B900(v5, 0);
			}
			v3 = ++v1;
		} while ((unsigned __int64)v1 < a1[3]);
	}
	a1[3] = 0i64;
	result = (_QWORD*)a1[6];
	v7 = (_QWORD*)result[2];
	if (v7 != result)
	{
		do
		{
			v8 = (void(__fastcall***)(_QWORD, __int64))v7[8];
			if (v8)
				(**v8)(v8, 1i64);
			v9 = v7[3];
			if (v9)
			{
				v7 = (_QWORD*)v7[3];
				for (result = *(_QWORD**)(v9 + 16); result; result = (_QWORD*)result[2])
					v7 = result;
			}
			else
			{
				for (result = (_QWORD*)v7[1]; v7 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v7 = result;
				if ((_QWORD*)v7[3] != result)
					v7 = result;
			}
		} while (v7 != (_QWORD*)a1[6]);
	}
	if (a1[7])
	{
		v10 = *(_QWORD*)(a1[6] + 8i64);
		if (v10)
		{
			do
			{
				sub_140044CA0((__int64)(a1 + 5), *(_QWORD**)(v10 + 24));
				v11 = *(_QWORD*)(v10 + 40);
				v12 = *(_QWORD*)(v10 + 16);
				if (v11)
					sub_14018B900(v11, 0);
				sub_14018B900(v10, 0);
				v10 = v12;
			} while (v12);
		}
		*(_QWORD*)(a1[6] + 16i64) = a1[6];
		*(_QWORD*)(a1[6] + 8i64) = 0i64;
		result = (_QWORD*)a1[6];
		result[3] = result;
		a1[7] = 0i64;
	}
	return result;
}

