//----- (0000000140185040) ----------------------------------------------------
_QWORD* __fastcall sub_140185040(_QWORD* a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // rsi

	if (a1[11] || (result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD*))(a1[7] + 8i64))(a1 + 7), (_DWORD)result))
	{
		result = (_QWORD*)a1[21];
		v3 = (_QWORD*)result[2];
		if (v3 != result)
		{
			do
			{
				sub_140185160(v3[8], (__int64)a1);
				v4 = v3[3];
				if (v4)
				{
					v3 = (_QWORD*)v3[3];
					for (result = *(_QWORD**)(v4 + 16); result; result = (_QWORD*)result[2])
						v3 = result;
				}
				else
				{
					for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
						v3 = result;
					if ((_QWORD*)v3[3] != result)
						v3 = result;
				}
			} while (v3 != (_QWORD*)a1[21]);
		}
		v5 = (__int64)(a1 + 20);
		if (*(_QWORD*)(v5 + 16))
		{
			v6 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64);
			if (v6)
			{
				do
				{
					sub_140044CA0(v5, *(_QWORD**)(v6 + 24));
					v7 = *(_QWORD*)(v6 + 40);
					v8 = *(_QWORD*)(v6 + 16);
					if (v7)
						sub_14018B900(v7, 0);
					sub_14018B900(v6, 0);
					v6 = v8;
				} while (v8);
			}
			*(_QWORD*)(*(_QWORD*)(v5 + 8) + 16i64) = *(_QWORD*)(v5 + 8);
			*(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) = 0i64;
			result = *(_QWORD**)(v5 + 8);
			result[3] = result;
			*(_QWORD*)(v5 + 16) = 0i64;
		}
	}
	return result;
}

