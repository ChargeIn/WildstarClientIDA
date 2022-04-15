//----- (0000000140172F70) ----------------------------------------------------
__int64 __fastcall sub_140172F70(_QWORD* a1)
{
	int* v2; // rax
	unsigned __int64 v3; // rdx
	int* v4; // r14
	unsigned __int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 result; // rax

	a1[2] = 8i64;
	v2 = sub_14018B280(64i64, 0);
	v3 = a1[2] - 1i64;
	a1[1] = v2;
	v4 = &v2[2 * (v3 >> 1)];
	v5 = (unsigned __int64)v4;
	if (v4 < v4 + 2)
	{
		do
		{
			v5 += 8i64;
			*(_QWORD*)(v5 - 8) = sub_14018B280(496i64, 0);
		} while (v5 < (unsigned __int64)(v4 + 2));
	}
	a1[6] = v4;
	v6 = *(_QWORD*)v4;
	a1[4] = *(_QWORD*)v4;
	a1[5] = v6 + 496;
	a1[10] = v4;
	v7 = *(_QWORD*)v4;
	a1[8] = *(_QWORD*)v4;
	a1[9] = v7 + 496;
	a1[3] = a1[4];
	result = a1[8];
	a1[7] = result;
	return result;
}

