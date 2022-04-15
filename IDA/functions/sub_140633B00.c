//----- (0000000140633B00) ----------------------------------------------------
_QWORD* __fastcall sub_140633B00(__int64 a1)
{
	__int64 v1; // rbx
	unsigned int i; // ebx
	_QWORD* v4; // rcx
	_QWORD* result; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rsi
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rsi
	__int64 v12; // rbx

	v1 = *(_QWORD*)(a1 + 31400);
	if (v1)
	{
		sub_140019490(*(_QWORD**)(a1 + 31400));
		sub_14018B900(*(_QWORD*)(v1 + 16), 0);
		*(_QWORD*)(v1 + 16) = 0i64;
		sub_14018B900(v1, 0);
	}
	*(_QWORD*)(a1 + 31400) = 0i64;
	if (*(_QWORD*)(a1 + 31392))
	{
		for (i = 0; i < *(_DWORD*)(a1 + 31384); ++i)
		{
			v4 = *(_QWORD**)(*(_QWORD*)(a1 + 31392) + 8i64 * i);
			if (v4)
				sub_140633300(v4);
		}
		sub_14018B900(*(_QWORD*)(a1 + 31392), 0);
		*(_QWORD*)(a1 + 31392) = 0i64;
	}
	result = *(_QWORD**)(a1 + 31424);
	v6 = (_QWORD*)result[2];
	if (v6 != result)
	{
		do
		{
			v7 = v6[5];
			v8 = *(_QWORD*)(v7 + 8);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v7 + 8) = 0i64;
			}
			sub_14018B900(v6[5], 0);
			v9 = v6[3];
			if (v9)
			{
				v6 = (_QWORD*)v6[3];
				for (result = *(_QWORD**)(v9 + 16); result; result = (_QWORD*)result[2])
					v6 = result;
			}
			else
			{
				for (result = (_QWORD*)v6[1]; v6 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v6 = result;
				if ((_QWORD*)v6[3] != result)
					v6 = result;
			}
		} while (v6 != *(_QWORD**)(a1 + 31424));
	}
	v10 = a1 + 31416;
	if (*(_QWORD*)(v10 + 16))
	{
		v11 = *(_QWORD*)(*(_QWORD*)(v10 + 8) + 8i64);
		if (v11)
		{
			do
			{
				sub_1400083B0(v10, *(_QWORD*)(v11 + 24));
				v12 = *(_QWORD*)(v11 + 16);
				sub_14018B900(v11, 0);
				v11 = v12;
			} while (v12);
		}
		*(_QWORD*)(*(_QWORD*)(v10 + 8) + 16i64) = *(_QWORD*)(v10 + 8);
		*(_QWORD*)(*(_QWORD*)(v10 + 8) + 8i64) = 0i64;
		result = *(_QWORD**)(v10 + 8);
		result[3] = result;
		*(_QWORD*)(v10 + 16) = 0i64;
	}
	return result;
}

